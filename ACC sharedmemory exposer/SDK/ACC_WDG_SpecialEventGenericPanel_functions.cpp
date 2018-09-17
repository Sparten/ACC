// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SpecialEventGenericPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_SpecialEventGenericPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.BP_MouseOver");

	UWDG_SpecialEventGenericPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_SpecialEventGenericPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.BP_MouseLeave");

	UWDG_SpecialEventGenericPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.ExecuteUbergraph_WDG_SpecialEventGenericPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SpecialEventGenericPanel_C::ExecuteUbergraph_WDG_SpecialEventGenericPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SpecialEventGenericPanel.WDG_SpecialEventGenericPanel_C.ExecuteUbergraph_WDG_SpecialEventGenericPanel");

	UWDG_SpecialEventGenericPanel_C_ExecuteUbergraph_WDG_SpecialEventGenericPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
