#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pitstop_Tyre_D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_D.ABP_Pitstop_Tyre_D_C
// 0x03B0 (0x0710 - 0x0360)
class UABP_Pitstop_Tyre_D_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3682A04745A049398F60F3BA9FB66F3C;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6EF898944CA74318EF5C64BB65A310B4;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96F799E54FE4527370CEBFAF460B1C65;// 0x03F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_203F7247441748FAA0CC42893A3DC3CB;// 0x0440(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E7C755664D670CDC7C337EB3AA29F411;// 0x04F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CDED22C490D53E9F993118BA1A1FB5B;// 0x0538(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_167436164319D4E1CF93D69AF2530708;// 0x05E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4140250F4522E7AB258FF7944DF77BA8;// 0x0630(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_D.ABP_Pitstop_Tyre_D_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pitstop_Tyre_D_AnimGraphNode_TransitionResult_96F799E54FE4527370CEBFAF460B1C65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pitstop_Tyre_D_AnimGraphNode_TransitionResult_6EF898944CA74318EF5C64BB65A310B4();
	void ExecuteUbergraph_ABP_Pitstop_Tyre_D(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
