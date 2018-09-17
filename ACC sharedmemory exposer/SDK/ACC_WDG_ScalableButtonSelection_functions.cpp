// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ScalableButtonSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_ScalableButtonSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.Construct");

	UWDG_ScalableButtonSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_ScalableButtonSelection_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.BP_MouseOver");

	UWDG_ScalableButtonSelection_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_ScalableButtonSelection_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.BP_MouseLeave");

	UWDG_ScalableButtonSelection_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.ExecuteUbergraph_WDG_ScalableButtonSelection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_ScalableButtonSelection_C::ExecuteUbergraph_WDG_ScalableButtonSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ScalableButtonSelection.WDG_ScalableButtonSelection_C.ExecuteUbergraph_WDG_ScalableButtonSelection");

	UWDG_ScalableButtonSelection_C_ExecuteUbergraph_WDG_ScalableButtonSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
