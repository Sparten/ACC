// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lexus_rcf_gt3_display_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.MaskOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ulexus_rcf_gt3_display_C::MaskOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.MaskOpacity");

	Ulexus_rcf_gt3_display_C_MaskOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulexus_rcf_gt3_display_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.Tick");

	Ulexus_rcf_gt3_display_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.ExecuteUbergraph_lexus_rcf_gt3_display
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulexus_rcf_gt3_display_C::ExecuteUbergraph_lexus_rcf_gt3_display(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lexus_rcf_gt3_display.lexus_rcf_gt3_display_C.ExecuteUbergraph_lexus_rcf_gt3_display");

	Ulexus_rcf_gt3_display_C_ExecuteUbergraph_lexus_rcf_gt3_display_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
