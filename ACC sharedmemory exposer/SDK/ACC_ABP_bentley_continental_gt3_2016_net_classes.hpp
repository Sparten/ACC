#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_net.ABP_bentley_continental_gt3_2016_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_bentley_continental_gt3_2016_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_657C7CD742C9B09F32DD31998CFAC6F6;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B1F287F4DC2230B07BE6E9532A90A63;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09457FF44C8A745447CE70963E6CEEB6;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C76F1024D100D8F4EF7B9B5DCA9EE48;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95F9544E42993941469AD1AAF8497D58;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AB38E914F6FBC895B498FBD6F1E5AD6;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B292A9C44C865C5F9B6FAAAF82D15F93;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_861268D4448257FAEC0C7F963A8D9630;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_039FC4BB4032CF977FA94BAAE380309D;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADA41A6749793BCAF1680EB92BEF3336;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D24A44E4F73E10468D9FEA2D600FC75;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5BECCFE458ABF81345BFB98E29EC363;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_853F2A4C4F26339F4811FC88CC648A9A;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B7579C344436CF82706D1BC585DB93F;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_886FB84B472530661CEFE0AE6500DC24;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FE9239D4580D77BD7848D884FBC55D4;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06BA13BE44747640AA1FBC9F938A22F0;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA6EEFDB439BB50FAE211885337E17FD;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52734ED34B71D4F341408089BDD53642;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0FF1126F485A47981445ED8CA3A05160;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52C2E1024CC37EEE217EE1BABEE2A945;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FBCF1367492B349ED361AE84359B5BAF;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D965EC354886F64314348AA6E4FBD1AE;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_554E775242E98AF5CBDA13A6B2AE2544;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_net.ABP_bentley_continental_gt3_2016_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_3AB38E914F6FBC895B498FBD6F1E5AD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_95F9544E42993941469AD1AAF8497D58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_B292A9C44C865C5F9B6FAAAF82D15F93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_861268D4448257FAEC0C7F963A8D9630();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_SequencePlayer_ADA41A6749793BCAF1680EB92BEF3336();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_1C76F1024D100D8F4EF7B9B5DCA9EE48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_SequencePlayer_3B7579C344436CF82706D1BC585DB93F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_09457FF44C8A745447CE70963E6CEEB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_BlendSpacePlayer_52734ED34B71D4F341408089BDD53642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_BlendSpacePlayer_52C2E1024CC37EEE217EE1BABEE2A945();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net_AnimGraphNode_TransitionResult_7B1F287F4DC2230B07BE6E9532A90A63();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
