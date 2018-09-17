// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_CinemaHud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CinemaHud.WBP_CinemaHud_C.PopolateMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CinemaHud_C::PopolateMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.PopolateMenu");

	UWBP_CinemaHud_C_PopolateMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CinemaHud_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.Construct");

	UWBP_CinemaHud_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.Tick");

	UWBP_CinemaHud_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__Button_390_K2Node_ComponentBoundEvent_171_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_ParentToCar_K2Node_ComponentBoundEvent_0_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_FOV_K2Node_ComponentBoundEvent_120_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_Smoothing_K2Node_ComponentBoundEvent_169_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__SpinBox_84_K2Node_ComponentBoundEvent_321_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__SpinBox_176_K2Node_ComponentBoundEvent_334_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__near_K2Node_ComponentBoundEvent_632_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__far_K2Node_ComponentBoundEvent_656_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__scale_K2Node_ComponentBoundEvent_792_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__nearsize1_K2Node_ComponentBoundEvent_1121_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__farsize_K2Node_ComponentBoundEvent_1148_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__focusregion_K2Node_ComponentBoundEvent_1176_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__resume_btn_K2Node_ComponentBoundEvent_2672_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__option_K2Node_ComponentBoundEvent_2732_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_ForwardSpeed_K2Node_ComponentBoundEvent_2944_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_LateralSpeed_K2Node_ComponentBoundEvent_3394_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_VerticalSpeed_K2Node_ComponentBoundEvent_3922_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_YawSpeed_K2Node_ComponentBoundEvent_3940_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_PitchSpeed_K2Node_ComponentBoundEvent_3958_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature
// (BlueprintEvent)

void UWBP_CinemaHud_C::BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature");

	UWBP_CinemaHud_C_BndEvt__CinemaHUD_optLine_RollSpeed_K2Node_ComponentBoundEvent_3977_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CinemaHud.WBP_CinemaHud_C.ExecuteUbergraph_WBP_CinemaHud
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CinemaHud_C::ExecuteUbergraph_WBP_CinemaHud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CinemaHud.WBP_CinemaHud_C.ExecuteUbergraph_WBP_CinemaHud");

	UWBP_CinemaHud_C_ExecuteUbergraph_WBP_CinemaHud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
