#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_ABP_porsche_991_gt3_r_exterior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_exterior.ABP_porsche_991_gt3_r_exterior_C
// 0x1D98 (0x2148 - 0x03B0)
class UABP_porsche_991_gt3_r_exterior_C : public UAcCarExteriorAnimations
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_451D28BB4F42318D281EB6A8D9EF7864;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18BE72D7426928481A19B09457F994A1;// 0x0400(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F3C53147498600AA6F2A85A9A8EEAD19;// 0x0448(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_79D38EC24E7C6C5EE438C9929478D6FA;// 0x0490(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43F0839841A458BA10E8648160711331;// 0x05F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_87C59E884DF739EAB81FD58607FDDC2A;// 0x0750(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0160E4B492404BAA3458CADD4340A26;// 0x08B0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A1050C40439AAF03198CFB995F6F0675;// 0x0A10(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9E8950DC4DA58C0B4EC470A69A0A26D7;// 0x0B70(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CDD8432A46BEF361816BE2AD57AB5677;// 0x0CD0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D26195BE4975833871AE5295C601679F;// 0x0E30(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7D29D7614B0F3C9ADA50169F5891F0AA;// 0x0F90(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1603CA1947BB9CD6E1461C812DBEDF83;// 0x10F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_130CF84A43C2CABA9FD46C9AF1B0E5A4;// 0x1250(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_86BF9A864DAE97AE6FC2318B97B4C440;// 0x13B0(0x0160)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E1DA9E1D40DA0FD6A12778BC199276C6;// 0x1510(0x0070)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_46E0D4864AABA74F033AE5AD34C2DFEE;// 0x1580(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E48E09F644E22551D2DA34ADB897015C;// 0x15B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F73D2C3F41661C9D5E0985A3A9765457;// 0x15F8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_02135F064A3A1A653C9F9699BDA00E92;// 0x1758(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5F46B5E0405792375C887C8AC15D9941;// 0x18B8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00792B874F299B281A242391F29FD29F;// 0x1A18(0x0160)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_231111B440A93B16BC0C498E0B73618C;// 0x1B78(0x0118)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A56EFD0848E703C8607E519B6F048273;// 0x1C90(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7FA47FB14C8C76512DAEA7B39D473195;// 0x1D40(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3693ED624BBCACDEFAB818BA4ACB18BA;// 0x1DF0(0x0118)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D63E5584E3F8DA649604085A2FE3617;// 0x1F08(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7CD45AB4264B5150E73829FB2A437E9;// 0x2020(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DB3348B047A91A54B546D0B6BBA19C91;// 0x2068(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_porsche_991_gt3_r_exterior.ABP_porsche_991_gt3_r_exterior_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_SequenceEvaluator_E1DA9E1D40DA0FD6A12778BC199276C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_F73D2C3F41661C9D5E0985A3A9765457();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_02135F064A3A1A653C9F9699BDA00E92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_5F46B5E0405792375C887C8AC15D9941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_00792B874F299B281A242391F29FD29F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_SequencePlayer_A56EFD0848E703C8607E519B6F048273();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_SequencePlayer_7FA47FB14C8C76512DAEA7B39D473195();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_1603CA1947BB9CD6E1461C812DBEDF83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_7D29D7614B0F3C9ADA50169F5891F0AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_D26195BE4975833871AE5295C601679F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_CDD8432A46BEF361816BE2AD57AB5677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_9E8950DC4DA58C0B4EC470A69A0A26D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_A1050C40439AAF03198CFB995F6F0675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_F0160E4B492404BAA3458CADD4340A26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_87C59E884DF739EAB81FD58607FDDC2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_86BF9A864DAE97AE6FC2318B97B4C440();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_43F0839841A458BA10E8648160711331();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_79D38EC24E7C6C5EE438C9929478D6FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_TransitionResult_18BE72D7426928481A19B09457F994A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior_AnimGraphNode_ModifyBone_130CF84A43C2CABA9FD46C9AF1B0E5A4();
	void ExecuteUbergraph_ABP_porsche_991_gt3_r_exterior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
