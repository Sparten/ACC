#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gtr_gt3_2018_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gtr_gt3_2018_cable.ABP_nissan_gtr_gt3_2018_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_nissan_gtr_gt3_2018_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_87C34DE2412853BF809B5AA336F9287C;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF259F3C4366FB8D5755D783EBCB3577;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64F91DB843B5949B899611A8C512BC10;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_70A09CF64ED2E2CCCADA98ABB4D65FE6;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9522BBCD4EC5DBC8D1D69289B918E970;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A206DC0242BFADDAD9CE1192C747496E;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B08FAC5C44F6C17C5DE8C789A145FAEF;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB3963C04D25ABF8200070BAB399C7F5;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A5135F2F46803DD22DA7D9B17AE92E93;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gtr_gt3_2018_cable.ABP_nissan_gtr_gt3_2018_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_cable_AnimGraphNode_BlendSpacePlayer_A206DC0242BFADDAD9CE1192C747496E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_cable_AnimGraphNode_BlendSpacePlayer_9522BBCD4EC5DBC8D1D69289B918E970();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_cable_AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF();
	void ExecuteUbergraph_ABP_nissan_gtr_gt3_2018_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
