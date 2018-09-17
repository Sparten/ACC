#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_interior.ABP_lamborghini_gallardo_rex_interior_C
// 0x0C48 (0x0FF8 - 0x03B0)
class UABP_lamborghini_gallardo_rex_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_32E2135748AFA498988BE7A543B80C43;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6BFABCA4416AF6381A114EA0A1450B39;// 0x0448(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B839977346DA6EDF62287BA22805A120;// 0x0490(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5F668AD64E58B2563B555D9E8B51CBC8;// 0x0500(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D5072C504A58A1B73B620BA2BDB414F5;// 0x0618(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0692FD414EE594320847F19DC5726210;// 0x0730(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05F95E3A42911D17CCB89DA42EB17343;// 0x07E0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B75506544FB733282AC50A89A3E13F82;// 0x0890(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1572D09B4C5398754E5946B379504EE6;// 0x08D8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_2D07D73044AF1924B7591EB822FE0187;// 0x0A38(0x0030)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6DDD49104AAA12AB77C72BBA6A49BFBB;// 0x0A68(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1003614D47B5C2898BAD1C8EDF8B41EC;// 0x0AD8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F97019B4F7FEC71B2A56B83543A7E72;// 0x0BF0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DAB7CC0443B458246A5237992929002C;// 0x0D08(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FEEFFC63406B8A88616B2AABA1058870;// 0x0E20(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2781702841A31D8DEF0B3681D3521288;// 0x0ED0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_23AF43A14ED7FEBBE268E79D37361CAA;// 0x0F18(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_interior.ABP_lamborghini_gallardo_rex_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_SequencePlayer_05F95E3A42911D17CCB89DA42EB17343();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_SequencePlayer_0692FD414EE594320847F19DC5726210();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_SequenceEvaluator_B839977346DA6EDF62287BA22805A120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_TransitionResult_407FE760400984EDF40E6BBDBE5B0AC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_ModifyBone_1572D09B4C5398754E5946B379504EE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior_AnimGraphNode_SequenceEvaluator_6DDD49104AAA12AB77C72BBA6A49BFBB();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
