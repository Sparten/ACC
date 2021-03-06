#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_porsche_991_gt3_r_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass porsche_991_gt3_r.porsche_991_gt3_r_C
// 0x0080 (0x21B8 - 0x2138)
class Aporsche_991_gt3_r_C : public ABP_Car_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2138(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             DecalClassRearManthey_REF;                                // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BackFireL;                                                // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BackFireR;                                                // 0x2150(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForce_RR;                                             // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForce_RL;                                             // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForce_FR;                                             // 0x2168(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForce_FL;                                             // 0x2170(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalClassRear_REF;                                       // 0x2178(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalRoofREF;                                             // 0x2180(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SteerCable;                                               // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TestSpark;                                                // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Driver_Enter_Exit;                                        // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass porsche_991_gt3_r.porsche_991_gt3_r_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_porsche_991_gt3_r(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
