#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mercedes_amg_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_interior.ABP_mercedes_amg_gt3_interior_C
// 0x0DD0 (0x1180 - 0x03B0)
class UABP_mercedes_amg_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C572E63F48752D6D3C7CBA9BFEB02CE9;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_822713374BE35054FA7A8FB858087318;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F3C53147498600AA6F2A85A9A8EEAD19;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B6EA5E14B0F7970520C22A787613B55;// 0x0490(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FB04593642555F9C84DAA1921AD6F32E;// 0x0540(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1FFF3B734941957B2A65E5881E23A464;// 0x0658(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_340FA1744F774CEEC7159CA1FE34BB50;// 0x06C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D063F0F54B769D0756C29A8AA914C95E;// 0x07E0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1259D44B4D65A1B27CE83FB1E25EE339;// 0x08F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13BB673E4EF087E683A6BD9317243A6D;// 0x09A8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_08CA8D1F424EEEBF4C49C7855A712198;// 0x0A58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_065987D248C95CDC0292BDBCD8D7501E;// 0x0AA0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_14F412EB48797A417834C4AD86A1015D;// 0x0C00(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7498D3BF4BEC9C3C463E0DB2340BC2FD;// 0x0C30(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1D6C231D47DDF4558920CDAA97785E9C;// 0x0CA0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_574D61644B610EE68C3C529D33FD0A0F;// 0x0DB8(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9E0EEED44CF14F995B882CB3710F7053;// 0x0ED0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CCA372794AC42B38E9555784FDDB258C;// 0x0F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B5A60E6D4BD7AC5C3E1685A0CA6DB9D7;// 0x1058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3D944B0D479A618E04D081BE8AC806DE;// 0x10A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_interior.ABP_mercedes_amg_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_ModifyBone_065987D248C95CDC0292BDBCD8D7501E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_SequencePlayer_13BB673E4EF087E683A6BD9317243A6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_SequencePlayer_1259D44B4D65A1B27CE83FB1E25EE339();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_SequenceEvaluator_1FFF3B734941957B2A65E5881E23A464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_TransitionResult_822713374BE35054FA7A8FB858087318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_SequenceEvaluator_7498D3BF4BEC9C3C463E0DB2340BC2FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_interior_AnimGraphNode_SequenceEvaluator_9E0EEED44CF14F995B882CB3710F7053();
	void ExecuteUbergraph_ABP_mercedes_amg_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
