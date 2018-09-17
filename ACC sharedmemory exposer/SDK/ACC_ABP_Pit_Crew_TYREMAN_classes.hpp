#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pit_Crew_TYREMAN_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pit_Crew_TYREMAN.ABP_Pit_Crew_TYREMAN_C
// 0x0660 (0x09C0 - 0x0360)
class UABP_Pit_Crew_TYREMAN_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1E954F9F42FF2F7AE6E5C38674BCF048;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CFAB11B436D7F27694057B9986979F2;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_268C570B48A932410B514CB092E302FB;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BE1C5F44C75B85AFD4B7EA85E39E8A5;// 0x0440(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD7D639C47573917254D84A6A1A5A2F7;// 0x0488(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_029BB0FD449A0C5C46320692654E8162;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B44B725D492AE98563EF0D8A59E823D1;// 0x0580(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E25EDD247E3831C39DFBFA39C8E7FC5;// 0x0630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_435DF33E46A1F6D96C33378277838BD1;// 0x0678(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3FFBF2594E9F4CB8A8FAB59FCE3782B8;// 0x0728(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C89E871D47B1D06518972A800C4402D6;// 0x0770(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CABF9DC149D1A26E63CEE0A0F6012F25;// 0x0898(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF00B15D4A84BB662A39DBA5A8309A99;// 0x08E0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pit_Crew_TYREMAN.ABP_Pit_Crew_TYREMAN_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_TYREMAN_AnimGraphNode_TransitionResult_268C570B48A932410B514CB092E302FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_TYREMAN_AnimGraphNode_TransitionResult_8BE1C5F44C75B85AFD4B7EA85E39E8A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_TYREMAN_AnimGraphNode_TransitionResult_5CFAB11B436D7F27694057B9986979F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_TYREMAN_AnimGraphNode_BlendSpacePlayer_C89E871D47B1D06518972A800C4402D6();
	void ExecuteUbergraph_ABP_Pit_Crew_TYREMAN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
