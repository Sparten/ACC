// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ReplayController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ReplayController.BP_ReplayController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ReplayController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayController.BP_ReplayController_C.UserConstructionScript");

	ABP_ReplayController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayController.BP_ReplayController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayController.BP_ReplayController_C.ReceiveTick");

	ABP_ReplayController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayController.BP_ReplayController_C.OnPossess
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ReplayController_C::OnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayController.BP_ReplayController_C.OnPossess");

	ABP_ReplayController_C_OnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayController.BP_ReplayController_C.ExecuteUbergraph_BP_ReplayController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayController_C::ExecuteUbergraph_BP_ReplayController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayController.BP_ReplayController_C.ExecuteUbergraph_BP_ReplayController");

	ABP_ReplayController_C_ExecuteUbergraph_BP_ReplayController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
