#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_porsche_991_gt3_r_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_belt.ABP_porsche_991_gt3_r_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_porsche_991_gt3_r_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0C4D48BB447A27CD577363A5FE6A0B0A;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AA062244ECCEB3BB697629DE9A2BE03;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31C56DB74F1EEC379DEE15A8C29F7B95;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81486BE34EE4673C674F7E85743FC67A;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B9E2AA7D43D144508DC4AB8945C124ED;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DAE485C7498490088542158C7CC2A858;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEB9C46045740407BDE80D8586BA2F60;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_168E4ADB44892D196464FDBAF5871A31;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3404E88949CAE583D639A898AA90E7D3;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2482131D44833EE96136DEB957934FBB;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F5A4774B4124706F0B8180A19FD220C4;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72A076CB45D87D486283F1A02DBD90F2;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_305DFDFA489B81D49DA5148249248407;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_belt.ABP_porsche_991_gt3_r_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_belt_AnimGraphNode_TransitionResult_81486BE34EE4673C674F7E85743FC67A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_belt_AnimGraphNode_TransitionResult_B9E2AA7D43D144508DC4AB8945C124ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_belt_AnimGraphNode_TransitionResult_9AA062244ECCEB3BB697629DE9A2BE03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_belt_AnimGraphNode_TransitionResult_31C56DB74F1EEC379DEE15A8C29F7B95();
	void ExecuteUbergraph_ABP_porsche_991_gt3_r_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
