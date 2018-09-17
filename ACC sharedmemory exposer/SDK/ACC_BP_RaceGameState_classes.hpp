#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_RaceGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RaceGameState.BP_RaceGameState_C
// 0x0008 (0x0470 - 0x0468)
class ABP_RaceGameState_C : public AAcRaceGameState
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RaceGameState.BP_RaceGameState_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
