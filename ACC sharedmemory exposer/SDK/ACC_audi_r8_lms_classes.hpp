#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_audi_r8_lms_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass audi_r8_lms.audi_r8_lms_C
// 0x0098 (0x21A0 - 0x2108)
class Aaudi_r8_lms_C : public ABP_Car_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2108(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BackFireL;                                                // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BackFireR;                                                // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassBonnet_REF2;                                         // 0x2120(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRear_REF2;                                           // 0x2128(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassFront_REF;                                           // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalBonnet_REF;                                          // 0x2138(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRR;                                              // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRL;                                              // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFR;                                              // 0x2150(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFL;                                              // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRear_REF;                                            // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             DecalRoof_REF;                                            // 0x2168(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            DigitalDisplayRacelogic;                                  // 0x2170(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TestSpark;                                                // 0x2178(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x2180(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Driver_Enter_Exit;                                        // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass audi_r8_lms.audi_r8_lms_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_audi_r8_lms(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
