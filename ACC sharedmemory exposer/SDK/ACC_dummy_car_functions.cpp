// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_dummy_car_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dummy_car.dummy_car_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Adummy_car_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dummy_car.dummy_car_C.UserConstructionScript");

	Adummy_car_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dummy_car.dummy_car_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Adummy_car_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dummy_car.dummy_car_C.ReceiveBeginPlay");

	Adummy_car_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dummy_car.dummy_car_C.ExecuteUbergraph_dummy_car
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adummy_car_C::ExecuteUbergraph_dummy_car(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dummy_car.dummy_car_C.ExecuteUbergraph_dummy_car");

	Adummy_car_C_ExecuteUbergraph_dummy_car_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
