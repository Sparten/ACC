#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lamborghini_gallardo_rex_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lamborghini_gallardo_rex.lamborghini_gallardo_rex_C
// 0x0090 (0x2198 - 0x2108)
class Alamborghini_gallardo_rex_C : public ABP_Car_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2108(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BackFireL;                                                // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BackFireR;                                                // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SteerCable;                                               // 0x2120(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetDigitalDisplayRacelogic;                            // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRearREFReiter;                                       // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             PlateFrontREFReiter;                                      // 0x2138(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRearREFBoutsen;                                      // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRoofREFBoutsen;                                      // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRR;                                              // 0x2150(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFR;                                              // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRL;                                              // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFL;                                              // 0x2168(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TestSpark;                                                // 0x2170(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x2178(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x2180(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Driver_Enter_Exit;                                        // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lamborghini_gallardo_rex.lamborghini_gallardo_rex_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_lamborghini_gallardo_rex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
