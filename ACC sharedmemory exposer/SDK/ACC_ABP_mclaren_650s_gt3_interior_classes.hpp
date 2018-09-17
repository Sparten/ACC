#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mclaren_650s_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_interior.ABP_mclaren_650s_gt3_interior_C
// 0x0DD0 (0x1180 - 0x03B0)
class UABP_mclaren_650s_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E366E9814FD0EA680233159F39D3845F;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F9650DDD4DD65E6E2CEBB2B6B377DC27;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2386DB6243A0782B157819AD3DCA28F7;// 0x0490(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6E885E9C4E031387DB8AA487E722B576;// 0x0540(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99;// 0x0658(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5C0CB67249C4A2E8D966EBB8FB2169BE;// 0x06C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A8B73AC74B867A9897DBC6AA26D2EFCB;// 0x07E0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6;// 0x08F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42;// 0x09A8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5F0125EE4984E0BA18E74C99A8452394;// 0x0A58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4;// 0x0AA0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8F5D7D594A92C8F5741C23962A98D345;// 0x0C00(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8;// 0x0C30(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3175A64741F2A912929E35A60FEF4F58;// 0x0CA0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A115205A4EE63892EF51029391AEC6E9;// 0x0DB8(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_DD90F7F54CE858C9B35E67A5BD812F14;// 0x0ED0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_87C9621540AE7F245CB0518D80F1A68D;// 0x0F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75CFDA094B0404C5F3049791356AEAE0;// 0x1058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B2A7EA0648776D9244E540A8720EFC66;// 0x10A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_interior.ABP_mclaren_650s_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_TransitionResult_F9650DDD4DD65E6E2CEBB2B6B377DC27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_interior_AnimGraphNode_SequenceEvaluator_DD90F7F54CE858C9B35E67A5BD812F14();
	void ExecuteUbergraph_ABP_mclaren_650s_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
