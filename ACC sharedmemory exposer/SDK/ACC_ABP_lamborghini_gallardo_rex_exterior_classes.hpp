#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_exterior.ABP_lamborghini_gallardo_rex_exterior_C
// 0x1D98 (0x2148 - 0x03B0)
class UABP_lamborghini_gallardo_rex_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5718EC7E441A2E3FFDDDBFA1715ED3B0;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_848B088A45897CF17378A38D0340ACFB;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A83C0BF4C5DA95554ADDDA0D805486A;// 0x0448(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6CF73A1C4AD398D902695F9ED66BAD1B;// 0x0490(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C8613D974D120BB16598B2995E399964;// 0x05F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A4FF6E2B43DDE1A268E3018FCC94C35B;// 0x0750(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_592B90A24B25D1E4885042992B1FEA9E;// 0x08B0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2D5DBB83443C6A7A910DF4B804BE83A3;// 0x0A10(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19904124450E67ECB66146B128DC6C28;// 0x0B70(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2DD992824EAA3F378A8AA18350A0346C;// 0x0CD0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D872C38E48D10DB5042D3CA16C8AAE29;// 0x0E30(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A9054C3246CCDA45346D3E9629249B53;// 0x0F90(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A7CE9D8642A418EA2B382BBCA55E76EA;// 0x10F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47D2E78E49A4BD87D27BA68D72454ED0;// 0x1250(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B6CD5183446D25A9EEF4219FC5A23C2E;// 0x13B0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_12BD0CCF4DE1E241AEA18699A8744607;// 0x1510(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_88C183374AD94CADDE1430AE28452035;// 0x1540(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E0AD0C454204368F99471593F0F790D8;// 0x1588(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9F68624B41A09324C09226A328427EF4;// 0x16E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27A464B64A072BAEF551B1B163419D6C;// 0x1848(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10949F254D6D03BD14392EA998A34EF9;// 0x19A8(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5029D2204103B9CF613DC5837099486F;// 0x1B08(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0F17DA234B3A7EB31E2719BA88394042;// 0x1B78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4684F9CE45AE661BB12394B595312B29;// 0x1C90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1E795D84C3E30A740B2C4A491AAE231;// 0x1D40(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DF00ECD490C9F3B5D98F08BD21D1437;// 0x1E58(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_928F73C84282409DE469D9B2C15183AE;// 0x1F08(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_16A3DF0D4BED9DBCA7C58290E3820E7B;// 0x2020(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E563F69D4007DD40665B67942745FFD3;// 0x2068(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_exterior.ABP_lamborghini_gallardo_rex_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_E0AD0C454204368F99471593F0F790D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_9F68624B41A09324C09226A328427EF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_27A464B64A072BAEF551B1B163419D6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_10949F254D6D03BD14392EA998A34EF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_SequenceEvaluator_5029D2204103B9CF613DC5837099486F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_SequencePlayer_4684F9CE45AE661BB12394B595312B29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_SequencePlayer_1DF00ECD490C9F3B5D98F08BD21D1437();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_A7CE9D8642A418EA2B382BBCA55E76EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_A9054C3246CCDA45346D3E9629249B53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_D872C38E48D10DB5042D3CA16C8AAE29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_2DD992824EAA3F378A8AA18350A0346C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_19904124450E67ECB66146B128DC6C28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_2D5DBB83443C6A7A910DF4B804BE83A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_592B90A24B25D1E4885042992B1FEA9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_A4FF6E2B43DDE1A268E3018FCC94C35B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_B6CD5183446D25A9EEF4219FC5A23C2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_C8613D974D120BB16598B2995E399964();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_6CF73A1C4AD398D902695F9ED66BAD1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_TransitionResult_848B088A45897CF17378A38D0340ACFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior_AnimGraphNode_ModifyBone_47D2E78E49A4BD87D27BA68D72454ED0();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
