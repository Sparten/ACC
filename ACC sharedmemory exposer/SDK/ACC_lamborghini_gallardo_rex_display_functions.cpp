// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lamborghini_gallardo_rex_display_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.MaskOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ulamborghini_gallardo_rex_display_C::MaskOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.MaskOpacity");

	Ulamborghini_gallardo_rex_display_C_MaskOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulamborghini_gallardo_rex_display_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.Tick");

	Ulamborghini_gallardo_rex_display_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.ExecuteUbergraph_lamborghini_gallardo_rex_display
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulamborghini_gallardo_rex_display_C::ExecuteUbergraph_lamborghini_gallardo_rex_display(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex_display.lamborghini_gallardo_rex_display_C.ExecuteUbergraph_lamborghini_gallardo_rex_display");

	Ulamborghini_gallardo_rex_display_C_ExecuteUbergraph_lamborghini_gallardo_rex_display_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
