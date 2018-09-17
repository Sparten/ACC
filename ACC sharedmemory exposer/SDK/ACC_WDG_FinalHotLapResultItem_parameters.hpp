#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FinalHotLapResultItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Construct
struct UWDG_FinalHotLapResultItem_C_Construct_Params
{
};

// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Tick
struct UWDG_FinalHotLapResultItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.ExecuteUbergraph_WDG_FinalHotLapResultItem
struct UWDG_FinalHotLapResultItem_C_ExecuteUbergraph_WDG_FinalHotLapResultItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
