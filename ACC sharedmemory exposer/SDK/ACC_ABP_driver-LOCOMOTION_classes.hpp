#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_driver-LOCOMOTION_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_driver-LOCOMOTION.ABP_driver-LOCOMOTION_C
// 0x0C88 (0x0FE8 - 0x0360)
class UABP_driver_LOCOMOTION_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_23A0D86346D587E809C00AB16F5B1826;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB2A2B94435D9EB9F5164E80AD5E6B35;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E036AFCD4475AED4E7C7DCB2211A1893;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03E46414445C6BB4CF85CFBC51A10B08;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65BB6EA94C23E0B1D82F42B761CA1E1A;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A2A51F64438B36C99004AFAB4A0B1686;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26C5CF834A3E9FFA35F2C5AD0B77EBB3;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4DD8E144863DE3E03056C83375815C6;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C82135B41FD05D7D8DB6D8536895916;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BBAF124447DA42EA918E5BA3B7B6A44;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_488B98A442605575BDC3B6B9B6A88CD1;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3A638144DADBE9FBFFED9BE5CE4CCD5;// 0x0680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_178DD2844F243405086D0E919B9182D0;// 0x06C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D4AECA54436F4B421D12AB1F325E105;// 0x0778(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DAE190F4AD4C80A13AC4085AA11CBEA;// 0x07C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A09B17EF475E7F5DCE3A37A0337F9950;// 0x0870(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_564424AF4625BEBA10FBF8B63E51D037;// 0x08B8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7C0ACC4142AAAC447F8C55875C35CA3A;// 0x0968(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA01E23246B1C41B8B8C21B985D7498E;// 0x09B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9C3D49834796B9A1F22020BDCFCD3664;// 0x0A60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFDC6D2C41B15C01ACEB3BB0CB2FB891;// 0x0AA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_15DF6DA045532EBF057F068F89ABFC05;// 0x0B58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08C75B394CC554B193A506B1A3E41104;// 0x0BA0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_89C0A6E54AADD081AD246C9D8ECAD71B;// 0x0C50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B559B68454C3B7D075CE9B7441B5707;// 0x0C98(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7069D0564C658CB147CDEDA60903309E;// 0x0D48(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2E9B0C7941EF4880C0FCB5997189D408;// 0x0D90(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_742AFAF94426BCE67EA45798D13103E3;// 0x0EB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D2C3800A44769251E1B1B7BD05B6895F;// 0x0F00(0x00E0)
	bool                                               Arm_on_hips;                                              // 0x0FE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Arm_Cross;                                                // 0x0FE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Open_GLASS;                                               // 0x0FE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Adjust_Gloves;                                            // 0x0FE3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingDriverSpeed;                                       // 0x0FE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_driver-LOCOMOTION.ABP_driver-LOCOMOTION_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_A2A51F64438B36C99004AFAB4A0B1686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_26C5CF834A3E9FFA35F2C5AD0B77EBB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_C4DD8E144863DE3E03056C83375815C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_9C82135B41FD05D7D8DB6D8536895916();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_E036AFCD4475AED4E7C7DCB2211A1893();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_7BBAF124447DA42EA918E5BA3B7B6A44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_488B98A442605575BDC3B6B9B6A88CD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_B3A638144DADBE9FBFFED9BE5CE4CCD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_03E46414445C6BB4CF85CFBC51A10B08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_AB2A2B94435D9EB9F5164E80AD5E6B35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_TransitionResult_65BB6EA94C23E0B1D82F42B761CA1E1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_driver_LOCOMOTION_AnimGraphNode_BlendSpacePlayer_2E9B0C7941EF4880C0FCB5997189D408();
	void ExecuteUbergraph_ABP_driver_LOCOMOTION(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
