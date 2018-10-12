#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_jaguar_g3_interior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_jaguar_g3_interior.ABP_jaguar_g3_interior_C
// 0x05A8 (0x0958 - 0x03B0)
class UABP_jaguar_g3_interior_C : public UAcCarInteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_866EC31D41D15B251D99BF996E8EE863;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02A8D30C466666D9CD3A1CB287E3F895;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FE78C614F4F332B6D1B50A74DA0CFD2;// 0x0448(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8E1C355744299B223005C780ACDD8325;// 0x0490(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B9340BE24833BBED547AF8909813545F;// 0x04C0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3559251B44FBB350DB2578A82E298855;// 0x0620(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0795186A4E1FCE34AFC7DB82A2545B04;// 0x0668(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C448D97640A1C45858A512A60A8E5AC0;// 0x0780(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_016AC51E408DE0D42FBC1C9833686FD8;// 0x0830(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C8DCE95846E1A65D33F0A18513A4F16E;// 0x0878(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_jaguar_g3_interior.ABP_jaguar_g3_interior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_interior_AnimGraphNode_TransitionResult_02A8D30C466666D9CD3A1CB287E3F895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_interior_AnimGraphNode_ModifyBone_B9340BE24833BBED547AF8909813545F();
	void ExecuteUbergraph_ABP_jaguar_g3_interior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
