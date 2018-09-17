#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_audi_r8_lms_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_audi_r8_lms_net.ABP_audi_r8_lms_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_audi_r8_lms_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A053139E49904DE26C754D91C6A15B66;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_02E3515142C70227EB4727851D5BA92D;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71DA64B44B96EA0481FCE1A2DFDFFFA5;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8584CC8E4662A10B3AFDE6909F43A58F;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6843DE074651E98B9206F0B7970FCCF8;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7AA0BC8C4A9BEEFF3066039548AA77DC;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81302F674875F30391909ABB63490549;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9860A8A74C3DB0449FD6F8824FB66368;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7672A7E4582CFEF8CA6F4A427C27E85;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F12A7F8461185C80360B4892A74C5BE;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_864331A44F95E54BBBB3FDACC463873D;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0119271D4D844423D91A64931D1510A5;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9A5F4F864FC63A22911532ACEE9A9FDA;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_756BB9324FAFB466E3EE3AB402F5877D;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56A39D0E40718286D92472822BE8A9B9;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E5D35808432B07C99090A9AF2834782F;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0C296FD24A0340C0D529849A18DD0396;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_audi_r8_lms_net.ABP_audi_r8_lms_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_SequencePlayer_71DA64B44B96EA0481FCE1A2DFDFFFA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_SequencePlayer_81302F674875F30391909ABB63490549();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_BlendSpacePlayer_0119271D4D844423D91A64931D1510A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_BlendSpacePlayer_756BB9324FAFB466E3EE3AB402F5877D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_net_AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400();
	void ExecuteUbergraph_ABP_audi_r8_lms_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
