#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericBarToggleItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseOver
struct UWDG_GenericBarToggleItem_C_BP_MouseOver_Params
{
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseLeave
struct UWDG_GenericBarToggleItem_C_BP_MouseLeave_Params
{
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsSelected
struct UWDG_GenericBarToggleItem_C_BP_IsSelected_Params
{
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.Construct
struct UWDG_GenericBarToggleItem_C_Construct_Params
{
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsUnSelected
struct UWDG_GenericBarToggleItem_C_BP_IsUnSelected_Params
{
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_UpdateState
struct UWDG_GenericBarToggleItem_C_BP_UpdateState_Params
{
	bool*                                              IsElementActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.ExecuteUbergraph_WDG_GenericBarToggleItem
struct UWDG_GenericBarToggleItem_C_ExecuteUbergraph_WDG_GenericBarToggleItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
