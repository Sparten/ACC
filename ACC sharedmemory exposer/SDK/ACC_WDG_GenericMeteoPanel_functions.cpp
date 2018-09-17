// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericMeteoPanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericMeteoPanel.WDG_GenericMeteoPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericMeteoPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericMeteoPanel.WDG_GenericMeteoPanel_C.Construct");

	UWDG_GenericMeteoPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericMeteoPanel.WDG_GenericMeteoPanel_C.ExecuteUbergraph_WDG_GenericMeteoPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericMeteoPanel_C::ExecuteUbergraph_WDG_GenericMeteoPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericMeteoPanel.WDG_GenericMeteoPanel_C.ExecuteUbergraph_WDG_GenericMeteoPanel");

	UWDG_GenericMeteoPanel_C_ExecuteUbergraph_WDG_GenericMeteoPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
