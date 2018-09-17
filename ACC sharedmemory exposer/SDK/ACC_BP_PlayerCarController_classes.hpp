#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_PlayerCarController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCarController.BP_PlayerCarController_C
// 0x002C (0x07B4 - 0x0788)
class ABP_PlayerCarController_C : public APlayerCarController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0788(0x0008) (Transient, DuplicateTransient)
	class UObject*                                     PhysicsHUD;                                               // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_CinemaHud_C*                            CinemaHUD;                                                // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWBP_Replay_C*                               ReplayHUD_1;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Ingamepause;                                              // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TelemetryHUDIndex;                                        // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCarController.BP_PlayerCarController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_ShowHideCameraTool_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerCarController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
