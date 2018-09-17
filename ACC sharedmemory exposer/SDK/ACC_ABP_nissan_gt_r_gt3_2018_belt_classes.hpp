#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_nissan_gt_r_gt3_2018_belt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2018_belt.ABP_nissan_gt_r_gt3_2018_belt_C
// 0x0580 (0x08F0 - 0x0370)
class UABP_nissan_gt_r_gt3_2018_belt_C : public UAcCarBeltAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BFDB3E444F6D79A11222CD9FAF51B714;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E01C8544EAC2FF103761197D5E736E8;// 0x0498(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51A2FE7D410FDA32706F2087B68BEC4E;// 0x04E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0BEB6CD499C41690BA958A080CC4641;// 0x0528(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A05DEFD9464C4A2FF08E5C853CDF9AFE;// 0x05D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC12E9404975ECDA8B0A72BC404E123D;// 0x0620(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4588DFD34DEAD7920EB9B09FE82C326C;// 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E11DE4B4518F26D46F463A2DE5F40DB;// 0x0718(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_69226B804E736F521FDD0FBAF6359E3B;// 0x07C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_314053064558F4E4E0B9F4ADB418CBAF;// 0x0810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_nissan_gt_r_gt3_2018_belt.ABP_nissan_gt_r_gt3_2018_belt_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_belt_AnimGraphNode_TransitionResult_672DF8D6432CEE547E966E88B5843B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_belt_AnimGraphNode_TransitionResult_0E01C8544EAC2FF103761197D5E736E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_belt_AnimGraphNode_TransitionResult_24A58F1344CA8106F11140953212FFB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_belt_AnimGraphNode_TransitionResult_316572D54ADABEA15109098C673B8E8B();
	void ExecuteUbergraph_ABP_nissan_gt_r_gt3_2018_belt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
