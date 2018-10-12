#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_SteamVRController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SteamVRController.SteamVRControllerLibrary
// 0x0000 (0x0028 - 0x0028)
class USteamVRControllerLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SteamVRController.SteamVRControllerLibrary");
		return ptr;
	}


	void STATIC_SetTouchDPadMapping(ESteamVRTouchDPadMapping NewMapping);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
