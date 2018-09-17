// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lamborghini_huracan_gt3_2020_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alamborghini_huracan_gt3_2019_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.UserConstructionScript");

	Alamborghini_huracan_gt3_2019_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alamborghini_huracan_gt3_2019_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.ReceiveBeginPlay");

	Alamborghini_huracan_gt3_2019_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.ExecuteUbergraph_lamborghini_huracan_gt3_2020
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alamborghini_huracan_gt3_2019_C::ExecuteUbergraph_lamborghini_huracan_gt3_2020(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C.ExecuteUbergraph_lamborghini_huracan_gt3_2020");

	Alamborghini_huracan_gt3_2019_C_ExecuteUbergraph_lamborghini_huracan_gt3_2020_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
