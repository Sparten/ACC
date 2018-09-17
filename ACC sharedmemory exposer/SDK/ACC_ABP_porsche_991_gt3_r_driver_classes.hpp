#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_porsche_991_gt3_r_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_driver.ABP_porsche_991_gt3_r_driver_C
// 0x3432 (0x3882 - 0x0450)
class UABP_porsche_991_gt3_r_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_42AAE8D142E39923765DC09025C10767;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84CC975E44AE95A36018229F2BC4FD9A;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C4063B64AC661E88938DE88BAB60FB9;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0D3A24445D8908A15AE518F01780846;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BCD64A349C0C49C797967A5F58D0352;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B9F1A7F84CE5E1FEA6F8C7913B200F86;// 0x05C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_049508C44215BB0AD3F507BCCC97641A;// 0x0608(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DDACEB4947F21BAC56412699BD74696B;// 0x0650(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D347B5C4ABBD00B871143846CC9EB34;// 0x0698(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3CF9C3C4A1A0671B30ED9BFC83067BF;// 0x06E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A1B73BD847156571965077BE975DECF5;// 0x0790(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07E6D98342648F043C33C59307843D76;// 0x07D8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D8147B2426C05FEACE4D1AF8A830262;// 0x0888(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD6B4FB345D1FA801D6C76BCA92E1C90;// 0x08D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C4FE0263420E8D49366361BF60B3122F;// 0x0980(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE19C79341406C6333AD51BD342CBACF;// 0x09C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E04F856644E0FFC7681690998533BDE6;// 0x0A78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_358725BB491B05E275CD089020435E88;// 0x0AC0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_66C48F08426DEB572B1FC492B0F8A86E;// 0x0B70(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D58E43D041498A35FBC1D693F09BBBD6;// 0x0BB8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2E27521647E947C2663FC2B6FFCDB5F6;// 0x0CD0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C5D25C04C53F66A0BA819BDC63C9E58;// 0x0D80(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E2790F654BAA8D8C6DB9498864DED1D5;// 0x0E30(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E8CA80F4DBF6DA7FA13F18EAB36E79B;// 0x0F48(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE8429D544DCB34083D4B48A43E282B4;// 0x0FF8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FBC83B3C40163AC23C5487805E0BB472;// 0x10A8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8D5BB0894411D11BEFF8B1A571B004CB;// 0x11C0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E373B0F1494A2DEFA1D4FD8683EFFEF7;// 0x12D8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1446D61419A7C6C6519259DC728ECAB;// 0x13F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B2BA7554C61949B52557784F5D1DC95;// 0x14A0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0B7DCF79458F8213941B75A1EE80C41E;// 0x1550(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_56C74171440F87793DE5DE8A1016EB03;// 0x1668(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3F42B3224628524977E891AB3CBF8996;// 0x1780(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0E664F404CAF3AEA03BEE8B5BE4EE76C;// 0x1898(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4BE3602347953FAB103CFEAE9530E13F;// 0x19B0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9283A60A4DB0C6DAC340D2A6BDD6E4EE;// 0x1AC8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74E773814D8AA3E7597681B2385C3038;// 0x1B78(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8922246E4839AF9991EFF797CB688F6A;// 0x1C28(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECE9BC1641B223FBF6B71D834F8146D6;// 0x1CD8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_755FE8334DEF853B3D303FAE6CDC9364;// 0x1D88(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B647B03C47CABEC06073E19733D83079;// 0x1EB0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DE7049A94A6E986CF7306A93D960907B;// 0x1FD8(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0AC4355E4F80057329D3EF8909884A46;// 0x2100(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B836FD344B3A193F7E0D79BDACAA5713;// 0x21B0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0E03C8AE4B09C0B81D074E856E829AD4;// 0x22C8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4F6E50E47956CDDE7EA25AA111CDCF0;// 0x2378(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CEEE6D6E41D1DFF34C011690E9751D1F;// 0x2428(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F69835E84AF1F6851E5265A474D00EF7;// 0x24D8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CDA02E14EC4420DB43B54B03E07E66A;// 0x2588(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C154FDFE4D5F716CA08A859EAE5300B5;// 0x2638(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_826B30C0487E114DCA790F8356CDC035;// 0x26E8(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8966E0F94344571762EF0781908D2C9D;// 0x2800(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F853AF0A45473F2A384200BBB2153BC4;// 0x2918(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_79C711B3417BC2B935FA6CA24FE59D8F;// 0x2A30(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9C4E545D4AF3AA974B2D7F86662F3060;// 0x2B48(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB00801845286340A08B82B56440EA05;// 0x2C60(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E0C3BD03492ADEE94C5BD4B71AB4CF75;// 0x2D10(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D04A32640E86DEF78CC8483F139C038;// 0x2E28(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7440588E4CBF812327C90F9D4FDF76AA;// 0x2ED8(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_764635DF4EAED26F902A9D9061D24DC8;// 0x2FF0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5349E5E04F1A0E55C932658A90A8E617;// 0x3060(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6F5C35D4457851F50345439C835F323A;// 0x3178(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B256DFF44953886834CDB0841B1FA405;// 0x3290(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11179BF1448F61A6135781B5B4DBFA88;// 0x33A8(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_59264C094CE600B411E85489F024EF98;// 0x34D0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_79664ACA489F21384A24678C3615FA4C;// 0x35E8(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_83CCCD2F4566ABCF6A1D75A986C7D945;// 0x3700(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EB1F548E464A1EC93FED8CAE99F34108;// 0x3748(0x00E0)
	class ACarAvatar*                                  CarAvatar;                                                // 0x3828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Belt_ON_time;                                             // 0x3830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Belt_OFF_time;                                            // 0x3834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Driving;                                               // 0x3838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipAnimations;                                           // 0x3839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x383A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    NetOff;                                                   // 0x3840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NetOn;                                                    // 0x3850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoorOpen;                                                 // 0x3860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoorClose;                                                // 0x3870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CMD_BrakeBias;                                            // 0x3880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_On_Marker;                                             // 0x3881(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_driver.ABP_porsche_991_gt3_r_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_E2790F654BAA8D8C6DB9498864DED1D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_1E8CA80F4DBF6DA7FA13F18EAB36E79B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_EE8429D544DCB34083D4B48A43E282B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_FBC83B3C40163AC23C5487805E0BB472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_8D5BB0894411D11BEFF8B1A571B004CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_E373B0F1494A2DEFA1D4FD8683EFFEF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_A1446D61419A7C6C6519259DC728ECAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_2B2BA7554C61949B52557784F5D1DC95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_0B7DCF79458F8213941B75A1EE80C41E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_56C74171440F87793DE5DE8A1016EB03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_3F42B3224628524977E891AB3CBF8996();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_0E664F404CAF3AEA03BEE8B5BE4EE76C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_4BE3602347953FAB103CFEAE9530E13F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_9283A60A4DB0C6DAC340D2A6BDD6E4EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_74E773814D8AA3E7597681B2385C3038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_8922246E4839AF9991EFF797CB688F6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_ECE9BC1641B223FBF6B71D834F8146D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_BlendSpacePlayer_755FE8334DEF853B3D303FAE6CDC9364();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_BlendSpacePlayer_B647B03C47CABEC06073E19733D83079();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_BlendSpacePlayer_DE7049A94A6E986CF7306A93D960907B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_B836FD344B3A193F7E0D79BDACAA5713();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_0E03C8AE4B09C0B81D074E856E829AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_F4F6E50E47956CDDE7EA25AA111CDCF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_CEEE6D6E41D1DFF34C011690E9751D1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_F69835E84AF1F6851E5265A474D00EF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_5CDA02E14EC4420DB43B54B03E07E66A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_C154FDFE4D5F716CA08A859EAE5300B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_826B30C0487E114DCA790F8356CDC035();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_8966E0F94344571762EF0781908D2C9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_F853AF0A45473F2A384200BBB2153BC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_79C711B3417BC2B935FA6CA24FE59D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_9C4E545D4AF3AA974B2D7F86662F3060();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_DB00801845286340A08B82B56440EA05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_E0C3BD03492ADEE94C5BD4B71AB4CF75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_6D04A32640E86DEF78CC8483F139C038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_7440588E4CBF812327C90F9D4FDF76AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequenceEvaluator_764635DF4EAED26F902A9D9061D24DC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_BlendSpacePlayer_11179BF1448F61A6135781B5B4DBFA88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_FD6B4FB345D1FA801D6C76BCA92E1C90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_07E6D98342648F043C33C59307843D76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_0C5D25C04C53F66A0BA819BDC63C9E58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_0D347B5C4ABBD00B871143846CC9EB34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_SequencePlayer_2E27521647E947C2663FC2B6FFCDB5F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_DDACEB4947F21BAC56412699BD74696B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_049508C44215BB0AD3F507BCCC97641A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_B9F1A7F84CE5E1FEA6F8C7913B200F86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_2BCD64A349C0C49C797967A5F58D0352();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_ApplyAdditive_D58E43D041498A35FBC1D693F09BBBD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_C0D3A24445D8908A15AE518F01780846();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_3C4063B64AC661E88938DE88BAB60FB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_driver_AnimGraphNode_TransitionResult_84CC975E44AE95A36018229F2BC4FD9A();
	void ExecuteUbergraph_ABP_porsche_991_gt3_r_driver(int EntryPoint);
	void DoorClose__DelegateSignature();
	void DoorOpen__DelegateSignature();
	void NetOn__DelegateSignature();
	void NetOff__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
