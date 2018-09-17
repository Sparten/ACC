// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleAreaChart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWDG_SimpleAreaChart_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.OnPaint");

	UWDG_SimpleAreaChart_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_SimpleAreaChart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.Construct");

	UWDG_SimpleAreaChart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.ExecuteUbergraph_WDG_SimpleAreaChart
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_SimpleAreaChart_C::ExecuteUbergraph_WDG_SimpleAreaChart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_SimpleAreaChart.WDG_SimpleAreaChart_C.ExecuteUbergraph_WDG_SimpleAreaChart");

	UWDG_SimpleAreaChart_C_ExecuteUbergraph_WDG_SimpleAreaChart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
