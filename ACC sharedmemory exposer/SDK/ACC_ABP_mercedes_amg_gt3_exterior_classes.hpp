#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mercedes_amg_gt3_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_exterior.ABP_mercedes_amg_gt3_exterior_C
// 0x1D98 (0x2148 - 0x03B0)
class UABP_mercedes_amg_gt3_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4EAC9C004494E85D723431B6F8E5B053;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18BE72D7426928481A19B09457F994A1;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F3C53147498600AA6F2A85A9A8EEAD19;// 0x0448(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B97A1DC9461CC67D0697A2BBEE9473C1;// 0x0490(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CFEECCF54CF51E1B4FA45FBF69474731;// 0x05F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7A5A735F408824F3F57D628D10CC4CA9;// 0x0750(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3EDADDDC43193EAE24C0239DCA7F49FC;// 0x08B0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1E3C42CD45E0D6106E0297BDA72E31E0;// 0x0A10(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A9833F904ED435C73E6584A57A9474D3;// 0x0A80(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D1307B548AC14E66E2FCE9C8F48E8FF;// 0x0B30(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D40229A44FB32D05F70655AA32B6D49B;// 0x0BE0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_364087F9493EACD59DD675AF07E9AFED;// 0x0CF8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4AE21FD14E399207A61889A7473CDED6;// 0x0E10(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1010291643E53CA50F8381B75368E0F9;// 0x0F28(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3B2B06EE47F7417D6FC2B88516396B69;// 0x1088(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_380624564B5478972D5A258DE9261AD4;// 0x11E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7E54E06E42D20239C7754FA1DFD164C9;// 0x1348(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3DEAE52B4C103F7527A8829D04E820C1;// 0x14A8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_90C10BCF411CA479FA7EAB8BD796FBC6;// 0x1608(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE5EEF0E4EC2B0AD6FB57F9002822330;// 0x1768(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB87F9D24B459F5B4A034EB50D4B652A;// 0x18C8(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F3760BE2405C362A456937B9320CFDAF;// 0x1A28(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F87C82444EB4D6AC6F7C0BA1303E234E;// 0x1A58(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B49279F440650AEC29581895FDAE39F7;// 0x1AA0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DA07A4AB415A15F02B9B638D75F41110;// 0x1C00(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E640110043B0979C0206FBB8029F17BE;// 0x1D60(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1D78000544D4D4C52FDC6186EA37A1E5;// 0x1EC0(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7CD45AB4264B5150E73829FB2A437E9;// 0x2020(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_332789E94BE99C1717EA0187F82BDC0B;// 0x2068(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_exterior.ABP_mercedes_amg_gt3_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_90C10BCF411CA479FA7EAB8BD796FBC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_EE5EEF0E4EC2B0AD6FB57F9002822330();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_BB87F9D24B459F5B4A034EB50D4B652A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_B49279F440650AEC29581895FDAE39F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_DA07A4AB415A15F02B9B638D75F41110();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_E640110043B0979C0206FBB8029F17BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_1D78000544D4D4C52FDC6186EA37A1E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_380624564B5478972D5A258DE9261AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_3B2B06EE47F7417D6FC2B88516396B69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_1010291643E53CA50F8381B75368E0F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_SequencePlayer_3D1307B548AC14E66E2FCE9C8F48E8FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_SequencePlayer_A9833F904ED435C73E6584A57A9474D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_3DEAE52B4C103F7527A8829D04E820C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_SequenceEvaluator_1E3C42CD45E0D6106E0297BDA72E31E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_3EDADDDC43193EAE24C0239DCA7F49FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_7A5A735F408824F3F57D628D10CC4CA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_CFEECCF54CF51E1B4FA45FBF69474731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_B97A1DC9461CC67D0697A2BBEE9473C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_TransitionResult_18BE72D7426928481A19B09457F994A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior_AnimGraphNode_ModifyBone_7E54E06E42D20239C7754FA1DFD164C9();
	void ExecuteUbergraph_ABP_mercedes_amg_gt3_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
