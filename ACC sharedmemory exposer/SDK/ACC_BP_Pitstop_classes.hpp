#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_Pitstop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pitstop.BP_Pitstop_C
// 0x0068 (0x05C8 - 0x0560)
class ABP_Pitstop_C : public AAcPitstopProcedure
{
public:
	class USkeletalMeshComponent*                      TyreD;                                                    // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreBC;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreA;                                                    // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ReceiverMan;                                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Airgun;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreMan;                                                  // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AirgunMan;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GEO_TyreSingle;                                           // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GEO_TyreDouble;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Refueller;                                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PitcrewStart;                                             // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             CarCenter;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Template_Pit_Stop;                                        // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pitstop.BP_Pitstop_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
