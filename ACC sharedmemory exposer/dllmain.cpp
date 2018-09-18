// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "SDK.hpp"
#include <fstream>
#include <iostream>
#include "_console.h"
#include "SharedMemoryWriter.h"
using namespace SDK;

intptr_t NamesAddress = (intptr_t)GetModuleHandle(NULL) + 0x329E250;
TNameEntryArray* FName::GNames  = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
intptr_t ObjectsAddress = (intptr_t)GetModuleHandle(NULL) + 0x2F312A0;
FUObjectArray* UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
intptr_t GWorldAddress = (intptr_t)GetModuleHandle(NULL) + 0x33A1D20;
UWorld *GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);

char dlldir[512] = "";
HANDLE monitorThread = nullptr;
DWORD exitCode = 0;

SharedMemeoryWriter <ACCSharedMemoryData> writer("Global\\ACC");
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
typedef void(__stdcall *Tick_t)(AAcRaceGameMode*, double);
Tick_t pTick = nullptr;
intptr_t* tickAddress = nullptr;
void __stdcall Tick_Detour(AAcRaceGameMode* p, double time)
{
	AAcRaceGameState *raceGameState = reinterpret_cast<AAcRaceGameState*>(GWorld->GameState);
	AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(GWorld->AuthorityGameMode);
	ATrackAvatar* trackAvatar = reinterpret_cast<ATrackAvatar*>(raceGameMode->TrackAvatar);
	ACarAvatar* playerCarCarAvatar = raceGameMode->GetPlayerCarAvatar();
	for (int i = 0; i < GWorld->PawnList.Num(); i++)
	{
		ACarAvatar* car = (ACarAvatar*)GWorld->PawnList[i].Get();

		switch (car->GetControllerType())
		{
		case EControllerType::EControllerType__Player:
		{
			break;
		}
		case EControllerType::EControllerType__Client:
		{
			break;
		}
		case EControllerType::EControllerType__Ai:
		{
			break;
		}
		}

		FVector vec;
		USceneComponent* screen = car->RootComponent;
		vec = screen->K2_GetComponentLocation();
		float distanceRoundTrack = trackAvatar->GetFastLaneDistanceToPoint(vec);
		//add_log("distanceRoundTrack %f", distanceRoundTrack / 100);

		//car->GetTargetLocation(&vec, nullptr);
		//add_log("Location x %f y %f z %f", vec.X, vec.Y, vec.Z);

		//add_log("Car: %i %s", i, car->carName.ToString().c_str());
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
	return pTick(p, time);
}
bool doOnce = false;
DWORD __stdcall InitializeHook(LPVOID)
{	
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
	//add_log("%llx", offsetof(ACarAvatar, physicsAvatar));
	for (;;)
	{
		GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
		if (GWorld->AuthorityGameMode == nullptr)
		{
			continue;
		}
		UAcGameInstance* instance = reinterpret_cast<UAcGameInstance*>(GWorld->OwningGameInstance);
		if (GWorld->AuthorityGameMode == nullptr || !GWorld->AuthorityGameMode->IsA(AAcRaceGameMode::StaticClass()))
		{
			continue;
		}			
		AAcRaceGameMode* raceGameMode = (AAcRaceGameMode*)GWorld->AuthorityGameMode;
	
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
		}

		//add_log("AAcRaceGameState::Ticks %llx", GetVFunction(raceGameState, 130));
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
void __stdcall unhook()
{
	DWORD newProtect = PAGE_READWRITE;
	DWORD oldProtect = 0;
	VirtualProtect(tickAddress, sizeof(intptr_t), newProtect, &oldProtect);
	pTick = reinterpret_cast<Tick_t>(*tickAddress);
	*tickAddress = reinterpret_cast<intptr_t>(pTick);
	VirtualProtect(tickAddress, sizeof(intptr_t), oldProtect, &newProtect);
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
		unhook();
		GetExitCodeThread(monitorThread, &exitCode);
		TerminateThread(monitorThread, exitCode);
		break;
	}
	return TRUE;
}

