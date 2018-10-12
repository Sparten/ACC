#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lexus_rc_f_gt3_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lexus_rc_f_gt3_exterior.ABP_lexus_rc_f_gt3_exterior_C
// 0x1DD0 (0x2180 - 0x03B0)
class UABP_lexus_rc_f_gt3_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_873858B84EA0ABB98F8D3AAE4F039534;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BA0CC7741E22EE02722C7B8D4304682;// 0x0400(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D9320C2B4E5C08D7A73CA0BBCEF3C5AA;// 0x0448(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F45DDCC40FC15FFBDB1E5915AD5E713;// 0x0480(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5E8C015F42A0B6C58CB7E280CA0CB2E8;// 0x04C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_08D83DD1445E6D4BF3CFACA63D8C3BD0;// 0x0628(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FED592BC48A5EF273EEAEE8B1FA7B18B;// 0x0788(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F46A408E4EF64727E8ADE7BB638771F0;// 0x08E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E99E74B14DDF4B3BBE3441BC898290AD;// 0x0A48(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_83451F6B4F3B74E62B7E3D94A2E64128;// 0x0BA8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_377264AE48B88B337A3228B4B199E26E;// 0x0D08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F08BC86D4D842D32C6AB6D88B0F624E3;// 0x0E68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E98391CE4C9FA759FE30CF83925CF25A;// 0x0FC8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_72EC1EE04F2AA3D946E9F996889A2B22;// 0x1128(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48A600654025AB3F6748418770607DA5;// 0x1288(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF48C8954901B58FCCA7C4AFAF8258ED;// 0x13E8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_548E1D4245D066390C7B75843D28E000;// 0x1548(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0EAEC08848B4317C5E735597A672F975;// 0x1578(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_315A75084AD9068202DFB89B46CA6114;// 0x15C0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3FABE39E4E07B345E96DD99776CB6F77;// 0x1720(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2B7C112D4A97FBCE5E887F8F13005D37;// 0x1880(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_031DA6D746CDCB804173BCA7C608AB63;// 0x19E0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FED434A2435550F552684AA7B7D3FD07;// 0x1B40(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A041678D4AB1EDA46C3228936C47498A;// 0x1BB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A904FC348310BEF79E4609C77C2820E;// 0x1CC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_30E3B20B4523C38FCC2D4691FDB4D66B;// 0x1D78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F763B244083412EFAC48AAFEEA492A8;// 0x1E90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2D2BD3DD4C582836CC99F8B8E43DB426;// 0x1F40(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F89A8FC6486306810B6DC9BFC05FE682;// 0x2058(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3DB8D4FC43E433C2BB45598A45593270;// 0x20A0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lexus_rc_f_gt3_exterior.ABP_lexus_rc_f_gt3_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_315A75084AD9068202DFB89B46CA6114();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_3FABE39E4E07B345E96DD99776CB6F77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_2B7C112D4A97FBCE5E887F8F13005D37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_031DA6D746CDCB804173BCA7C608AB63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_SequenceEvaluator_FED434A2435550F552684AA7B7D3FD07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_SequencePlayer_0A904FC348310BEF79E4609C77C2820E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_SequencePlayer_0F763B244083412EFAC48AAFEEA492A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_72EC1EE04F2AA3D946E9F996889A2B22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_E98391CE4C9FA759FE30CF83925CF25A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_F08BC86D4D842D32C6AB6D88B0F624E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_377264AE48B88B337A3228B4B199E26E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_83451F6B4F3B74E62B7E3D94A2E64128();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_E99E74B14DDF4B3BBE3441BC898290AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_F46A408E4EF64727E8ADE7BB638771F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_FED592BC48A5EF273EEAEE8B1FA7B18B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_DF48C8954901B58FCCA7C4AFAF8258ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_08D83DD1445E6D4BF3CFACA63D8C3BD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_5E8C015F42A0B6C58CB7E280CA0CB2E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_ModifyBone_48A600654025AB3F6748418770607DA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior_AnimGraphNode_TransitionResult_7BA0CC7741E22EE02722C7B8D4304682();
	void ExecuteUbergraph_ABP_lexus_rc_f_gt3_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
