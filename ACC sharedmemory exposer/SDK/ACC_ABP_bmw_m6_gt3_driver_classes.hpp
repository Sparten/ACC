#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bmw_m6_gt3_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_driver.ABP_bmw_m6_gt3_driver_C
// 0x2D80 (0x31D0 - 0x0450)
class UABP_bmw_m6_gt3_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33CD0F9C40D60C92C3DF98AFF1440B7D;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C38FD3C4A0FB27253B048AEBF18BF80;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C1F44DD4864AEF7617CC39610599518;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FD9B3DC4C100545B893C89AA5C428A4;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_920AC4F143BEA660A3DF13909BC7942D;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32D65CF84A2CD30585050FA794F7481F;// 0x05C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CEED791840DF6609792B748FB7533509;// 0x0608(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B605AD184B2F5C5ED46F3EA0A12A626E;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6BC667EA488987C4D407CFA6E9A63518;// 0x0700(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6BAF409C4EE4CC30D9ABD88CA7DA7195;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E2E03C84D124A3B28866C80E3E9455A;// 0x07F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_478BE24C48F4E839948A53B81D9E86B3;// 0x08A8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4CFAFF244EB44C6D67D509AA4833E6A2;// 0x08F0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_78074B404B0880169BED4FA65EE504DA;// 0x0A08(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0352E80E49F36F3F5684A7A3C124854E;// 0x0B20(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B745F58E43C338CD44B8C79C586F38CE;// 0x0C48(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_540B8C0041A3D8143927C885BCFCDFC1;// 0x0D70(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FDAFD10D40754D9B10E991BBBD77C65B;// 0x0E88(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_298DB8D64F900DC4AB41428D2314D953;// 0x0FA0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B60CF293459A9D5C68E872B068387892;// 0x1050(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_50BBCC794397557D0B7533BFC4BDEEB1;// 0x1168(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE365D274E9EF0AFCAADCBB77414E1D8;// 0x1280(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1F2244644B0BB093FD752B99B7D80694;// 0x1330(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_71CF5A554A6C01B91A847BA025E1B579;// 0x1448(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F34C55548C818590C0D1DAA728AA05B;// 0x1560(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A5CC656545BB1CC4A5BA1CA01060E655;// 0x1610(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0470A90247FE5FE9A859A9821A35FF65;// 0x16C0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EE7C82CA43D5520C33135D82F0B74537;// 0x17D8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6218E1094EB221AE995E2E8001D77F88;// 0x18F0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_05656F214322A38290EAC493774564A8;// 0x1A08(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1A573A62425CDA5B9DFDF68322BFF01B;// 0x1B20(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CB90C9914E9DB2A8571A4BBBC0C9F3C1;// 0x1C38(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B9115F4D4460CE7472DA20B048433F0F;// 0x1D50(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7BF6C1C04E6EF246D2BDD087D408B31E;// 0x1E68(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E30C6CF94E2E9766CA099DA571249EF4;// 0x1F80(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_892CC0B74F0546C27BCF38A5FB3EF748;// 0x2098(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A389C7446B19D70E0797494B457A83C;// 0x2148(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A73BC5AA4B98E0AADA1C24A6D7DB959B;// 0x21F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_01D0E61A42F92C914D1E08804C817C8D;// 0x22A8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6410DA64DD2BBF7BD4C9782C18589A1;// 0x2358(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B4B623644053091CB7776C8EED7A9BC9;// 0x2408(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC0B99D141F5E03583E3C4B6B311B376;// 0x24B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_600441C74CDAA6C0BDDD5D9386FEEA6C;// 0x2568(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED6313E84EDA8DB5DAB28D8699ED66F8;// 0x2618(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AAB6F39F452FF8DAD4A95B8F0750F2F1;// 0x26C8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CC7010EE4C95231DF606F1A0CDEC4822;// 0x27F0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3BD4D5444CFA0E0F14086289C523927B;// 0x2918(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AD8CCE1448A312936F6A5FBBE2EFC49B;// 0x2A30(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29CA0BEC42A565A2EEE87BAA095B75CF;// 0x2B48(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3B216E643AF0F262BCC51A4BCC1D5FF;// 0x2BF8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B33FA29744D262CF85B1B690411C0BF5;// 0x2CA8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0825398143E22FC95B7D3BAEA2DD3F25;// 0x2D58(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_95FE3B2843E7B2A84E7218B4C9728C70;// 0x2E70(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3527C6FF4866202CE41894B28466AE6C;// 0x2EE0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E5886B0A407D7EAE7BD963AE67354370;// 0x2F90(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F4053EA34976F4CBE8485EA186566DEB;// 0x30A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_47157F61438ACC8A0BFE0DB35FBEB265;// 0x30F0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bmw_m6_gt3_driver.ABP_bmw_m6_gt3_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_1A573A62425CDA5B9DFDF68322BFF01B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_CB90C9914E9DB2A8571A4BBBC0C9F3C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_B9115F4D4460CE7472DA20B048433F0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_7BF6C1C04E6EF246D2BDD087D408B31E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_E30C6CF94E2E9766CA099DA571249EF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_892CC0B74F0546C27BCF38A5FB3EF748();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_4A389C7446B19D70E0797494B457A83C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_A73BC5AA4B98E0AADA1C24A6D7DB959B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_01D0E61A42F92C914D1E08804C817C8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_F6410DA64DD2BBF7BD4C9782C18589A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_B4B623644053091CB7776C8EED7A9BC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_AC0B99D141F5E03583E3C4B6B311B376();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_600441C74CDAA6C0BDDD5D9386FEEA6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_ED6313E84EDA8DB5DAB28D8699ED66F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_BlendSpacePlayer_AAB6F39F452FF8DAD4A95B8F0750F2F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_BlendSpacePlayer_CC7010EE4C95231DF606F1A0CDEC4822();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_29CA0BEC42A565A2EEE87BAA095B75CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_F3B216E643AF0F262BCC51A4BCC1D5FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_B33FA29744D262CF85B1B690411C0BF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_0825398143E22FC95B7D3BAEA2DD3F25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequenceEvaluator_95FE3B2843E7B2A84E7218B4C9728C70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_71CF5A554A6C01B91A847BA025E1B579();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_05656F214322A38290EAC493774564A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_1F2244644B0BB093FD752B99B7D80694();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_EE365D274E9EF0AFCAADCBB77414E1D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_50BBCC794397557D0B7533BFC4BDEEB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_6218E1094EB221AE995E2E8001D77F88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_B60CF293459A9D5C68E872B068387892();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_298DB8D64F900DC4AB41428D2314D953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_BlendSpacePlayer_B745F58E43C338CD44B8C79C586F38CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_BlendSpacePlayer_0352E80E49F36F3F5684A7A3C124854E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_78074B404B0880169BED4FA65EE504DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_4CFAFF244EB44C6D67D509AA4833E6A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_TransitionResult_32D65CF84A2CD30585050FA794F7481F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_EE7C82CA43D5520C33135D82F0B74537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_ApplyAdditive_0470A90247FE5FE9A859A9821A35FF65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_TransitionResult_920AC4F143BEA660A3DF13909BC7942D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_A5CC656545BB1CC4A5BA1CA01060E655();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_TransitionResult_3FD9B3DC4C100545B893C89AA5C428A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_TransitionResult_0C1F44DD4864AEF7617CC39610599518();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_TransitionResult_2C38FD3C4A0FB27253B048AEBF18BF80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bmw_m6_gt3_driver_AnimGraphNode_SequencePlayer_4F34C55548C818590C0D1DAA728AA05B();
	void ExecuteUbergraph_ABP_bmw_m6_gt3_driver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
