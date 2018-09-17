// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FinalRaceStandingItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_FinalRaceStandingItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C.Construct");

	UWDG_FinalRaceStandingItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C.ExecuteUbergraph_WDG_FinalRaceStandingItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_FinalRaceStandingItem_C::ExecuteUbergraph_WDG_FinalRaceStandingItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C.ExecuteUbergraph_WDG_FinalRaceStandingItem");

	UWDG_FinalRaceStandingItem_C_ExecuteUbergraph_WDG_FinalRaceStandingItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
