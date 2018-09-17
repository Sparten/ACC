#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericBarItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_GenericBarItem.WDG_GenericBarItem_C.Construct
struct UWDG_GenericBarItem_C_Construct_Params
{
};

// Function WDG_GenericBarItem.WDG_GenericBarItem_C.BP_UpdateActivity
struct UWDG_GenericBarItem_C_BP_UpdateActivity_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_GenericBarItem.WDG_GenericBarItem_C.ExecuteUbergraph_WDG_GenericBarItem
struct UWDG_GenericBarItem_C_ExecuteUbergraph_WDG_GenericBarItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
