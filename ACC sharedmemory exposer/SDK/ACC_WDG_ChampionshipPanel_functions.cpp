// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ChampionshipPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_ChampionshipPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.BP_MouseLeave");

	UWDG_ChampionshipPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_ChampionshipPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.BP_MouseOver");

	UWDG_ChampionshipPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.ExecuteUbergraph_WDG_ChampionshipPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_ChampionshipPanel_C::ExecuteUbergraph_WDG_ChampionshipPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ChampionshipPanel.WDG_ChampionshipPanel_C.ExecuteUbergraph_WDG_ChampionshipPanel");

	UWDG_ChampionshipPanel_C_ExecuteUbergraph_WDG_ChampionshipPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
