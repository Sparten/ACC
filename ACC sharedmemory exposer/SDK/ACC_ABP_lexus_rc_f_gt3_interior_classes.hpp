#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lexus_rc_f_gt3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lexus_rc_f_gt3_interior.ABP_lexus_rc_f_gt3_interior_C
// 0x05A8 (0x0958 - 0x03B0)
class UABP_lexus_rc_f_gt3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1F4E3F6248E7DDDC898B5495CADFF6A2;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_362D3FF24076FCA83D472EB09EE94B74;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D52DAEB24FFD59400DF348845A3086A9;// 0x0448(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0A592F2B42269BA56080149726A62ABD;// 0x0490(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BC67197346CFD7B4B40803AA7005B5F3;// 0x04C0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4017061B4BA232623E818CB5E164DDB5;// 0x0620(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F1DBB6A3427B325652EC0DB33A6CB4BE;// 0x0668(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A575EFFA4342DAA182BF65921F3DC452;// 0x0780(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D00CC144A8EAD459B7563A7F6789858;// 0x0830(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E50BEE7540C6FD503EB6D6BF73C6C0C6;// 0x0878(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lexus_rc_f_gt3_interior.ABP_lexus_rc_f_gt3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_interior_AnimGraphNode_TransitionResult_362D3FF24076FCA83D472EB09EE94B74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_interior_AnimGraphNode_ModifyBone_BC67197346CFD7B4B40803AA7005B5F3();
	void ExecuteUbergraph_ABP_lexus_rc_f_gt3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
