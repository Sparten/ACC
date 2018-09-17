#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericIntroPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.Construct
struct UWDG_GenericIntroPanel_C_Construct_Params
{
};

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.PreConstruct
struct UWDG_GenericIntroPanel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseOver
struct UWDG_GenericIntroPanel_C_BP_MouseOver_Params
{
};

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseLeave
struct UWDG_GenericIntroPanel_C_BP_MouseLeave_Params
{
};

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.ExecuteUbergraph_WDG_GenericIntroPanel
struct UWDG_GenericIntroPanel_C_ExecuteUbergraph_WDG_GenericIntroPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
