// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_MainPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_MainPage.WDG_MainPage_C.ExecuteUbergraph_WDG_MainPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_MainPage_C::ExecuteUbergraph_WDG_MainPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_MainPage.WDG_MainPage_C.ExecuteUbergraph_WDG_MainPage");

	UWDG_MainPage_C_ExecuteUbergraph_WDG_MainPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
