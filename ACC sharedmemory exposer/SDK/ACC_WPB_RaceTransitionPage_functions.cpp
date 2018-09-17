// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WPB_RaceTransitionPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.EndFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         timeMult                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWPB_RaceTransitionPage_C::EndFade(float* timeMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.EndFade");

	UWPB_RaceTransitionPage_C_EndFade_Params params;
	params.timeMult = timeMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.StartFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         timeMult                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWPB_RaceTransitionPage_C::StartFade(float* timeMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.StartFade");

	UWPB_RaceTransitionPage_C_StartFade_Params params;
	params.timeMult = timeMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWPB_RaceTransitionPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.Construct");

	UWPB_RaceTransitionPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.ExecuteUbergraph_WPB_RaceTransitionPage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWPB_RaceTransitionPage_C::ExecuteUbergraph_WPB_RaceTransitionPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.ExecuteUbergraph_WPB_RaceTransitionPage");

	UWPB_RaceTransitionPage_C_ExecuteUbergraph_WPB_RaceTransitionPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
