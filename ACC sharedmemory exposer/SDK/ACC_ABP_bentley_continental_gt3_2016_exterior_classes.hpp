#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_exterior.ABP_bentley_continental_gt3_2016_exterior_C
// 0x1DD0 (0x2180 - 0x03B0)
class UABP_bentley_continental_gt3_2016_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_89376A054D5A9E9BEA73DBAFF7CE1093;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_021764F84BCD908D003CB4BD00F414FA;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_49CE3E5F40B07F2CB37203837E7DD0EA;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_229319A84D338EC7824E90B529AB1C73;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF4660DA40F0BB53AF1102B4D514F0B0;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0738EEA5427BC33A5D4F52ACB36D475C;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B0B62F34FD27E979C28CAA2C3126D85;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C6C3015F4945EAB86BC65B815F146984;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E4867BB34C3BB50221A182A3080C2E6E;// 0x0BA8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3BDBE93D45B94DAE3EC96C812BD13696;// 0x0D08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6139B8C94D94B6642D34C08E9F994D69;// 0x0E68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9A67CC1644291042AD3B7B89203E958F;// 0x0FC8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DB022C884E2FF318E83361845B5174ED;// 0x1128(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_409FEBF9441043E3EC1B678F0F6FCD2B;// 0x1288(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FE64498049F0AFA55A7DF6BF29BDFFD0;// 0x13E8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_356E066F41516B72B576F680725D5748;// 0x1548(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_772E433D4186EE3F7B6C4889798BE6AF;// 0x1578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8439698A42A320E2F85D949DAE2A3201;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41E6F5F34AAAAFFF2A59069663967651;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_75060635489EDFBE9C519FA28C5B98AA;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F927567D4480AE35CB1D139F8A831D5E;// 0x19E0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_976A7655457A441F3A585CB9B819B100;// 0x1B40(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1B1B55B477BE70F6CA350AF17DDE32A;// 0x1BB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F9CA6CA44BAB31F98D9EC91754B6045;// 0x1CC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_746797AA4523A5B3F877F88816E2A603;// 0x1D78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EAC2F5B439DCC1ECBC969A6D450C55D;// 0x1E90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F10E3A74C529879D73B41853BF7DCD2;// 0x1F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF0A6F514DE68A28E6FB9A959CF294AD;// 0x2058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F06786874D3018555F9BAA846E89BEC9;// 0x20A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_exterior.ABP_bentley_continental_gt3_2016_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_8439698A42A320E2F85D949DAE2A3201();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_41E6F5F34AAAAFFF2A59069663967651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_75060635489EDFBE9C519FA28C5B98AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_F927567D4480AE35CB1D139F8A831D5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_SequenceEvaluator_976A7655457A441F3A585CB9B819B100();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_SequencePlayer_5F9CA6CA44BAB31F98D9EC91754B6045();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_SequencePlayer_8EAC2F5B439DCC1ECBC969A6D450C55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_DB022C884E2FF318E83361845B5174ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_9A67CC1644291042AD3B7B89203E958F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_6139B8C94D94B6642D34C08E9F994D69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_3BDBE93D45B94DAE3EC96C812BD13696();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_E4867BB34C3BB50221A182A3080C2E6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_C6C3015F4945EAB86BC65B815F146984();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_2B0B62F34FD27E979C28CAA2C3126D85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_0738EEA5427BC33A5D4F52ACB36D475C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_FE64498049F0AFA55A7DF6BF29BDFFD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_DF4660DA40F0BB53AF1102B4D514F0B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_229319A84D338EC7824E90B529AB1C73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_ModifyBone_409FEBF9441043E3EC1B678F0F6FCD2B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior_AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
