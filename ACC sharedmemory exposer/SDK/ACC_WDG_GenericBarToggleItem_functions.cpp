// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericBarToggleItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_GenericBarToggleItem_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseOver");

	UWDG_GenericBarToggleItem_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_GenericBarToggleItem_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_MouseLeave");

	UWDG_GenericBarToggleItem_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsSelected
// (Event, Protected, BlueprintEvent)

void UWDG_GenericBarToggleItem_C::BP_IsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsSelected");

	UWDG_GenericBarToggleItem_C_BP_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericBarToggleItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.Construct");

	UWDG_GenericBarToggleItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsUnSelected
// (Event, Protected, BlueprintEvent)

void UWDG_GenericBarToggleItem_C::BP_IsUnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_IsUnSelected");

	UWDG_GenericBarToggleItem_C_BP_IsUnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_UpdateState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsElementActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericBarToggleItem_C::BP_UpdateState(bool* IsElementActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.BP_UpdateState");

	UWDG_GenericBarToggleItem_C_BP_UpdateState_Params params;
	params.IsElementActive = IsElementActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.ExecuteUbergraph_WDG_GenericBarToggleItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericBarToggleItem_C::ExecuteUbergraph_WDG_GenericBarToggleItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarToggleItem.WDG_GenericBarToggleItem_C.ExecuteUbergraph_WDG_GenericBarToggleItem");

	UWDG_GenericBarToggleItem_C_ExecuteUbergraph_WDG_GenericBarToggleItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
