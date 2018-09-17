// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_Car_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Car.BP_Car_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Car_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.UserConstructionScript");

	ABP_Car_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Car.BP_Car_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Car_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.ReceiveBeginPlay");

	ABP_Car_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Car.BP_Car_C.ExecuteUbergraph_BP_Car
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Car_C::ExecuteUbergraph_BP_Car(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Car.BP_Car_C.ExecuteUbergraph_BP_Car");

	ABP_Car_C_ExecuteUbergraph_BP_Car_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
