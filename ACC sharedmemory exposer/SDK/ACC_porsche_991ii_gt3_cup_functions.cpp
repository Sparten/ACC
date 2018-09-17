// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_porsche_991ii_gt3_cup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aporsche_991ii_gt3_cup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.UserConstructionScript");

	Aporsche_991ii_gt3_cup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aporsche_991ii_gt3_cup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.ReceiveBeginPlay");

	Aporsche_991ii_gt3_cup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.ExecuteUbergraph_porsche_991ii_gt3_cup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aporsche_991ii_gt3_cup_C::ExecuteUbergraph_porsche_991ii_gt3_cup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function porsche_991ii_gt3_cup.porsche_991ii_gt3_cup_C.ExecuteUbergraph_porsche_991ii_gt3_cup");

	Aporsche_991ii_gt3_cup_C_ExecuteUbergraph_porsche_991ii_gt3_cup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
