// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SinglePlayerLowerPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_SinglePlayerLowerPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.BP_MouseOver");

	UWDG_SinglePlayerLowerPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_SinglePlayerLowerPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.BP_MouseLeave");

	UWDG_SinglePlayerLowerPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.ExecuteUbergraph_WDG_SinglePlayerLowerPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SinglePlayerLowerPanel_C::ExecuteUbergraph_WDG_SinglePlayerLowerPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SinglePlayerLowerPanel.WDG_SinglePlayerLowerPanel_C.ExecuteUbergraph_WDG_SinglePlayerLowerPanel");

	UWDG_SinglePlayerLowerPanel_C_ExecuteUbergraph_WDG_SinglePlayerLowerPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
