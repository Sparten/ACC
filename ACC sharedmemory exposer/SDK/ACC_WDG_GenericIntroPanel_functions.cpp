// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericIntroPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericIntroPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.Construct");

	UWDG_GenericIntroPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericIntroPanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.PreConstruct");

	UWDG_GenericIntroPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_GenericIntroPanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseOver");

	UWDG_GenericIntroPanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_GenericIntroPanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.BP_MouseLeave");

	UWDG_GenericIntroPanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.ExecuteUbergraph_WDG_GenericIntroPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericIntroPanel_C::ExecuteUbergraph_WDG_GenericIntroPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericIntroPanel.WDG_GenericIntroPanel_C.ExecuteUbergraph_WDG_GenericIntroPanel");

	UWDG_GenericIntroPanel_C_ExecuteUbergraph_WDG_GenericIntroPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
