// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ReplayPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_ReplayPanel.WDG_ReplayPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_ReplayPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ReplayPanel.WDG_ReplayPanel_C.BP_MouseOver");

	UWDG_ReplayPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ReplayPanel.WDG_ReplayPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_ReplayPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ReplayPanel.WDG_ReplayPanel_C.BP_MouseLeave");

	UWDG_ReplayPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ReplayPanel.WDG_ReplayPanel_C.ExecuteUbergraph_WDG_ReplayPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_ReplayPanel_C::ExecuteUbergraph_WDG_ReplayPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ReplayPanel.WDG_ReplayPanel_C.ExecuteUbergraph_WDG_ReplayPanel");

	UWDG_ReplayPanel_C_ExecuteUbergraph_WDG_ReplayPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
