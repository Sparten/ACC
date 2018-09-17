#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ACCUtils_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ACCUtils.BP_ACCUtils_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ACCUtils_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ACCUtils.BP_ACCUtils_C");
		return ptr;
	}


	void STATIC_ACC_MS_TO_KMH(float MS, class UObject* __WorldContext, float* KMH);
	void STATIC_ACC_GetPlayerCarAvatar(class UObject* __WorldContext, class ACarAvatar** CarAvatar);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
