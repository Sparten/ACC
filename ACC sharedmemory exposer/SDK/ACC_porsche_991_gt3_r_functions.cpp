// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_porsche_991_gt3_r_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function porsche_991_gt3_r.porsche_991_gt3_r_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aporsche_991_gt3_r_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r.porsche_991_gt3_r_C.UserConstructionScript");

	Aporsche_991_gt3_r_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function porsche_991_gt3_r.porsche_991_gt3_r_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aporsche_991_gt3_r_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r.porsche_991_gt3_r_C.ReceiveBeginPlay");

	Aporsche_991_gt3_r_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function porsche_991_gt3_r.porsche_991_gt3_r_C.ExecuteUbergraph_porsche_991_gt3_r
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aporsche_991_gt3_r_C::ExecuteUbergraph_porsche_991_gt3_r(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991_gt3_r.porsche_991_gt3_r_C.ExecuteUbergraph_porsche_991_gt3_r");

	Aporsche_991_gt3_r_C_ExecuteUbergraph_porsche_991_gt3_r_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
