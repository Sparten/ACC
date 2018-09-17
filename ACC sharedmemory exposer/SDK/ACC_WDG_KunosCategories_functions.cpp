// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_KunosCategories_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_KunosCategories.WDG_KunosCategories_C.SetCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKunosDriverCategory           Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_KunosCategories_C::SetCategory(EKunosDriverCategory Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_KunosCategories.WDG_KunosCategories_C.SetCategory");

	UWDG_KunosCategories_C_SetCategory_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_KunosCategories.WDG_KunosCategories_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_KunosCategories_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_KunosCategories.WDG_KunosCategories_C.Construct");

	UWDG_KunosCategories_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_KunosCategories.WDG_KunosCategories_C.ExecuteUbergraph_WDG_KunosCategories
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_KunosCategories_C::ExecuteUbergraph_WDG_KunosCategories(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_KunosCategories.WDG_KunosCategories_C.ExecuteUbergraph_WDG_KunosCategories");

	UWDG_KunosCategories_C_ExecuteUbergraph_WDG_KunosCategories_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
