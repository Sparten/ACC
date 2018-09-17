// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_GenericBarItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_GenericBarItem.WDG_GenericBarItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_GenericBarItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarItem.WDG_GenericBarItem_C.Construct");

	UWDG_GenericBarItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarItem.WDG_GenericBarItem_C.BP_UpdateActivity
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericBarItem_C::BP_UpdateActivity(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarItem.WDG_GenericBarItem_C.BP_UpdateActivity");

	UWDG_GenericBarItem_C_BP_UpdateActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_GenericBarItem.WDG_GenericBarItem_C.ExecuteUbergraph_WDG_GenericBarItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_GenericBarItem_C::ExecuteUbergraph_WDG_GenericBarItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_GenericBarItem.WDG_GenericBarItem_C.ExecuteUbergraph_WDG_GenericBarItem");

	UWDG_GenericBarItem_C_ExecuteUbergraph_WDG_GenericBarItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
