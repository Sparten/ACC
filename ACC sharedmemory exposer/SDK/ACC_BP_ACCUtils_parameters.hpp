#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ACCUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ACCUtils.BP_ACCUtils_C.ACC_MS_TO_KMH
struct UBP_ACCUtils_C_ACC_MS_TO_KMH_Params
{
	float                                              MS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              KMH;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACCUtils.BP_ACCUtils_C.ACC_GetPlayerCarAvatar
struct UBP_ACCUtils_C_ACC_GetPlayerCarAvatar_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACarAvatar*                                  CarAvatar;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
