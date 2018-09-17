#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_porsche_991_gt3_cup_display_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function porsche_991_gt3_cup_display.porsche_991_gt3_cup_display_C.MaskOpacity
struct Uporsche_991_gt3_cup_display_C_MaskOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function porsche_991_gt3_cup_display.porsche_991_gt3_cup_display_C.Tick
struct Uporsche_991_gt3_cup_display_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function porsche_991_gt3_cup_display.porsche_991_gt3_cup_display_C.ExecuteUbergraph_porsche_991_gt3_cup_display
struct Uporsche_991_gt3_cup_display_C_ExecuteUbergraph_porsche_991_gt3_cup_display_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
