// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_CarTeamDriverSelectionPanelNew_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_CarTeamDriverSelectionPanelNew_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.BP_MouseLeave");

	UWDG_CarTeamDriverSelectionPanelNew_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_CarTeamDriverSelectionPanelNew_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.BP_MouseOver");

	UWDG_CarTeamDriverSelectionPanelNew_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.ExecuteUbergraph_WDG_CarTeamDriverSelectionPanelNew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_CarTeamDriverSelectionPanelNew_C::ExecuteUbergraph_WDG_CarTeamDriverSelectionPanelNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarTeamDriverSelectionPanelNew.WDG_CarTeamDriverSelectionPanelNew_C.ExecuteUbergraph_WDG_CarTeamDriverSelectionPanelNew");

	UWDG_CarTeamDriverSelectionPanelNew_C_ExecuteUbergraph_WDG_CarTeamDriverSelectionPanelNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
