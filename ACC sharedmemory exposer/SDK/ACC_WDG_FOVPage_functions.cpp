// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FOVPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeMultiplierText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_FOVPage_C::Get_TimeMultiplierText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeMultiplierText_Text_1");

	UWDG_FOVPage_C_Get_TimeMultiplierText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_FOVPage.WDG_FOVPage_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_FOVPage_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FOVPage.WDG_FOVPage_C.GetText_1");

	UWDG_FOVPage_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeSlider_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWDG_FOVPage_C::Get_TimeSlider_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeSlider_Value_1");

	UWDG_FOVPage_C_Get_TimeSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_FOVPage.WDG_FOVPage_C.Get_TotalTime_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_FOVPage_C::Get_TotalTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FOVPage.WDG_FOVPage_C.Get_TotalTime_Text_1");

	UWDG_FOVPage_C_Get_TotalTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_FOVPage.WDG_FOVPage_C.Get_CurrentTime_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_FOVPage_C::Get_CurrentTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_FOVPage.WDG_FOVPage_C.Get_CurrentTime_Text_1");

	UWDG_FOVPage_C_Get_CurrentTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
