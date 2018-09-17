#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_MenuGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C
// 0x0010 (0x06B0 - 0x06A0)
class ABP_MenuGameMode_C : public AAcMenuGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_MenuGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
