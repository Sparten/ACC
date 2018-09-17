// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericSelectorItemFitToParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericSelectorItemFitToParent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.Construct");

	UWDG_GenericSelectorItemFitToParent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.ExecuteUbergraph_WDG_GenericSelectorItemFitToParent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericSelectorItemFitToParent_C::ExecuteUbergraph_WDG_GenericSelectorItemFitToParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.ExecuteUbergraph_WDG_GenericSelectorItemFitToParent");

	UWDG_GenericSelectorItemFitToParent_C_ExecuteUbergraph_WDG_GenericSelectorItemFitToParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.OptionLineHasUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWDG_GenericSelectorItemFitToParent_C::OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericSelectorItemFitToParent.WDG_GenericSelectorItemFitToParent_C.OptionLineHasUpdate__DelegateSignature");

	UWDG_GenericSelectorItemFitToParent_C_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
