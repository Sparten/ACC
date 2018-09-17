#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_interior.ABP_bmw_m6_gt3_interior_C
// 0x0938 (0x0CE8 - 0x03B0)
class UABP_bmw_m6_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8DA15E7B40621891203E39AE7DE010DA;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72B7DD3F4748476F95D5148097FAB1FA;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9AFFB0BD4E418400E0C347BF2E614F2E;// 0x0490(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DE59C5844706E53DB2A775B5F79D7025;// 0x0540(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_81ABB223430DFA28D4936FA91D2C6D33;// 0x0588(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_ABE419D1473527CEECA8A0A491E5261A;// 0x06E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A42A6944A35B15F498E8186722613BA;// 0x0718(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1A25F32740A6B41BB5876BB350031FBE;// 0x07C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D91F24094196396D945F9184177886C7;// 0x08E0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F722240448A56F47940AF5919FD5D054;// 0x09F8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10391FAF40654EC661E249AEE4DFA210;// 0x0B10(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_45449FB34EA76D16008FA68E5BC57A57;// 0x0BC0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F10DE6FA4206ACDDE90E14BF7D372FDB;// 0x0C08(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_interior.ABP_bmw_m6_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_interior_AnimGraphNode_SequencePlayer_9AFFB0BD4E418400E0C347BF2E614F2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_interior_AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_interior_AnimGraphNode_ModifyBone_81ABB223430DFA28D4936FA91D2C6D33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_interior_AnimGraphNode_SequencePlayer_4A42A6944A35B15F498E8186722613BA();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
