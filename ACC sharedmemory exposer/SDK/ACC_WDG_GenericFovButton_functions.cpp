// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericFovButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericFovButton.WDG_GenericFovButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericFovButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericFovButton.WDG_GenericFovButton_C.Construct");

	UWDG_GenericFovButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericFovButton.WDG_GenericFovButton_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_GenericFovButton_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericFovButton.WDG_GenericFovButton_C.BP_MouseOver");

	UWDG_GenericFovButton_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericFovButton.WDG_GenericFovButton_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_GenericFovButton_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericFovButton.WDG_GenericFovButton_C.BP_MouseLeave");

	UWDG_GenericFovButton_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericFovButton.WDG_GenericFovButton_C.ExecuteUbergraph_WDG_GenericFovButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericFovButton_C::ExecuteUbergraph_WDG_GenericFovButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericFovButton.WDG_GenericFovButton_C.ExecuteUbergraph_WDG_GenericFovButton");

	UWDG_GenericFovButton_C_ExecuteUbergraph_WDG_GenericFovButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
