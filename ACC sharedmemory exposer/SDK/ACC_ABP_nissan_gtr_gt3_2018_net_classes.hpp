#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gtr_gt3_2018_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gtr_gt3_2018_net.ABP_nissan_gtr_gt3_2018_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_nissan_gtr_gt3_2018_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_96A388D0406B50D88462FE82B4F58697;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0EF33E024DB88505B3B1D684F7220571;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49DC0048409AA82DC22AB6B901E4795F;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7759A969433ADCCB2C7CD581C88024D7;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B669B644E5E9F2F3D6AF7A91AEDBF56;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F9223B44E77C29B03811B8C7077F345;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0534DEC140ABFF15E64188AD09250077;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B17577F44AB540E0C120819BADFE7277;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A93736854C15E5FCC339B19F158834CC;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_900276774012FC7B010E978480BAB1AC;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_642DDD9140F6B784C4802ABF4059912B;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_212188084FE09A8DC747CEA6B845D1E3;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1878F3994581CA4F14A2788C162B8B54;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_288D238C4EB283BFF11D9182DD8AA886;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4C9DD8D54511D410A667B8BD2919860E;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4103BB6E4F9F80A3F6748188FBDA16B6;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_47F169B74561E17085823CB7EABC2410;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gtr_gt3_2018_net.ABP_nissan_gtr_gt3_2018_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_SequencePlayer_49DC0048409AA82DC22AB6B901E4795F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_SequencePlayer_0534DEC140ABFF15E64188AD09250077();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_BlendSpacePlayer_212188084FE09A8DC747CEA6B845D1E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_BlendSpacePlayer_288D238C4EB283BFF11D9182DD8AA886();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net_AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400();
	void ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
