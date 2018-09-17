#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_net_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_net.ABP_bmw_m6_gt3_net_C
// 0x0CC8 (0x1058 - 0x0390)
class UABP_bmw_m6_gt3_net_C : public UAcCarProtectionNetAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D9905E3048C0752478F7BCB4D7EC5668;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C;// 0x0428(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C;// 0x0470(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7;// 0x04B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42;// 0x0500(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2;// 0x0548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4;// 0x0590(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF0908004B7B9C3B8A4F48B8BA46875F;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD16098F4B89269C3BCC328FEB3942BA;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_95AFF68F4A18A20286DDB2B60491D5A3;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F52780B431C0405D02083A77C17633C;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A8437A64AC0D8D701A7E4A6A503F1B7;// 0x07C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_04051E61499F3A8E240C518D026E21F6;// 0x0810(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F1B9153246E29D34E1329CA1B09117D8;// 0x08C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7875445A4FAC4F493CCD05B2B09DB329;// 0x0908(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B07CF05A40455F8B01A422BCC0F450B2;// 0x09B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_115A6D98440573C8CC8FCAB65349419D;// 0x0A00(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_272EA6E34A507C35FED0D6BBBF3C1194;// 0x0AB0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_18694C5F48197591E04065B41E44F88B;// 0x0BD8(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2ADC653946C18287DDC0F495A3A82FFB;// 0x0CF0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E3010BC64A0CA5C3BA15968FB9CA836E;// 0x0E18(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A65FA2714CE84A60E6B895A8B47CE1D1;// 0x0F30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7DF8E94C46D13FBDDDDC6185167D888C;// 0x0F78(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_net.ABP_bmw_m6_gt3_net_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_AEA04E7C450A89970D13E29235EA8E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_C2D37E9643D8DB552FC280ABAB5056E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_9A7AD78A44AC9B6944769E96573F53A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_69517CB2413FDAA14113B194F084ADE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_SequencePlayer_AD16098F4B89269C3BCC328FEB3942BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_2718C48447D6D79E62531CB57D54BC4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_SequencePlayer_04051E61499F3A8E240C518D026E21F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_1DDCBCAE4E53ADF5FFF2E6B8759EB74C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_BlendSpacePlayer_272EA6E34A507C35FED0D6BBBF3C1194();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_BlendSpacePlayer_2ADC653946C18287DDC0F495A3A82FFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_net_AnimGraphNode_TransitionResult_90427E544B7784D0E57E85985C09A400();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_net(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
