#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_nissan_gtr_gt3_display_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Get_Black_Mask_ColorAndOpacity_1
struct Unissan_gtr_gt3_display_C_Get_Black_Mask_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Tick
struct Unissan_gtr_gt3_display_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.ExecuteUbergraph_nissan_gtr_gt3_display
struct Unissan_gtr_gt3_display_C_ExecuteUbergraph_nissan_gtr_gt3_display_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
