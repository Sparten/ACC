// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_OptionsPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_OptionsPanel.WDG_OptionsPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_OptionsPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_OptionsPanel.WDG_OptionsPanel_C.BP_MouseOver");

	UWDG_OptionsPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_OptionsPanel.WDG_OptionsPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_OptionsPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_OptionsPanel.WDG_OptionsPanel_C.BP_MouseLeave");

	UWDG_OptionsPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_OptionsPanel.WDG_OptionsPanel_C.ExecuteUbergraph_WDG_OptionsPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_OptionsPanel_C::ExecuteUbergraph_WDG_OptionsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_OptionsPanel.WDG_OptionsPanel_C.ExecuteUbergraph_WDG_OptionsPanel");

	UWDG_OptionsPanel_C_ExecuteUbergraph_WDG_OptionsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
