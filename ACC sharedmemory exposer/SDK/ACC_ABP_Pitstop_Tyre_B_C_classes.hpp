#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pitstop_Tyre_B_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_B_C.ABP_Pitstop_Tyre_B_C_C
// 0x0368 (0x06C8 - 0x0360)
class UABP_Pitstop_Tyre_B_C_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1F7F194744FD4F65FBC6CA903BD1E561;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA81B144FF3DC6B275C3F923F733408;// 0x03B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_476303D242B7A44457921A98608F20F4;// 0x03F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E96BD5AD4CCB0D800A62C7A4D57CEA4F;// 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A263C6BB42417CD4D6D94FAB207F8911;// 0x04F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A51DDB54729A57BFF0CB0B4A2A9D661;// 0x05A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11F147A845496DFD3C6433B0D105415F;// 0x05E8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_B_C.ABP_Pitstop_Tyre_B_C_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pitstop_Tyre_B_C_AnimGraphNode_TransitionResult_8AA81B144FF3DC6B275C3F923F733408();
	void ExecuteUbergraph_ABP_Pitstop_Tyre_B_C(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
