#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_StartUpLoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Get_Loading_lbl_Text_1
struct UWDG_StartUpLoadingScreen_C_Get_Loading_lbl_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Construct
struct UWDG_StartUpLoadingScreen_C_Construct_Params
{
};

// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.ExecuteUbergraph_WDG_StartUpLoadingScreen
struct UWDG_StartUpLoadingScreen_C_ExecuteUbergraph_WDG_StartUpLoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
