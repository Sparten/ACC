// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_nissan_gt_r_gt3_2019_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Anissan_gt_r_gt3_2018_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.UserConstructionScript");

	Anissan_gt_r_gt3_2018_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Anissan_gt_r_gt3_2018_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.ReceiveBeginPlay");

	Anissan_gt_r_gt3_2018_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.ExecuteUbergraph_nissan_gt_r_gt3_2019
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anissan_gt_r_gt3_2018_C::ExecuteUbergraph_nissan_gt_r_gt3_2019(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gt_r_gt3_2019.nissan_gt_r_gt3_2018_C.ExecuteUbergraph_nissan_gt_r_gt3_2019");

	Anissan_gt_r_gt3_2018_C_ExecuteUbergraph_nissan_gt_r_gt3_2019_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
