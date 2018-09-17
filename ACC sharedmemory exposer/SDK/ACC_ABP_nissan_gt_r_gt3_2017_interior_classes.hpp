#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_interior.ABP_nissan_gt_r_gt3_2017_interior_C
// 0x0DD0 (0x1180 - 0x03B0)
class UABP_nissan_gt_r_gt3_2017_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9E54E0D34190350CD9771CA417FA22FE;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_489035774987A296C207B0975DC2ADC1;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0D1828B5447C41978C899B923F8949BB;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8C84BD842E839C609B307953F855B45;// 0x0490(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5FD605024CD97DFFEE14029964AE9E4B;// 0x0540(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_670E305A40C7A48B9E454889BBCD3D96;// 0x0658(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_17799BAC4D1B3903D165C0B4906A1406;// 0x06C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_66CE37CC474FB5FDB1C906B8F4C158C4;// 0x07E0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1513FAB7416C5AD1C51390B2EAB3DEA0;// 0x08F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81F06BBE4F06A40A3B37E9A49332B2AA;// 0x09A8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D369C22042C8CA4AF4AFAFABFE45806D;// 0x0A58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5E331B2245A8425DC16E8B9BBD5AC3DA;// 0x0AA0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_81DCF59348DBEC6B65B301AC1F713B88;// 0x0C00(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9FB818CA4D2A98491DE02493CF0C5C5B;// 0x0C30(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8E3399AA45D0E45F496BF592FF1250D8;// 0x0CA0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1B09E37F4FAD97BD7B4F60AE292280A0;// 0x0DB8(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_809D32AC4FB8F79E1EBBBABBFACE0E10;// 0x0ED0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F2008CB54B7BF8546FC5A2BC17B9DA9C;// 0x0F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2E7D83594B085BB4DA9BC8BB4FD96B1E;// 0x1058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7CC73B3B48059BC89209A48EE792AFFD;// 0x10A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_interior.ABP_nissan_gt_r_gt3_2017_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_SequencePlayer_81F06BBE4F06A40A3B37E9A49332B2AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_SequencePlayer_1513FAB7416C5AD1C51390B2EAB3DEA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_SequenceEvaluator_670E305A40C7A48B9E454889BBCD3D96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_ModifyBone_5E331B2245A8425DC16E8B9BBD5AC3DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_TransitionResult_489035774987A296C207B0975DC2ADC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_SequenceEvaluator_9FB818CA4D2A98491DE02493CF0C5C5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior_AnimGraphNode_SequenceEvaluator_809D32AC4FB8F79E1EBBBABBFACE0E10();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
