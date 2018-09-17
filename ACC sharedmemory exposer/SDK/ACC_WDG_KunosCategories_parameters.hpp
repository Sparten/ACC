#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_KunosCategories_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_KunosCategories.WDG_KunosCategories_C.SetCategory
struct UWDG_KunosCategories_C_SetCategory_Params
{
	EKunosDriverCategory                               Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_KunosCategories.WDG_KunosCategories_C.Construct
struct UWDG_KunosCategories_C_Construct_Params
{
};

// Function WDG_KunosCategories.WDG_KunosCategories_C.ExecuteUbergraph_WDG_KunosCategories
struct UWDG_KunosCategories_C_ExecuteUbergraph_WDG_KunosCategories_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
