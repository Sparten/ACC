// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_CarSelectionPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_CarSelectionPage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.PreConstruct");

	UWDG_CarSelectionPage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.PlaySequence
// (Event, Public, BlueprintEvent)

void UWDG_CarSelectionPage_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.PlaySequence");

	UWDG_CarSelectionPage_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.StopSequence
// (Event, Public, BlueprintEvent)

void UWDG_CarSelectionPage_C::StopSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.StopSequence");

	UWDG_CarSelectionPage_C_StopSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.BndEvt__Button_162_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWDG_CarSelectionPage_C::BndEvt__Button_162_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.BndEvt__Button_162_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWDG_CarSelectionPage_C_BndEvt__Button_162_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.ExecuteUbergraph_WDG_CarSelectionPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_CarSelectionPage_C::ExecuteUbergraph_WDG_CarSelectionPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_CarSelectionPage.WDG_CarSelectionPage_C.ExecuteUbergraph_WDG_CarSelectionPage");

	UWDG_CarSelectionPage_C_ExecuteUbergraph_WDG_CarSelectionPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
