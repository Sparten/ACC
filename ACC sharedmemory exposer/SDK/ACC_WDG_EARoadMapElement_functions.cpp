// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_EARoadMapElement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.SetInactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_EARoadMapElement_C::SetInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.SetInactive");

	UWDG_EARoadMapElement_C_SetInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.SetActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_EARoadMapElement_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.SetActive");

	UWDG_EARoadMapElement_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_EARoadMapElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.Construct");

	UWDG_EARoadMapElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.ExecuteUbergraph_WDG_EARoadMapElement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_EARoadMapElement_C::ExecuteUbergraph_WDG_EARoadMapElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_EARoadMapElement.WDG_EARoadMapElement_C.ExecuteUbergraph_WDG_EARoadMapElement");

	UWDG_EARoadMapElement_C_ExecuteUbergraph_WDG_EARoadMapElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
