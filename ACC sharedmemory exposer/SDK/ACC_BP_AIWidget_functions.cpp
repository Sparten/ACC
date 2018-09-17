// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_AIWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AIWidget.BP_AIWidget_C.Get_txtRPMDownshift_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_txtRPMDownshift_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_txtRPMDownshift_Text_1");

	UBP_AIWidget_C_Get_txtRPMDownshift_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_txtGasHint_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_txtGasHint_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_txtGasHint_Text_1");

	UBP_AIWidget_C_Get_txtGasHint_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbUndersteer_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbUndersteer_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbUndersteer_Text_1");

	UBP_AIWidget_C_Get_tbUndersteer_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbAeroHint_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbAeroHint_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbAeroHint_Text_1");

	UBP_AIWidget_C_Get_tbAeroHint_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tnTargetBrakeSpeed_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tnTargetBrakeSpeed_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tnTargetBrakeSpeed_Text_1");

	UBP_AIWidget_C_Get_tnTargetBrakeSpeed_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbCurrentPush_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbCurrentPush_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbCurrentPush_Text_1");

	UBP_AIWidget_C_Get_tbCurrentPush_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbBrakeHint_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbBrakeHint_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbBrakeHint_Text_1");

	UBP_AIWidget_C_Get_tbBrakeHint_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.GetCarAIData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACarAvatar*              CarAvatar                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAIDataAsset*            AIData                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::GetCarAIData(class ACarAvatar** CarAvatar, class UAIDataAsset** AIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.GetCarAIData");

	UBP_AIWidget_C_GetCarAIData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CarAvatar != nullptr)
		*CarAvatar = params.CarAvatar;
	if (AIData != nullptr)
		*AIData = params.AIData;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbLookAhead_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbLookAhead_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbLookAhead_Text_1");

	UBP_AIWidget_C_Get_tbLookAhead_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Get_tbSteerGain_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_AIWidget_C::Get_tbSteerGain_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Get_tbSteerGain_Text_1");

	UBP_AIWidget_C_Get_tbSteerGain_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AIWidget.BP_AIWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_AIWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.Construct");

	UBP_AIWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_AIWidget_C::BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature");

	UBP_AIWidget_C_BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AIWidget.BP_AIWidget_C.ExecuteUbergraph_BP_AIWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AIWidget_C::ExecuteUbergraph_BP_AIWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIWidget.BP_AIWidget_C.ExecuteUbergraph_BP_AIWidget");

	UBP_AIWidget_C_ExecuteUbergraph_BP_AIWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
