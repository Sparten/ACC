// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FinalHotLapResultItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_FinalHotLapResultItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Construct");

	UWDG_FinalHotLapResultItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_FinalHotLapResultItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.Tick");

	UWDG_FinalHotLapResultItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.ExecuteUbergraph_WDG_FinalHotLapResultItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_FinalHotLapResultItem_C::ExecuteUbergraph_WDG_FinalHotLapResultItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FinalHotLapResultItem.WDG_FinalHotLapResultItem_C.ExecuteUbergraph_WDG_FinalHotLapResultItem");

	UWDG_FinalHotLapResultItem_C_ExecuteUbergraph_WDG_FinalHotLapResultItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
