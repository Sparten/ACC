#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_mclaren_650s_gt3_display_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function mclaren_650s_gt3_display.mclaren_650s_gt3_display_C.MaskOpacity
struct Umclaren_650s_gt3_display_C_MaskOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function mclaren_650s_gt3_display.mclaren_650s_gt3_display_C.Tick
struct Umclaren_650s_gt3_display_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mclaren_650s_gt3_display.mclaren_650s_gt3_display_C.ExecuteUbergraph_mclaren_650s_gt3_display
struct Umclaren_650s_gt3_display_C_ExecuteUbergraph_mclaren_650s_gt3_display_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
