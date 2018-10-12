#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lexus_rcf_gt3_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lexus_rcf_gt3_driver.ABP_lexus_rcf_gt3_driver_C
// 0x0790 (0x0BE0 - 0x0450)
class UABP_lexus_rcf_gt3_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F22DD5B3478891A325A2C8AADBCAD096;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_050EB1D54436E3D9EA27D39AF0F8AFA7;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB19DA7A427739EA0FFD05B1D38CCC1F;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2229FA2E47753023E0ECB482F072F73B;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8CAD4ED94D7B7456423B0FA5F761397A;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F33F0D24D7DDDB71976188C0CB5EF7D;// 0x05C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C40D98B54DC79E26CC97498F486A9C39;// 0x0608(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BF70A5A439A333B590864AE4BA0A291;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B66CEA374EC7E9349F67C48FB0F93E37;// 0x0700(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E793AF64219D0148D97159131987BA2;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B4B68EF4D74F428D2A8E98CBE521D81;// 0x07F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D250DBA34491322EF257F68F457DA988;// 0x08A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B69161F404084DAAE3CF396823E9B8A;// 0x08F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2598C9E14B73CC01F732DB8ADFE54DA8;// 0x09A0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CDDE017240FBBBC62CC0C28B8036CC16;// 0x0AB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_94F9C4BA4DCDED7008C278968D1747AD;// 0x0B00(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lexus_rcf_gt3_driver.ABP_lexus_rcf_gt3_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rcf_gt3_driver_AnimGraphNode_TransitionResult_2229FA2E47753023E0ECB482F072F73B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rcf_gt3_driver_AnimGraphNode_TransitionResult_DB19DA7A427739EA0FFD05B1D38CCC1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rcf_gt3_driver_AnimGraphNode_TransitionResult_8CAD4ED94D7B7456423B0FA5F761397A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rcf_gt3_driver_AnimGraphNode_TransitionResult_050EB1D54436E3D9EA27D39AF0F8AFA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lexus_rcf_gt3_driver_AnimGraphNode_TransitionResult_6F33F0D24D7DDDB71976188C0CB5EF7D();
	void ExecuteUbergraph_ABP_lexus_rcf_gt3_driver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
