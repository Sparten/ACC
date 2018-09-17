#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_Car_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Car.BP_Car_C.UserConstructionScript
struct ABP_Car_C_UserConstructionScript_Params
{
};

// Function BP_Car.BP_Car_C.ReceiveBeginPlay
struct ABP_Car_C_ReceiveBeginPlay_Params
{
};

// Function BP_Car.BP_Car_C.ExecuteUbergraph_BP_Car
struct ABP_Car_C_ExecuteUbergraph_BP_Car_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
