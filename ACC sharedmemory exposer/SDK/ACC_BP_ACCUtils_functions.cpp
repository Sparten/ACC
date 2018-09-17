// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ACCUtils_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ACCUtils.BP_ACCUtils_C.ACC_MS_TO_KMH
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MS                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          KMH                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ACCUtils_C::STATIC_ACC_MS_TO_KMH(float MS, class UObject* __WorldContext, float* KMH)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACCUtils.BP_ACCUtils_C.ACC_MS_TO_KMH");

	UBP_ACCUtils_C_ACC_MS_TO_KMH_Params params;
	params.MS = MS;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KMH != nullptr)
		*KMH = params.KMH;
}


// Function BP_ACCUtils.BP_ACCUtils_C.ACC_GetPlayerCarAvatar
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACarAvatar*              CarAvatar                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ACCUtils_C::STATIC_ACC_GetPlayerCarAvatar(class UObject* __WorldContext, class ACarAvatar** CarAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ACCUtils.BP_ACCUtils_C.ACC_GetPlayerCarAvatar");

	UBP_ACCUtils_C_ACC_GetPlayerCarAvatar_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CarAvatar != nullptr)
		*CarAvatar = params.CarAvatar;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
