// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_HotLapResultItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_HotLapResultItem.WDG_HotLapResultItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_HotLapResultItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_HotLapResultItem.WDG_HotLapResultItem_C.Construct");

	UWDG_HotLapResultItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_HotLapResultItem.WDG_HotLapResultItem_C.ExecuteUbergraph_WDG_HotLapResultItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_HotLapResultItem_C::ExecuteUbergraph_WDG_HotLapResultItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_HotLapResultItem.WDG_HotLapResultItem_C.ExecuteUbergraph_WDG_HotLapResultItem");

	UWDG_HotLapResultItem_C_ExecuteUbergraph_WDG_HotLapResultItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
