// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Box_Monza_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Box_Monza.Box_Monza_C.ChangeLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABox_Monza_C::ChangeLights(bool LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Box_Monza.Box_Monza_C.ChangeLights");

	ABox_Monza_C_ChangeLights_Params params;
	params.LightOn = LightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Box_Monza.Box_Monza_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABox_Monza_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Box_Monza.Box_Monza_C.UserConstructionScript");

	ABox_Monza_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Box_Monza.Box_Monza_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABox_Monza_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Box_Monza.Box_Monza_C.ReceiveTick");

	ABox_Monza_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Box_Monza.Box_Monza_C.ExecuteUbergraph_Box_Monza
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABox_Monza_C::ExecuteUbergraph_Box_Monza(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Box_Monza.Box_Monza_C.ExecuteUbergraph_Box_Monza");

	ABox_Monza_C_ExecuteUbergraph_Box_Monza_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
