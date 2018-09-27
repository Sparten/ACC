// dllmain.cpp : Defines the entry point for the DLL application.
//#include "stdafx.h"
#define WIN32_LEAN_AND_MEAN
#define DEV_ENV
#include <windows.h>
#include "SDK.hpp"
#include <fstream>
#include <iostream>
#include <locale>
#include <codecvt>
#include "SharedMemoryWriter.hpp"
#include "PatternFinder.hpp"
using namespace SDK;
uintptr_t* NamesAddress = nullptr;
uintptr_t* ObjectsAddress = nullptr;
uintptr_t* GWorldAddress = nullptr;

HANDLE monitorThread = nullptr;
bool doOnce = false;
typedef void(__stdcall *Tick_t)(AAcRaceGameMode*, double);
Tick_t pTick = nullptr;
intptr_t* tickAddress = nullptr;
std::vector<FCircuitInfo> savedCircuits;
SharedMemeoryWriter<ACCSharedMemoryData> writer("Local\\CrewChief_ACC");
#ifdef DEV_ENV

char dlldir[512] = "";
volatile bool unhookIt = false;
double TicksNow();
static double const MILLISECONDS_IN_SECOND = 1000.0;
static double const MICROSECONDS_IN_MILLISECOND = 1000.0;
static double const MICROSECONDS_IN_SECOND = MILLISECONDS_IN_SECOND * MICROSECONDS_IN_MILLISECOND;

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

#define USE_QPC

double TicksNow() {

#ifdef USE_QPC

	static double frequencyMicrosecond = 0.0;
	static bool once = false;
	if (!once) {

		LARGE_INTEGER qpcFrequency = {};

		QueryPerformanceFrequency(&qpcFrequency);

		frequencyMicrosecond = static_cast<double>(qpcFrequency.QuadPart) / MICROSECONDS_IN_SECOND;

		once = true;

	}
	LARGE_INTEGER now = {};
	QueryPerformanceCounter(&now);
	return static_cast<double>(now.QuadPart) / frequencyMicrosecond;

#else 

	return GetTickCount64() * MICROSECONDS_IN_MILLISECOND;

#endif

}

#endif // DEV_ENV

intptr_t FindPattern(intptr_t start_offset, intptr_t size, char *pattern, char *mask)
{
	DWORD byteMatchedIndex = 0;
	int searchLen = strlen(mask) - 1;

	for (intptr_t scanAddress = start_offset; scanAddress < start_offset + size; scanAddress++)
	{
		//Do scan
		if (*(BYTE*)scanAddress == (BYTE)pattern[byteMatchedIndex] || mask[byteMatchedIndex] == '?')
		{
			if (mask[byteMatchedIndex + 1] == '\0')
			{
				return (scanAddress - searchLen);
			}
			byteMatchedIndex++;
		}
		else
		{
			byteMatchedIndex = 0;
		}
	}
	return NULL;
}

std::string ws2s(const std::wstring& wstr)
{
	using convert_typeX = std::codecvt_utf8<wchar_t>;
	std::wstring_convert<convert_typeX, wchar_t> converterX;

	return converterX.to_bytes(wstr);
}

void __stdcall Tick_Detour(AAcRaceGameMode* p, double time)
{
	//double tick = TicksNow();
	std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
	sharedData->isReady = true;
	AAcRaceGameMode* raceGameMode = p;
	ksRacing::RaceManager* raceManager = p->raceManager.get();
	sharedData->update = raceManager->physicsTime;
	sharedData->sessionData.physicsTime = p->raceManager->physicsTime;
	UWorld::GWorld = reinterpret_cast<decltype(UWorld::GWorld)>(*GWorldAddress);
	ATrackAvatar* trackAvatar = reinterpret_cast<ATrackAvatar*>(raceGameMode->TrackAvatar);
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
	sharedData->sessionData.sessionStartTimeStamp = raceManager->sessionStartTimeStamp;
	sharedData->sessionData.receivedServerTime = raceManager->receivedServerTime;
	sharedData->sessionData.serverTimeOffset = raceManager->serverTimeOffset;
	sharedData->sessionData.sessionStartTime = raceManager->sessionStartTime;
	sharedData->sessionData.sessionEndTime = raceManager->sessionEndTime;
	sharedData->sessionData.pitlaneSpeedLimitKmh = raceManager->seasonEntity.rules.pitlaneSpeedLimitKmh;
	sharedData->sessionData.mandatoryPitStopCount = raceManager->seasonEntity.events[raceManager->currentEventIndex].race.eventRaceRules.mandatoryPitStopCount;
	sharedData->sessionData.pitWindowOpenAtTime = raceManager->seasonEntity.events[raceManager->currentEventIndex].race.eventRaceRules.pitWindowOpenAtTime;
	sharedData->sessionData.pitWindowCloseAtTime = raceManager->seasonEntity.events[raceManager->currentEventIndex].race.eventRaceRules.pitWindowCloseAtTime;
	sharedData->sessionData.sessionDuration = raceManager->seasonEntity.events[raceManager->currentEventIndex].race.sessions[raceManager->currentSessionIndex].sessionDuration;

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
	UTrackPeopleController* trackPeopleController = trackAvatar->TrackPeopleController;
	sharedData->marshals.marchalCount = trackPeopleController->Marshals.Num();
	sharedData->marshals.checkeredFlagMarshalIndex = trackPeopleController->checkeredFlagMarshalIndex;
	for (int i = 0; i < trackPeopleController->Marshals.Num(); i++)
	{
		AAcMarshal* marshal = trackPeopleController->Marshals[i];
		sharedData->marshals.marshals[i].startPos = marshal->StartPosition;
		sharedData->marshals.marshals[i].endPos = marshal->EndPosition;
		sharedData->marshals.marshals[i].flag = (ksRacing::MarshalFlagType)(trackPeopleController->marshalBitField[i].flagColor & 15);		
	} 		
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
	// So we might have to do a propper look up by driverindex vs carindex but its all available so its just a matter of me not being lazy.
	int playerCarIndex = 0;
	sharedData->opponentDriverCount = UWorld::GWorld->PawnList.Num();
	if (raceManager->entryList.get() != nullptr)
	{
		for each (auto var in raceManager->carStateServices->liveCarStates)
		{
			uint16_t index = var.first;
			ksRacing::CarState* state = var.second;
			ACarAvatar* car = (ACarAvatar*)UWorld::GWorld->PawnList[index].Get();
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
			sharedData->opponentDrivers[index].position = state->lastStanding;
			sharedData->opponentDrivers[index].realTimePosition = state->realtimePosition;				
			sharedData->opponentDrivers[index].totalTime = state->totalTime;
			sharedData->opponentDrivers[index].distanceRoundTrackNormalized = state->splineDistance;
			UAcCarTimingServices* timings = car->CarTimingServices;
			sharedData->opponentDrivers[index].currentlaptime = timings->GetCurrentLapTime();
			sharedData->opponentDrivers[index].currentSector = timings->CurrentSector;
			sharedData->opponentDrivers[index].trottle = car->GetGas();
			sharedData->opponentDrivers[index].clutch = car->GetClutch();
			sharedData->opponentDrivers[index].brake = car->GetBrake();
			sharedData->opponentDrivers[index].rpms = car->GetRPMS();
			sharedData->opponentDrivers[index].speedMS = car->GetSpeedKMH() * 0.277777778f;
			sharedData->opponentDrivers[index].speedKMH = car->GetSpeedKMH();
			FVector vec;
			USceneComponent* screen = car->RootComponent;
			FVector location = screen->K2_GetComponentLocation();
			sharedData->opponentDrivers[index].location.x = location.X * .01f;
			sharedData->opponentDrivers[index].location.y = location.Y * .01f;
			sharedData->opponentDrivers[index].location.z = location.Z * .01f;
			if (index == 0)
			{
				FRotator rotation = screen->K2_GetComponentRotation();
				sharedData->opponentDrivers[index].rotation.pitch = rotation.Pitch;
				sharedData->opponentDrivers[index].rotation.yaw = rotation.Yaw;
				sharedData->opponentDrivers[index].rotation.roll = rotation.Roll;
				sharedData->opponentDrivers[index].fuel = car->CarData->FuelData.Fuel;
				sharedData->opponentDrivers[index].maxFuel = car->CarData->FuelData.MaxFuel;
			}

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
			sharedData->playerDriver = sharedData->opponentDrivers[0];
		}

	}
	writer.updateSharedMemory(sharedData.get());
	//double tickEnd = TicksNow();
	//add_log("Time to process: %Lf", tickEnd - tick);
#ifdef DEV_ENV
	if (unhookIt)
	{
		std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
		sharedData->isReady = false;
		writer.updateSharedMemory(sharedData.get());
		Unhook();
		unhookIt = false;
	}
#endif // DEV_ENV
	return pTick(p, time);
}


DWORD __stdcall InitializeHook(LPVOID)
{	
#ifdef DEV_ENV
	char unloadDir[1024] = "";
	strcpy(unloadDir, dlldir);
	strcat(unloadDir, "DllUnload.dll");
	LoadLibraryA(unloadDir);
#endif // DEV_ENV
	HMODULE mainModule = GetModuleHandle(NULL);
	
	NamesAddress = FindPatternForPointerInMemory(mainModule,
		(unsigned char *)"\x48\x83\xEC\x28\x48\x8B\x05\x25\xDB\xB5\x02\x48\x85\xC0\x75\x5F\xB9\x08\x04\x00\x00",
		(CHAR *)"xxxxxxx????xxxxxxxxxx", 7);
	if (NamesAddress == nullptr)
	{
		return 0;
	}
	FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*NamesAddress);
	
	ObjectsAddress = FindPatternForPointerInMemory(mainModule,
		(unsigned char *)"\x48\x8D\x05\x25\x76\xC2\x02\x33\xF6\x48\x89\x01\x48\x89\x71\x10\x45\x8B\xD9\x41\xB9\xFF\xFF\xFF\xFF",
		(CHAR *)"xxx????xxxxxxxxxxxxxxxxx", 3);
	if (ObjectsAddress == nullptr)
	{
		return 0;
	}
	UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
			
	GWorldAddress = FindPatternForPointerInMemory(mainModule,
		(unsigned char *)"\x48\x8B\x1D\x97\x98\x1B\x03\x48\x85\xDB\x74\x3B\x41\xB0\x01\x33\xD2\x48\x8B\xCB\xE8\xB5\xF3\x69\x01",
		"xxx????xxxxxxxxxxxxxx????", 3);
	if (GWorldAddress == nullptr)
	{
		return 0;
	}
	UWorld::GWorld = reinterpret_cast<decltype(UWorld::GWorld)>(*GWorldAddress);
	
	for (;;)
	{
#ifdef DEV_ENV
		if (unhookIt)
		{
			std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
			sharedData->isReady = false;
			writer.updateSharedMemory(sharedData.get());
			Unhook();
			unhookIt = false;
			return 0;
		}
#endif // DEV_ENV
		UWorld::GWorld = reinterpret_cast<decltype(UWorld::GWorld)>(*GWorldAddress);
		if (UWorld::GWorld == nullptr || IsBadReadPtr((const void*)UWorld::GWorld, sizeof(UWorld)))
		{
			std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
			sharedData->isReady = false;
			writer.updateSharedMemory(sharedData.get());
			Sleep(200);
			continue;
		}
		if (UWorld::GWorld->AuthorityGameMode == nullptr)
		{
			std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
			sharedData->isReady = false;
			writer.updateSharedMemory(sharedData.get());
			Sleep(200);
			continue;
		}
		if (!UWorld::GWorld->AuthorityGameMode->IsA(AAcRaceGameMode::StaticClass()))
		{
			// If not in a AAcRaceGameMode state its safe to unhook the function here as its not called.
			std::shared_ptr<ACCSharedMemoryData> sharedData = std::make_shared<ACCSharedMemoryData>();
			sharedData->isReady = false;
			writer.updateSharedMemory(sharedData.get());
			Sleep(200);
			continue;
		}

		//Hook AAcRaceGameMode::Ticks as we need to be in a game thread to run our updated to avoid being out of thread conntext.
		if (!doOnce)
		{	
			FCircuitInfo circuit;
			TArray<FName> names;
			UAcGameInstance* instance = reinterpret_cast<UAcGameInstance*>(UWorld::GWorld->OwningGameInstance);
			AAcRaceGameMode* raceGameMode = reinterpret_cast<AAcRaceGameMode*>(UWorld::GWorld->AuthorityGameMode);
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
			//add_log("Hooked AAcRaceGameMode::Ticks");
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
#ifdef DEV_ENV
// All this unhooking and unloading the dll is only here for me to being able to reinject the dll while working on it.
void __stdcall WaitForUnHook()
{
	if (doOnce)
	{
		unhookIt = true;
		while (unhookIt)
		{
			Sleep(50);
		}
	}
}
#endif // DEV_ENV

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:

		DisableThreadLibraryCalls(hModule);
#ifdef DEV_ENV
		GetModuleFileNameA(hModule, dlldir, 512);
		for (size_t i = strlen(dlldir); i > 0; i--) { if (dlldir[i] == '\\') { dlldir[i + 1] = 0; break; } }
#endif // DEV_ENV
		monitorThread = CreateThread(NULL, 0, InitializeHook, NULL, 0, NULL);

		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		{
			
#ifdef DEV_ENV
			WaitForUnHook();
#endif // DEV_ENV

			DWORD exitCode = 0;
			GetExitCodeThread(monitorThread, &exitCode);
			TerminateThread(monitorThread, exitCode);
			break;
		}
	}
	return TRUE;
}

