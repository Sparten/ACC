// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lamborghini_gallardo_rex_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alamborghini_gallardo_rex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.UserConstructionScript");

	Alamborghini_gallardo_rex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alamborghini_gallardo_rex_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.ReceiveBeginPlay");

	Alamborghini_gallardo_rex_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.ExecuteUbergraph_lamborghini_gallardo_rex
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alamborghini_gallardo_rex_C::ExecuteUbergraph_lamborghini_gallardo_rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lamborghini_gallardo_rex.lamborghini_gallardo_rex_C.ExecuteUbergraph_lamborghini_gallardo_rex");

	Alamborghini_gallardo_rex_C_ExecuteUbergraph_lamborghini_gallardo_rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
