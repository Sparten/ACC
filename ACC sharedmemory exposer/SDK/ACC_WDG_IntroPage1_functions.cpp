// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_IntroPage1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_IntroPage1.WDG_IntroPage1_C.BP_PlayVideo
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsUE4Video                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_IntroPage1_C::BP_PlayVideo(bool* IsUE4Video)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_IntroPage1.WDG_IntroPage1_C.BP_PlayVideo");

	UWDG_IntroPage1_C_BP_PlayVideo_Params params;
	params.IsUE4Video = IsUE4Video;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_IntroPage1.WDG_IntroPage1_C.BP_StopVideo
// (Event, Public, BlueprintEvent)

void UWDG_IntroPage1_C::BP_StopVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_IntroPage1.WDG_IntroPage1_C.BP_StopVideo");

	UWDG_IntroPage1_C_BP_StopVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_IntroPage1.WDG_IntroPage1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_IntroPage1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_IntroPage1.WDG_IntroPage1_C.Construct");

	UWDG_IntroPage1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_IntroPage1.WDG_IntroPage1_C.SwitchIndexChange
// (Event, Public, BlueprintEvent)

void UWDG_IntroPage1_C::SwitchIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_IntroPage1.WDG_IntroPage1_C.SwitchIndexChange");

	UWDG_IntroPage1_C_SwitchIndexChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_IntroPage1.WDG_IntroPage1_C.ExecuteUbergraph_WDG_IntroPage1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_IntroPage1_C::ExecuteUbergraph_WDG_IntroPage1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_IntroPage1.WDG_IntroPage1_C.ExecuteUbergraph_WDG_IntroPage1");

	UWDG_IntroPage1_C_ExecuteUbergraph_WDG_IntroPage1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
