#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_belt.ABP_bentley_continental_gt3_2016_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_bentley_continental_gt3_2016_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F58F8FA9475853B38039158C45805108;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7996B8D4587E60B7D993D87FE5D6FBD;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EF55F034396088898375E8252D2B261;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A30384214FFD70D7233BD783EED15940;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EDF69C0475A461F9FEF549E4AAAD36C;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_645CFE2B4C60DC7A99AB0E9D09AB5B73;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6AB76CC41BCE1C462009CB5604E5FF8;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB4861EF4CD15DC45E7E68B34A4192CD;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58F08E524701876DE047DE99B0FE2F39;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96E594C441795814C96C0288DBBACF38;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46CF73C34C7478184494999C882366C0;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E028A5C1492332F907258FA08F457E49;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A35195524C49C3B9CDB1CD8ED89EABCB;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_belt.ABP_bentley_continental_gt3_2016_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_belt_AnimGraphNode_TransitionResult_A30384214FFD70D7233BD783EED15940();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_belt_AnimGraphNode_TransitionResult_0EDF69C0475A461F9FEF549E4AAAD36C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_belt_AnimGraphNode_TransitionResult_A7996B8D4587E60B7D993D87FE5D6FBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_belt_AnimGraphNode_TransitionResult_9EF55F034396088898375E8252D2B261();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
