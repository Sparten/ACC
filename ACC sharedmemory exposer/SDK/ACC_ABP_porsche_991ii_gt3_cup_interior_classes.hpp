#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_porsche_991ii_gt3_cup_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_porsche_991ii_gt3_cup_interior.ABP_porsche_991ii_gt3_cup_interior_C
// 0x0DD0 (0x1180 - 0x03B0)
class UABP_porsche_991ii_gt3_cup_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_12205F1246F75FC6F3341A8DB4770563;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A45719C9433B6015EC38009B8AABC2B2;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92F4163847BFE517527D0286CC5AA2F3;// 0x0490(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_41525A2A461A6FA4C4CF90A7985E9BCE;// 0x0540(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8C9D26A84071D54BBAC2128FEEFF6E7E;// 0x0658(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1FE5C0D14E42DA3E0847BA9D284FDF87;// 0x06C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EF08831C448559C6F2915580A25A6679;// 0x07E0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_375825B3403689089984B880DAEE0FB0;// 0x08F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A9BE7FE4ACEAAC836B2FD8759BC7A30;// 0x09A8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F4611E6249537499BC9F918C7FDFFDEA;// 0x0A58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_63818B7E443FE189F6FCFABD26196FCC;// 0x0AA0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_153271A646F10BBEA6A31EBBD18ABFAF;// 0x0C00(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_326C07F241A48B481C82E7BE37A69F3C;// 0x0C30(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CA56FC624276049C74A1DC8EC46AA59E;// 0x0CA0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AA2DB454463E8C23044F4FA931233A6F;// 0x0DB8(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_53F78C134EF06C62FD6C1CB394B5CDE8;// 0x0ED0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FF5FB2B947BB49B587C4E79555A98593;// 0x0F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C99FE4F34EF43B2FA6A3D7933D056007;// 0x1058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_87966E524D31FF6B39D0DD81B239E502;// 0x10A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_porsche_991ii_gt3_cup_interior.ABP_porsche_991ii_gt3_cup_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_ModifyBone_63818B7E443FE189F6FCFABD26196FCC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_SequencePlayer_6A9BE7FE4ACEAAC836B2FD8759BC7A30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_SequencePlayer_375825B3403689089984B880DAEE0FB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_SequenceEvaluator_8C9D26A84071D54BBAC2128FEEFF6E7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_TransitionResult_A45719C9433B6015EC38009B8AABC2B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_SequenceEvaluator_326C07F241A48B481C82E7BE37A69F3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior_AnimGraphNode_SequenceEvaluator_53F78C134EF06C62FD6C1CB394B5CDE8();
	void ExecuteUbergraph_ABP_porsche_991ii_gt3_cup_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
