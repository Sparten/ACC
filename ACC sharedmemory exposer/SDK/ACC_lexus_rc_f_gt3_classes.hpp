#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lexus_rc_f_gt3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lexus_rc_f_gt3.lexus_rc_f_gt3_C
// 0x0068 (0x21A0 - 0x2138)
class Alexus_rc_f_gt3_C : public ABP_Car_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2138(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            WidgetDigitalDisplayRacelogic;                            // 0x2140(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRoof114_REF;                                         // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             ClassRear114_REF;                                         // 0x2150(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             NumberplateHood114_REF;                                   // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRR;                                              // 0x2160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceRL;                                              // 0x2168(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFR;                                              // 0x2170(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDownForceComponent*                         DownForceFL;                                              // 0x2178(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x2180(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Driver_Enter_Exit;                                        // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lexus_rc_f_gt3.lexus_rc_f_gt3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_lexus_rc_f_gt3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
