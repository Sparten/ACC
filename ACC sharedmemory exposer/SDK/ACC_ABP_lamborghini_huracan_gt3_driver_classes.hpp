#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_lamborghini_huracan_gt3_driver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_lamborghini_huracan_gt3_driver.ABP_lamborghini_huracan_gt3_driver_C
// 0x33B8 (0x3808 - 0x0450)
class UABP_lamborghini_huracan_gt3_driver_C : public UAcDriverAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C7BD85B94A7FE62CA4DC58A870C2A685;      // 0x0458(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC2C22244A45283E6351A383CC4656EB;// 0x04A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D13E6EA044817DC989A7D386AE73E938;// 0x04E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D6A89173445ECFBC05B5AF95B50B920C;// 0x0530(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46ADAC6844D70ABF075C8DB6BB14F930;// 0x0578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_075BF2D04D965541E2479DB9A555161D;// 0x05C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A132F5D491F00B8C5AE239E39FAEB2A;// 0x0608(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93884DC8495D9C5AA387F3A6DAB854CD;// 0x0650(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D411DE684432CBF9DA6A35B8DAEA2602;// 0x0698(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_104CBB9B4A8B177BE3AA57A5B3827FC1;// 0x06E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00A5EDF3400A420F318BC4BDA082DBC1;// 0x0790(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0775C595445E89D979357F8D5A0E08B9;// 0x07D8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3558DD114FC401CA8DA719BBD8111AB0;// 0x0888(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C48DFEB4125B6D65EF7A183C2E7DA88;// 0x08D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_432F6D51447EA477ED3E33AE0341D3E6;// 0x0980(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_256147344EA96CECE2DFFABB8BCE62D1;// 0x09C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_87733FF94056A12DBA205F8833DA9056;// 0x0A78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6ACD5094349A884772C30A97A9F4F71;// 0x0AC0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_685FDAC645BD235F91965A9C61E27FEF;// 0x0B70(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EA2BE5694B5142AFFE38C6A920DDC38F;// 0x0BB8(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D85750644E2E5E4087ECDB9374B2717;// 0x0CD0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8C734B9F4F5C027F5805899407480CD4;// 0x0D80(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C102A3542B01A35D13FA49C4F1B92BD;// 0x0E98(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_43CAD01B4C0185221A3F08ACA7A8E61D;// 0x0F48(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7D54AAA41C4810684315189A81DA678;// 0x1060(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_475B655F40A06258B87005A9E4A3C8BD;// 0x1110(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_59CDA7534883F60C8715459A68213CAE;// 0x11C0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB4C23394A2198A50FC3D4BDEA72404B;// 0x12D8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BD012DA441AF9E384FC3078B7ACE8B9B;// 0x1388(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D1ABCE74AAC530591DEC298C42D2C7E;// 0x14A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43D1DB19423F26D1882E4C82D9D2E28E;// 0x1550(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BD43AF0A44760E919F649090CA15514E;// 0x1600(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E98ADA224AB1434A983980A9F5D52388;// 0x1718(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38FBBE774C002E1EABA49E890FA7270B;// 0x17C8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6C106E4540FD51439E9B4D941799CD02;// 0x1878(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5E6194045B3703E1FE1099F5AFAB07F;// 0x1990(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CD3D1B8A4CA45AB41E04C7BF250EEB60;// 0x1A40(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_257C97C743DFA1C5670BBB9BDD4ACF29;// 0x1B58(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F0CBBEEF42854A67683F2A80E4DEB764;// 0x1C70(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_841ADB5D41CD8C6F7FB38AB62852E6C3;// 0x1D88(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F6CF50148E7E24372CF8AA5DE1D348D;// 0x1EA0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_425B08F842B428896D644388A3E1E1FF;// 0x1F50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1076D634225DCE0C58E3D9891B146FD;// 0x2000(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EB964C8147FFD232FE9BAEAEB288952B;// 0x20B0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71E8788C423D2EBC969A62AC3388A641;// 0x21D8(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A109E5240B2DFB04D1C0C93E3630EC8;// 0x2300(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_06FA062D4C9DE08133309DA8AEF489F5;// 0x23B0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5837647B418EFCBA82ED838CEFA57516;// 0x24C8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B741E99A4F658E3A1EF9FF9AB46BFF14;// 0x2578(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF6FA89C4D4AB77BBBFF34B15BB537CC;// 0x2628(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4AFB4C384C19EFBE117D9AA53D6354FC;// 0x26D8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_106FCB8F41297244BADC9A87BF13096D;// 0x2788(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6E64539B4AFE6D020BB38E9C042DFFB0;// 0x2838(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_75D332DC41971CD87842CDB9447A01C6;// 0x2950(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_75788ED149D094E6E8DAF6B65C318931;// 0x2A68(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AA488E414E0885142707D58E9247F291;// 0x2B80(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_01FC6E96496ECB80003753BF2FFB422D;// 0x2C98(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2BC00C7B46B1B15FC26DA4B4616045B8;// 0x2DB0(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71093A0545431F4262065A98179B4E2F;// 0x2EC8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_712507504AB07B5EB40AE7A59C9C16CF;// 0x2F78(0x0118)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A84FE5E946D2CE0663A38EB39339EBE9;// 0x3090(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5CB5B3F04BDBC8E9346ED7B9A220EBAD;// 0x3100(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6047E40E49968343E255E6862BD41A6A;// 0x3218(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A92EEBCD446504B8A0A078B50C552B62;// 0x3330(0x0118)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8B2816EF4C86F373B504D1AB2D309DB0;// 0x3448(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_90226C2A471037901543F78B70A0EE2C;// 0x3570(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2DAF1B614C4BC6E7907297A0EEFA1837;// 0x3688(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9887AD24495BD9FB487453AE390DB4EB;// 0x36D0(0x00E0)
	class ACarAvatar*                                  CarAvatar;                                                // 0x37B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_on_CAR_marker;                                         // 0x37B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x37B9(0x0003) MISSED OFFSET
	float                                              Belt_ON_time;                                             // 0x37BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Belt_OFF_time;                                            // 0x37C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Driving;                                               // 0x37C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipAnimations;                                           // 0x37C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x37C6(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    NetOff;                                                   // 0x37C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NetOn;                                                    // 0x37D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoorOpen;                                                 // 0x37E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoorClose;                                                // 0x37F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_lamborghini_huracan_gt3_driver.ABP_lamborghini_huracan_gt3_driver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_43CAD01B4C0185221A3F08ACA7A8E61D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_B7D54AAA41C4810684315189A81DA678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_475B655F40A06258B87005A9E4A3C8BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_59CDA7534883F60C8715459A68213CAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_BB4C23394A2198A50FC3D4BDEA72404B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_BD012DA441AF9E384FC3078B7ACE8B9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_4D1ABCE74AAC530591DEC298C42D2C7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_43D1DB19423F26D1882E4C82D9D2E28E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_BD43AF0A44760E919F649090CA15514E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_E98ADA224AB1434A983980A9F5D52388();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_38FBBE774C002E1EABA49E890FA7270B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_6C106E4540FD51439E9B4D941799CD02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_C5E6194045B3703E1FE1099F5AFAB07F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_CD3D1B8A4CA45AB41E04C7BF250EEB60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_257C97C743DFA1C5670BBB9BDD4ACF29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_F0CBBEEF42854A67683F2A80E4DEB764();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_841ADB5D41CD8C6F7FB38AB62852E6C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_8F6CF50148E7E24372CF8AA5DE1D348D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_425B08F842B428896D644388A3E1E1FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_F1076D634225DCE0C58E3D9891B146FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_BlendSpacePlayer_EB964C8147FFD232FE9BAEAEB288952B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_BlendSpacePlayer_71E8788C423D2EBC969A62AC3388A641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_06FA062D4C9DE08133309DA8AEF489F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_5837647B418EFCBA82ED838CEFA57516();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_B741E99A4F658E3A1EF9FF9AB46BFF14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_CF6FA89C4D4AB77BBBFF34B15BB537CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_4AFB4C384C19EFBE117D9AA53D6354FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_106FCB8F41297244BADC9A87BF13096D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_6E64539B4AFE6D020BB38E9C042DFFB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_75D332DC41971CD87842CDB9447A01C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_75788ED149D094E6E8DAF6B65C318931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_AA488E414E0885142707D58E9247F291();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_01FC6E96496ECB80003753BF2FFB422D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_2BC00C7B46B1B15FC26DA4B4616045B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_71093A0545431F4262065A98179B4E2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_712507504AB07B5EB40AE7A59C9C16CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequenceEvaluator_A84FE5E946D2CE0663A38EB39339EBE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_BlendSpacePlayer_8B2816EF4C86F373B504D1AB2D309DB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_6C48DFEB4125B6D65EF7A183C2E7DA88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_0C102A3542B01A35D13FA49C4F1B92BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_0775C595445E89D979357F8D5A0E08B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_8C734B9F4F5C027F5805899407480CD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_D411DE684432CBF9DA6A35B8DAEA2602();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_93884DC8495D9C5AA387F3A6DAB854CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_0A132F5D491F00B8C5AE239E39FAEB2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_SequencePlayer_6D85750644E2E5E4087ECDB9374B2717();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_075BF2D04D965541E2479DB9A555161D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_46ADAC6844D70ABF075C8DB6BB14F930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_D6A89173445ECFBC05B5AF95B50B920C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_D13E6EA044817DC989A7D386AE73E938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_TransitionResult_EC2C22244A45283E6351A383CC4656EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver_AnimGraphNode_ApplyAdditive_EA2BE5694B5142AFFE38C6A920DDC38F();
	void ExecuteUbergraph_ABP_lamborghini_huracan_gt3_driver(int EntryPoint);
	void DoorClose__DelegateSignature();
	void DoorOpen__DelegateSignature();
	void NetOn__DelegateSignature();
	void NetOff__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
