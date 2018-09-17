// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_StartUpLoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Get_Loading_lbl_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_StartUpLoadingScreen_C::Get_Loading_lbl_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Get_Loading_lbl_Text_1");

	UWDG_StartUpLoadingScreen_C_Get_Loading_lbl_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_StartUpLoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.Construct");

	UWDG_StartUpLoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.ExecuteUbergraph_WDG_StartUpLoadingScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_StartUpLoadingScreen_C::ExecuteUbergraph_WDG_StartUpLoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_StartUpLoadingScreen.WDG_StartUpLoadingScreen_C.ExecuteUbergraph_WDG_StartUpLoadingScreen");

	UWDG_StartUpLoadingScreen_C_ExecuteUbergraph_WDG_StartUpLoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
