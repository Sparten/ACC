#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_cable.ABP_nissan_gt_r_gt3_2017_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_nissan_gt_r_gt3_2017_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8C440ABA438485823ED7E881914EF88F;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FA7E441647996E73323A0A8416E02CE9;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFC67FB0405BA07F10C6EDABC8F144A2;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_23EC534249677192F4D8C0A49D82300F;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5E48DB0243F725E6E978C5A16E8F35CF;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_772C9F6044EAA4D7A3F4BAADF9C5142F;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_22B11FD547C0A47638F79ABBE03CE481;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F2C2749E4B9EB9F1DA850F9519DDCA9B;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A7C711614B2064FDDD9868A05517063F;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_cable.ABP_nissan_gt_r_gt3_2017_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_cable_AnimGraphNode_BlendSpacePlayer_772C9F6044EAA4D7A3F4BAADF9C5142F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_cable_AnimGraphNode_BlendSpacePlayer_5E48DB0243F725E6E978C5A16E8F35CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_cable_AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
