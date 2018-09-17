// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericSelectorItemFitToParentBlack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericSelectorItemFitToParentBlack.WDG_GenericSelectorItemFitToParentBlack_C.OptionLineHasUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWDG_GenericSelectorItemFitToParentBlack_C::OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericSelectorItemFitToParentBlack.WDG_GenericSelectorItemFitToParentBlack_C.OptionLineHasUpdate__DelegateSignature");

	UWDG_GenericSelectorItemFitToParentBlack_C_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
