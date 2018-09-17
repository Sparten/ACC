#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_porsche_991_gt3_r_steer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_steer.ABP_porsche_991_gt3_r_steer_C
// 0x0958 (0x0CD8 - 0x0380)
class UABP_porsche_991_gt3_r_steer_C : public UAcSteeringWheelAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0486F669419D0EF6525DB3BB65F45CB5;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093;// 0x03D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3DB952045B81168929475B9DBF08FFA;// 0x04F0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_85E0A5E241CDEBDB95580BA33229A0BE;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1F5B3BD41637C90476FD1923B90AAD5;// 0x0580(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA20E47D43257DED60C0299C6318DCE7;// 0x0630(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CFD504B34A3EA98791860CB2252E3B32;// 0x06E0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_004A957C460DE93E9A856588049411AA;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EE3AD984C442740BA3F2495B828B4CA;// 0x0840(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_489A5BD14E12B51E0559708C95B387A5;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0380878B4DF3659B784930A549ACDA10;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5A8C14424E0CC59D4E8FFBB71C5B0AB6;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_208D40074CE216C61CE426B1ADE4747A;// 0x0B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3EC1B4B4B854813720DAEA79B399BE8;// 0x0BB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EB0E8F304AF35D2D3D6C099D9ADE853F;// 0x0BF8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_steer.ABP_porsche_991_gt3_r_steer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_steer_AnimGraphNode_TransitionResult_C5CA9B24432669E2873F138734D4A268();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_steer_AnimGraphNode_TransitionResult_996D62C84EE21EE361A8DE8E09A9E9A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_steer_AnimGraphNode_TransitionResult_7722CE2147FE446EE9CF82BF02876031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_steer_AnimGraphNode_TransitionResult_C3DB952045B81168929475B9DBF08FFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_steer_AnimGraphNode_TransitionResult_B2D9CB0B4D4E30CE446AA5A040084093();
	void ExecuteUbergraph_ABP_porsche_991_gt3_r_steer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
