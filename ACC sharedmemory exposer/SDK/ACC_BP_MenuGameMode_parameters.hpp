#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_MenuGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MenuGameMode.BP_MenuGameMode_C.UserConstructionScript
struct ABP_MenuGameMode_C_UserConstructionScript_Params
{
};

// Function BP_MenuGameMode.BP_MenuGameMode_C.ReceiveBeginPlay
struct ABP_MenuGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_MenuGameMode.BP_MenuGameMode_C.ReceiveTick
struct ABP_MenuGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuGameMode.BP_MenuGameMode_C.ExecuteUbergraph_BP_MenuGameMode
struct ABP_MenuGameMode_C_ExecuteUbergraph_BP_MenuGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
