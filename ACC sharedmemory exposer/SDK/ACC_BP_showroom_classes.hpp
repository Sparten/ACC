#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_showroom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_showroom.BP_Showroom_C
// 0x00B8 (0x03E0 - 0x0328)
class ABP_Showroom_C : public AActor
{
public:
	class USpotLightComponent*                         SpotLight18;                                              // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight17;                                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight16;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight15;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight14;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight13;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight12;                                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight11;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight10;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight9;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight8;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight7;                                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight6;                                               // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight5;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight4;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight3;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight2;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        showroom1_RotatingBase;                                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        showroom1_room;                                           // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        showroom1_lights;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_showroom.BP_Showroom_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
