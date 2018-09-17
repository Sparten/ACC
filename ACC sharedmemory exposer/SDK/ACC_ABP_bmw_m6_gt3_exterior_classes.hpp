#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_exterior.ABP_bmw_m6_gt3_exterior_C
// 0x1DD0 (0x2180 - 0x03B0)
class UABP_bmw_m6_gt3_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C252724941A9B87BC2C6B69A62E5F69B;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_55D3AD9C4127F5D0AE8148A62816DAE4;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_46E0119F4BFDD9A255FEF1BA4FFE0A99;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9E318C79424E1B385EE8F0AFF1BD22A9;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5DADC07F4ED047666552D8A42AC4445A;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A931664E4C224841A675A5AF510DE4B5;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BA29B884B60355FE055D59FCA731815;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DE7BB6C44A925A2712FF629EDB73AECE;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E07BA2C4EF9279C256338AF3B1CCEE2;// 0x0BA8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_54120381448C4C22BE4221BDC126C756;// 0x0D08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7B7DB9644CC12610750E3098B3B8322E;// 0x0E68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6B05C2334C4F7A112107CE8FDDF807FE;// 0x0FC8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BEB72F414AD6C4AC1F22B4B32D4EE897;// 0x1128(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9ECD72194830B30904639781D5C14156;// 0x1288(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9E4F68514A7C6826096F4F929EEA1161;// 0x13E8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_3D44E3304D8417F9DCE9DCB0B461FE2F;// 0x1548(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0D32AA4D4FC044E9C4494BA199192D03;// 0x1578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3A00E7A8406B85B690AB1FA247B0AA0D;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C76E2FE54D0CD58A8C1C7BAA2C7F7BAF;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A34E643147C4F6727B3D2EBE1B1AEDE7;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_576A82BD4740FA4BFA933FBB50259213;// 0x19E0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_341ECABB4D755B76F9FC449A561B98A0;// 0x1B40(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D89119524850FC6657DF798261AD60F0;// 0x1BB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84A278334C7219FCD12B96990E491899;// 0x1CC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8ACEB4F54F6DB2359FB480A99EECBD6D;// 0x1D78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BD794CD4E29A4BF7F37C9B76275EEA1;// 0x1E90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_33EB5A764657EFEE2726C3A8346170AF;// 0x1F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_25D2BF5E48BBAF066366C1BDE6A8E2A0;// 0x2058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A5EAF2BB4587F7391824D8B8B32AB50A;// 0x20A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_exterior.ABP_bmw_m6_gt3_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_3A00E7A8406B85B690AB1FA247B0AA0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_C76E2FE54D0CD58A8C1C7BAA2C7F7BAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_A34E643147C4F6727B3D2EBE1B1AEDE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_576A82BD4740FA4BFA933FBB50259213();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_SequenceEvaluator_341ECABB4D755B76F9FC449A561B98A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_SequencePlayer_84A278334C7219FCD12B96990E491899();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_SequencePlayer_2BD794CD4E29A4BF7F37C9B76275EEA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_BEB72F414AD6C4AC1F22B4B32D4EE897();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_6B05C2334C4F7A112107CE8FDDF807FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_7B7DB9644CC12610750E3098B3B8322E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_54120381448C4C22BE4221BDC126C756();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_6E07BA2C4EF9279C256338AF3B1CCEE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_DE7BB6C44A925A2712FF629EDB73AECE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_7BA29B884B60355FE055D59FCA731815();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_A931664E4C224841A675A5AF510DE4B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_9E4F68514A7C6826096F4F929EEA1161();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_5DADC07F4ED047666552D8A42AC4445A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_9E318C79424E1B385EE8F0AFF1BD22A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_ModifyBone_9ECD72194830B30904639781D5C14156();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_exterior_AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
