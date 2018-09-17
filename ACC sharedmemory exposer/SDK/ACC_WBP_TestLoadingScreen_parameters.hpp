#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_TestLoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_TB_Loading_Text_1
struct UWBP_TestLoadingScreen_C_Get_TB_Loading_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_IMG_BackGround_Brush_1
struct UWBP_TestLoadingScreen_C_Get_IMG_BackGround_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Construct
struct UWBP_TestLoadingScreen_C_Construct_Params
{
};

// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.ExecuteUbergraph_WBP_TestLoadingScreen
struct UWBP_TestLoadingScreen_C_ExecuteUbergraph_WBP_TestLoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
