#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_ferrari_488_gt3_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ferrari_488_gt3_driver.ABP_ferrari_488_gt3_driver_C
// 0x34A0 (0x38F0 - 0x0450)
class UABP_ferrari_488_gt3_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C32A6323415097CF8608A8863F8DB25E;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DDBADD24F5F9935555ADC97F40721ED;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DABFE71046CEBDC1E2035EA701C3FC82;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2AD34BC403774F35AA0CD9622DE30C2;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F66D79CA44B442C22DF1AE87CB6982E6;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCCCB04B4A2F04F610B695952693623C;// 0x05C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7C3F40F4513B68645F8DD923D5BDBBB;// 0x0608(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F67B2EF84D10C2BC6568DAA4F3417067;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D12DA52E43E262D277C3528028FEBCDC;// 0x0700(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF6E07C84A97AE5852EC1AB23C21587E;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCE0CA10425F3764D71416A120FBA811;// 0x07F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAC182604F5D93F43CF2389AB9F65942;// 0x08A8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_37D824F04F6CD8B1327A478D9F6FEEBB;// 0x08F0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_717D2D194D47EB40438F3D9282D77F34;// 0x0A08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC1F57A44775C638690BAE8822439238;// 0x0AB8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C6A9AADC456C529D9D9D599AC78238CA;// 0x0B68(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DDE72A044220484B8DAC928D7CAC5E89;// 0x0C80(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8519CD948E0295A20BF58BED4AC7930;// 0x0D98(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FC328AC04B86FD0839312AB86618FA63;// 0x0E48(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E570B75C47FCC46C7770318EAF9C6F1B;// 0x0F60(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_111A53234666BEE1E372AFB5A4BE4160;// 0x1010(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2DCEC2A74E25C6D59F4CC6BCDEE01382;// 0x1128(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C2EE6F649A287D8E0BC4D948C76C337;// 0x1240(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75BBB1064538CA5D76445B881C836329;// 0x12F0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C9B73EE644567C0B797F81B4D4E4BDC7;// 0x13A0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DE0105D447D17B761A4F5D958B624ADB;// 0x14B8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AB4206924C83B022D7939F83CBBC3C22;// 0x15D0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6BEE6DEF4511D7A46F7A00892B8A7C10;// 0x16E8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9AF9EC15417188B2089EF89925326A8E;// 0x1800(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_52DEE66E4FF5945F57C48AA3F34D4E5B;// 0x1918(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B59147B743E7FE6B422D2599D63244A0;// 0x1A30(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8495042A48C9503ADF043EAC5A4FC482;// 0x1B48(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0ECD34FD4B426F162CCCC999A6356F95;// 0x1C60(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AAAB53A74EF70CCB0ECA7F8731B820A5;// 0x1D78(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_49F947A2472D6AA6A558F29A652698A2;// 0x1E90(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_011D8999435E7870096892B615F076AA;// 0x1FA8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2855C084C1020C3ACA921A1A2CCA3C6;// 0x20C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDFDC6D34071EF90DF0BD680B8E0C398;// 0x2170(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31695B0A432F484BBEA3A594E21D4EE6;// 0x2220(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D386EA2B4FF9152CDA290AAE0B99CAF5;// 0x22D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DB871B44D4C2347E24417AB359588CC;// 0x2380(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DAB5BD2D4C858448B49B4D9EC11378C8;// 0x2430(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A75B37884199F0173BCE8CBC8A0ECC38;// 0x24E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A153BA8B4EF863F3639164A066537ED3;// 0x2590(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3EAE4EED40EB95E9E00D5DB70FCDB7AB;// 0x2640(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3BFC96E4707AFA4EFCAFCB04FC3F35B;// 0x26F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70022A704BB0A9A675793392183C7DDC;// 0x27A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5A7B209C45839ED2285449B48A1B8D52;// 0x2850(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_283ED7B041FBBA9428D56C848F9195BB;// 0x2900(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_660DBDF34A0A7C52BDEA67999808AF5C;// 0x2A28(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_27FC53784AD74DB9BC42DA8CB3A586E4;// 0x2B50(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1EA16FCF442707F0FB577198BB01AACF;// 0x2C68(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8ECEF9D44A9B4692A08053817004DD53;// 0x2D80(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4FB2117C48144D90BC0253B8C5E7DA59;// 0x2EA8(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B64C123345EF2BDAD61E6DABB622734F;// 0x2FD0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5B60AA9A43D0B154DF282EA36689BA0B;// 0x30E8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_193376AE4B16AA5FC18899966A8CFF5A;// 0x3200(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B020086445BCC75E20823180C5073988;// 0x3318(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B2DFCBAA491669CF78A7D387177C44F7;// 0x3430(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8CC66714B73A558E9D1DEA5869F493D;// 0x34E0(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7AB9557649B6CFB4C6BD519409712100;// 0x3590(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABE87E544CAECDC4614A518C5146CC92;// 0x3600(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BAEF550D46C805C7E56DB1A842140F47;// 0x36B0(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EE36591B41AB5436EDE6ECB3C7838475;// 0x37C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_517A4B83422D748EC0A5E2AB36B91115;// 0x3810(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ferrari_488_gt3_driver.ABP_ferrari_488_gt3_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_9AF9EC15417188B2089EF89925326A8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_52DEE66E4FF5945F57C48AA3F34D4E5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_B59147B743E7FE6B422D2599D63244A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_8495042A48C9503ADF043EAC5A4FC482();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_0ECD34FD4B426F162CCCC999A6356F95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_AAAB53A74EF70CCB0ECA7F8731B820A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_49F947A2472D6AA6A558F29A652698A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_011D8999435E7870096892B615F076AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_A2855C084C1020C3ACA921A1A2CCA3C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_FDFDC6D34071EF90DF0BD680B8E0C398();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_31695B0A432F484BBEA3A594E21D4EE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_D386EA2B4FF9152CDA290AAE0B99CAF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_6DB871B44D4C2347E24417AB359588CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_DAB5BD2D4C858448B49B4D9EC11378C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_A75B37884199F0173BCE8CBC8A0ECC38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_A153BA8B4EF863F3639164A066537ED3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_3EAE4EED40EB95E9E00D5DB70FCDB7AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_A3BFC96E4707AFA4EFCAFCB04FC3F35B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_70022A704BB0A9A675793392183C7DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_5A7B209C45839ED2285449B48A1B8D52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_BlendSpacePlayer_283ED7B041FBBA9428D56C848F9195BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_BlendSpacePlayer_660DBDF34A0A7C52BDEA67999808AF5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_BlendSpacePlayer_8ECEF9D44A9B4692A08053817004DD53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_BlendSpacePlayer_4FB2117C48144D90BC0253B8C5E7DA59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_193376AE4B16AA5FC18899966A8CFF5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_B020086445BCC75E20823180C5073988();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_B2DFCBAA491669CF78A7D387177C44F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_A8CC66714B73A558E9D1DEA5869F493D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequenceEvaluator_7AB9557649B6CFB4C6BD519409712100();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_75BBB1064538CA5D76445B881C836329();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_6BEE6DEF4511D7A46F7A00892B8A7C10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_8C2EE6F649A287D8E0BC4D948C76C337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_2DCEC2A74E25C6D59F4CC6BCDEE01382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_111A53234666BEE1E372AFB5A4BE4160();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_AB4206924C83B022D7939F83CBBC3C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_E570B75C47FCC46C7770318EAF9C6F1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_FC328AC04B86FD0839312AB86618FA63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_B8519CD948E0295A20BF58BED4AC7930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_DDE72A044220484B8DAC928D7CAC5E89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_C6A9AADC456C529D9D9D599AC78238CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_DC1F57A44775C638690BAE8822439238();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_SequencePlayer_717D2D194D47EB40438F3D9282D77F34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_37D824F04F6CD8B1327A478D9F6FEEBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_TransitionResult_FCCCB04B4A2F04F610B695952693623C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_TransitionResult_F66D79CA44B442C22DF1AE87CB6982E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_DE0105D447D17B761A4F5D958B624ADB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_TransitionResult_E2AD34BC403774F35AA0CD9622DE30C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_TransitionResult_DABFE71046CEBDC1E2035EA701C3FC82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_TransitionResult_8DDBADD24F5F9935555ADC97F40721ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ferrari_488_gt3_driver_AnimGraphNode_ApplyAdditive_C9B73EE644567C0B797F81B4D4E4BDC7();
	void ExecuteUbergraph_ABP_ferrari_488_gt3_driver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
