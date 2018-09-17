#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_steer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_steer.ABP_lamborghini_gallardo_rex_steer_C
// 0x0958 (0x0CD8 - 0x0380)
class UABP_lamborghini_gallardo_rex_steer_C : public UAcSteeringWheelAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D7F1E11A415CDF162FC50C8036BDB9F3;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093;// 0x03D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD90D2A547EC595A59CDF89759781D4F;// 0x04F0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3BD20124837DC7F0211C58BC1C4BBB5;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_574F7A484D90BD6AAE10D1BABBD75C25;// 0x0580(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA9CB98A4E6FA57414D91ABC467361E6;// 0x0630(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4FC4E70B46C8D6A68A4CFEBD298F4EF0;// 0x06E0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F495039B425D0DA64F8368BF4AAE492F;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_795E2EBF4747ECEA6D6BFC852AAF8340;// 0x0840(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC40C9714FF120AF00C313B459C6DFF0;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DEA49FF44BA58C8A477B33ACB0FB2296;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_714F633A40F54739B98D5BA4D20A01DC;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3E5E7E8427D110E8427FAA603477B8F;// 0x0B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E3398AB84553CC08B9A9CEA631A5928F;// 0x0BB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4A40725D4783D745BAB323A18BFA8F64;// 0x0BF8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_steer.ABP_lamborghini_gallardo_rex_steer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer_AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer_AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer_AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer_AnimGraphNode_TransitionResult_AD90D2A547EC595A59CDF89759781D4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer_AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_steer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
