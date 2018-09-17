// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_TestLoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_TB_Loading_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_TestLoadingScreen_C::Get_TB_Loading_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_TB_Loading_Text_1");

	UWBP_TestLoadingScreen_C_Get_TB_Loading_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_IMG_BackGround_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_TestLoadingScreen_C::Get_IMG_BackGround_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Get_IMG_BackGround_Brush_1");

	UWBP_TestLoadingScreen_C_Get_IMG_BackGround_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TestLoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.Construct");

	UWBP_TestLoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.ExecuteUbergraph_WBP_TestLoadingScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TestLoadingScreen_C::ExecuteUbergraph_WBP_TestLoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TestLoadingScreen.WBP_TestLoadingScreen_C.ExecuteUbergraph_WBP_TestLoadingScreen");

	UWBP_TestLoadingScreen_C_ExecuteUbergraph_WBP_TestLoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
