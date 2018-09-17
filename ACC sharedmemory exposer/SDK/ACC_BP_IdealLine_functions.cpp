// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_IdealLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IdealLine.BP_IdealLine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IdealLine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdealLine.BP_IdealLine_C.UserConstructionScript");

	ABP_IdealLine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IdealLine.BP_IdealLine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IdealLine_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdealLine.BP_IdealLine_C.ReceiveTick");

	ABP_IdealLine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_IdealLine.BP_IdealLine_C.ExecuteUbergraph_BP_IdealLine
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_IdealLine_C::ExecuteUbergraph_BP_IdealLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_IdealLine.BP_IdealLine_C.ExecuteUbergraph_BP_IdealLine");

	ABP_IdealLine_C_ExecuteUbergraph_BP_IdealLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
