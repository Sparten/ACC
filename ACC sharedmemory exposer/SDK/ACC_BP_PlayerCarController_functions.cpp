// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_PlayerCarController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCarController.BP_PlayerCarController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCarController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCarController.BP_PlayerCarController_C.UserConstructionScript");

	ABP_PlayerCarController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCarController.BP_PlayerCarController_C.InpActEvt_ShowHideCameraTool_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerCarController_C::InpActEvt_ShowHideCameraTool_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCarController.BP_PlayerCarController_C.InpActEvt_ShowHideCameraTool_K2Node_InputActionEvent_1");

	ABP_PlayerCarController_C_InpActEvt_ShowHideCameraTool_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCarController.BP_PlayerCarController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCarController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCarController.BP_PlayerCarController_C.ReceiveBeginPlay");

	ABP_PlayerCarController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerCarController.BP_PlayerCarController_C.ExecuteUbergraph_BP_PlayerCarController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerCarController_C::ExecuteUbergraph_BP_PlayerCarController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCarController.BP_PlayerCarController_C.ExecuteUbergraph_BP_PlayerCarController");

	ABP_PlayerCarController_C_ExecuteUbergraph_BP_PlayerCarController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
