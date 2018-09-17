// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_porsche_991_gt3_r_display_small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.MaskOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uporsche_991_gt3_r_display_small_C::MaskOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.MaskOpacity");

	Uporsche_991_gt3_r_display_small_C_MaskOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uporsche_991_gt3_r_display_small_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.Tick");

	Uporsche_991_gt3_r_display_small_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.ExecuteUbergraph_porsche_991_gt3_r_display_small
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uporsche_991_gt3_r_display_small_C::ExecuteUbergraph_porsche_991_gt3_r_display_small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r_display_small.porsche_991_gt3_r_display_small_C.ExecuteUbergraph_porsche_991_gt3_r_display_small");

	Uporsche_991_gt3_r_display_small_C_ExecuteUbergraph_porsche_991_gt3_r_display_small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
