#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_jaguar_g3_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_jaguar_g3_exterior.ABP_jaguar_g3_exterior_C
// 0x18B8 (0x1C68 - 0x03B0)
class UABP_jaguar_g3_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B476D604016232E0A377D838B48B4A8;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D3580354466A6E69E85711AB9799B654;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8C8CAD94FB95B92B3E18D901BF5CD73;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35C3933743D49845E2B150BDDA7B31B9;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CC8D78494B6DE4E989B3F0B0B29DEA47;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B73F89E245483FAFE4724E96DF8AFF0B;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E650D3194A38951561C2B2930ED03D1E;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8B72A63848CFF40AF300E0B350D24202;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9C39644444D0DAEC87A12DBBE05AA837;// 0x0BA8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_540B4B7744BE84F8A6AC2D8C28314BDD;// 0x0D08(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6C37428B46CB006F61B05EB998C6E222;// 0x0D38(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2757A185402DB24A2F3261B282EEF5C1;// 0x0D80(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_340FE83941667A415367D2B2638B7C44;// 0x0EE0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7B09BD184D63C1924C3676AB2F451D0A;// 0x1040(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3E26FC704174809F29B256B8E5E454E4;// 0x11A0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_90EAF490459ECA309DF46F832B4D08AA;// 0x1300(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4D32469B4B8683A9E297C69CC5827C55;// 0x1460(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95D5106C4CF1BB624DBC348B3701004E;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B082E5604B24036025E08D83DB49FD9D;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93076DD743509F264750A1A9773537AE;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1A26BB84E8BEF681A5DF282CA9A47AA;// 0x19E0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E38FFEA14F4044D0F0153286FE63F266;// 0x1B40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12DADEE943F136CCC5B2E1A356B4ECF1;// 0x1B88(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_jaguar_g3_exterior.ABP_jaguar_g3_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_93076DD743509F264750A1A9773537AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_F1A26BB84E8BEF681A5DF282CA9A47AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_3E26FC704174809F29B256B8E5E454E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_7B09BD184D63C1924C3676AB2F451D0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_340FE83941667A415367D2B2638B7C44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_2757A185402DB24A2F3261B282EEF5C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_9C39644444D0DAEC87A12DBBE05AA837();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_8B72A63848CFF40AF300E0B350D24202();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_E650D3194A38951561C2B2930ED03D1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_B73F89E245483FAFE4724E96DF8AFF0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_B082E5604B24036025E08D83DB49FD9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_CC8D78494B6DE4E989B3F0B0B29DEA47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_35C3933743D49845E2B150BDDA7B31B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_95D5106C4CF1BB624DBC348B3701004E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_4D32469B4B8683A9E297C69CC5827C55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_ModifyBone_90EAF490459ECA309DF46F832B4D08AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_exterior_AnimGraphNode_TransitionResult_5F76E85E454BB6C4ECAFAEAA51295F71();
	void ExecuteUbergraph_ABP_jaguar_g3_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
