// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_LoadingScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_OpponentsCar_txt_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LoadingScreen_C::Get_OpponentsCar_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_OpponentsCar_txt_Text_1");

	UWBP_LoadingScreen_C_Get_OpponentsCar_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TextBlock_3_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LoadingScreen_C::Get_TextBlock_3_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TextBlock_3_Text_1");

	UWBP_LoadingScreen_C_Get_TextBlock_3_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_SessionType_txt
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_LoadingScreen_C::Get_SessionType_txt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_SessionType_txt");

	UWBP_LoadingScreen_C_Get_SessionType_txt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TB_Loading_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_LoadingScreen_C::Get_TB_Loading_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_TB_Loading_Text_1");

	UWBP_LoadingScreen_C_Get_TB_Loading_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_IMG_BackGround_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_LoadingScreen_C::Get_IMG_BackGround_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Get_IMG_BackGround_Brush_1");

	UWBP_LoadingScreen_C_Get_IMG_BackGround_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct");

	UWBP_LoadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadingScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.Tick");

	UWBP_LoadingScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen");

	UWBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
