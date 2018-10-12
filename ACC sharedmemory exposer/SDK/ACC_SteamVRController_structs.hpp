#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Basic.hpp"
#include "ACC_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteamVRController.ESteamVRTouchDPadMapping
enum class ESteamVRTouchDPadMapping : uint8_t
{
	ESteamVRTouchDPadMapping__FaceButtons = 0,
	ESteamVRTouchDPadMapping__ThumbstickDirections = 1,
	ESteamVRTouchDPadMapping__Disabled = 2,
	ESteamVRTouchDPadMapping__ESteamVRTouchDPadMapping_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
