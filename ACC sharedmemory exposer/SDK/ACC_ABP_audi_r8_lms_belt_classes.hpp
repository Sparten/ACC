#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_audi_r8_lms_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_audi_r8_lms_belt.ABP_audi_r8_lms_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_audi_r8_lms_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_922810EF4ADAD370BD4E4FB458BCC725;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36AF52AC4A8A9D0FB8EA8DBC1B152203;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_943A8EA84F0662179C1E009597DDC5F0;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C97F89C24FAF20202E24B8B119AE7704;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8745E0E7472C456E0F72E99FB1FCBA6B;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64F33A1049C83ACE30C63E90E2A08440;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8EB45A7A4B4618736773B2B8062A2737;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D0577E147EAA3B09A6ACBAD3FBB6182;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4017CB0F47F4D81B43C0BBA196F89ECC;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43A4578942C7C8ED138D609781527077;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_384C42C94A671080A682E8996174E458;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ACD3EB9244BAAB53626F67BB3AD4AA98;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_audi_r8_lms_belt.ABP_audi_r8_lms_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_belt_AnimGraphNode_TransitionResult_C97F89C24FAF20202E24B8B119AE7704();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_belt_AnimGraphNode_TransitionResult_8745E0E7472C456E0F72E99FB1FCBA6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_belt_AnimGraphNode_TransitionResult_36AF52AC4A8A9D0FB8EA8DBC1B152203();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_audi_r8_lms_belt_AnimGraphNode_TransitionResult_943A8EA84F0662179C1E009597DDC5F0();
	void ExecuteUbergraph_ABP_audi_r8_lms_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
