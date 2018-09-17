#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleColumnChart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddColumn
struct UWDG_SimpleColumnChart_C_WDG_AddColumn_Params
{
	class UWDG_SimpleColumnChartColumn_C*              col;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddSpacer
struct UWDG_SimpleColumnChart_C_WDG_AddSpacer_Params
{
};

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.AddColumn
struct UWDG_SimpleColumnChart_C_AddColumn_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ClearColumns
struct UWDG_SimpleColumnChart_C_ClearColumns_Params
{
};

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ExecuteUbergraph_WDG_SimpleColumnChart
struct UWDG_SimpleColumnChart_C_ExecuteUbergraph_WDG_SimpleColumnChart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
