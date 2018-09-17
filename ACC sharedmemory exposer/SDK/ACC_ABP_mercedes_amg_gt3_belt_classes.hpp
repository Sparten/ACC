#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mercedes_amg_gt3_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_belt.ABP_mercedes_amg_gt3_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_mercedes_amg_gt3_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2B520E74D51A1B5A574738422909F91;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BDB2E3D4F7B9EF40EBEAEB63CAFEEFE;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73FD11BF4DDA1FCD9033D1B16570DF3E;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70C2860A4F933783114552BF87D415B1;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23060D744F49A2E1455BECAF322BBCF5;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DAE485C7498490088542158C7CC2A858;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED039F7E454C635D0196398E6B7E4324;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FE5D1E94B6EBFFD0E2C18A829C76542;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59C074E44068A4EA14383DBAE162CD7B;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8F5DD76A462418426F8C99BDBCAAAEEA;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9386204244556F464DD31DB22D53D2F6;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3748A50749AB67A47C38EFAD0030CFD6;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C3246AF741DAD420EE355EAB8B90E4F0;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_belt.ABP_mercedes_amg_gt3_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_belt_AnimGraphNode_TransitionResult_70C2860A4F933783114552BF87D415B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_belt_AnimGraphNode_TransitionResult_73FD11BF4DDA1FCD9033D1B16570DF3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_belt_AnimGraphNode_TransitionResult_23060D744F49A2E1455BECAF322BBCF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_belt_AnimGraphNode_TransitionResult_5BDB2E3D4F7B9EF40EBEAEB63CAFEEFE();
	void ExecuteUbergraph_ABP_mercedes_amg_gt3_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
