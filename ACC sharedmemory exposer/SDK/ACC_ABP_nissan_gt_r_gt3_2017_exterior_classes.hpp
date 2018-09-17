#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_exterior.ABP_nissan_gt_r_gt3_2017_exterior_C
// 0x1DD0 (0x2180 - 0x03B0)
class UABP_nissan_gt_r_gt3_2017_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_654B869D4A0723EFC6B30C824D9029B9;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8044A1014086319CD9CD9AA174B002EB;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A01B7910448A950ED819E58F985C3B4A;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F11B774A48A68E8E356E3EA21A5FD223;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DBE01FCC4A0B62D8FF07B7B7BE4DEA8E;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D29768F240ACB82B76CC64ACDE522411;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_282B1288465C9C556A6F29BDD2322F50;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AD740BC14A2242FE7EB447A3656C649D;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9A5B4BD1475A745AB59DC6955A69CE43;// 0x0BA8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_243A330F4097336416FD50AC44216111;// 0x0D08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5043B98641C70B3449C3C1BE37B50E9F;// 0x0E68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_196630054F11821F41EDB2B4F19B0FCA;// 0x0FC8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E8F90FEF4BE952D40305C9A83B7A09D4;// 0x1128(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_72B943364385EF1C58D0C5A7275B8D99;// 0x1288(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D3123DC4461D9A419435BE8CA8B182FC;// 0x13E8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_D0F91D8F41FC182A6C96058259ABB130;// 0x1548(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3A88962E43515CF1D2D0E7953F5BE969;// 0x1578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A0370FA54334DBDD3CBD3E9E3145DCC7;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_63B100FE4246AF80EAC1A7B14EA77CE2;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EA3E2404411B5DB40CF30689BE79DA82;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3A34C9E840824761018DC9BF17BE75CF;// 0x19E0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D924BE4E482B43243BB212BC5B9B1E05;// 0x1B40(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FD9869964063A2624BD4159930C58DA0;// 0x1BB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_824020824AF04AD957863FBA75841939;// 0x1CC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1D61A5D4B87D8CF3BF7E58FD9A57E5E;// 0x1D78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEA202E445B56B1D7A9B8A85835DFA33;// 0x1E90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_175356274719F8086C30EA8F5A25F2F5;// 0x1F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AA7AC1694310B3813B56FDA36197FE6C;// 0x2058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5090FCF242B65A5D8E9BC3A84576B983;// 0x20A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_exterior.ABP_nissan_gt_r_gt3_2017_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_A0370FA54334DBDD3CBD3E9E3145DCC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_63B100FE4246AF80EAC1A7B14EA77CE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_EA3E2404411B5DB40CF30689BE79DA82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_3A34C9E840824761018DC9BF17BE75CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_SequenceEvaluator_D924BE4E482B43243BB212BC5B9B1E05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_SequencePlayer_824020824AF04AD957863FBA75841939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_SequencePlayer_DEA202E445B56B1D7A9B8A85835DFA33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_E8F90FEF4BE952D40305C9A83B7A09D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_196630054F11821F41EDB2B4F19B0FCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_5043B98641C70B3449C3C1BE37B50E9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_243A330F4097336416FD50AC44216111();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_9A5B4BD1475A745AB59DC6955A69CE43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_AD740BC14A2242FE7EB447A3656C649D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_282B1288465C9C556A6F29BDD2322F50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_D29768F240ACB82B76CC64ACDE522411();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_D3123DC4461D9A419435BE8CA8B182FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_DBE01FCC4A0B62D8FF07B7B7BE4DEA8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_F11B774A48A68E8E356E3EA21A5FD223();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_ModifyBone_72B943364385EF1C58D0C5A7275B8D99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior_AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
