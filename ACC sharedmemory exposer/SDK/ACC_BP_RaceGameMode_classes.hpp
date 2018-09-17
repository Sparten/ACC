#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_RaceGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RaceGameMode.BP_RaceGameMode_C
// 0x0038 (0x0798 - 0x0760)
class ABP_RaceGameMode_C : public AAcRaceGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUltra_Dynamic_Sky_BP_C*                     Sky;                                                      // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       TempCar;                                                  // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADirectionalLight*                           DirectionLight;                                           // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugIndex;                                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UBP_GameInstance_C*                          Instance;                                                 // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RaceGameMode.BP_RaceGameMode_C");
		return ptr;
	}


	void StepTrackVariable(const struct FString& VarName, bool Increment);
	void UserConstructionScript();
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_RaceGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
