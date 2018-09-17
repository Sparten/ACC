#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_bmw_m6_gt3_display_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bmw_m6_gt3_display.bmw_m6_gt3_display_C.MaskOpacity
struct Ubmw_m6_gt3_display_C_MaskOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function bmw_m6_gt3_display.bmw_m6_gt3_display_C.Tick
struct Ubmw_m6_gt3_display_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bmw_m6_gt3_display.bmw_m6_gt3_display_C.ExecuteUbergraph_bmw_m6_gt3_display
struct Ubmw_m6_gt3_display_C_ExecuteUbergraph_bmw_m6_gt3_display_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
