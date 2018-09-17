#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_cable.ABP_lamborghini_gallardo_rex_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_lamborghini_gallardo_rex_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9274A7F44C65D11FB278D095253F729A;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_216B6FF442BDD72CD93C5BACA89A74B6;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8847727D402E37AF624BAA823AE0E1C3;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC9CE4E74102C0842C30378C2A3BF3DB;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BC7F9E7A445EA2B52982BD9C59721AF5;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_06E6A97F4472A1699760129D68362E2D;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_007E11EE4FA687AD6E6EA084F0AA80F8;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4A23B6714FB3C4BBBACF53AEC2375495;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD068031458FED45B434DDB2F19141E3;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C3113A8F4481489CAB6D60B31129FB1D;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_cable.ABP_lamborghini_gallardo_rex_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_cable_AnimGraphNode_BlendSpacePlayer_007E11EE4FA687AD6E6EA084F0AA80F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_cable_AnimGraphNode_BlendSpacePlayer_06E6A97F4472A1699760129D68362E2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_cable_AnimGraphNode_TransitionResult_216B6FF442BDD72CD93C5BACA89A74B6();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
