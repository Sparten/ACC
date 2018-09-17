#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_CinemaHud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_CinemaHud.WBP_CinemaHud_C.PopolateMenu
struct UWBP_CinemaHud_C_PopolateMenu_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.Construct
struct UWBP_CinemaHud_C_Construct_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.Tick
struct UWBP_CinemaHud_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature
struct UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature_Params
{
};

// Function WBP_CinemaHud.WBP_CinemaHud_C.ExecuteUbergraph_WBP_CinemaHud
struct UWBP_CinemaHud_C_ExecuteUbergraph_WBP_CinemaHud_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
