#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_LoadingScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_OpponentsCar_txt_Text_1
struct UWBP_LoadingScreen_C_Get_OpponentsCar_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TextBlock_3_Text_1
struct UWBP_LoadingScreen_C_Get_TextBlock_3_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_SessionType_txt
struct UWBP_LoadingScreen_C_Get_SessionType_txt_Params
{
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TB_Loading_Text_1
struct UWBP_LoadingScreen_C_Get_TB_Loading_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_IMG_BackGround_Brush_1
struct UWBP_LoadingScreen_C_Get_IMG_BackGround_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
struct UWBP_LoadingScreen_C_Construct_Params
{
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick
struct UWBP_LoadingScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
struct UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
