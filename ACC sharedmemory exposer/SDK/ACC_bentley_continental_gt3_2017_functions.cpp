// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_bentley_continental_gt3_2017_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abentley_continental_gt3_2016_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.UserConstructionScript");

	Abentley_continental_gt3_2016_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abentley_continental_gt3_2016_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.ReceiveBeginPlay");

	Abentley_continental_gt3_2016_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.ExecuteUbergraph_bentley_continental_gt3_2017
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abentley_continental_gt3_2016_C::ExecuteUbergraph_bentley_continental_gt3_2017(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bentley_continental_gt3_2017.bentley_continental_gt3_2016_C.ExecuteUbergraph_bentley_continental_gt3_2017");

	Abentley_continental_gt3_2016_C_ExecuteUbergraph_bentley_continental_gt3_2017_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
