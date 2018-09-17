#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Box_Monza_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Box_Monza.Box_Monza_C
// 0x0058 (0x0380 - 0x0328)
class ABox_Monza_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight3;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        box_proto1_Object864;                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        box_proto1_details_roof;                                  // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        box_proto1_base;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        box_proto1_anodyzed001;                                   // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Box_Monza.Box_Monza_C");
		return ptr;
	}


	void ChangeLights(bool LightOn);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Box_Monza(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
