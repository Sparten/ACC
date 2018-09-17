#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_cable.ABP_bentley_continental_gt3_2016_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_bentley_continental_gt3_2016_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C42FE4EC440810D7B80A32A7205F5659;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_096940E649910AFC3B4B87B36BC76043;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFF473A9499A0B3C2241FE85B4363B2A;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_543509F3444B31454FF856B488D6A56F;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2565FBBA4205378E3984E4850365F09C;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_33A8F40A45E558C5CC7F09945B454770;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C57A2154170FC16612E55AE6C092341;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E684A2184156C85BF959FE852B493A6A;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_232913284FABA2B9B83BCDBA2C44C24D;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FE2AA5A6485BFD7DEED5FB85EF166829;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_cable.ABP_bentley_continental_gt3_2016_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_cable_AnimGraphNode_BlendSpacePlayer_4C57A2154170FC16612E55AE6C092341();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_cable_AnimGraphNode_BlendSpacePlayer_33A8F40A45E558C5CC7F09945B454770();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_cable_AnimGraphNode_TransitionResult_096940E649910AFC3B4B87B36BC76043();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
