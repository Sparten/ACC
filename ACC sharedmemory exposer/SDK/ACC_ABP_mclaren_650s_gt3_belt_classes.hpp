#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_mclaren_650s_gt3_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_belt.ABP_mclaren_650s_gt3_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_mclaren_650s_gt3_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CCAB749D48101B5DC4F3E79BB8152334;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C83C6DF470BD78A8696E19FF3E65D89;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D89DEC91483478A843D6EA8C912202FB;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3A0B522A406D602E14AFF18982D546B8;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC36A04443E21B251F924D8322A499A0;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76DBEC5644DB4D28A555BEA7341765C5;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CFABA5349E4B937493E99AE2127628C;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75E26A814BC97E68D321E9BC53D9898A;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_501956C641FBBD759F6F1B8B4945D699;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5223C2C243046C2BEB2F418A3C542520;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_mclaren_650s_gt3_belt.ABP_mclaren_650s_gt3_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_belt_AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_belt_AnimGraphNode_TransitionResult_4C83C6DF470BD78A8696E19FF3E65D89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_belt_AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_mclaren_650s_gt3_belt_AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B();
	void ExecuteUbergraph_ABP_mclaren_650s_gt3_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
