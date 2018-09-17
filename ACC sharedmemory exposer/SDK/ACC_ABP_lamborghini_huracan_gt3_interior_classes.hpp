#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_huracan_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_huracan_gt3_interior.ABP_lamborghini_huracan_gt3_interior_C
// 0x0C48 (0x0FF8 - 0x03B0)
class UABP_lamborghini_huracan_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D12D2B04E2C1F92AF0BF8B5FFD230F2;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x0448(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99;// 0x0490(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5C0CB67249C4A2E8D966EBB8FB2169BE;// 0x0500(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A8B73AC74B867A9897DBC6AA26D2EFCB;// 0x0618(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6;// 0x0730(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42;// 0x07E0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5F0125EE4984E0BA18E74C99A8452394;// 0x0890(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4;// 0x08D8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8F5D7D594A92C8F5741C23962A98D345;// 0x0A38(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8;// 0x0A68(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3175A64741F2A912929E35A60FEF4F58;// 0x0AD8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A115205A4EE63892EF51029391AEC6E9;// 0x0BF0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6E885E9C4E031387DB8AA487E722B576;// 0x0D08(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2386DB6243A0782B157819AD3DCA28F7;// 0x0E20(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75CFDA094B0404C5F3049791356AEAE0;// 0x0ED0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F776C58B4947CFD0E6F72F84673730EA;// 0x0F18(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_huracan_gt3_interior.ABP_lamborghini_huracan_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_SequencePlayer_40E23D67413E541ACE3080B9A5151D42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_SequencePlayer_D3635B074849BD7853D8AB807DC664F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_SequenceEvaluator_860DE58749881E58D847CCABEF9D4F99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_ModifyBone_5171AAAC491F3A71C20FDFB387EB60E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior_AnimGraphNode_SequenceEvaluator_1CB1A78B4A889871DF7D3C92F79B51F8();
	void ExecuteUbergraph_ABP_lamborghini_huracan_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
