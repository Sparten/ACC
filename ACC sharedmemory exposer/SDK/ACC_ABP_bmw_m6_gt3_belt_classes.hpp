#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_belt.ABP_bmw_m6_gt3_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_bmw_m6_gt3_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A4DD9F154C7F0151BD1E64BE43D5B3C6;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43437420403A7C3612078AB66D4ACA4D;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B17764834F5AC554219F47991C7BD9FC;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F09EDBB4A5200D9E4A8ACB74E43E9FD;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8092533D48C50E10DFD8B28003750ADA;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_158BA909461E78FCF99D0B966578CF43;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA67513547C6FF6A2E6E25B04A8B6510;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0512505E4400C9A7792FC5A06C8BA306;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB96EC164F3FA9FCB35B16B13BD8D5C9;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5CDFA5884E5033D074B95691D049E77E;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFDB8680437B4C91655D1C93B24A9EDD;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AE66B4454A4D89C0BFD201A4FDC22FA4;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E6737E6C401D241EE9013988174DB0F9;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_belt.ABP_bmw_m6_gt3_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_belt_AnimGraphNode_TransitionResult_3F09EDBB4A5200D9E4A8ACB74E43E9FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_belt_AnimGraphNode_TransitionResult_8092533D48C50E10DFD8B28003750ADA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_belt_AnimGraphNode_TransitionResult_43437420403A7C3612078AB66D4ACA4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_belt_AnimGraphNode_TransitionResult_B17764834F5AC554219F47991C7BD9FC();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
