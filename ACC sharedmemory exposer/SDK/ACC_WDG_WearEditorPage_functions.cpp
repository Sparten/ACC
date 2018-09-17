// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_WearEditorPage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_WearEditorPage.WDG_WearEditorPage_C.AnimDriver
// (Event, Protected, BlueprintEvent)

void UWDG_WearEditorPage_C::AnimDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_WearEditorPage.WDG_WearEditorPage_C.AnimDriver");

	UWDG_WearEditorPage_C_AnimDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_WearEditorPage.WDG_WearEditorPage_C.ExecuteUbergraph_WDG_WearEditorPage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_WearEditorPage_C::ExecuteUbergraph_WDG_WearEditorPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_WearEditorPage.WDG_WearEditorPage_C.ExecuteUbergraph_WDG_WearEditorPage");

	UWDG_WearEditorPage_C_ExecuteUbergraph_WDG_WearEditorPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
