#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_steer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_steer.ABP_bentley_continental_gt3_2016_steer_C
// 0x0958 (0x0CD8 - 0x0380)
class UABP_bentley_continental_gt3_2016_steer_C : public UAcSteeringWheelAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_41D1F031411AB0CCC558AB921C33F6EA;      // 0x0388(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37B80AAF4D5D4AAA7668C081AF64032C;// 0x03D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F65644E4C18E7F31EC7A99493E91237;// 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C7199BF416DBA8CF85E1584B5EBDD36;// 0x0460(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55D9D4004AEE2949BCDD7BA6F87435D2;// 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43231B2D48E6F3E9904029818C835D94;// 0x04F0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7A00B2E4D7E1D2F0A423BA6D2CFC268;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EF79E6CC4C23344C29DCA09F5FFA207C;// 0x0580(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_868F103E4D21B3C1EBF66C9001D8F873;// 0x0630(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_63645A064622D225E3E57C98595FC649;// 0x06E0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DD9C11EA4F8E995A901715BD9275FD84;// 0x07F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19E1F7C74BA9B80099766A8C26AAE3E0;// 0x0840(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FE5E54144EF5CFCC5245DB91E93FF24;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5C44BA494F9077280AD4D48C8A5636AD;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B34AD34446AA11EA9A86EDB021A70203;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7145A72143D9F4E42C663CA9C08939FE;// 0x0B00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_271AC275405586C780DD4583057AB4CB;// 0x0BB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CC66E5504F785F51149D8297A640095C;// 0x0BF8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_steer.ABP_bentley_continental_gt3_2016_steer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer_AnimGraphNode_TransitionResult_7C7199BF416DBA8CF85E1584B5EBDD36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer_AnimGraphNode_TransitionResult_3F65644E4C18E7F31EC7A99493E91237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer_AnimGraphNode_TransitionResult_55D9D4004AEE2949BCDD7BA6F87435D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer_AnimGraphNode_TransitionResult_43231B2D48E6F3E9904029818C835D94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer_AnimGraphNode_TransitionResult_37B80AAF4D5D4AAA7668C081AF64032C();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_steer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
