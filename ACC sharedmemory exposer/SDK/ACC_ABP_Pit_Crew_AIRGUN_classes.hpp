#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_Pit_Crew_AIRGUN_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pit_Crew_AIRGUN.ABP_Pit_Crew_AIRGUN_C
// 0x0838 (0x0B98 - 0x0360)
class UABP_Pit_Crew_AIRGUN_C : public UAcPitstopAnimation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ABB997BD4B860B03E4AC66AD774112FC;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F0A94712480EC6CB044ADDAB43742578;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4462B3E947AB2C7635632E9DE92FB660;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D614F4748A598FA71C47AB59CF882E3;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA8396BD4A13FDCCB38AF79FEB9E2025;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3DD22C08410157C5482F78A9092D8E3E;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_985313C14B7142D7A2DA7DB90867D1E0;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57EA405842D57CF2FFCD8A9005369FCC;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F87920FF40D51D4C5AA9C5BFE0C6AF9F;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C44660564823365D7158C9BAD9301712;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2B50AF8347EEDA252FC6ECA17ABEBE31;// 0x0770(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D21B06D24406D7F18C98C7A1A2F14519;// 0x07B8(0x0128)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13E2CC1C4914DED2D50FC88A40EF6228;// 0x08E0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6E2EDC3462DD81586D06389ADA7CA82;// 0x09C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFD5FFF54E68C091BF5C03A02076FEE2;// 0x0A70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_74055C0D4BF8A7878DEA4B9B572D1A9A;// 0x0AB8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pit_Crew_AIRGUN.ABP_Pit_Crew_AIRGUN_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_AIRGUN_AnimGraphNode_TransitionResult_9D614F4748A598FA71C47AB59CF882E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_AIRGUN_AnimGraphNode_TransitionResult_AA8396BD4A13FDCCB38AF79FEB9E2025();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_AIRGUN_AnimGraphNode_TransitionResult_4462B3E947AB2C7635632E9DE92FB660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_AIRGUN_AnimGraphNode_BlendSpacePlayer_D21B06D24406D7F18C98C7A1A2F14519();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pit_Crew_AIRGUN_AnimGraphNode_TransitionResult_F0A94712480EC6CB044ADDAB43742578();
	void ExecuteUbergraph_ABP_Pit_Crew_AIRGUN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
