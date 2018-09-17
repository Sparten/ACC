// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_RacePausePage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RacePausePage.WBP_RacePausePage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RacePausePage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RacePausePage.WBP_RacePausePage_C.Construct");

	UWBP_RacePausePage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RacePausePage.WBP_RacePausePage_C.ExecuteUbergraph_WBP_RacePausePage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RacePausePage_C::ExecuteUbergraph_WBP_RacePausePage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RacePausePage.WBP_RacePausePage_C.ExecuteUbergraph_WBP_RacePausePage");

	UWBP_RacePausePage_C_ExecuteUbergraph_WBP_RacePausePage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
