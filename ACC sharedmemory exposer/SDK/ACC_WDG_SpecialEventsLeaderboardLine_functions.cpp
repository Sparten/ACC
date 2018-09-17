// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SpecialEventsLeaderboardLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SpecialEventsLeaderboardLine.WDG_SpecialEventsLeaderboardLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_SpecialEventsLeaderboardLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SpecialEventsLeaderboardLine.WDG_SpecialEventsLeaderboardLine_C.Construct");

	UWDG_SpecialEventsLeaderboardLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SpecialEventsLeaderboardLine.WDG_SpecialEventsLeaderboardLine_C.ExecuteUbergraph_WDG_SpecialEventsLeaderboardLine
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SpecialEventsLeaderboardLine_C::ExecuteUbergraph_WDG_SpecialEventsLeaderboardLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SpecialEventsLeaderboardLine.WDG_SpecialEventsLeaderboardLine_C.ExecuteUbergraph_WDG_SpecialEventsLeaderboardLine");

	UWDG_SpecialEventsLeaderboardLine_C_ExecuteUbergraph_WDG_SpecialEventsLeaderboardLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
