// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_Replay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Replay.WBP_Replay_C.Get_TimeMultiplierText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Replay_C::Get_TimeMultiplierText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Get_TimeMultiplierText_Text_1");

	UWBP_Replay_C_Get_TimeMultiplierText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Replay.WBP_Replay_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Replay_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.GetText_1");

	UWBP_Replay_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Replay.WBP_Replay_C.Get_TimeSlider_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_Replay_C::Get_TimeSlider_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Get_TimeSlider_Value_1");

	UWBP_Replay_C_Get_TimeSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Replay.WBP_Replay_C.Get_TotalTime_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Replay_C::Get_TotalTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Get_TotalTime_Text_1");

	UWBP_Replay_C_Get_TotalTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Replay.WBP_Replay_C.Get_CurrentTime_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_Replay_C::Get_CurrentTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Get_CurrentTime_Text_1");

	UWBP_Replay_C_Get_CurrentTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Replay.WBP_Replay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Replay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Construct");

	UWBP_Replay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Replay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.Tick");

	UWBP_Replay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Replay_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__PauseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Replay_C::BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_21_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Replay_C::BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Replay_C::BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__TimeSlider_K2Node_ComponentBoundEvent_69_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Replay_C::BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__timeDec_K2Node_ComponentBoundEvent_214_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Replay_C::BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature");

	UWBP_Replay_C_BndEvt__timeIncr_K2Node_ComponentBoundEvent_231_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Replay.WBP_Replay_C.ExecuteUbergraph_WBP_Replay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Replay_C::ExecuteUbergraph_WBP_Replay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Replay.WBP_Replay_C.ExecuteUbergraph_WBP_Replay");

	UWBP_Replay_C_ExecuteUbergraph_WBP_Replay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
