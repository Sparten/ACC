#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_jaguar_g3_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_jaguar_g3_driver.ABP_jaguar_g3_driver_C
// 0x0790 (0x0BE0 - 0x0450)
class UABP_jaguar_g3_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D25346B746EE6BC86D69C3BBF21FD2C7;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B925DED64287BD9F5A2EC2A993B18CFE;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A06E87824BE222CD938A9F9D83BEE5BB;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8601E7F4DFF2E379ADC3F899CAA4DB3;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE2599BE489859CF8E1A588BEAA1BFA3;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFA160904FF9F5286223BCB4EF6130E6;// 0x05C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_305F92944F8CB25133A2E49FA78E56A6;// 0x0608(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A967FE6D4E64D62665155D88AED2B473;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D60624E445F534DD42BAF9B10465525E;// 0x0700(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_355459A145EA31FD20AAE88C15664D65;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBDF5B244230BC1DDAB3D0858D27CDE9;// 0x07F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7689FC63474138152B67C7900B1366EB;// 0x08A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A70F703048AB72224432F5BF15B8FE80;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7305EDCB4A9E6FBCCEF6509F7CA12A1A;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7BABC80D44DD28649963419E4B4F9E7B;// 0x0AB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_92FF5AE74B0958948D3D7FB96A86D03D;// 0x0B00(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_jaguar_g3_driver.ABP_jaguar_g3_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_driver_AnimGraphNode_TransitionResult_E8601E7F4DFF2E379ADC3F899CAA4DB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_driver_AnimGraphNode_TransitionResult_A06E87824BE222CD938A9F9D83BEE5BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_driver_AnimGraphNode_TransitionResult_CE2599BE489859CF8E1A588BEAA1BFA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_driver_AnimGraphNode_TransitionResult_B925DED64287BD9F5A2EC2A993B18CFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_jaguar_g3_driver_AnimGraphNode_TransitionResult_FFA160904FF9F5286223BCB4EF6130E6();
	void ExecuteUbergraph_ABP_jaguar_g3_driver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
