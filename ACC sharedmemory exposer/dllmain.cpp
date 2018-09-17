// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "SDK.hpp"

#include <fstream>
using namespace SDK;

intptr_t NamesAddress = (intptr_t)GetModuleHandle(NULL) + 0x329E250;
TNameEntryArray* FName::GNames  = reinterpret_cast<decltype(FName::GNames)>(*(intptr_t*)NamesAddress);
intptr_t ObjectsAddress = (intptr_t)GetModuleHandle(NULL) + 0x2F312A0;
FUObjectArray* UObject::GObjects = reinterpret_cast<decltype(UObject::GObjects)>(ObjectsAddress);
intptr_t GWorldAddress = (intptr_t)GetModuleHandle(NULL) + 0x33A1D20;
UWorld *GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);

char dlldir[512] = "";
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

DWORD __stdcall InitializeHook(LPVOID)
{
	//UAcGameInstance *instance = (UAcGameInstance *)UAcGameInstance::StaticClass();

	//add_log("Class Name: %s", g_UWorld->GetFullName().c_str());
	while (1)
	{	
		GWorld = reinterpret_cast<decltype(GWorld)>(*(intptr_t*)GWorldAddress);
		if (GetAsyncKeyState(VK_NUMPAD0) & 1)
		{
			
			for (int i = 0; i < GWorld->ControllerList.Num(); i++)
			{
				
				add_log(GWorld->ControllerList[i]->GetFullName().c_str());
			}
			add_log("%s %llx", GWorld->GetFullName().c_str(), GWorld );
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

		CreateThread(NULL, 0, InitializeHook, NULL, 0, NULL);

		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

