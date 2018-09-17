#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pitstop_Tyre_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_A.ABP_Pitstop_Tyre_A_C
// 0x04A8 (0x0808 - 0x0360)
class UABP_Pitstop_Tyre_A_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A2F3934B49BB3CBF531200BFE55998E8;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CD7F41A4A73247891CF699BFD0D1F59;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C21FC124162B2512D7A0AB68D56F1E9;// 0x03F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A0FC229043F8777FB983AC9EB1319EDD;// 0x0440(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E6791D94CE32D90A3D7A9A74D0BAC95;// 0x04F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_799FFDF8420C7A0FB2815985E4608B00;// 0x0538(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E063D24C4F5AB7E919CA3195525FCDFA;// 0x05E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6117B2D0426725129BB0F2A78F0519C9;// 0x0630(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_779357A04A92E8F2B3D3B09D063F4B85;// 0x06E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C678E8AC4D957B33596B358C3131CD28;// 0x0728(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pitstop_Tyre_A.ABP_Pitstop_Tyre_A_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pitstop_Tyre_A_AnimGraphNode_TransitionResult_9C21FC124162B2512D7A0AB68D56F1E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pitstop_Tyre_A_AnimGraphNode_TransitionResult_1CD7F41A4A73247891CF699BFD0D1F59();
	void ExecuteUbergraph_ABP_Pitstop_Tyre_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
