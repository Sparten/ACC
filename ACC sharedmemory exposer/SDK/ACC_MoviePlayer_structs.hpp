#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Basic.hpp"
#include "ACC_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
