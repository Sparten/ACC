// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_RaceGameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RaceGameMode.BP_RaceGameMode_C.StepTrackVariable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 VarName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RaceGameMode_C::StepTrackVariable(const struct FString& VarName, bool Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.StepTrackVariable");

	ABP_RaceGameMode_C_StepTrackVariable_Params params;
	params.VarName = VarName;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RaceGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.UserConstructionScript");

	ABP_RaceGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_11");

	ABP_RaceGameMode_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10");

	ABP_RaceGameMode_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9");

	ABP_RaceGameMode_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_8");

	ABP_RaceGameMode_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_7");

	ABP_RaceGameMode_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Add_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Add_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Add_K2Node_InputKeyEvent_6");

	ABP_RaceGameMode_C_InpActEvt_Add_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Subtract_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5");

	ABP_RaceGameMode_C_InpActEvt_Subtract_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4");

	ABP_RaceGameMode_C_InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3");

	ABP_RaceGameMode_C_InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2");

	ABP_RaceGameMode_C_InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_RaceGameMode_C::InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1");

	ABP_RaceGameMode_C_InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RaceGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.ReceiveBeginPlay");

	ABP_RaceGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RaceGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.ReceiveTick");

	ABP_RaceGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaceGameMode.BP_RaceGameMode_C.ExecuteUbergraph_BP_RaceGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RaceGameMode_C::ExecuteUbergraph_BP_RaceGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaceGameMode.BP_RaceGameMode_C.ExecuteUbergraph_BP_RaceGameMode");

	ABP_RaceGameMode_C_ExecuteUbergraph_BP_RaceGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
