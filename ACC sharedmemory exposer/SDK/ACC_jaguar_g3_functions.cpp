// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_jaguar_g3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function jaguar_g3.jaguar_g3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ajaguar_g3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function jaguar_g3.jaguar_g3_C.UserConstructionScript");

	Ajaguar_g3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function jaguar_g3.jaguar_g3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ajaguar_g3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function jaguar_g3.jaguar_g3_C.ReceiveBeginPlay");

	Ajaguar_g3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function jaguar_g3.jaguar_g3_C.ExecuteUbergraph_jaguar_g3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ajaguar_g3_C::ExecuteUbergraph_jaguar_g3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function jaguar_g3.jaguar_g3_C.ExecuteUbergraph_jaguar_g3");

	Ajaguar_g3_C_ExecuteUbergraph_jaguar_g3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
