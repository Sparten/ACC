#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_net.ABP_nissan_gt_r_gt3_2017_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_nissan_gt_r_gt3_2017_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD22C9964E85E0CCC5104592CA899DF9;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F563CF8844995FF39439278D90E2A4CB;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08F0466D4A28C71863A872BCAFAA7BA4;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_83AA80D448CEFEC36FA320B34EA7D80D;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7751357748EDE72A79CBC3833AE0659C;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5AE4BBF84D5FF6ED3070A6B187634D14;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19A0282D47F4619C3859738BB41A1851;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_49B782C44125D66760672A9366C3253E;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2C34F7B4C3ED7BFEFA4099D354CC168;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F42BCF89494B9AD36EFFA4BA17A07FB1;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6E1B0AE344BD4B74C652DAB56C2EF18A;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C4F983ED42216F71DB3FBB95EF0832B0;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_57A73AEC44AC57D28F12769C4CF64830;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47146B1143BD050ACB6ED5899DF9E18E;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4FBEB81D45409F8F76CF85A93EE6BBCE;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F8FEF7B84D64F7F4BD52B9862B3BC7EE;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EE7F3060450832D3A1D101AB23AA6770;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_net.ABP_nissan_gt_r_gt3_2017_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_SequencePlayer_08F0466D4A28C71863A872BCAFAA7BA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_SequencePlayer_19A0282D47F4619C3859738BB41A1851();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_BlendSpacePlayer_C4F983ED42216F71DB3FBB95EF0832B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_BlendSpacePlayer_47146B1143BD050ACB6ED5899DF9E18E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net_AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
