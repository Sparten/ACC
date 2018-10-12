#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_SteamVRController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
struct USteamVRControllerLibrary_SetTouchDPadMapping_Params
{
	ESteamVRTouchDPadMapping                           NewMapping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
