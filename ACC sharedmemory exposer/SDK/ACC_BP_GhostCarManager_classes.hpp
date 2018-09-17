#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_GhostCarManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GhostCarManager.BP_GhostCarManager_C
// 0x0008 (0x1FB0 - 0x1FA8)
class ABP_GhostCarManager_C : public AGhostCarManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GhostCarManager.BP_GhostCarManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
