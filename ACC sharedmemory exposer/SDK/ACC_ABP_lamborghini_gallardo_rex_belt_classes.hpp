#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_gallardo_rex_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_belt.ABP_lamborghini_gallardo_rex_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_lamborghini_gallardo_rex_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E4A481FA4AC73464F1FCE09C16B4832C;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C83C6DF470BD78A8696E19FF3E65D89;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B20484074C0AAF04F3BFF7BA5F98BD29;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59ADE0FA42AE3104E725549042761F16;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_939C46B249900D8168D0D1845F0A8916;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0221C2534FF8948E1E57ACA6F1390D87;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6A68409945CB5269C13F858868B97733;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D39EBA9486A4F87F568DFB708EB9CD1;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E1D95A94453FC64D0F80391567121DB;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_31566A7244AC77787DB334A4A2EB9AA3;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_gallardo_rex_belt.ABP_lamborghini_gallardo_rex_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_belt_AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_belt_AnimGraphNode_TransitionResult_4C83C6DF470BD78A8696E19FF3E65D89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_belt_AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_gallardo_rex_belt_AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B();
	void ExecuteUbergraph_ABP_lamborghini_gallardo_rex_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
