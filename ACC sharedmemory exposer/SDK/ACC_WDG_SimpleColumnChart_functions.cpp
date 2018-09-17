// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleColumnChart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddColumn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWDG_SimpleColumnChartColumn_C* col                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWDG_SimpleColumnChart_C::WDG_AddColumn(class UWDG_SimpleColumnChartColumn_C* col)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddColumn");

	UWDG_SimpleColumnChart_C_WDG_AddColumn_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddSpacer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_SimpleColumnChart_C::WDG_AddSpacer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.WDG_AddSpacer");

	UWDG_SimpleColumnChart_C_WDG_AddSpacer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.AddColumn
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SimpleColumnChart_C::AddColumn(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.AddColumn");

	UWDG_SimpleColumnChart_C_AddColumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ClearColumns
// (Event, Public, BlueprintEvent)

void UWDG_SimpleColumnChart_C::ClearColumns()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ClearColumns");

	UWDG_SimpleColumnChart_C_ClearColumns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ExecuteUbergraph_WDG_SimpleColumnChart
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SimpleColumnChart_C::ExecuteUbergraph_WDG_SimpleColumnChart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleColumnChart.WDG_SimpleColumnChart_C.ExecuteUbergraph_WDG_SimpleColumnChart");

	UWDG_SimpleColumnChart_C_ExecuteUbergraph_WDG_SimpleColumnChart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
