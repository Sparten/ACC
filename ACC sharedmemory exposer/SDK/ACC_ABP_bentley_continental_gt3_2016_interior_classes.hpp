#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_interior.ABP_bentley_continental_gt3_2016_interior_C
// 0x0938 (0x0CE8 - 0x03B0)
class UABP_bentley_continental_gt3_2016_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_35155F514F0C0F4FD1764196E3291504;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F64542964E6274BCF319EDAF4995114A;// 0x0448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB98212D44F84C4B04E6E4BE362F3CB6;// 0x0490(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_72CDECD648BF98D87598AB931ECD6C5D;// 0x0540(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95BD7920475AC130BDED1ABB2F71FC55;// 0x0588(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F86E1D3047B9EE25F66F1E8217BD8E17;// 0x06E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55AE56E0447255A7D0FDD8A07A66F0F5;// 0x0718(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0A5A06A944F1F20E8A20BEA12B11EA60;// 0x07C8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_291BD56C465858A4E2427AB70085964C;// 0x08E0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_42AD5E064A19BB7E4E3BE0A0FF225EE6;// 0x09F8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71C0FA5845E7B107824C08B47B842B3E;// 0x0B10(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2746007044C3AF2D6102DAAD0A1A5836;// 0x0BC0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4E921C3940E0402BA163DE93F5FCEF06;// 0x0C08(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_interior.ABP_bentley_continental_gt3_2016_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_interior_AnimGraphNode_SequencePlayer_BB98212D44F84C4B04E6E4BE362F3CB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_interior_AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_interior_AnimGraphNode_ModifyBone_95BD7920475AC130BDED1ABB2F71FC55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_interior_AnimGraphNode_SequencePlayer_55AE56E0447255A7D0FDD8A07A66F0F5();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
