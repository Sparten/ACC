#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_audi_r8_lms_display_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function audi_r8_lms_display.audi_r8_lms_display_C.MaskOpacity
struct Uaudi_r8_lms_display_C_MaskOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function audi_r8_lms_display.audi_r8_lms_display_C.Tick
struct Uaudi_r8_lms_display_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function audi_r8_lms_display.audi_r8_lms_display_C.ExecuteUbergraph_audi_r8_lms_display
struct Uaudi_r8_lms_display_C_ExecuteUbergraph_audi_r8_lms_display_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
