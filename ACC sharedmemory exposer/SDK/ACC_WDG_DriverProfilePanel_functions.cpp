// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_DriverProfilePanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UWDG_DriverProfilePanel_C::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.BP_MouseOver");

	UWDG_DriverProfilePanel_C_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UWDG_DriverProfilePanel_C::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.BP_MouseLeave");

	UWDG_DriverProfilePanel_C_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_DriverProfilePanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.Construct");

	UWDG_DriverProfilePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_DriverProfilePanel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.PreConstruct");

	UWDG_DriverProfilePanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.ExecuteUbergraph_WDG_DriverProfilePanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_DriverProfilePanel_C::ExecuteUbergraph_WDG_DriverProfilePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_DriverProfilePanel.WDG_DriverProfilePanel_C.ExecuteUbergraph_WDG_DriverProfilePanel");

	UWDG_DriverProfilePanel_C_ExecuteUbergraph_WDG_DriverProfilePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
