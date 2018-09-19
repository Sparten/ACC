// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "SDK.hpp"
#include <fstream>
#include <iostream>
#include "_console.h"
#include "SharedMemoryWriter.h"
using namespace SDK;

typedef void(__stdcall *Tick_t)(AAcRaceGameMode*, double);
Tick_t pTick = nullptr;
intptr_t* tickAddress = nullptr;

intptr_t NamesAddress = (intptr_t)GetModuleHandle(NULL) + 0x329E250;
TNameEntryArray* FName::GNames  = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
intptr_t ObjectsAddress = (intptr_t)GetModuleHandle(NULL) + 0x2F312A0;
FUObjectArray* UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
intptr_t GWorldAddress = (intptr_t)GetModuleHandle(NULL) + 0x33A1D20;
UWorld *GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);

char dlldir[512] = "";
HANDLE monitorThread = nullptr;
DWORD exitCode = 0;
console_window c;
//SharedMemeoryWriter <ACCSharedMemoryData> writer("Global\\ACC");
volatile bool unhookIt = false;
void __cdecl add_log(const char *fmt, ...)
{

	if (!fmt || !strlen(fmt))
	{
		return;
	}
	va_list va_alist;
	char logbuf[20000] = { 0 };
	va_start(va_alist, fmt);
	_vsnprintf_s(logbuf + strlen(logbuf), sizeof(logbuf) - strlen(logbuf), _TRUNCATE, fmt, va_alist);
	va_end(va_alist);
	std::ofstream ofile;
	char outDir[1024] = "";
	strcpy(outDir, dlldir);
	strcat(outDir, "log.txt");	
	ofile.open(outDir, std::ios::app);
	if (ofile)
	{
		ofile << logbuf << std::endl;
		ofile.close();
	}
	return;
}
void __stdcall Unhook()
{
	DWORD newProtect = PAGE_READWRITE;
	DWORD oldProtect = 0;
	VirtualProtect(tickAddress, sizeof(intptr_t), newProtect, &oldProtect);
	*tickAddress = reinterpret_cast<intptr_t>(pTick);
	VirtualProtect(tickAddress, sizeof(intptr_t), oldProtect, &newProtect);
}
void __stdcall Tick_Detour(AAcRaceGameMode* p, double time)
{
	GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
	AAcRaceGameState *raceGameState = reinterpret_cast<AAcRaceGameState*>(GWorld->GameState);
	AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(GWorld->AuthorityGameMode);	
	ATrackAvatar* trackAvatar = reinterpret_cast<ATrackAvatar*>(raceGameMode->TrackAvatar);
	ACarAvatar* playerCarCarAvatar = raceGameMode->GetPlayerCarAvatar();
	APhysicsAvatar* physicsAvatar = raceGameMode->PhysicsAvatar;
	//add_log("sessionInfo %i", sessionInfo->type);
	add_log("sessionInfo %i", raceGameMode->raceManager.get()->currentSessionType);
	//add_log("sessionInfo %i", raceGameMode->raceManager->entryList);

	//ERaceSessionPhase sessionPhase = playerController->MainGui->GetCurrentSessionPhase();
	//float sessionTime = playerController->MainGui->GetCurrentSessionTime();
	//float sessionStartTime = playerController->MainGui->GetSessionStartTime();
	//float sessionEndTime = playerController->MainGui->GetSessionEndTime();
	for (int i = 0; i < GWorld->PawnList.Num(); i++)
	{
		ACarAvatar* car = (ACarAvatar*)GWorld->PawnList[i].Get();
		FVector vec;
		USceneComponent* screen = car->RootComponent;
		vec = screen->K2_GetComponentLocation();
		float distanceRoundTrack = trackAvatar->GetFastLaneDistanceToPoint(vec);
		FDriverInfo* driverInfo = &car->DriverInfo;
		FCarInfo* carInfo = &car->CarEntryInfo;
		UAcCarTimingServices* timings = car->CarTimingServices;
		std::string driverName = "";
		if (driverInfo->FirstName.IsValid())
		{
			driverName = driverInfo->FirstName.ToString() + " ";
		}
		if (driverInfo->SecondName.IsValid())
		{
			driverName += driverInfo->SecondName.ToString() + " ";
		}
		if (driverInfo->LastName.IsValid())
		{
			driverName += driverInfo->LastName.ToString().c_str();
		}
		int lapcount = timings->GetLapCount();
		int currentlaptime = timings->GetCurrentLapTime();
	}
	//if we are runnin in AAcRaceGameMode we want to unhook here so we dont risk unloading the dll in the middle of the hooked function while we are still collecting data
	//Bad things will happen if we do.
	if (unhookIt)
	{
		Unhook();
		unhookIt = false;
	}
	return pTick(p, time);
}

bool doOnce = false;

DWORD __stdcall InitializeHook(LPVOID)
{	
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
	//add_log("%llx", offsetof(APhysicsAvatar, currentSession));
	for (;;)
	{
		GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
		if (GWorld == nullptr || IsBadReadPtr((const void*)GWorld, sizeof(UWorld)))
		{
			continue;
		}
		if (GWorld->AuthorityGameMode == nullptr)
		{
			continue;
		}
		if (!GWorld->AuthorityGameMode->IsA(AAcRaceGameMode::StaticClass()))
		{
			// If not in a AAcRaceGameMode state its safe to unhook the function here as its not called.
			if (unhookIt && doOnce)
			{
				Unhook();
				unhookIt = false;
			}
			continue;
		}
		AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(GWorld->AuthorityGameMode);
		//Sleep(1000);
		//Hook AAcRaceGameMode::Ticks as we need to be in a game thread to run our updated to avoid being out of thread conntext.
		if (!doOnce)
		{
			tickAddress = GetVFunctionTableAddress(raceGameMode, 131);
			DWORD newProtect = PAGE_READWRITE;
			DWORD oldProtect = 0;
			VirtualProtect(tickAddress, sizeof(intptr_t), newProtect, &oldProtect);
			pTick = reinterpret_cast<Tick_t>(*tickAddress);
			*tickAddress = (intptr_t)&Tick_Detour;
			VirtualProtect(tickAddress, sizeof(intptr_t), oldProtect, &newProtect);
			doOnce = true;
			add_log("Hooked AAcRaceGameMode::Ticks");
		}
		/*				
		FCircuitInfo circuit;
		TArray<FName> names;
		instance->InfoManager->GetInfoList(EInfoType::EInfoType__Circuit, &names);*/

		//ACCSharedMemoryData sharedMemoryData;

		/*for (int i = 0; i < names.Num(); i++)
		{
			if (instance->InfoManager->GetCircuitInfo(names[i], &circuit))
			{
				add_log("circuit: %s length: %i", circuit.CircuitName.ToString().c_str(), circuit.Length);
			}
		}*/

		/*
		add_log("%s %llx", GWorld->GetFullName().c_str(), GWorld);
		add_log("%llx", FName::GNames);
		add_log("%llx", UObject::GObjects);
		*/
	Sleep(17);
	}		
	return 0;
}

void __stdcall WaitForUnHook()
{
	unhookIt = true;
	while (unhookIt)
	{
		Sleep(50);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:

		DisableThreadLibraryCalls(hModule);

		GetModuleFileNameA(hModule, dlldir, 512);

		for (size_t i = strlen(dlldir); i > 0; i--) { if (dlldir[i] == '\\') { dlldir[i + 1] = 0; break; } }

		monitorThread = CreateThread(NULL, 0, InitializeHook, NULL, 0, NULL);

		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		WaitForUnHook();
		GetExitCodeThread(monitorThread, &exitCode);
		TerminateThread(monitorThread, exitCode);
		break;
	}
	return TRUE;
}

