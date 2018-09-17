// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SetupPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SetupPage.WDG_SetupPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_SetupPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SetupPage.WDG_SetupPage_C.Construct");

	UWDG_SetupPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SetupPage.WDG_SetupPage_C.ExecuteUbergraph_WDG_SetupPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SetupPage_C::ExecuteUbergraph_WDG_SetupPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SetupPage.WDG_SetupPage_C.ExecuteUbergraph_WDG_SetupPage");

	UWDG_SetupPage_C_ExecuteUbergraph_WDG_SetupPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
