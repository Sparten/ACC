#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ReplayController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ReplayController.BP_ReplayController_C.UserConstructionScript
struct ABP_ReplayController_C_UserConstructionScript_Params
{
};

// Function BP_ReplayController.BP_ReplayController_C.ReceiveTick
struct ABP_ReplayController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayController.BP_ReplayController_C.OnPossess
struct ABP_ReplayController_C_OnPossess_Params
{
};

// Function BP_ReplayController.BP_ReplayController_C.ExecuteUbergraph_BP_ReplayController
struct ABP_ReplayController_C_ExecuteUbergraph_BP_ReplayController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
