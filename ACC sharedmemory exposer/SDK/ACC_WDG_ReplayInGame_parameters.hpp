#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ReplayInGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Get_TimeMultiplierText_Text_1
struct UWDG_ReplayInGame_C_Get_TimeMultiplierText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.GetText_1
struct UWDG_ReplayInGame_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Get_TimeSlider_Value_1
struct UWDG_ReplayInGame_C_Get_TimeSlider_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Get_TotalTime_Text_1
struct UWDG_ReplayInGame_C_Get_TotalTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Get_CurrentTime_Text_1
struct UWDG_ReplayInGame_C_Get_CurrentTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Remove_PB
struct UWDG_ReplayInGame_C_Remove_PB_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Tick
struct UWDG_ReplayInGame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.Construct
struct UWDG_ReplayInGame_C_Construct_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature
struct UWDG_ReplayInGame_C_BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.OnMouseEnter
struct UWDG_ReplayInGame_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WDG_ReplayInGame.WDG_ReplayInGame_C.ExecuteUbergraph_WDG_ReplayInGame
struct UWDG_ReplayInGame_C_ExecuteUbergraph_WDG_ReplayInGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
