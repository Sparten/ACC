// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_audi_r8_lms_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function audi_r8_lms.audi_r8_lms_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aaudi_r8_lms_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function audi_r8_lms.audi_r8_lms_C.UserConstructionScript");

	Aaudi_r8_lms_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function audi_r8_lms.audi_r8_lms_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aaudi_r8_lms_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function audi_r8_lms.audi_r8_lms_C.ReceiveBeginPlay");

	Aaudi_r8_lms_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function audi_r8_lms.audi_r8_lms_C.ExecuteUbergraph_audi_r8_lms
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaudi_r8_lms_C::ExecuteUbergraph_audi_r8_lms(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function audi_r8_lms.audi_r8_lms_C.ExecuteUbergraph_audi_r8_lms");

	Aaudi_r8_lms_C_ExecuteUbergraph_audi_r8_lms_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
