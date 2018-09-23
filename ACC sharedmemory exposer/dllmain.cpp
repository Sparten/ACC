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
//console_window c;
std::vector<FCircuitInfo> savedCircuits;
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
ACCSharedMemoryData *sharedData = (ACCSharedMemoryData*)malloc(sizeof(ACCSharedMemoryData));;
double lasttime = 0;
bool set = false;
void __stdcall Tick_Detour(AAcRaceGameMode* p, double time)
{
	
	//limit update rate to 60 times a sec
	if (p->raceManager->physicsTime >= lasttime + 16.777777 || p->raceManager->physicsTime <= lasttime)
	{
		AAcRaceGameMode* raceGameMode = p;
		ksRacing::RaceManager* raceManager = p->raceManager.get();
		lasttime = raceManager->physicsTime;		
		char dblToFl[32];
		std::string::size_type sz;
		sprintf_s(dblToFl, _TRUNCATE, "%f", sharedData->update);
		sharedData->update = std::stof(dblToFl, &sz);
		GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
		AAcRaceGameState *raceGameState = reinterpret_cast<AAcRaceGameState*>(GWorld->GameState);
		
		ATrackAvatar* trackAvatar = reinterpret_cast<ATrackAvatar*>(raceGameMode->TrackAvatar);
		if (!set)
		{
			set = true;
			trackAvatar->GetFastLane()->GetSpline()->SetDrawDebug(true);
		}
			
		//collect all our session data
		sharedData->sessionData.areCarsInitializated = raceManager->areCarsInitializated;
		sharedData->sessionData.currentEventIndex = raceManager->currentEventIndex;
		sharedData->sessionData.currentSessionIndex = raceManager->currentSessionIndex;
		sharedData->sessionData.currentSessionPhase = raceManager->currentSessionPhase;
		sharedData->sessionData.currentSessionType = raceManager->currentSessionType;
		sharedData->sessionData.isClient = raceManager->isClient;
		sharedData->sessionData.isEventInitializated = raceManager->isEventInitializated;
		sharedData->sessionData.isServer = raceManager->isServer;
		sharedData->sessionData.isSessionInitializated = raceManager->isSessionInitializated;
		sharedData->sessionData.isTimeStopped = raceManager->isTimeStopped;	

		sprintf_s(dblToFl, _TRUNCATE, "%.04Lf", raceManager->physicsTime);	
		sharedData->sessionData.physicsTime = std::stof(dblToFl, &sz);

		sprintf_s(dblToFl, _TRUNCATE, "%.04Lf", raceManager->sessionStartTimeStamp);
		sharedData->sessionData.sessionStartTimeStamp = std::stof(dblToFl, &sz);

		sprintf_s(dblToFl, _TRUNCATE, "%.04Lf", raceManager->receivedServerTime);
		sharedData->sessionData.receivedServerTime = std::stof(dblToFl, &sz);

		sprintf_s(dblToFl, _TRUNCATE, "%.04Lf", raceManager->serverTimeOffset);
		sharedData->sessionData.serverTimeOffset = std::stof(dblToFl, &sz);

		sharedData->sessionData.sessionStartTime = raceManager->sessionStartTime;
		sharedData->sessionData.sessionEndTime = raceManager->sessionEndTime;

		//track and weather
		strcpy_s(sharedData->track.name, _TRUNCATE, ws2s(raceManager->trackServices->trackName).c_str());
		sharedData->track.id = raceManager->trackServices->trackId;
		sharedData->track.sectors = raceManager->sectorCount;
		sharedData->track.weatherState.ambientTemperature = raceManager->weatherServices->status.ambientTemperature;
		sharedData->track.weatherState.cloudLevel = raceManager->weatherServices->status.cloudLevel;
		sharedData->track.weatherState.rainLevel = raceManager->weatherServices->status.rainLevel;
		sharedData->track.weatherState.roadTemperature = raceManager->weatherServices->status.roadTemperature;
		sharedData->track.weatherState.wetLevel = raceManager->weatherServices->status.wetLevel;
		sharedData->track.weatherState.windDirection = raceManager->weatherServices->status.windDirection;
		sharedData->track.weatherState.windSpeed = raceManager->weatherServices->status.windSpeed;
		sharedData->track.length = trackAvatar->GetFastLane()->GetSpline()->GetSplineLength() * .01f;
		for each (auto var in savedCircuits)
		{
			if (var.CircuitId == raceManager->trackServices->trackId)
			{
				sharedData->track.corners = var.Corners;
				sharedData->track.isPolesitterOnLeft = var.bIsPolesitterOnLeft;
			}
		}



		//ksRacing::AC2Client* client = gameInstance->ClientAvatar->client;
		//add_log(ws2s(client->driverInfo.firstName).c_str());

		//add_log("sessionInfo %i", raceGameMode->raceManager.get()->currentSessionType);
		// In single player sessions this iteration works as player will allways be in index 0 i'm not sure this is going to be the case once it goes online.
		int playerCarIndex = 0;
		sharedData->opponentDriverCount = GWorld->PawnList.Num();
		if (raceGameMode->raceManager->entryList.get() != nullptr)
		{
			for each (auto var in raceGameMode->raceManager->carStateServices->liveCarStates)
			{
				uint16_t index = var.first;
				ksRacing::CarState* state = var.second;
				sharedData->opponentDrivers[index].currentDelta = state->currentDelta;
				sharedData->opponentDrivers[index].driverIndex = state->driverIndex;
				sharedData->opponentDrivers[index].formationLapCounter = state->formationLapCounter;
				sharedData->opponentDrivers[index].isBetweenSafetyCarLines = state->isBetweenSafetyCarLines;
				sharedData->opponentDrivers[index].isDisqualified = state->isDisqualified;
				sharedData->opponentDrivers[index].isRetired = state->isRetired;
				sharedData->opponentDrivers[index].isSessionOver = state->isSessionOver;
				sharedData->opponentDrivers[index].lapCount = state->lapCount;
				sharedData->opponentDrivers[index].lastSectorTimeStamp = state->lastSectorTimeStamp;
				sharedData->opponentDrivers[index].trackLocation = state->carLocation;
				sharedData->opponentDrivers[index].position = state->splinePosition;
				sharedData->opponentDrivers[index].realTimePosition = state->realtimePosition;
				sharedData->opponentDrivers[index].sectorCount = state->sectorCount;
				sharedData->opponentDrivers[index].totalTime = state->totalTime;
				sharedData->opponentDrivers[index].distanceRoundTrack = state->splineDistance * sharedData->track.length;
				ACarAvatar* car = (ACarAvatar*)GWorld->PawnList[index].Get();
				FVector vec;
				USceneComponent* screen = car->RootComponent;
				FVector location = screen->K2_GetComponentLocation();
				FRotator rotation = screen->K2_GetComponentRotation();
				float speedMS = car->GetSpeedKMH() * 0.277777778f;
				sharedData->opponentDrivers[index].speed = speedMS;
				sharedData->opponentDrivers[index].location.x = location.X * .01f;
				sharedData->opponentDrivers[index].location.y = location.Y * .01f;
				sharedData->opponentDrivers[index].location.z = location.Z * .01f;
				sharedData->opponentDrivers[index].rotation.pitch = rotation.Pitch;
				sharedData->opponentDrivers[index].rotation.yaw = rotation.Yaw;
				sharedData->opponentDrivers[index].rotation.roll = rotation.Roll;
				
				FDriverInfo driverInfo = car->DriverInfo;
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

				strcpy_s(sharedData->opponentDrivers[index].name, _TRUNCATE, driverName.c_str());
				UAcCarTimingServices* timings = car->CarTimingServices;
				sharedData->opponentDrivers[index].currentlaptime = timings->GetCurrentLapTime();
			}
			sharedData->playerDriver = sharedData->opponentDrivers[0];
		}
		writer.updateSharedMemory(sharedData);
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
	char unloadDir[1024] = "";
	strcpy(unloadDir, dlldir);
	strcat(unloadDir, "DllUnload.dll");
	LoadLibraryA(unloadDir);
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);

	add_log("isBetweenSafetyCarLines 0x%X", offsetof(Driver, isBetweenSafetyCarLines));
	add_log("isSessionOver 0x%X", offsetof(Driver, isSessionOver));
	add_log("isDisqualified 0x%X", offsetof(Driver, isDisqualified));
	add_log("isRetired 0x%X", offsetof(Driver, isRetired));
	add_log("driverIndex 0x%X", offsetof(Driver, driverIndex));
	add_log("formationLapCounter 0x%X", offsetof(Driver, formationLapCounter));
	add_log("trackLocation 0x%X", offsetof(Driver, trackLocation));

	add_log("0x%llX", sizeof(Driver));
	
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
			else if (!doOnce && unhookIt)
			{ 
				unhookIt = false;
				return 0;
			}
			lasttime = 0;
			continue;
		}
		AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(GWorld->AuthorityGameMode);
		//Sleep(1000);
		//Hook AAcRaceGameMode::Ticks as we need to be in a game thread to run our updated to avoid being out of thread conntext.
		if (!doOnce)
		{
			FCircuitInfo circuit;
			TArray<FName> names;
			UAcGameInstance* instance = reinterpret_cast<UAcGameInstance*>(GWorld->OwningGameInstance);
			instance->InfoManager->GetInfoList(EInfoType::EInfoType__Circuit, &names);
			for (int i = 0; i < names.Num(); i++)
			{
				if (instance->InfoManager->GetCircuitInfo(names[i], &circuit))
				{
					savedCircuits.push_back(circuit);
				}
			}

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

