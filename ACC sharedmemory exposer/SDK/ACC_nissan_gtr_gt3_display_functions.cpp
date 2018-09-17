// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_nissan_gtr_gt3_display_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Get_Black_Mask_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Unissan_gtr_gt3_display_C::Get_Black_Mask_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Get_Black_Mask_ColorAndOpacity_1");

	Unissan_gtr_gt3_display_C_Get_Black_Mask_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unissan_gtr_gt3_display_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.Tick");

	Unissan_gtr_gt3_display_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.ExecuteUbergraph_nissan_gtr_gt3_display
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unissan_gtr_gt3_display_C::ExecuteUbergraph_nissan_gtr_gt3_display(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function nissan_gtr_gt3_display.nissan_gtr_gt3_display_C.ExecuteUbergraph_nissan_gtr_gt3_display");

	Unissan_gtr_gt3_display_C_ExecuteUbergraph_nissan_gtr_gt3_display_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
