#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleAreaChart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.OnPaint
struct UWDG_SimpleAreaChart_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.Construct
struct UWDG_SimpleAreaChart_C_Construct_Params
{
};

// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.ExecuteUbergraph_WDG_SimpleAreaChart
struct UWDG_SimpleAreaChart_C_ExecuteUbergraph_WDG_SimpleAreaChart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
