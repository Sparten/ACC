// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_HelpInMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_HelpInMenu.WDG_HelpInMenu_C.BP_PlayInitAnimation
// (Event, Public, BlueprintEvent)

void UWDG_HelpInMenu_C::BP_PlayInitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_HelpInMenu.WDG_HelpInMenu_C.BP_PlayInitAnimation");

	UWDG_HelpInMenu_C_BP_PlayInitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_HelpInMenu.WDG_HelpInMenu_C.ExecuteUbergraph_WDG_HelpInMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_HelpInMenu_C::ExecuteUbergraph_WDG_HelpInMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_HelpInMenu.WDG_HelpInMenu_C.ExecuteUbergraph_WDG_HelpInMenu");

	UWDG_HelpInMenu_C_ExecuteUbergraph_WDG_HelpInMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
