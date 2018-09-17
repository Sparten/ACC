// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_TrackSelectionPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.BP_PlayVideo
// (Event, Public, BlueprintEvent)

void UWDG_TrackSelectionPage_C::BP_PlayVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.BP_PlayVideo");

	UWDG_TrackSelectionPage_C_BP_PlayVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_TrackSelectionPage_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.Destruct");

	UWDG_TrackSelectionPage_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.ExecuteUbergraph_WDG_TrackSelectionPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_TrackSelectionPage_C::ExecuteUbergraph_WDG_TrackSelectionPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_TrackSelectionPage.WDG_TrackSelectionPage_C.ExecuteUbergraph_WDG_TrackSelectionPage");

	UWDG_TrackSelectionPage_C_ExecuteUbergraph_WDG_TrackSelectionPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
