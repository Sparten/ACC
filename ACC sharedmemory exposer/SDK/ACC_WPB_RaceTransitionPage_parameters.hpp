#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WPB_RaceTransitionPage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.EndFade
struct UWPB_RaceTransitionPage_C_EndFade_Params
{
	float*                                             timeMult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.StartFade
struct UWPB_RaceTransitionPage_C_StartFade_Params
{
	float*                                             timeMult;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.Construct
struct UWPB_RaceTransitionPage_C_Construct_Params
{
};

// Function WPB_RaceTransitionPage.WPB_RaceTransitionPage_C.ExecuteUbergraph_WPB_RaceTransitionPage
struct UWPB_RaceTransitionPage_C_ExecuteUbergraph_WPB_RaceTransitionPage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
