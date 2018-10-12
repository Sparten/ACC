#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pit_Crew_RECEIVER_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pit_Crew_RECEIVER.ABP_Pit_Crew_RECEIVER_C
// 0x05B8 (0x0918 - 0x0360)
class UABP_Pit_Crew_RECEIVER_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B167C6994BC6EB5B042E6D90BB821580;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4A3BB957487C4B79CF0FECA17EA3884D;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F4E648A4FEA92CA749F2596DEFAD29C;// 0x03F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DD3895A4EB6D60879859DBA79F66B99;// 0x0440(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56B9193F420600576D0612A459AA9182;// 0x04F0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D7C23A9B40221F83F2B6029DCB9AD20C;// 0x0538(0x0128)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_45F1E2F1445C17F483A2A8A8E1658D94;// 0x0660(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B09263B54C058BB54FDE79BB3E6C0D5B;// 0x0740(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_133E8AD84FB722DD6B01A8B9ADE8050A;// 0x07F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C2061D8946752BE6368AB5B6AA5DE68E;// 0x0838(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pit_Crew_RECEIVER.ABP_Pit_Crew_RECEIVER_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_RECEIVER_AnimGraphNode_TransitionResult_1F4E648A4FEA92CA749F2596DEFAD29C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_RECEIVER_AnimGraphNode_BlendSpacePlayer_D7C23A9B40221F83F2B6029DCB9AD20C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_RECEIVER_AnimGraphNode_TransitionResult_4A3BB957487C4B79CF0FECA17EA3884D();
	void ExecuteUbergraph_ABP_Pit_Crew_RECEIVER(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
