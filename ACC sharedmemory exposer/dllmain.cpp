// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "SDK.hpp"
#include <fstream>
#include <iostream>
#include <locale>
#include <codecvt>
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
SharedMemeoryWriter <ACCSharedMemoryData> writer("Local\\CrewChief_ACC");
volatile bool unhookIt = false;
std::string ws2s(const std::wstring& wstr)
{
	using convert_typeX = std::codecvt_utf8<wchar_t>;
	std::wstring_convert<convert_typeX, wchar_t> converterX;

	return converterX.to_bytes(wstr);
}
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
float CheckForNaN(float val, float divideBy)
{
	float out = 0;
	if (fabs(val) < 1e-10)
	{
		return out;
	}
	out = val / divideBy;
	return out;
}

ACCSharedMemoryData *sharedData = (ACCSharedMemoryData*)malloc(sizeof(ACCSharedMemoryData));;
void __stdcall Tick_Detour(AAcRaceGameMode* p, double time)
{
	GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
	AAcRaceGameState *raceGameState = reinterpret_cast<AAcRaceGameState*>(GWorld->GameState);
	AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(GWorld->AuthorityGameMode);	
	ATrackAvatar* trackAvatar = reinterpret_cast<ATrackAvatar*>(raceGameMode->TrackAvatar);
	
	ACarAvatar* playerCarAvatar = raceGameMode->GetPlayerCarAvatar();
	
	sharedData->update = time;

	float playerSpeedMS = playerCarAvatar->GetSpeedKMH() * 0.277777778f;	
	APhysicsAvatar* physicsAvatar = raceGameMode->PhysicsAvatar;
		
	//add_log("time %g", time);
	USceneComponent* playerScreen = playerCarAvatar->RootComponent;
	FVector playerLocation = playerScreen->K2_GetComponentLocation();
	FRotator playerRotation = playerScreen->K2_GetComponentRotation();
	sharedData->playerDriver.speed = playerSpeedMS;
	sharedData->playerDriver.location.x = playerLocation.X * .01f;
	sharedData->playerDriver.location.y = playerLocation.Y * .01f;
	sharedData->playerDriver.location.z = playerLocation.Z * .01f;
	sharedData->playerDriver.rotation.pitch = playerRotation.Pitch;
	sharedData->playerDriver.rotation.yaw = playerRotation.Yaw;
	sharedData->playerDriver.rotation.roll = playerRotation.Roll;

	
	//ksRacing::AC2Client* client = gameInstance->ClientAvatar->client;
	//add_log(ws2s(client->driverInfo.firstName).c_str());
	
	//add_log("sessionInfo %i", raceGameMode->raceManager.get()->currentSessionType);
	int playerCarIndex = 0;
	/*if (raceGameMode->raceManager->entryList.get() != nullptr)
	{
		for each (auto var in raceGameMode->raceManager->entryList->carMap)
		{
			if (var.second.isPlayerCar)
			{
				playerCarIndex = var.first;
				add_log(ws2s(raceGameMode->raceManager->entryList->driverMap[playerCarIndex].driverInfo.firstName).c_str());
			}
		}

		for each (auto var in raceGameMode->raceManager->entryList->driverMap)
		{			
			if (var.second.isDriving)
			{
				add_log(ws2s(var.second.driverInfo.firstName).c_str());
			}
			
		}
	}*/
	if (raceGameMode->raceManager->entryList.get() != nullptr)
	{		
		for each (auto var in raceGameMode->raceManager->carStateServices->liveCarStates)
		{
			//add_log("distance round track %f", var.second->splineDistance);
		}
	}
	
	sharedData->opponentDriverCount = GWorld->PawnList.Num();
	for (int i = 0; i < GWorld->PawnList.Num(); i++)
	{
		ACarAvatar* car = (ACarAvatar*)GWorld->PawnList[i].Get();
		//car->
		FVector vec;
		USceneComponent* screen = car->RootComponent;
		FVector location = screen->K2_GetComponentLocation();
		FRotator rotation = screen->K2_GetComponentRotation();
		float speedMS = car->GetSpeedKMH() * 0.277777778f;
		sharedData->opponentDrivers[i].speed = speedMS;
		sharedData->opponentDrivers[i].location.x = location.X * .01f;
		sharedData->opponentDrivers[i].location.y = location.Y * .01f;
		sharedData->opponentDrivers[i].location.z = location.Z * .01f;
		sharedData->opponentDrivers[i].rotation.pitch = rotation.Pitch;
		sharedData->opponentDrivers[i].rotation.yaw = rotation.Yaw;
		sharedData->opponentDrivers[i].rotation.roll = rotation.Roll;


		float distanceRoundTrack = trackAvatar->GetFastLaneDistanceToPoint(vec);
		FDriverInfo driverInfo = car->DriverInfo;
		FCarInfo carInfo = car->CarEntryInfo;
		UAcCarTimingServices* timings = car->CarTimingServices;
		std::string driverName = "";
		if (driverInfo.FirstName.IsValid())
		{
			driverName = driverInfo.FirstName.ToString() + " ";
		}
		if (driverInfo.SecondName.IsValid())
		{
			driverName += driverInfo.SecondName.ToString() + " ";
		}
		if (driverInfo.LastName.IsValid())
		{
			driverName += driverInfo.LastName.ToString().c_str();
		}
		//add_log(carInfo.CompetitorName.ToString().c_str());
		int lapcount = timings->GetLapCount();
		int currentlaptime = timings->GetCurrentLapTime();
	}
	writer.updateSharedMemory(sharedData);
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
	char unloadDir[1024] = "";
	strcpy(unloadDir, dlldir);
	strcat(unloadDir, "DllUnload.dll");
	LoadLibraryA(unloadDir);
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
	//add_log("%llX", offsetof(ksRacing::AC2Client, driverInfo));
	//add_log("%llX", sizeof(ksRacing::RaceEventType));
	
	for (;;)
	{
		//add_log(writer.name.c_str());
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
				return 0;
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
	Sleep(200);
	}		
	return 0;
}

void __stdcall WaitForUnHook()
{
	unhookIt = true;
	while (unhookIt)
	{
		Sleep(500);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:

		DisableThreadLibraryCalls(hModule);

		GetModuleFileName(hModule, dlldir, 512);

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

