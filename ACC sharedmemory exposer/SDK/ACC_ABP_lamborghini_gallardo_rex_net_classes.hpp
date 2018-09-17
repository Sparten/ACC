#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_net.ABP_lamborghini_gallardo_rex_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_lamborghini_gallardo_rex_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CC3B94064827DE20BF71F8803F2F53A4;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_554378974835952A23753F8D44D459E2;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48F90EA54B3487BF3637348AF0356C08;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D1E461A46862944A33F658F093C1559;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83F1CB714FEB3C607E90DDA580B220B2;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_281E5AB04B0ABEF99447C6BED5B2F0B9;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ACBAB9504972CF6CE5C72C99B5E1F54E;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_95EBEA5C4BC376550F9AE3B866BAC457;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6467C51343CFE46FBBC7EA912A378BEA;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FDDAE803459448CC1EC0C2A414B6831B;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2146A51A4180EEEFCD96E6A76565FE14;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_565A4F4A44AFE3F7079B61A271739842;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A1C9F0374AC0F96A521143BDC98D7E02;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AAE5E0C04F8DA944CE3AA39E1C7AC8B8;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8F0050AB49347EFE4050D28F192E0500;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E8E62C68464FF957482D73A9B3F29273;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F63BA42C41E4260CC139619E2E534F32;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_net.ABP_lamborghini_gallardo_rex_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_SequencePlayer_48F90EA54B3487BF3637348AF0356C08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_SequencePlayer_ACBAB9504972CF6CE5C72C99B5E1F54E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_BlendSpacePlayer_565A4F4A44AFE3F7079B61A271739842();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_BlendSpacePlayer_AAE5E0C04F8DA944CE3AA39E1C7AC8B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net_AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
