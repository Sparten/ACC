#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2018_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2018_exterior.ABP_nissan_gt_r_gt3_2018_exterior_C
// 0x1DD0 (0x2180 - 0x03B0)
class UABP_nissan_gt_r_gt3_2018_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0E78683E4A4EDF3ABBD49EA3EAC9D0F6;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6011DEB24B54E56349490BA1385D852B;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F3C53147498600AA6F2A85A9A8EEAD19;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_638BB8084F72CB82508BC8B2D72643D2;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_67BD96E34195C111A2CE97BADD7F14D7;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A1AEFF741B6A13A038C5AABBDD3BEF9;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1E85DB6489281A64AB8E9B6D9FE9C61;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ECACB90146F6E6929B254FA90684EEB1;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DEC07080478069A2DFD7E6A151D1ADFB;// 0x0BA8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_444B03F74A2A4BF022B6CFBAC4F89CDC;// 0x0D08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3D352BE243BE24A96D70349A0FCFB87C;// 0x0E68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6DB8635341C7995445FBD7ABEC87FBE0;// 0x0FC8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3BFD8E6844A0C322EE937DB6816EA612;// 0x1128(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C314FA394CA6F663EA93B29E07066E81;// 0x1288(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8525FF474B609C4FBC77BD83CE1AEE03;// 0x13E8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_7E93DA1A46CAF19867D64EACCA171B41;// 0x1548(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DDE361724B971A97D6CD17A03B7CA8FF;// 0x1578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE0996FB424EE0689D28669E7B7F88C7;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0E96008B455D5EC50F9D7AAFB3355E7B;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE762DDA406B9F5DD730A8A4B4F6D8D8;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9CAE98C74D98E51FB136E98FA42553D7;// 0x19E0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_84D99FBE4FEDFF1C8A843DBE4311B462;// 0x1B40(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6C5711B24690061B544FFDAF1B512A42;// 0x1BB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3BFFFB947F32C6944E6899F6A7C5B3F;// 0x1CC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2FD21FFE42E679804AB86EB84480C0FC;// 0x1D78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71179E694391A4C35EDA6EBA351D7D4D;// 0x1E90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0DF977894BC572CBD40B7B9260918761;// 0x1F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B3839E2E45C1B03491EC33AF769A4ADE;// 0x2058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BAB1CDF94824D1D4D70DB9979BE820F6;// 0x20A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2018_exterior.ABP_nissan_gt_r_gt3_2018_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_EE0996FB424EE0689D28669E7B7F88C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_0E96008B455D5EC50F9D7AAFB3355E7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_AE762DDA406B9F5DD730A8A4B4F6D8D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_9CAE98C74D98E51FB136E98FA42553D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_SequenceEvaluator_84D99FBE4FEDFF1C8A843DBE4311B462();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_SequencePlayer_C3BFFFB947F32C6944E6899F6A7C5B3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_SequencePlayer_71179E694391A4C35EDA6EBA351D7D4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_3BFD8E6844A0C322EE937DB6816EA612();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_6DB8635341C7995445FBD7ABEC87FBE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_3D352BE243BE24A96D70349A0FCFB87C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_444B03F74A2A4BF022B6CFBAC4F89CDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_DEC07080478069A2DFD7E6A151D1ADFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_ECACB90146F6E6929B254FA90684EEB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_B1E85DB6489281A64AB8E9B6D9FE9C61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_6A1AEFF741B6A13A038C5AABBDD3BEF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_8525FF474B609C4FBC77BD83CE1AEE03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_67BD96E34195C111A2CE97BADD7F14D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_638BB8084F72CB82508BC8B2D72643D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_ModifyBone_C314FA394CA6F663EA93B29E07066E81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior_AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
