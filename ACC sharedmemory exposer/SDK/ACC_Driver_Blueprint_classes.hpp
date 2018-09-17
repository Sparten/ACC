#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Driver_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Driver_Blueprint.Driver_Blueprint_C
// 0x0010 (0x0760 - 0x0750)
class ADriver_Blueprint_C : public ADriverAvatar
{
public:
	class UStaticMeshComponent*                        Driver_Head;                                              // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Driver_Helmet;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Driver_Blueprint.Driver_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
