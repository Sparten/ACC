#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mercedes_amg_gt3_cable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_cable.ABP_mercedes_amg_gt3_cable_C
// 0x0738 (0x0AB8 - 0x0380)
class UABP_mercedes_amg_gt3_cable_C : public UAcCarLoosePartAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FEF296FF4D58BA608AD205B9F03635DA;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF;// 0x03D0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DAE485C7498490088542158C7CC2A858;// 0x0418(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C92ACB5542C36D9F83D549BA576EC92A;// 0x0460(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B3129FCB4DB9841EA9D424A0073CA1B8;// 0x0510(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0E1118334B81F85DE67B269637696CEF;// 0x0628(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E3BD764B4719AA77F618258DC2C54034;// 0x0750(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8A52FC8D48BEC8B259101795FF12798A;// 0x0878(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FC472874931C2C5102D3BB77B78FE9E;// 0x0990(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_366C711A47F87E0BF2E7AEACAD21BD02;// 0x09D8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mercedes_amg_gt3_cable.ABP_mercedes_amg_gt3_cable_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_cable_AnimGraphNode_BlendSpacePlayer_E3BD764B4719AA77F618258DC2C54034();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_cable_AnimGraphNode_BlendSpacePlayer_0E1118334B81F85DE67B269637696CEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mercedes_amg_gt3_cable_AnimGraphNode_TransitionResult_551ABEDF4DFE76E7B9FA548C1D3F2BEF();
	void ExecuteUbergraph_ABP_mercedes_amg_gt3_cable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
