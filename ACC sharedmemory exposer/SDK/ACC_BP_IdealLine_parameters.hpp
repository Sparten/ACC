#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_IdealLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IdealLine.BP_IdealLine_C.UserConstructionScript
struct ABP_IdealLine_C_UserConstructionScript_Params
{
};

// Function BP_IdealLine.BP_IdealLine_C.ReceiveTick
struct ABP_IdealLine_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IdealLine.BP_IdealLine_C.ExecuteUbergraph_BP_IdealLine
struct ABP_IdealLine_C_ExecuteUbergraph_BP_IdealLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
