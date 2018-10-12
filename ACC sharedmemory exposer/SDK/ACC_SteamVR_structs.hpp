#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Basic.hpp"
#include "ACC_Engine_classes.hpp"
#include "ACC_CoreUObject_classes.hpp"
#include "ACC_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteamVR.ESteamVRTrackedDeviceType
enum class ESteamVRTrackedDeviceType : uint8_t
{
	ESteamVRTrackedDeviceType__Controller = 0,
	ESteamVRTrackedDeviceType__TrackingReference = 1,
	ESteamVRTrackedDeviceType__Other = 2,
	ESteamVRTrackedDeviceType__Invalid = 3,
	ESteamVRTrackedDeviceType__ESteamVRTrackedDeviceType_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
