#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_belt.ABP_nissan_gt_r_gt3_2017_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_nissan_gt_r_gt3_2017_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_31058B4F4F660834B8A917A1B500A19E;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E01C8544EAC2FF103761197D5E736E8;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E80B8B04EB6C25BF297DD80EF3F3A2D;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5885B6654FD8A73BAF2C17A8FD410F55;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9AF860AB4C5F7872ACEFE79AB05F0923;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52A8250F4CEDD40FAEE53EB7801134A5;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FCA989994B7AA0B8C5993AAFE50CED7B;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80C3FCF14198DAD4462BA2B53D12AAFA;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_486A1C29433AC97FD1D541AB2C9E71D4;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A38A95BF4583E22CAF3091884C1CFB06;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_belt.ABP_nissan_gt_r_gt3_2017_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_belt_AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_belt_AnimGraphNode_TransitionResult_0E01C8544EAC2FF103761197D5E736E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_belt_AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_belt_AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
