#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2017_steer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_steer.ABP_nissan_gt_r_gt3_2017_steer_C
// 0x0958 (0x0CD8 - 0x0380)
class UABP_nissan_gt_r_gt3_2017_steer_C : public UAcSteeringWheelAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BC154339477BF9F116E66F89B9D613B8;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093;// 0x03D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D780041B496C834DB174A19F754F63F0;// 0x04F0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4CA51256488F4AA46F230AA5001568CB;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE6903404A653138EE0E068926A2D406;// 0x0580(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A58CF98488C9F9166872E8A9DAED9F7;// 0x0630(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_16333AEF4D48F03CB932968C94933F15;// 0x06E0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2DBA9D3E49AF879B970426B60905B713;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_862FB3B24BA2D46D04D0259DA2AEC079;// 0x0840(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3ECB47F43AFB0AD54476291671A1908;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_257735ED4E3B6798A600B981ADCB159A;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56ED133540C3EC86D8B9828EAD8FB593;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C3B48E04036D7E132605684ACDDA29D;// 0x0B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CFB1CEA4D7C2E3A06BBB68B478287F5;// 0x0BB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_63B247F24A2E0FCF1A9FC99E9AA6B01E;// 0x0BF8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2017_steer.ABP_nissan_gt_r_gt3_2017_steer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer_AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer_AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer_AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer_AnimGraphNode_TransitionResult_D780041B496C834DB174A19F754F63F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer_AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2017_steer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
