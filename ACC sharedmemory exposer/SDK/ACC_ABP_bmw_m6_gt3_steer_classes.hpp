#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_steer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_steer.ABP_bmw_m6_gt3_steer_C
// 0x0958 (0x0CD8 - 0x0380)
class UABP_bmw_m6_gt3_steer_C : public UAcSteeringWheelAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_869246F741988BBBB78BDDB13806464A;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093;// 0x03D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D780041B496C834DB174A19F754F63F0;// 0x04F0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_696C284C47F42FDC16FEAEA86D03D4BC;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8696EB34F4BBB4EEA10B6BDB1657AC3;// 0x0580(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B89133DE47901C789781BBAEFDA2A22B;// 0x0630(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EEC8772143FF9B6EDA10E9821043FFA6;// 0x06E0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E3A82F754E7CACBB34D2E98460818FAF;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76F0CE8E44394B429B9D66B855D4203E;// 0x0840(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7F6D31549E810A29F2958A461EF8F1B;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B153FADA4C2892F7F8906DA883BB6F77;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A0B09494404D48434F4D3AD890A3E86;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22A4B8C34DD59504ECF8FD81CBEE5D7A;// 0x0B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4FF3A2B547857405414BA19884D86C9B;// 0x0BB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6065E4F94DF7A27D409719B466DF3F3B;// 0x0BF8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_steer.ABP_bmw_m6_gt3_steer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_steer_AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_steer_AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_steer_AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_steer_AnimGraphNode_TransitionResult_D780041B496C834DB174A19F754F63F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_steer_AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_steer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
