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

SharedMemeoryWriter <ACCSharedMemory> writer("Global\\ACC");
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
//volatile bool exitThread = false;
DWORD __stdcall InitializeHook(LPVOID)
{
	//UAcGameInstance *instance = (UAcGameInstance *)UAcGameInstance::StaticClass();
	//add_log("Class Name: %s", g_UWorld->GetFullName().c_str()); 
	//console_window c;
	while (1)
	{	

		GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
		FName::GNames = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
		UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
		//add_log("%llx", offsetof(ULevel, ActorCluster));
		//c.add_log("Main Thread ID: ");
		if (GetAsyncKeyState(VK_NUMPAD0) & 1)
		{
			for (int i = 0; i < GWorld->PlayerControllerList.Num(); i++)
			{
				add_log(GWorld->PlayerControllerList[i]->GetFullName().c_str());
			}

			AAcRaceGameMode* raceGameMode = (AAcRaceGameMode*)GWorld->AuthorityGameMode;

			APhysicsAvatar *physics = raceGameMode->PhysicsAvatar;

			UAcGameInstance* instance = (UAcGameInstance*)GWorld->OwningGameInstance;
			FCircuitInfo circuit;
			//EInfoType__Circuit
			TArray<FName> names;
			instance->InfoManager->GetInfoList(EInfoType::EInfoType__Circuit, &names);

			for (int i = 0; i < names.Num(); i++)
			{
				if (instance->InfoManager->GetCircuitInfo(names[i], &circuit))
				{
					add_log("circuit: %s length: %i", circuit.CircuitName.ToString().c_str(), circuit.Length);
				}
			}
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
				AController* control = car->GetController();
				//add_log("%llx", offsetof(ACarAvatar, physicsAvatar));
				FVector vec;
				USceneComponent* screen = car->RootComponent;
				vec = screen->K2_GetComponentLocation();
				add_log("Location x %f y %f z %f", vec.X, vec.Y, vec.Z);

				//car->GetTargetLocation(&vec, nullptr);
				//add_log("Location x %f y %f z %f", vec.X, vec.Y, vec.Z);

				add_log("Car: %i %s", i, car->carName.ToString().c_str());
				FDriverInfo* info = &car->DriverInfo;
				UAcCarTimingServices* timings = car->CarTimingServices;
				std::string driverName = "";
				if (info->FirstName.IsValid())
				{
					driverName = info->FirstName.ToString() + " ";
				}
				if (info->SecondName.IsValid())
				{
					driverName += info->SecondName.ToString() + " ";
				}
				if (info->LastName.IsValid())
				{
					driverName += info->LastName.ToString().c_str();
				}
				int lapcount = timings->GetLapCount();
				int currentlaptime = timings->GetCurrentLapTime();
				add_log("Driver Name: %s", driverName.c_str());
				add_log("LapCount: %i Current Laptime %i", lapcount, currentlaptime);
			}
			add_log("%s %llx", GWorld->GetFullName().c_str(), GWorld);
			add_log("%llx", FName::GNames);
			add_log("%llx", UObject::GObjects);
			
		}
		Sleep(50);
	}
	return 0;
}



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
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
		GetExitCodeThread(monitorThread, &exitCode);
		TerminateThread(monitorThread, exitCode);
		break;
	}
	return TRUE;
}

