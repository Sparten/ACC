#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_ReplayController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReplayController.BP_ReplayController_C
// 0x0008 (0x0710 - 0x0708)
class ABP_ReplayController_C : public AReplayController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReplayController.BP_ReplayController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnPossess();
	void ExecuteUbergraph_BP_ReplayController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
