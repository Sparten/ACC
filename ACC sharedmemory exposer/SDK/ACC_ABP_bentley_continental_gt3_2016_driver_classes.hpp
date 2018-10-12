#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_bentley_continental_gt3_2016_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_driver.ABP_bentley_continental_gt3_2016_driver_C
// 0x32D8 (0x3728 - 0x0450)
class UABP_bentley_continental_gt3_2016_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C180F79D4F8285856BA739A709F9D194;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01DE13584B08EAD7EDA629A281025048;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3687FF0842D905C78BC22884996D7346;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F8C744B40F33B344EEC9AA4B3286227;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A862D1F644454A791ADA1E8FAFE04198;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABC2A08A4AC84CD887B6D189EDFD32E4;// 0x05C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76ABA0F54D362A5B73358B8FCCE938FB;// 0x0608(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3095A00748958778F3FFB6AC4FB1D0B5;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAA97C5C4A41F8C1D24FEDA9686457E7;// 0x0700(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2034B50946CD632A2EF29A92B553EB57;// 0x07B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0251CF4F472225740A77A497AC8E30A8;// 0x07F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D0D51534EC9A2755BCCFF879A8BD24D;// 0x08A8(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7308B9074AFAD6588B034B816C1BB87F;// 0x08F0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72046B464F29A8ACC4E1989970BC85C8;// 0x0A08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4D36E694ED3926356139CA445301C8E;// 0x0AB8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75740D4F4BE0199822D6ACA874EDEACC;// 0x0B68(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_393044694288373A3085758C281C297C;// 0x0C18(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_40C17C6D44F9C78A8535709C3E9F0310;// 0x0D30(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C1E5A27941F099272BFF71B65456343B;// 0x0E48(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C7B7F0F41B74F9F702938AAD750FDB9;// 0x0F70(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_40B986F84C47658184B992B2AC0FCDBB;// 0x1098(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7D5C344146C65249FD2E85A29AE3032C;// 0x11B0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF78AD514436CA9594764E831EC49AC9;// 0x12C8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_90D2A16649E6C6E76CA6919D61E9CA72;// 0x1378(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C0AF37A041A6F23E648017B96AAE8715;// 0x1490(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A05751349AB2C5B1220918AC3DDAC07;// 0x15A8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_644DE5E040E390260E2276B9EB808867;// 0x1658(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F08311754AE3A532F90DD2871CD923A5;// 0x1770(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_746ED14747CDAF581EDF36A9E30F1656;// 0x1820(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_806FFF2C42430C9A4F6E60B0EE45BE80;// 0x1938(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_795FEE9C4FF2703CF93E2396C8211F50;// 0x1A50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42C466D0469050D5D3DCC38BCB9BE90C;// 0x1B00(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CBCBFB194BCE9FEB71E4FA9B594AF611;// 0x1BB0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0E5DCA274AB31364253F7DBA7A2011C9;// 0x1CC8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6E0FB0D34B3F7DA7992567B3B93386D9;// 0x1DE0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_87CCDEBE4110C296CB930D8E4DA6CE18;// 0x1EF8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BBCD8F9A45CDDE3EF9215F9F5B786AA2;// 0x2010(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1F57CDA04A7412B5AC6FE2A70CF2C1AD;// 0x2128(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B31179FE429B1EB211528C8AACFA7C5A;// 0x2240(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1ACB337C42423A9EB255EFB8BBDD651D;// 0x2358(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1422FF945CBFC47944553A015395569;// 0x2470(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC025D684932A50EE176BCB4FC4DD022;// 0x2588(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DADAE4BB4BD30C652A5BD2B5D5B4A63D;// 0x2638(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8A3BAD644B6BCB35A3D0EA73BB005C2;// 0x26E8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3CBAF4D4CAAFD253B1D9EB0BD308DEE;// 0x2798(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC90EDE54F208BBB8B8A16AB41BF098B;// 0x2848(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00A070A748B9F7D455731FBDB045FBDB;// 0x28F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3AEDBAE496CEEE12FA1458D5B31440B;// 0x29A8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F3EEB614BA4C122A9D16FA13780E086;// 0x2A58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_005F8B2745F87A526C1DEBB95345CC9A;// 0x2B08(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8468ED5D490B8BB0513D448500DD9391;// 0x2BB8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FACAAAFE4233FB57C7A8DC8426BC12DC;// 0x2CE0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_93FE3B8A416FB9C6C2DCD5A822FDD7A0;// 0x2E08(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0992188A44182DE6773BE2B423237959;// 0x2F20(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F7F45C9E4663AAF76009A5BC893AC2B3;// 0x3038(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8A8A15D04C8BA55A623648913A27BFEF;// 0x3150(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06B693094D211E509E4ED68DCC0046E6;// 0x3268(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7FA1DDF4E606E1DEDFD939B0A18D4E8;// 0x3318(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9E0A75F3416A104E903DD281089B57C4;// 0x33C8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF645214429421278E5FE98A61113981;// 0x3438(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5859687A41E99F2FCF8FCD8DC1F2FFA5;// 0x34E8(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_844AD52A442540E4E0F056A678593964;// 0x3600(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53E6DEE64CEC0E2E40B9C6BA72F0BF94;// 0x3648(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bentley_continental_gt3_2016_driver.ABP_bentley_continental_gt3_2016_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_806FFF2C42430C9A4F6E60B0EE45BE80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_795FEE9C4FF2703CF93E2396C8211F50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_42C466D0469050D5D3DCC38BCB9BE90C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_CBCBFB194BCE9FEB71E4FA9B594AF611();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_0E5DCA274AB31364253F7DBA7A2011C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_6E0FB0D34B3F7DA7992567B3B93386D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_87CCDEBE4110C296CB930D8E4DA6CE18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_BBCD8F9A45CDDE3EF9215F9F5B786AA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_1F57CDA04A7412B5AC6FE2A70CF2C1AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_B31179FE429B1EB211528C8AACFA7C5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_1ACB337C42423A9EB255EFB8BBDD651D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_D1422FF945CBFC47944553A015395569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_DC025D684932A50EE176BCB4FC4DD022();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_DADAE4BB4BD30C652A5BD2B5D5B4A63D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_F8A3BAD644B6BCB35A3D0EA73BB005C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_F3CBAF4D4CAAFD253B1D9EB0BD308DEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_DC90EDE54F208BBB8B8A16AB41BF098B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_00A070A748B9F7D455731FBDB045FBDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_F3AEDBAE496CEEE12FA1458D5B31440B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_3F3EEB614BA4C122A9D16FA13780E086();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_005F8B2745F87A526C1DEBB95345CC9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_BlendSpacePlayer_8468ED5D490B8BB0513D448500DD9391();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_BlendSpacePlayer_FACAAAFE4233FB57C7A8DC8426BC12DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_F7F45C9E4663AAF76009A5BC893AC2B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_8A8A15D04C8BA55A623648913A27BFEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_06B693094D211E509E4ED68DCC0046E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_F7FA1DDF4E606E1DEDFD939B0A18D4E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequenceEvaluator_9E0A75F3416A104E903DD281089B57C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_C0AF37A041A6F23E648017B96AAE8715();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_746ED14747CDAF581EDF36A9E30F1656();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_90D2A16649E6C6E76CA6919D61E9CA72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_FF78AD514436CA9594764E831EC49AC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_BlendSpacePlayer_4C7B7F0F41B74F9F702938AAD750FDB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_F08311754AE3A532F90DD2871CD923A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_BlendSpacePlayer_C1E5A27941F099272BFF71B65456343B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_40C17C6D44F9C78A8535709C3E9F0310();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_393044694288373A3085758C281C297C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_75740D4F4BE0199822D6ACA874EDEACC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_D4D36E694ED3926356139CA445301C8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_72046B464F29A8ACC4E1989970BC85C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_7308B9074AFAD6588B034B816C1BB87F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_TransitionResult_ABC2A08A4AC84CD887B6D189EDFD32E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_TransitionResult_A862D1F644454A791ADA1E8FAFE04198();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_ApplyAdditive_644DE5E040E390260E2276B9EB808867();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_TransitionResult_7F8C744B40F33B344EEC9AA4B3286227();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_TransitionResult_3687FF0842D905C78BC22884996D7346();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_TransitionResult_01DE13584B08EAD7EDA629A281025048();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver_AnimGraphNode_SequencePlayer_0A05751349AB2C5B1220918AC3DDAC07();
	void ExecuteUbergraph_ABP_bentley_continental_gt3_2016_driver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
