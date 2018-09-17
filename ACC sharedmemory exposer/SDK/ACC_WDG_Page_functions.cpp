// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_Page_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_Page.WDG_Page_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_Page_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_Page.WDG_Page_C.Construct");

	UWDG_Page_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_Page.WDG_Page_C.ExecuteUbergraph_WDG_Page
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_Page_C::ExecuteUbergraph_WDG_Page(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_Page.WDG_Page_C.ExecuteUbergraph_WDG_Page");

	UWDG_Page_C_ExecuteUbergraph_WDG_Page_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
