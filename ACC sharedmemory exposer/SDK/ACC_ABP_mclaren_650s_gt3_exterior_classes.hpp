#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mclaren_650s_gt3_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_exterior.ABP_mclaren_650s_gt3_exterior_C
// 0x1D98 (0x2148 - 0x03B0)
class UABP_mclaren_650s_gt3_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0196C2E41F11EFD79F25484E5E3D735;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39330F4044D5A5FC8B69A0B88E237E7C;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x0448(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B4199D0C4D6ECF5BDE324B8A5DF14BD2;// 0x0490(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9DEA7DBC4B1FB429BFE5B5BED38BD780;// 0x05F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_76E219C64423188B6FE4E19FE841F8A6;// 0x0750(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0536AA87451F3F2F55100AA8EA15A454;// 0x08B0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ECACB90146F6E6929B254FA90684EEB1;// 0x0A10(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DEC07080478069A2DFD7E6A151D1ADFB;// 0x0B70(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_444B03F74A2A4BF022B6CFBAC4F89CDC;// 0x0CD0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3D352BE243BE24A96D70349A0FCFB87C;// 0x0E30(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6DB8635341C7995445FBD7ABEC87FBE0;// 0x0F90(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3BFD8E6844A0C322EE937DB6816EA612;// 0x10F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C314FA394CA6F663EA93B29E07066E81;// 0x1250(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8525FF474B609C4FBC77BD83CE1AEE03;// 0x13B0(0x0160)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_7E93DA1A46CAF19867D64EACCA171B41;// 0x1510(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DDE361724B971A97D6CD17A03B7CA8FF;// 0x1540(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE0996FB424EE0689D28669E7B7F88C7;// 0x1588(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0E96008B455D5EC50F9D7AAFB3355E7B;// 0x16E8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE762DDA406B9F5DD730A8A4B4F6D8D8;// 0x1848(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9CAE98C74D98E51FB136E98FA42553D7;// 0x19A8(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_84D99FBE4FEDFF1C8A843DBE4311B462;// 0x1B08(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6C5711B24690061B544FFDAF1B512A42;// 0x1B78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3BFFFB947F32C6944E6899F6A7C5B3F;// 0x1C90(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2FD21FFE42E679804AB86EB84480C0FC;// 0x1D40(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71179E694391A4C35EDA6EBA351D7D4D;// 0x1E58(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0DF977894BC572CBD40B7B9260918761;// 0x1F08(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B3839E2E45C1B03491EC33AF769A4ADE;// 0x2020(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_61C884ED4CA808DA11655B8043B23702;// 0x2068(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_exterior.ABP_mclaren_650s_gt3_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_EE0996FB424EE0689D28669E7B7F88C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_0E96008B455D5EC50F9D7AAFB3355E7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_AE762DDA406B9F5DD730A8A4B4F6D8D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_9CAE98C74D98E51FB136E98FA42553D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_SequenceEvaluator_84D99FBE4FEDFF1C8A843DBE4311B462();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_SequencePlayer_C3BFFFB947F32C6944E6899F6A7C5B3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_SequencePlayer_71179E694391A4C35EDA6EBA351D7D4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_3BFD8E6844A0C322EE937DB6816EA612();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_6DB8635341C7995445FBD7ABEC87FBE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_3D352BE243BE24A96D70349A0FCFB87C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_444B03F74A2A4BF022B6CFBAC4F89CDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_DEC07080478069A2DFD7E6A151D1ADFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_ECACB90146F6E6929B254FA90684EEB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_0536AA87451F3F2F55100AA8EA15A454();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_76E219C64423188B6FE4E19FE841F8A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_8525FF474B609C4FBC77BD83CE1AEE03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_9DEA7DBC4B1FB429BFE5B5BED38BD780();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_B4199D0C4D6ECF5BDE324B8A5DF14BD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_TransitionResult_39330F4044D5A5FC8B69A0B88E237E7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior_AnimGraphNode_ModifyBone_C314FA394CA6F663EA93B29E07066E81();
	void ExecuteUbergraph_ABP_mclaren_650s_gt3_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
