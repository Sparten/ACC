#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_ferrari_488_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ferrari_488_gt3_interior.ABP_ferrari_488_gt3_interior_C
// 0x14B0 (0x1860 - 0x03B0)
class UABP_ferrari_488_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_97290B3B4BC04538434BA09B67F92C3D;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_489035774987A296C207B0975DC2ADC1;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x0448(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0EC32C0F4490A1A2FD498D9B01FC38BF;// 0x0490(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A4BE590F485C753E8899D592FC694A85;// 0x05F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A073432D455EF26713F0CD88F1A8D0F7;// 0x0750(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10DC11954D0CFC62C950D29B7B98ECD8;// 0x08B0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB257B27401641CE21708A9C375CDC07;// 0x0A10(0x0160)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2386DB6243A0782B157819AD3DCA28F7;// 0x0B70(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6E885E9C4E031387DB8AA487E722B576;// 0x0C20(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99;// 0x0D38(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5C0CB67249C4A2E8D966EBB8FB2169BE;// 0x0DA8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A8B73AC74B867A9897DBC6AA26D2EFCB;// 0x0EC0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6;// 0x0FD8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42;// 0x1088(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5F0125EE4984E0BA18E74C99A8452394;// 0x1138(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4;// 0x1180(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8F5D7D594A92C8F5741C23962A98D345;// 0x12E0(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8;// 0x1310(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3175A64741F2A912929E35A60FEF4F58;// 0x1380(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A115205A4EE63892EF51029391AEC6E9;// 0x1498(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DD90F7F54CE858C9B35E67A5BD812F14;// 0x15B0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_87C9621540AE7F245CB0518D80F1A68D;// 0x1620(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75CFDA094B0404C5F3049791356AEAE0;// 0x1738(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0F8FDE4C42077D6115A38BB595F17D84;// 0x1780(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ferrari_488_gt3_interior.ABP_ferrari_488_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_SequenceEvaluator_DD90F7F54CE858C9B35E67A5BD812F14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_BB257B27401641CE21708A9C375CDC07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_10DC11954D0CFC62C950D29B7B98ECD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_A073432D455EF26713F0CD88F1A8D0F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_A4BE590F485C753E8899D592FC694A85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_ModifyBone_0EC32C0F4490A1A2FD498D9B01FC38BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_interior_AnimGraphNode_TransitionResult_489035774987A296C207B0975DC2ADC1();
	void OnNotifyReceived(float* TimeDelay, int* Index);
	void ExecuteUbergraph_ABP_ferrari_488_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
