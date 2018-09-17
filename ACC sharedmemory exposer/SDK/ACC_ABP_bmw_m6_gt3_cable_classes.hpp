#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_cable.ABP_bmw_m6_gt3_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_bmw_m6_gt3_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_96838B044A7405BC9B5CC29A16096535;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00E0D2074C9291BD03E193953598E468;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_938324784A11C6A482FCF68920680920;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C0F760642595D009131F8B3E99B472E;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A55FFB8B47AC8E83C3355CBDDFDF999B;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CD219DB648649AC0706607937ABA24AE;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DA0E69814F26F21D9AD03D8730594260;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_17622E4948246E18F96BA5A594C4608E;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F7AFECE41835E77362A9988C6F0E543;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_94A42BF5496D853C2BEAD8AEBFD82429;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_cable.ABP_bmw_m6_gt3_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_cable_AnimGraphNode_BlendSpacePlayer_DA0E69814F26F21D9AD03D8730594260();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_cable_AnimGraphNode_BlendSpacePlayer_CD219DB648649AC0706607937ABA24AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_cable_AnimGraphNode_TransitionResult_00E0D2074C9291BD03E193953598E468();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
