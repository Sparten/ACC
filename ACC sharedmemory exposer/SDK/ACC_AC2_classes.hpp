#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_AC2_structs.hpp"
#include "ACC_KSRacing_classes.h"
#include <memory>
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AC2.AcChildHUD
// 0x0038 (0x0450 - 0x0418)
class AAcChildHUD : public AHUD
{
public:
	class ACarAvatar*                                  Car;                                                      // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACarAvatar*                                  FocusedCar;                                               // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACarAvatar*                                  PlayerCar;                                                // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	class UFont*                                       HUDFont;                                                  // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       HUDFontBold;                                              // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcChildHUD");
		return ptr;
	}

};


// Class AC2.Ac2TelemHUD
// 0x00C0 (0x0510 - 0x0450)
class AAc2TelemHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0450(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.Ac2TelemHUD");
		return ptr;
	}

};


// Class AC2.AC2TyreSmoke
// 0x0090 (0x0840 - 0x07B0)
class UAC2TyreSmoke : public UParticleSystemComponent
{
public:
	TArray<class UParticleSystemComponent*>            Smoke;                                                    // 0x07B0(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	TArray<class UParticleSystemComponent*>            dirt;                                                     // 0x07C0(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	TArray<class UParticleSystemComponent*>            stone;                                                    // 0x07D0(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)
	class UCurveFloat*                                 rate1Curve;                                               // 0x07E0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 rate2Curve;                                               // 0x07E8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 smokeRateCurve;                                           // 0x07F0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 stonesRateCurve;                                          // 0x07F8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 smokeBuildCurve;                                          // 0x0800(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UCurveFloat*                                 smokeCoolCurve;                                           // 0x0808(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0810(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AC2TyreSmoke");
		return ptr;
	}

};


// Class AC2.AC2WaterSpray
// 0x00E0 (0x0890 - 0x07B0)
class UAC2WaterSpray : public UParticleSystemComponent
{
public:
	class UParticleSystemComponent*                    waterSprayDrops[0x2];                                     // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    backSpray;                                                // 0x07C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    waterSprayDetail[0x4];                                    // 0x07C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    waterSprayFog;                                            // 0x07E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 WaterCurve;                                               // 0x07F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogSpeedRateCurve;                                        // 0x07F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DetailsSpeedRateCurve;                                    // 0x0800(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DetailsSpeedVelMinCurve;                                  // 0x0808(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DetailsSpeedVelMaxCurve;                                  // 0x0810(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DropsSpeedRateCurve;                                      // 0x0818(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ChaseSpeedRateCurve;                                      // 0x0820(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedVelMinCurve;                               // 0x0828(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedVelMaxCurve;                               // 0x0830(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedAlphaLifeCurve;                            // 0x0838(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedRateCurve;                              // 0x0840(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedVelMinCurve;                            // 0x0848(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedVelMaxCurve;                            // 0x0850(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedAlphaLifeCurve;                         // 0x0858(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0860(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AC2WaterSpray");
		return ptr;
	}

};


// Class AC2.AcAnimInstanceBase
// 0x0010 (0x0370 - 0x0360)
class UAcAnimInstanceBase : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcAnimInstanceBase");
		return ptr;
	}

};


// Class AC2.AcAnimNotify
// 0x0008 (0x0040 - 0x0038)
class UAcAnimNotify : public UAnimNotify
{
public:
	ECarAnimation                                      CarAnimation;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcAnimNotify");
		return ptr;
	}

};


// Class AC2.AcAssistController
// 0x0038 (0x0060 - 0x0028)
class UAcAssistController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcAssistController");
		return ptr;
	}

};


// Class AC2.AcCameraComponent
// 0x0070 (0x0850 - 0x07E0)
class UAcCameraComponent : public UCameraComponent
{
public:
	float                                              ShadowExponent;                                           // 0x07E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x07E4(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCameraComponent");
		return ptr;
	}

};


// Class AC2.AcCameraTranslator
// 0x0000 (0x0028 - 0x0028)
class UAcCameraTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCameraTranslator");
		return ptr;
	}

};


// Class AC2.AcCarAnimations
// 0x00F0 (0x01E0 - 0x00F0)
class UAcCarAnimations : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnCarAnimationEvent;                                      // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ACarAvatar*                                  CarAvatar;                                                // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LeftFootFrameStep;                                        // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootFrameStep;                                       // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfSteerAnimationSeconds;                                // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumSteerAnimationRotation;                            // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HelmetGForceFilter;                                       // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HelmetGForceXMaxRange;                                    // 0x011C(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HelmetGForceYMaxRange;                                    // 0x0124(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              FeetFilter;                                               // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightFootPositionForAnimation;                            // 0x0130(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeftFootPositionForAnimation;                             // 0x0134(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              DriverSteerRotation;                                      // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HelmetGForceForAnimation;                                 // 0x0140(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               ShiftUpForAnimation;                                      // 0x014C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShiftDownForAnimation;                                    // 0x014D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x014E(0x0002) MISSED OFFSET
	float                                              LeftDoorOpenRate;                                         // 0x0150(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RightDoorOpenRate;                                        // 0x0154(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           WiperIntervalsAndRate;                                    // 0x0158(0x0010) (Edit, ZeroConstructor)
	float                                              CarSteerRotation;                                         // 0x0168(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClutchPedalPosition;                                      // 0x016C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BrakePedalPosition;                                       // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GasPedalPosition;                                         // 0x0174(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FCarLoosePart>                       CarLooseParts;                                            // 0x0178(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCarWiper>                           Wipers;                                                   // 0x0188(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0198(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarAnimations");
		return ptr;
	}


	unsigned char GetWipersMaxLevel();
	unsigned char GetWipersCount();
	float GetWiperPosition(unsigned char WiperIndex);
	float GetRightDoorOpenRate();
	float GetNormalizedWiperPosition(unsigned char WiperIndex);
	float GetLeftDoorOpenRate();
	struct FVector GetCarLoosePartPosition(unsigned char LoosePartIndex);
};


// Class AC2.AcCarBeltAnimations
// 0x0000 (0x0370 - 0x0370)
class UAcCarBeltAnimations : public UAcAnimInstanceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarBeltAnimations");
		return ptr;
	}

};


// Class AC2.AcCarDigitalDisplay
// 0x01A8 (0x03B0 - 0x0208)
class UAcCarDigitalDisplay : public UUserWidget
{
public:
	TArray<struct FCarDigitalDisplayPage>              Pages;                                                    // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsDashboardDisplay;                                      // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	class ACarAvatar*                                  CarAvatar;                                                // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AAcRaceGameMode*                             RaceGameMode;                                             // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisplayIndex;                                             // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	TArray<struct FCarDigitalDisplayTimeTextBlock>     TimeTextBlocks;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarDigitalDisplayNumberTextBlock>   NumberTextBlocks;                                         // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarDigitalDisplayProgressBar>       ProgressBars;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarDigitalDisplayCanvas>            PopUps;                                                   // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarDigitalDisplayNeedle>            Needles;                                                  // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarDigitalDisplayLight>             lights;                                                   // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0298(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarDigitalDisplay");
		return ptr;
	}


	void OnLapEvent();
};


// Class AC2.AcCarExteriorAnimations
// 0x0040 (0x03B0 - 0x0370)
class UAcCarExteriorAnimations : public UAcAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	float                                              CarLeftDoor;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CarRightDoor;                                             // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Wheels;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTransform>                          Suspensions;                                              // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsPhysicsDriven;                                         // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x03A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarExteriorAnimations");
		return ptr;
	}

};


// Class AC2.AcCarGraphicData
// 0x0170 (0x01A0 - 0x0030)
class UAcCarGraphicData : public UDataAsset
{
public:
	class UTexture2D*                                  NumberSet;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SkinTemplates;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  RimTemplates;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  AuxLightMeshes;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  NumberPanelMeshes;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  StickerSets;                                              // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  ColorTable;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  HelmetTemplates;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  GlovesTemplates;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  SuitTemplates;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  TeamTemplates;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstance*                           NumberPlate_Pro;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           NumberPlate_ProAm;                                        // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           NumberPlate_Am;                                           // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           NumberPlate_Silver;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DecalNumberPlate_Pro;                                     // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DecalNumberPlate_ProAm;                                   // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DecalNumberPlate_Am;                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DecalNumberPlate_Silver;                                  // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           RaceClass_Pro;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           RaceClass_ProAm;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           RaceClass_Am;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           RaceClass_Silver;                                         // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NumberPlate_Scale;                                        // 0x00E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RaceClass_ProScale;                                       // 0x00F4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RaceClass_ProAmScale;                                     // 0x0100(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RaceClass_AmScale;                                        // 0x010C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RaceClass_SilverScale;                                    // 0x0118(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FSkinMaterialType                           SkinMaterialSolid;                                        // 0x0128(0x0018) (Edit, BlueprintVisible)
	struct FSkinMaterialType                           SkinMaterialMatte;                                        // 0x0140(0x0018) (Edit, BlueprintVisible)
	struct FSkinMaterialType                           SkinMaterialSatin;                                        // 0x0158(0x0018) (Edit, BlueprintVisible)
	struct FSkinMaterialType                           SkinMaterialMetallic;                                     // 0x0170(0x0018) (Edit, BlueprintVisible)
	struct FSkinMaterialType                           SkinMaterialChrome;                                       // 0x0188(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarGraphicData");
		return ptr;
	}


	bool GetTeam(const struct FName& RowName, struct FTeamTemplate* Destination);
	bool GetSuitTable(const struct FName& RowName, struct FDriverSuitTemplate* Destination);
	bool GetStickerSet(const struct FName& RowName, struct FStickerSet* Destination);
	bool GetSkinTemplate(const struct FName& RowName, struct FSkinTemplate* Destination);
	bool GetRimTemplate(const struct FName& RowName, struct FRimTemplate* Destination);
	bool GetNumberPanelMesh(const struct FName& RowName, struct FNumberPanelMesh* Destination);
	bool GetHelmetTable(const struct FName& RowName, struct FDriverHelmetTemplate* Destination);
	bool GetGlovesTable(const struct FName& RowName, struct FDriverGlovesTemplate* Destination);
	bool GetColorTable(const struct FName& RowName, struct FSkinColor* Destination);
	bool GetAuxLightMesh(const struct FName& RowName, struct FAuxLightMesh* Destination);
};


// Class AC2.AcCarInteriorAnimations
// 0x0040 (0x03B0 - 0x0370)
class UAcCarInteriorAnimations : public UAcAnimInstanceBase
{
public:
	float                                              GasPressure;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BrakePressure;                                            // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClutchPressure;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteerRotation;                                            // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FlipPosition;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IgnitionPosition;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PowerPosition;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RainPosition;                                             // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LightPosition;                                            // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<struct FSwitchAnimation>                    Switches;                                                 // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarInteriorAnimations");
		return ptr;
	}


	void UpdateAnimation(int Index);
	void OnNotifyReceived(float TimeDelay, int Index);
	void OnCarAnimationEvent(ECarAnimation CarAnimation);
	struct FRotator GetCurrentSwitchRotator(unsigned char Index);
};


// Class AC2.AcCarLightingSystem
// 0x03F8 (0x04E8 - 0x00F0)
class UAcCarLightingSystem : public UActorComponent
{
public:
	struct FCarLightStage                              SprintDayLights;                                          // 0x00F0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintHighBeam;                                           // 0x0100(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintBrakes;                                             // 0x0110(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintEndurance;                                          // 0x0120(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintFlashing;                                           // 0x0130(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintPitLimiter;                                         // 0x0140(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintRain;                                               // 0x0150(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintDirectionLightLeft;                                 // 0x0160(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              SprintDirectionLightRight;                                // 0x0170(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceDayLights;                                       // 0x0180(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceHighBeam;                                        // 0x0190(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceBrakes;                                          // 0x01A0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceEndurance;                                       // 0x01B0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceFlashing;                                        // 0x01C0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EndurancePitLimiter;                                      // 0x01D0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceRain;                                            // 0x01E0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceDirectionLightLeft;                              // 0x01F0(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              EnduranceDirectionLightRight;                             // 0x0200(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              DayLights;                                                // 0x0210(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              HighBeam;                                                 // 0x0220(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              Brakes;                                                   // 0x0230(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              Endurance;                                                // 0x0240(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              Flashing;                                                 // 0x0250(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              PitLimiter;                                               // 0x0260(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              Rain;                                                     // 0x0270(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              DirectionLightLeft;                                       // 0x0280(0x0010) (Edit, DisableEditOnInstance)
	struct FCarLightStage                              DirectionLightRight;                                      // 0x0290(0x0010) (Edit, DisableEditOnInstance)
	struct FName                                       FrontMaterialSlotName;                                    // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RearMaterialSlotName;                                     // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontGlassMaterialSlotName;                               // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RearGlassMaterialSlotName;                                // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageLeft;                                               // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageRight;                                              // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxFlashingCount;                                         // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	float                                              IntAuxLightMaterialEmissive;                              // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntAuxLightIntensity;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FrontMaterial;                                            // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RearMaterial;                                             // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FrontGlassMaterial;                                       // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RearGlassMaterial;                                        // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    intAuxLightMaterial;                                      // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E8];                                     // 0x0300(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarLightingSystem");
		return ptr;
	}

};


// Class AC2.AcCarLocationManager
// 0x0050 (0x0378 - 0x0328)
class AAcCarLocationManager : public AActor
{
public:
	class ATriggerBox*                                 PitEntryLaneSideStart;                                    // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerVolume*                              PitEntryLaneSide;                                         // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerBox*                                 PitLaneEntry;                                             // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerBox*                                 PitLaneExit;                                              // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerVolume*                              PitExitLaneSide;                                          // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerBox*                                 PitExitLaneEnd;                                           // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerBox*                                 SafetyCarLine1;                                           // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ATriggerBox*                                 SafetyCarLine2;                                           // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarLocationManager");
		return ptr;
	}


	void OnSafetyCarLine2(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnSafetyCarLine1(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitLaneExit(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitLaneEntry(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitExitLaneSide(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitExitLaneEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitEntryLaneStart(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPitEntryLaneSide(class AActor* OverlappedActor, class AActor* OtherActor);
	class AAcCarLocationManager* STATIC_FindCarLocationManager(class UWorld* World);
};


// Class AC2.AcCarLoosePartAnimations
// 0x0010 (0x0380 - 0x0370)
class UAcCarLoosePartAnimations : public UAcAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0370(0x0004) MISSED OFFSET
	ELoosePartType                                     LoosePartType;                                            // 0x0374(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0375(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarLoosePartAnimations");
		return ptr;
	}

};


// Class AC2.AcCarPitstopManager
// 0x0170 (0x0260 - 0x00F0)
class UAcCarPitstopManager : public UActorComponent
{
public:
	float                                              MinDistance;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryDistance;                                        // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngle;                                                 // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushingSpeed;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PushingAngularSpeed;                                      // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OnSkateSpeed;                                             // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OnSkateAngularSpeed;                                      // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FakePitstopTime;                                          // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsToExtend;                                          // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsToBaseStartProcedure;                              // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsToRaiseProcedure;                                  // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              targetHeight;                                             // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13C];                                     // 0x0124(0x013C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarPitstopManager");
		return ptr;
	}


	void SetPitZone_BP(int _mainIndex, int _secondaryIndex);
	void SetOutside(EPitstopCarOutside Value);
	void RequestPitstop_BP();
};


// Class AC2.AcCarProtectionNetAnimations
// 0x0020 (0x0390 - 0x0370)
class UAcCarProtectionNetAnimations : public UAcAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0370(0x0004) MISSED OFFSET
	bool                                               bIsCarRunning;                                            // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetachNet;                                               // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachNet;                                               // 0x0376(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0377(0x0001) MISSED OFFSET
	float                                              DetachSpeed;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachSpeed;                                              // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0380(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarProtectionNetAnimations");
		return ptr;
	}

};


// Class AC2.AcCarSystems
// 0x0020 (0x0048 - 0x0028)
class UAcCarSystems : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarSystems");
		return ptr;
	}


	void ToggleRightDoor();
	void ToggleLeftDoor();
	void SetWiperLevel(unsigned char Level, bool updateSystems);
	unsigned char GetWiperLevel();
	ECarLightStage GetLightStage();
	void EnableDriverDoor(bool isOpening);
	void CycleWiperLevel(bool isUp);
};


class UAcGameInstance;
class AGhostCarManager;
// Class AC2.AcCarTimingServices
// 0x01E8 (0x0210 - 0x0028)
class UAcCarTimingServices : public UObject
{
public:
	char CurrentSector;
	unsigned char padding[0x18];
	ACarAvatar *CarAvatar;
	AAcRaceGameMode *raceGameMode;
	ksRacing::RaceManager *raceManager;
	UAcGameInstance *GameInstance;
	char SectorCount;
	float fastLaneUnlockTime;
	bool bIsSplitCrossingValid;
	float LastSplitTimeStamp;
	float CurrentLapTime;
	int LaptimesSum;
	uint16_t LapCount;
	ksRacing::Lap BestLap;
	ksRacing::Lap LastLap;
	int lapTimeDiff;
	float speedDiff;
	int predictedLapTime;
	FLapTimeReference bestLapReference;
	std::vector<unsigned int, std::allocator<unsigned int> > deltaTimeBestLap;
	std::vector<unsigned int, std::allocator<unsigned int> > deltaTimeCurrentLap;
	std::vector<float, std::allocator<float> > deltaSpeedBestLap;
	std::vector<float, std::allocator<float> > deltaSpeedCurrentLap;
	uint16_t deltaSectorIndex;
	int lastDeltaIndex;
	float deltaStep;
	TArray<int> speedAvgs;
	bool mustRecordSpeed;
	float relativeSpeed;
	bool updateRelativeSpeed;
	bool useTrackMicroSectorTimes;
	float startingFuelOnLastLap;
	float totalFuelUsedInSession;
	float fuelPerSingleLap;
	float fuelPerKm;
	bool isCarOutOfTrack;
	int onCarOutOfTrackTimeStart;
	int onCarOutOfTrackTimeEnd;
	int onCarOutOfTrackSectorStart;
	int onCarOutOfTrackSectorEnd;
	int onCarOutOfTrackTimeJoin;
	int outOfTrackRealDeltaTime;
	AGhostCarManager *ghostCarManager;
	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcCarTimingServices");
		return ptr;
	}


	void Reset();
	void OnSplit_BP(int SectorId, float PhysicsTime);
	int GetSpeedDiff();
	int GetPredictedLapTime();
	int GetLastLapTime();
	int GetLapTimeDiff();
	int GetLapCount();
	int GetCurrentLapTime();
	struct FLapTimeReference GetBestLapTime();
};


// Class AC2.AcController
// 0x0080 (0x06F8 - 0x0678)
class AAcController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0678(0x0018) MISSED OFFSET
	float                                              ForwardSpeed;                                             // 0x0690(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateralSpeed;                                             // 0x0694(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0698(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x069C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchSpeed;                                               // 0x06A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollSpeed;                                                // 0x06A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraSmoothness;                                         // 0x06A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraSpeed;                                              // 0x06AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGamepadForFreeCamera;                                 // 0x06B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	struct FVector                                     ParticlesOffset;                                          // 0x06B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x06C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcController");
		return ptr;
	}


	void SetCameraOnCar(class ACarAvatar* Car);
};


// Class AC2.AcControllerIcon
// 0x0008 (0x01E0 - 0x01D8)
class UAcControllerIcon : public UImage
{
public:
	EControllerActionType                              UIActionType;                                             // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRacePage;                                              // 0x01D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcControllerIcon");
		return ptr;
	}

};


// Class AC2.AcDriverAnimations
// 0x00E0 (0x0450 - 0x0370)
class UAcDriverAnimations : public UAcAnimInstanceBase
{
public:
	float                                              ClutchBrakePressure;                                      // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClutchBrakeSwitch;                                        // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookLeftRight;                                            // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GForceOnX;                                                // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GForceOnY;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAnimations;                                          // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDriving;                                               // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOnMarker;                                              // 0x0386(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGearUp;                                                  // 0x0387(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GearUpAlpha;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGearDown;                                                // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	float                                              GearDownAlpha;                                            // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWiper;                                                   // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	float                                              WiperAlpha;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLights;                                                  // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              LightsAlpha;                                              // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplay;                                                 // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	float                                              DisplayAlpha;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlashingLights;                                          // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	float                                              FlashingLightsAlpha;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPitLimiter;                                              // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              PitLimiterAlpha;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRadio;                                                   // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	float                                              RadioAlpha;                                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTC;                                                      // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	float                                              TCAlpha;                                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bABS;                                                     // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	float                                              ABSAlpha;                                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBrakeBias;                                               // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              BrakeBiasAlpha;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRainLight;                                               // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              RainLightAlpha;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnitionSequenceOn;                                      // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              IgnitionSequenceOnAlpha;                                  // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEngineMap;                                               // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              EngineMapAlpha;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectionLightLeft;                                      // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	float                                              DirectionLightLeftAlpha;                                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectionLightRight;                                     // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              DirectionLightRightAlpha;                                 // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectionLights;                                         // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              DirectionLightsAlpha;                                     // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFuelMixture;                                             // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              FuelMixtureAlpha;                                         // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeutralGear;                                             // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              NeutralGearAlpha;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStandardLight;                                           // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	float                                              StandardLightAlpha;                                       // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnduranceLight;                                          // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              EnduranceLightAlpha;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEngineStarter;                                           // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	float                                              EngineStarterAlpha;                                       // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EngineStarterPlayRate;                                    // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x0438(0x0001) MISSED OFFSET
	bool                                               bEngineStarterOff;                                        // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	float                                              EngineStarterOffAlpha;                                    // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseGear;                                             // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              ReverseGearAlpha;                                         // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcDriverAnimations");
		return ptr;
	}


	void OnAnimationEvent(ECarAnimation CarAnimationType);
};


// Class AC2.AcExhaustComponent
// 0x00D8 (0x01C8 - 0x00F0)
class UAcExhaustComponent : public UActorComponent
{
public:
	bool                                               hasFixedTemperature;                                      // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	float                                              TGasMin;                                                  // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeConstant;                                             // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinEmissive;                                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEmissive;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTemperature;                                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTemperature;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FName                                       MaterialSlot;                                             // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              backFireHighRpms;                                         // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireLowRpms;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireMinRpms;                                          // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireHighRate;                                         // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireBlipTime;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backfireDelay;                                            // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireVariation;                                        // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              backFireTime;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BackfireProbability;                                      // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FBackfireFlame                              Flame_Type1;                                              // 0x0148(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBackfireFlame                              Flame_Type2;                                              // 0x014A(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBackfireFlame                              Flame_Type3;                                              // 0x014C(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBackfireFlame                              Flame_Type4;                                              // 0x014E(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBackfireFlame                              Flame_Type5;                                              // 0x0150(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x76];                                      // 0x0152(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcExhaustComponent");
		return ptr;
	}


	void SetTemperature(float _Temperature);
	float GetTemperature();
	void DebugSound(EBackFireType Value);
	void DeactivateFlames();
	void ActivateFlames(EBackFireType Value);
};


// Class AC2.AcFireworks
// 0x0018 (0x0340 - 0x0328)
class AAcFireworks : public AActor
{
public:
	class AAcRaceGameMode*                             RaceGameMode;                                             // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcFireworks");
		return ptr;
	}


	void BaseLaunchShell();
};


// Class AC2.AcFormatLibrary
// 0x0000 (0x0028 - 0x0028)
class UAcFormatLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcFormatLibrary");
		return ptr;
	}


	struct FText STATIC_Int32ToLaptimeText(int Laptime, ELaptimeFormat Format);
	struct FText STATIC_Int32ToLaptimeDeltaText(int Delta, ELaptimeDeltaFormat Format);
	struct FString STATIC_Int32ToLaptimeDelta(int Delta, ELaptimeDeltaFormat Format);
	struct FString STATIC_Int32ToLaptime(int Laptime, ELaptimeFormat Format);
};


// Class AC2.AcFreeCameraActor
// 0x0058 (0x0380 - 0x0328)
class AAcFreeCameraActor : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            VRCamera;                                                 // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0340(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcFreeCameraActor");
		return ptr;
	}

};


// Class AC2.AcGameInstance
// 0x0A30 (0x0AD0 - 0x00A0)
class UAcGameInstance : public UGameInstance
{
public:
	class UAcInfoManager*                              InfoManager;                                              // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAcPresetManager*                            PresetManager;                                            // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAcCarGraphicData*                           CarGraphicData;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMenuManager*                                MenuManager;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MenuLevel;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LoadingWidgetClass;                                       // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  VRSplashLaunchGame;                                       // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  VRSplashStartSessions;                                    // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  VRSplashReturnToMenu;                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartSessionsLoadingClass;                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LaunchGameLoadingClass;                                   // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnToMenuLoadingClass;                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PageToLoadOnStart;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExpoModeOutroPage;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 LoadingWidget;                                            // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDebugStruct                                DebugStruct;                                              // 0x0118(0x00E8) (Edit, BlueprintVisible)
	struct FACVRSettings                               VRSettings;                                               // 0x0200(0x0028) (Edit)
	class UTextureRenderTarget2D*                      WidgetTarget;                                             // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAcStereoLayerComponent*                     StereoLayer;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0238(0x002C) MISSED OFFSET
	bool                                               isOnline;                                                 // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstLaunch;                                            // 0x0265(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x222];                                     // 0x0266(0x0222) MISSED OFFSET
	class UFMODEvent*                                  guiEvent;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  musicEvent;                                               // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAcInputDeviceManager*                       InputDeviceManager;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC8];                                      // 0x04A0(0x00C8) MISSED OFFSET
	class UClientAvatar*                               ClientAvatar;                                             // 0x0568(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcMenuData*                                 MenuData;                                                 // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UOnlineServices*                             OnlineServices;                                           // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAudioManager*                               AudioManager;                                             // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFMODBank*                                   MasterBank;                                               // 0x0588(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   GuiBank;                                                  // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   MusicBank;                                                // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExpoModeManager*                            ExpoModeManager;                                          // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcUserOptionsManager*                       UserOptions;                                              // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGamePlatformServices*                       GamePlatformServices;                                     // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x518];                                     // 0x05B8(0x0518) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcGameInstance");
		return ptr;
	}


	void UseGamepadAndSave(bool Value);
	bool UseGamepad();
	void SetTargetUI(bool Value);
	void SetLoadingScreen(EGuiLoadingScreens LoadingType);
	bool IsUserTester();
	bool IsUserDeveloper();
	struct FString GetTrackName();
	class UOnlineServices* GetOnlineServices();
	struct FSlateColor GetMenuColor(EGuiColors colorToGet);
	class UGamePlatformServices* GetGamePlatformServices();
	struct FString STATIC_GetGamePlatformPlayerID();
	struct FString GetCurrentGameVersion();
	void EndLoadingScreen(class UWorld* World);
	void BeginLoadingScreen(const struct FString& MapName);
};


// Class AC2.AcGlassDropletsComponent
// 0x0290 (0x0380 - 0x00F0)
class UAcGlassDropletsComponent : public UActorComponent
{
public:
	bool                                               bEnabled;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FString                                     MeshTag;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInternalView;                                            // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	int                                                MinRandomDrops;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxRandomDrops;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RainIntensityNewDropsCurve;                               // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EvaporationFactor;                                        // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EvaporationMaxTime;                                       // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GForceMultiplier;                                         // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMultiplier;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityMultiplier;                                        // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WiperAccumMultiplier;                                     // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassLeavePerc;                                            // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassEnterPerc;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFrameLimited;                                            // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	int                                                FPS;                                                      // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AreaMask;                                                 // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NormalsMask;                                              // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RTGrid;                                                   // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RTNormals;                                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ExtDropsMask;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ExtStreaksMask;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLogEnabled;                                              // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class UTexture2D*                                  DRSTexture;                                               // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           DRSCurveBasedOnSunElev;                                   // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           DRSCurveBasedOnCloudDensity;                              // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DirtStrength;                                             // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionStrength;                                       // 0x01AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScratchesStrength;                                        // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunBehindValue;                                           // 0x01B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1C8];                                     // 0x01B8(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcGlassDropletsComponent");
		return ptr;
	}

};


// Class AC2.AcIdealLineActor
// 0x00B8 (0x03E0 - 0x0328)
class AAcIdealLineActor : public AActor
{
public:
	int                                                IdealLineSpacing;                                         // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IdealLineWidth;                                           // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundOffset;                                             // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SecondsToNextPoint;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpeedLimitOver;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpeedLimitUnder;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorOver;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorUnder;                                               // 0x0350(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorMiddle;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UProceduralMeshComponent*                    LineMesh;                                                 // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcIdealLineActor");
		return ptr;
	}

};


// Class AC2.AcInfoManager
// 0x0048 (0x0078 - 0x0030)
class UAcInfoManager : public UDataAsset
{
public:
	class UDataTable*                                  DriverInfos;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  CarEntryInfos;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  ModelInfos;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  BrandInfos;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  CircuitInfos;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  CompetitionList;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  NationalityInfos;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  CommonTextsInfos;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  MeteoInfos;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcInfoManager");
		return ptr;
	}


	bool GetNationalityInfo(ENationality Nationality, struct FNationality* Destination);
	bool GetModelInfo(ECarModelType Model, struct FModelInfo* Destination);
	bool GetMeteoInfo(EWeatherPresetType MeteoType, struct FMeteoInfos* Destination);
	void GetInfoList(EInfoType InfoType, TArray<struct FName>* List);
	bool GetDriverInfo(const struct FName& RowName, struct FDriverInfo* Destination);
	bool GetCommonTexts(const struct FName& RowName, struct FCommonTexts* Destination);
	bool GetCircuitInfo(const struct FName& RowName, struct FCircuitInfo* Destination);
	bool GetCarInfo(const struct FName& RowName, struct FCarInfo* Destination);
	bool GetBrandInfo(EBrandType Brand, struct FBrandInfo* Destination);
};


// Class AC2.AcInputDeviceManager
// 0x01C0 (0x01E8 - 0x0028)
class UAcInputDeviceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0028(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcInputDeviceManager");
		return ptr;
	}

};


// Class AC2.AcLedSystem
// 0x0238 (0x0328 - 0x00F0)
class UAcLedSystem : public UActorComponent
{
public:
	struct FName                                       LedMaterialSlotName;                                      // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FLedInstance>                        RpmLeds;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        PitLimiterLeds;                                           // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        EngineLimiterLeds;                                        // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        FuelLeds;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_LF_Leds;                                             // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_RF_Leds;                                             // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_LR_Leds;                                             // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_RR_Leds;                                             // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_Front_Leds;                                          // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Slip_Rear_Leds;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_LF_Leds;                                             // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_RF_Leds;                                             // 0x01A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_LR_Leds;                                             // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_RR_Leds;                                             // 0x01C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_Front_Leds;                                          // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        Lock_Rear_Leds;                                           // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        ABS_InAction_Leds;                                        // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        TC_InAction_Leds;                                         // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        DayLightStageLeds;                                        // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        HighBeamStageLeds;                                        // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        EnduranceStageLeds;                                       // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        RainLightLeds;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        FlashingLeds;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        DirectionLeftLeds;                                        // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        DirectionRightLeds;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FLedInstance>                        DirectionSharedLeds;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	float                                              RpmTimeOn;                                                // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              RpmTimeOff;                                               // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET
	float                                              RpmBlinkMinRpm;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngineLimiterTimeOn;                                      // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              EngineLimiterTimeOff;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02B4(0x000C) MISSED OFFSET
	float                                              EngineLimiterMinRpm;                                      // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              PitLimiterTimeOn;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              PitLimiterTimeOff;                                        // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x02CC(0x000C) MISSED OFFSET
	float                                              FuelTimeOn;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FuelTimeOff;                                              // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x02E0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcLedSystem");
		return ptr;
	}

};


// Class AC2.AcLumirankComponent
// 0x00C0 (0x06B0 - 0x05F0)
class UAcLumirankComponent : public UStaticMeshComponent
{
public:
	bool                                               bIsTwoDigit;                                              // 0x05F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Pro;                                                // 0x05F4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                Color_ProAm;                                              // 0x0604(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                Color_Am;                                                 // 0x0614(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                Color_Cup;                                                // 0x0624(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              BlinkTime;                                                // 0x0634(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emissive;                                                 // 0x0638(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NameBlinkTime;                                            // 0x063C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FormationPulseTime;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FormationMinEmissive;                                     // 0x0644(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FormationMaxEmissive;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x64];                                      // 0x064C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcLumirankComponent");
		return ptr;
	}

};


// Class AC2.AcMarshal
// 0x0048 (0x0370 - 0x0328)
class AAcMarshal : public AActor
{
public:
	EMarshalFlagType                                   winColor;                                                 // 0x0328(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              startAnimationRandom;                                     // 0x032C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              MiddlePosition;                                           // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              EndPosition;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x033C(0x0001) MISSED OFFSET
	bool                                               bCanDrawLines;                                            // 0x033D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x033E(0x0002) MISSED OFFSET
	float                                              ForcedMiddlePosition;                                     // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UBoxComponent*                               StartBox;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               MiddleBox;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               EndBox;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcMarshal");
		return ptr;
	}


	void SetFlag(EMarshalFlagType flagColor);
	void ForceAnimation(bool Value);
	void EnableAnimation(bool Value, EMarshalFlagType flagColor);
};


// Class AC2.AcMenuData
// 0x0018 (0x0048 - 0x0030)
class UAcMenuData : public UDataAsset
{
public:
	class UDataTable*                                  GuiColorsAsset;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  GuiIconTemplateTable;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  GuiActionTextTable;                                       // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcMenuData");
		return ptr;
	}


	bool GetIconTemplate(const struct FName& RowName, struct FGuiIconTemplate* Destination);
	struct FSlateColor GetColor(EGuiColors colorToGet);
	TArray<struct FName> GetActionTexts();
	bool GetActionText(const struct FName& RowName, struct FGuiActionCategory* Destination);
};


// Class AC2.AcMenuGameMode
// 0x0298 (0x0660 - 0x03C8)
class AAcMenuGameMode : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C8(0x0020) MISSED OFFSET
	TMap<struct FName, class UMaterialInterface*>      OriginalCarMaterials;                                     // 0x03E8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0438(0x00F0) MISSED OFFSET
	ECarModelType                                      ScreenSaverCarModel;                                      // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	struct FName                                       ScreenSaverCarName;                                       // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAcGameInstance*                             GameInstance;                                             // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcInputDeviceManager*                       InputDeviceManager;                                       // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RaceGameModePath;                                         // 0x0548(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UViewOptionsLibrary*                         ViewOptions;                                              // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<ECarModelType, struct FGuiCar>                GuiCars;                                                  // 0x0560(0x0050) (ZeroConstructor)
	class UAcRaceEventGenerator*                       RaceEventGenerator;                                       // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA8];                                      // 0x05B8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcMenuGameMode");
		return ptr;
	}


	class UViewOptionsLibrary* getViewLibrary();
};


// Class AC2.AcMenuState
// 0x01C8 (0x01F0 - 0x0028)
class UAcMenuState : public USaveGame
{
public:
	TMap<EGuiGameModes, struct FGuiRaceEventData>      RaceEventData;                                            // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst)
	struct FName                                       CarEntryRowName;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       DriverRowName;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EGuiGameModes                                      GameMode;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EGuiSetupSection                                   SetupSection;                                             // 0x0089(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	struct FIntPoint                                   Resolution;                                               // 0x008C(0x0008) (Edit, EditConst, IsPlainOldData)
	bool                                               UseFullscreen;                                            // 0x0094(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FVector                                     weather;                                                  // 0x0098(0x000C) (Edit, EditConst, IsPlainOldData)
	EWeatherPresetType                                 WeatherType;                                              // 0x00A4(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	ECarModelType                                      ModelType;                                                // 0x00A5(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bUseEnduranceKit;                                         // 0x00A6(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	struct FAudioSave                                  audio;                                                    // 0x00A8(0x002C) (Edit, EditConst)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FGuiLoadingScreenInfo                       LoadingScreenInfo;                                        // 0x00D8(0x0110) (Edit, EditConst)
	EGuiLanguages                                      CurrentLanguage;                                          // 0x01E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcMenuState");
		return ptr;
	}

};


// Class AC2.AcPageBase
// 0x0228 (0x0430 - 0x0208)
class UAcPageBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0208(0x0130) MISSED OFFSET
	class UHelpInMenu*                                 HelpWidget;                                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               canHandleForward;                                         // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canHandleBackward;                                        // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasShowroomTimer;                                         // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0343(0x0001) MISSED OFFSET
	float                                              ShowroomTimeOut;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0348(0x0010) MISSED OFFSET
	class ALevelSequenceActor*                         ShowroomLevelSequence;                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UClass*>                  PageClasses;                                              // 0x0360(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x14];                                      // 0x03B0(0x0014) MISSED OFFSET
	float                                              TimeToFirstClick;                                         // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSecondClick;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepFirstClick;                                       // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepSecondClick;                                      // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5C];                                      // 0x03D4(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPageBase");
		return ptr;
	}


	void Forward();
	void Backward();
};


// Class AC2.AcPanelBase
// 0x02E0 (0x04E8 - 0x0208)
class UAcPanelBase : public UUserWidget
{
public:
	TMap<struct FName, class UClass*>                  PageClasses;                                              // 0x0208(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsActive;                                                 // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNavigable;                                              // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canHandleForward;                                         // 0x025A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canHandleBackward;                                        // 0x025B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FText                                       PageInfo;                                                 // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FString                                     PanelGroup;                                               // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                PanelIndex;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UpDirectionIndex;                                         // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LeftDirectionIndex;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RightDirectionIndex;                                      // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DownDirectionIndex;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShoulderLeftDirectionIndex;                               // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShoulderRightDirectionIndex;                              // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	class UTexture2D*                                  NormalImage;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HoveredImage;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 SetupElement;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FText>                               HelpInfos;                                                // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x218];                                     // 0x02D0(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPanelBase");
		return ptr;
	}


	void SetFocus(bool hasFocus);
	struct FSlateColor GetMenuColor(EGuiColors colorToGet);
	void ChangeTextBlockVisiblityBySlot(class UNamedSlot* SlotName, ESlateVisibility Value);
	void ChangeTextBlockVisibilityByCanvas(class UCanvasPanel* Canvas, ESlateVisibility Value);
	void ChangeTextBlockColorBySlot(class UNamedSlot* SlotName, EGuiColors Color);
	void ChangeTextBlockColorByCanvas(class UCanvasPanel* Canvas, EGuiColors Color);
	void BP_MouseOver();
	void BP_MouseLeave();
};


// Class AC2.AcParticles
// 0x0040 (0x0368 - 0x0328)
class AAcParticles : public AActor
{
public:
	class UProceduralMeshComponent*                    TestMesh;                                                 // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterial*                                   TestMaterial;                                             // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialExpressionConstant3Vector*          BaseColorFactorNode;                                      // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            ParticlesArray;                                           // 0x0348(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0358(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcParticles");
		return ptr;
	}

};


// Class AC2.AcParticlesManager
// 0x0028 (0x0058 - 0x0030)
class UAcParticlesManager : public UDataAsset
{
public:
	class UParticleSystem*                             sparks;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  WaterCurves;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  WaterParticles;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  SmokeDirtCurves;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  SmokeDirtParticles;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcParticlesManager");
		return ptr;
	}


	bool GetWaterParticles(const struct FName& RowName, struct FWaterParticles* Destination);
	bool GetWaterCurves(const struct FName& RowName, struct FWaterCurves* Destination);
	bool GetSmokeDirtParticles(const struct FName& RowName, struct FSmokeDirtParticles* Destination);
	bool GetSmokeDirtCurves(const struct FName& RowName, struct FSmokeDirtCurves* Destination);
	bool GetParticleList(EParticleLod ParticleLod, TArray<struct FName>* List);
};


// Class AC2.AcPitstopAnimation
// 0x0000 (0x0360 - 0x0360)
class UAcPitstopAnimation : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPitstopAnimation");
		return ptr;
	}

};


// Class AC2.AcPitstopAnimNotify
// 0x0008 (0x0040 - 0x0038)
class UAcPitstopAnimNotify : public UAnimNotify
{
public:
	unsigned char                                      NotifyIndex;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NotifyTyreIndex;                                          // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPitstopAnimNotify");
		return ptr;
	}

};


// Class AC2.AcPitstopProcedure
// 0x0238 (0x0560 - 0x0328)
class AAcPitstopProcedure : public AActor
{
public:
	float                                              TyreMan_A2B_time;                                         // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreMan_B2C_time;                                         // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreMan_C2D_time;                                         // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreMan_D2End_time;                                       // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirgunMan_A2B_time;                                       // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirgunMan_B2C_time;                                       // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirgunMan_C2D_time;                                       // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AirgunMan_D2End_time;                                     // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreManComponent;                                         // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AirgunManComponent;                                       // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ReceiverManComponent;                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreA_Component;                                          // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreBC_Component;                                         // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TyreD_Component;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                PitTyreComponents;                                        // 0x0380(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                CarTyreComponents;                                        // 0x0390(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                PitRimComponents;                                         // 0x03A0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                CarRimComponents;                                         // 0x03B0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMesh*>                         RimMeshes;                                                // 0x03C0(0x0010) (ZeroConstructor)
	class UArrowComponent*                             CarCenterComponent;                                       // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshSocket*>                 PitWheelSockets;                                          // 0x03D8(0x0010) (ZeroConstructor)
	TArray<class USkeletalMeshSocket*>                 CarWheelSockets;                                          // 0x03E8(0x0010) (ZeroConstructor)
	TArray<class USkeletalMeshComponent*>              WheelComponents;                                          // 0x03F8(0x0010) (ExportObject, ZeroConstructor)
	TMap<ECarModelType, struct FPitstopOffsets>        PitstopOffsets;                                           // 0x0408(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x108];                                     // 0x0458(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPitstopProcedure");
		return ptr;
	}

};


// Class AC2.ACPlayerCameraManager
// 0x0190 (0x2780 - 0x25F0)
class AACPlayerCameraManager : public APlayerCameraManager
{
public:
	class AAcFreeCameraActor*                          FreeCameraActor;                                          // 0x25F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                HelicamActor;                                             // 0x25F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x2600(0x0048) MISSED OFFSET
	struct FACCameraSettings                           CameraSettings;                                           // 0x2648(0x0068) (Edit)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x26B0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ACPlayerCameraManager");
		return ptr;
	}


	void ToggleFreeCameraLock();
	void SetFocusOnPlayerCar();
	void SetFocusedCar(class ACarAvatar* newCar, bool bSetUniqueActorsVisibility);
	void RefreshCamera();
	class UCameraComponent* GetFreeCamera();
	class ACarAvatar* GetFocusedCar();
};


// Class AC2.AcPlayerStart
// 0x0028 (0x0380 - 0x0358)
class AAcPlayerStart : public APlayerStart
{
public:
	EAcPlayerStartType                                 StartType;                                                // 0x0358(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StartIndex;                                               // 0x0359(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECarLocation                                       CarLocation;                                              // 0x035A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsBetween_SC_Lines;                                       // 0x035B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsSharedZone;                                             // 0x035C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondaryZone;                                          // 0x035D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SharedWithPosition;                                       // 0x035E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x21];                                      // 0x035F(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPlayerStart");
		return ptr;
	}

};


// Class AC2.AcPlayerStartManager
// 0x0040 (0x0368 - 0x0328)
class AAcPlayerStartManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET
	bool                                               bIsPitlaneOnLeft;                                         // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class USplineComponent*                            SplineComponent;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	float                                              PitAlignmentRange;                                        // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FString                                     PlayerStartPrefix;                                        // 0x0350(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsFirstZero;                                             // 0x0360(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0361(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPlayerStartManager");
		return ptr;
	}


	class AAcPlayerStart* GetPlayerStart(EAcPlayerStartType PlayerStartType, int PlayerPosition);
	class AAcPlayerStartManager* STATIC_FindPlayerStartManager(class UWorld* World);
};


// Class AC2.AcPresetManager
// 0x0020 (0x0050 - 0x0030)
class UAcPresetManager : public UDataAsset
{
public:
	class UDataTable*                                  GraphicTable;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  DirectInputCommand;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  AudioTable;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  SpecialEventTable;                                        // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcPresetManager");
		return ptr;
	}


	void GetSortedSpecialEventList(TArray<struct FSpecialEventPreset>* List);
	void GetPresetList(EPresetType PresetType, TArray<struct FName>* List);
};


// Class AC2.AcRaceEventGenerator
// 0x0018 (0x0040 - 0x0028)
class UAcRaceEventGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRaceEventGenerator");
		return ptr;
	}

};

class APhysicsAvatar;
class ATrackAvatar;
// Class AC2.AcRaceGameMode
// 0x0398 (0x0760 - 0x03C8)
class AAcRaceGameMode : public AGameModeBase
{
public:
	struct FVector2D                                   AiLightsHighBeamSunAngleLimits;                           // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   AiLightsEnduranceBeamSunAngleLimits;                      // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   AiRainIntensityLimits;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AiRainIntensityRandomVariation;                           // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UClass*                                      PausePage;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StartPage;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TransitionPageClass;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      IntroPageClass;                                           // 0x0400(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EndPageClass;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PostSessionPageClass;                                     // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReplayPageClass;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndSessionReplayMinSeconds;                               // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndSessionReplayOffsetSeconds;                            // 0x0424(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  AudioComms;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  HighLigthEvents;                                          // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicsSettingsAC*                          PhysicsSettings;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      HUDWidgetTarget;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAcStereoLayerComponent*                     HUDStereoLayer;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AAiCarController*                            aiTeammate;                                               // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcRaceManager*                              ueRaceManager;                                            // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcParticlesManager*                         ParticlesManager;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URaceRatingsManager*                         RaceRatingsManager;                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialParameterCollection*                MaterialParameterCollection;                              // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PitstopClass;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DummyCarClass;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      IdealLineClass;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   Accessories;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   Environment;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   Damage;                                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODBank*                                   AudioCommsBank;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GhostCarManager;                                          // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UViewOptionsLibrary*                         ViewOptions;                                              // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   yellowFlagLimitSpeeds;                                    // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   yellowFlagLimitRelative;                                  // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              blueFlagLimit;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              blueFlagDistance;                                         // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];
	std::unique_ptr<ksRacing::RaceManager>			   raceManager;												 // TUniquePtr<ksRacing::RaceManager,TDefaultDelete<ksRacing::RaceManager> > ?
	bool											   areControlsLocked;
	unsigned char                                      UnknownData01[0x7];
	APhysicsAvatar*									   PhysicsAvatar;
	ATrackAvatar*									   TrackAvatar;
	AAcPlayerStartManager*							   PlayerStartManager;
	uintptr_t										   SunLight;
	AAcIdealLineActor*								   idealLine;
	unsigned char                                      UnknownData02[0x78];                                      // 0x04C0(0x00D8) MISSED OFFSET
	class UTrackSectionServices*                       TrackSectionServices;                                     // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcTeamStrategyController*                   TeamStrategyController;                                   // 0x05A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET
	class AAudioActor*                                 AudioActor;                                               // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAcSpotter*                                  spotterActor;                                       // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x198];                                     // 0x05C8(0x0198) MISSED OFFSET

                                       // 0x05C8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRaceGameMode");
		return ptr;
	}


	void ShowPostSessionTimeNotification();
	void Proceed();
	class UViewOptionsLibrary* getViewLibrary();
	float GetSunPitch();
	class URaceRatingsManager* GetRaceRatingsManager();
	class ACarAvatar* GetPlayerCarAvatar();
	void CloseLevel();
	void BPPhysicsPause(bool bPause);
};


// Class AC2.AcRaceGameState
// 0x0100 (0x0468 - 0x0368)
class AAcRaceGameState : public AGameStateBase
{
public:
	float                                              MaxWindSpeed;                                             // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UClass*                                      RainActorClass;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumCarsCastingShadows;                                 // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UReplayManager*                              ReplayManager;                                            // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	class AReplayActor*                                ReplayActor;                                              // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AudioInternalScale;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeFadeInTime;                                         // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AudioStartingTime;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraStartRampVolume;                                    // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PuddleLevelSmoothValue;                                   // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PuddleGain;                                               // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OpponentEngineVolume;                                     // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMinDistance;                                        // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMaxDistance;                                        // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AudioScaleMaxSpeed;                                       // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioFadingCars;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioListenerCars;                                        // 0x03BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFadingCars;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceListenerCars;                                  // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineExtVolumeSmoothOn;                                  // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineExtVolumeSmoothOff;                                 // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PassByFactorVariation;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalFactorVariation;                               // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumOpponentsVolumeReductionInt;                           // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OpponentListenerReductionFactorInt;                       // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OpponentListenerDistanceInt;                              // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumOpponentsVolumeReductionExt;                           // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OpponentListenerReductionFactorExt;                       // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TestMinOpponentDirt;                                      // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAudioLog                                          LogAudio;                                                 // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DebugAudio;                                               // 0x03F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EngineExtEnabled;                                         // 0x03F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EngineIntEnabled;                                         // 0x03F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BodyWorkEnabled;                                          // 0x03F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               WheelEnabled;                                             // 0x03F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               WindEnabled;                                              // 0x03F6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03F7(0x0001) MISSED OFFSET
	class AWindDirectionalSource*                      WindSource;                                               // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARainBase*                                   RainActor;                                                // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAcParticles*                                ParticlesActor;                                           // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0410(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRaceGameState");
		return ptr;
	}


	void SetMainVolume(float Volume);
	void SetAudioVCA(EAudioVCA Vca, float Volume);
	void RestartSession();
	void NextSession();
	bool isInReplay();
	float GetTimeOfDayAsSeconds();
	float GetTimeOfDayAs1440();
	class APlayerController* GetReplayController();
	float GetRainGlobalLevel();
	float GetCloudGlobalLevel();
	float GetAudioVCA(EAudioVCA Vca);
	void AddSecondsToTimeOfday(int secondsToAdd);
};


// Class AC2.AcRaceManager
// 0x0070 (0x0098 - 0x0028)
class UAcRaceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRaceManager");
		return ptr;
	}

};


// Class AC2.AcRacePlayerState
// 0x0170 (0x0560 - 0x03F0)
class AAcRacePlayerState : public APlayerState
{
public:
	struct FCarInfo                                    CarInfo;                                                  // 0x03F0(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDriverInfo                                 DriverInfo;                                               // 0x0490(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRacePlayerState");
		return ptr;
	}


	void SetDriverInfo(const struct FDriverInfo& _driverInfo);
	void SetCarInfo(const struct FCarInfo& _carInfo);
};


// Class AC2.AcRaceWidgetBase
// 0x00E8 (0x02F0 - 0x0208)
class UAcRaceWidgetBase : public UUserWidget
{
public:
	struct FVector2D                                   widgetContentSize;                                        // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRaceHUDState                               lastState;                                                // 0x0210(0x00D8) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcRaceWidgetBase");
		return ptr;
	}


	void OnUpdateOfficialPositionEvent(int CarIndex, int NewPosition);
	void OnHudTick(const struct FRaceHUDState& State);
	void OnHudSplitEvent();
	void OnHudLapEvent(int Laptime, bool IsValid, const struct FHUDCarState& carState, bool isDriverFastestLap, bool isSessionFastestLap);
};


// Class AC2.AcSessionInfoContainer
// 0x0060 (0x0268 - 0x0208)
class UAcSessionInfoContainer : public UUserWidget
{
public:
	class UClass*                                      SessionInfoPanelClass;                                    // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GenericRankEntryClass;                                    // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RankEntryClass;                                           // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LapEntryClass;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RaceEntryClass;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             switcher_Root;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAcSessionInfoPanel*>                 SessionInfoPanels;                                        // 0x0238(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0248(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcSessionInfoContainer");
		return ptr;
	}

};


// Class AC2.AcSessionInfoEntryBase
// 0x0008 (0x0210 - 0x0208)
class UAcSessionInfoEntryBase : public UUserWidget
{
public:
	class UTextBlock*                                  txtError;                                                 // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcSessionInfoEntryBase");
		return ptr;
	}

};


// Class AC2.AcSessionInfoPanel
// 0x0078 (0x0280 - 0x0208)
class UAcSessionInfoPanel : public UUserWidget
{
public:
	class UCanvasPanel*                                canvasWaitingForData;                                     // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                vboxItems;                                                // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0218(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcSessionInfoPanel");
		return ptr;
	}


	void OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass);
};


// Class AC2.AcSpotter
// 0x0148 (0x0470 - 0x0328)
class AAcSpotter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0328(0x0020) MISSED OFFSET
	class UAudioComms*                                 AudioComms;                                               // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0350(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcSpotter");
		return ptr;
	}

};


// Class AC2.AcSteeringWheelAnimations
// 0x0010 (0x0380 - 0x0370)
class UAcSteeringWheelAnimations : public UAcAnimInstanceBase
{
public:
	TArray<struct FSwitchAnimation>                    Switches;                                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcSteeringWheelAnimations");
		return ptr;
	}


	void UpdateAnimation(int Index);
	bool ResetGearState(bool Value);
	void OnNotifyReceived(float TimeDelay, int Index);
	void OnCarAnimationEvent(ECarAnimation CarAnimation);
	struct FRotator GetCurrentSwitchRotator(unsigned char Index);
};


// Class AC2.AcStereoLayerComponent
// 0x0000 (0x02D0 - 0x02D0)
class UAcStereoLayerComponent : public UStereoLayerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcStereoLayerComponent");
		return ptr;
	}

};


// Class AC2.AcTeamStrategyController
// 0x0210 (0x0300 - 0x00F0)
class UAcTeamStrategyController : public UActorComponent
{
public:
	struct FCarSetup                                   playerCarSetup;                                           // 0x00F0(0x0178)
	bool                                               isSetupChanged;                                           // 0x0268(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FString                                     setupName;                                                // 0x0270(0x0010) (ZeroConstructor)
	struct FString                                     setupPreset;                                              // 0x0280(0x0010) (ZeroConstructor)
	class AAcRaceGameMode*                             RaceGameMode;                                             // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0298(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcTeamStrategyController");
		return ptr;
	}

};


// Class AC2.AcTogglePanel
// 0x0010 (0x04F8 - 0x04E8)
class UAcTogglePanel : public UAcPanelBase
{
public:
	bool                                               IsPanelSelected;                                          // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                               // 0x04EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcTogglePanel");
		return ptr;
	}


	bool GetState();
	void BP_UpdateState(bool IsElementActive);
	void BP_IsUnSelected();
	void BP_IsSelected();
	void BP_Forward();
};


// Class AC2.AcTrackReflectionController
// 0x0028 (0x0350 - 0x0328)
class AAcTrackReflectionController : public AActor
{
public:
	float                                              SecondsBetweenTotalRefresh;                               // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x032C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcTrackReflectionController");
		return ptr;
	}

};


// Class AC2.AcTrackSpline
// 0x0010 (0x0338 - 0x0328)
class AAcTrackSpline : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	bool                                               ImportFewPoints;                                          // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcTrackSpline");
		return ptr;
	}


	class USplineComponent* GetSpline();
	float GetDistanceAtLocation(const struct FVector& Location);
};


// Class AC2.AcUserDocumentManager
// 0x0000 (0x0028 - 0x0028)
class UAcUserDocumentManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcUserDocumentManager");
		return ptr;
	}

};


// Class AC2.AcUserOptionsManager
// 0x04E0 (0x0508 - 0x0028)
class UAcUserOptionsManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnUserOptionsChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHUDOptionsChanged;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGhostCarOptionsChanged;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0058(0x0030) MISSED OFFSET
	struct FUserOptions                                options;                                                  // 0x0088(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUserOptions                                LastSavedOptions;                                         // 0x0208(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FUserOptions                                LastBroadcastedOptions;                                   // 0x0388(0x0180) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AcUserOptionsManager");
		return ptr;
	}

};


// Class AC2.AdvancedScalabilityConfig
// 0x0070 (0x0398 - 0x0328)
class AAdvancedScalabilityConfig : public AActor
{
public:
	float                                              SaveFlag;                                                 // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              LightFunctionQuality;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              ShadowQuality;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxCascades;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              ShadowMaxResolution;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              RadiusThreshold;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              TransitionScale;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MotionBlurQuality;                                        // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlurGBuffer;                                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              AmbientOcclusionLevels;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              AmbientOcclusionRadiusScale;                              // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DepthOfFieldQuality;                                      // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              RenderTargetPoolMin;                                      // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              LensFlareQuality;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SceneColorFringeQuality;                                  // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              EyeAdaptationQuality;                                     // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              BloomQuality;                                             // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              FastBlurThreshold;                                        // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              UpscaleQuality;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              GrainQuantization;                                        // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              TranslucensyVolumeDim;                                    // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              RefractionQuality;                                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SSR;                                                      // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SceneColorFormat;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              DetailMode;                                               // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              TranslucencyVolumeBlur;                                   // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaterialQualityLevel;                                     // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AdvancedScalabilityConfig");
		return ptr;
	}


	void SetParameter(EGraphicsOptions Type, float Value);
	void saveConfig();
	float GetParameter(EGraphicsOptions Type);
	EGraphicsOptions getEnum(const struct FString& Key);
};


// Class AC2.AiCarController
// 0x0028 (0x0460 - 0x0438)
class AAiCarController : public AAIController
{
public:
	class UAcAssistController*                         assistController;                                         // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0440(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AiCarController");
		return ptr;
	}

};


// Class AC2.AIHUD
// 0x01F8 (0x0648 - 0x0450)
class AAIHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x0450(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AIHUD");
		return ptr;
	}

};


// Class AC2.AIHUDWidget
// 0x0000 (0x02F0 - 0x02F0)
class UAIHUDWidget : public UAcRaceWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AIHUDWidget");
		return ptr;
	}

};


// Class AC2.AIInfoHUD
// 0x0038 (0x0488 - 0x0450)
class AAIInfoHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0450(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AIInfoHUD");
		return ptr;
	}

};


// Class AC2.AssistsPage
// 0x0078 (0x04A8 - 0x0430)
class UAssistsPage : public UAcPageBase
{
public:
	class UClass*                                      presetPopupClass;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	class UGenericSelectorItem*                        Gear;                                                     // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Clutch;                                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        stabilityControl;                                         // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        EngineStart;                                              // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Wiper;                                                    // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        lights;                                                   // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        PitLimiter;                                               // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        PitProcedure;                                             // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        PitRequest;                                               // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        showIdealLine;                                            // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0490(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AssistsPage");
		return ptr;
	}


	void OpenPresetDialogBox();
};


// Class AC2.ATimeLine
// 0x0018 (0x0340 - 0x0328)
class AATimeLine : public AActor
{
public:
	int                                                ID;                                                       // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UBoxComponent*                               Left;                                                     // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Right;                                                    // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ATimeLine");
		return ptr;
	}

};


// Class AC2.AudioActor
// 0x0008 (0x0330 - 0x0328)
class AAudioActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AudioActor");
		return ptr;
	}

};


// Class AC2.AudioComms
// 0x0080 (0x00A8 - 0x0028)
class UAudioComms : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AudioComms");
		return ptr;
	}

};


// Class AC2.AudioManager
// 0x0110 (0x0138 - 0x0028)
class UAudioManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AudioManager");
		return ptr;
	}

};


// Class AC2.AudioOptionsPage
// 0x0078 (0x04A8 - 0x0430)
class UAudioOptionsPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0430(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AudioOptionsPage");
		return ptr;
	}

};


// Class AC2.BasicCar01Widget
// 0x0160 (0x0450 - 0x02F0)
class UBasicCar01Widget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtUnit;                                                  // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRPMS;                                                  // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGear;                                                  // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSpeed;                                                 // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                barRPMS;                                                  // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgRpms;                                                  // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtABSSetting;                                            // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTCSetting;                                             // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBBSetting;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET
	class UProgressBar*                                barThrottle;                                              // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                barBrake;                                                 // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                barFFB;                                                   // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderThrottleMinIndicator;                               // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderThrottleMaxIndicator;                               // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderBrakeMinIndicator;                                  // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderBrakeMaxIndicator;                                  // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderFFBMinIndicator;                                    // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderFFBMaxIndicator;                                    // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                ThrottleIndicatorColor;                                   // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BrakeIndicatorColor;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                PedalIndicatorAntiColor;                                  // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FFIndicatorColor;                                         // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FFClippingColor;                                          // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                RpmNormalColor;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                RpmSuggestedShiftColor;                                   // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                RpmLimiterColor;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              StartMaterialArcValue;                                    // 0x0418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndMaterialArcValue;                                      // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FFMinLevelDisplay;                                        // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UMaterialInstance*                           miRpms;                                                   // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.BasicCar01Widget");
		return ptr;
	}

};


// Class AC2.BestLapNotificationWidget
// 0x0040 (0x0330 - 0x02F0)
class UBestLapNotificationWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtFastestLapDescription;                                 // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector1;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector2;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector3;                                               // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderSector1;                                            // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderSector2;                                            // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderSector3;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.BestLapNotificationWidget");
		return ptr;
	}


	void PlayShowupAnimation();
};


// Class AC2.BlackPage
// 0x0018 (0x0448 - 0x0430)
class UBlackPage : public UAcPageBase
{
public:
	struct FScriptMulticastDelegate                    OnFadeAnimationFinished;                                  // 0x0430(0x0010) (ZeroConstructor, InstancedReference)
	class UWidgetAnimation*                            FadeAnimation;                                            // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.BlackPage");
		return ptr;
	}


	void FadeAnimationFinished();
};


// Class AC2.BOPData
// 0x0028 (0x0058 - 0x0030)
class UBOPData : public UDataAsset
{
public:
	float                                              MassKG;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHeight;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFuel;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PowerCurve;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTurboData>                          Turbos;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.BOPData");
		return ptr;
	}

};


// Class AC2.CameraDebugHUD
// 0x0008 (0x0458 - 0x0450)
class ACameraDebugHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0450(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CameraDebugHUD");
		return ptr;
	}

};


// Class AC2.CameraTV
// 0x00B0 (0x03D8 - 0x0328)
class ACameraTV : public AActor
{
public:
	class UBoxComponent*                               BoxCollider;                                              // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 FovCurve;                                                 // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Set;                                                      // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowDistanceFromFocusedCar;                             // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowDistanceWithoutFocusedCar;                          // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData)
	bool                                               bFocusCar;                                                // 0x0358(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowSpline;                                            // 0x0359(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	float                                              MovementSpeed;                                            // 0x035C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwitchTime;                                               // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwitchLerpTime;                                           // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActivationDistance;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	bool                                               bIsFixed;                                                 // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x67];                                      // 0x0371(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CameraTV");
		return ptr;
	}

};


// Class AC2.CarAudio
// 0x02D0 (0x0510 - 0x0240)
class UCarAudio : public USceneComponent
{
public:
	class UKSAudioComponent*                           EngineExt;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           EngineReturnTest;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelIntRF;                                               // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelIntLF;                                               // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelIntRR;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelIntLR;                                               // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelExtRF;                                               // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelExtLF;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelExtRR;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           WheelExtLR;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           Bodywork;                                                 // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           Wind;                                                     // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAudioComponent*                           HitComponent;                                             // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFMODBank*                                   Bank;                                                     // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RayLength;                                                // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EngineReflectionSmooth;                                   // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AudioReflection;                                          // 0x02B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               drawTestSphere;                                           // 0x02B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02BA(0x0002) MISSED OFFSET
	float                                              VolumeMultiplier;                                         // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GasAlphaSmooth;                                           // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HitNumEvents;                                             // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitMinTime;                                               // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitMaxDistance;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitReplacingTime;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x23C];                                     // 0x02D4(0x023C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarAudio");
		return ptr;
	}


	void StopSounds();
	void ResumeSounds();
};


// Class AC2.CarAvatar
// 0x1AF8 (0x1E80 - 0x0388)
class ACarAvatar : public APawn
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0388(0x0030) MISSED OFFSET
	class UCarData*                                    CarData;                                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIDataAsset*                                AIData;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USetupManager*                               SetupManager;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAcCarAnimations*                            CarAnimations;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ColliderMesh;                                             // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAcCarLightingSystem*                        CarLightingSystem;                                        // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcCarSystems*                               CarSystems;                                               // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAcLedSystem*                                CarLedSystem;                                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	class UAcCarTimingServices*                        CarTimingServices;                                        // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCarAudio*                                   CarAudio;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTyreCompoundSetDefinition>          TyreCompounds;                                            // 0x0410(0x0010) (Edit, ZeroConstructor)
	TArray<struct FWingState>                          uwingstate;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	struct FModelCockpitCamInfo                        MirrorViewInfo;                                           // 0x0438(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x19];                                      // 0x0460(0x0019) MISSED OFFSET
	bool                                               bIsLeftHandedDrive;                                       // 0x0479(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDummyCar;                                              // 0x047A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x047B(0x0005) MISSED OFFSET
	class UAcExhaustComponent*                         ExhaustComponent;                                         // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcCarPitstopManager*                        PitstopManager;                                           // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TyreBlurMinSpeed;                                         // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreBlurMaxSpeed;                                         // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TempSlickRainBase;                                        // 0x0498(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class USkeletalMesh>                SprintExternalMesh;                                       // 0x04A0(0x0028) (Edit)
	TSoftObjectPtr<class USkeletalMesh>                EnduranceExternalMesh;                                    // 0x04C8(0x0028) (Edit)
	TArray<class UStaticMesh*>                         StaticRims_LF_RF_LR_RR;                                   // 0x04F0(0x0010) (Edit, ZeroConstructor)
	struct FName                                       StaticRimSlotName;                                        // 0x0500(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StaticRimDecalsSlotName;                                  // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         BlurredRims_LF_RF_LR_RR;                                  // 0x0510(0x0010) (Edit, ZeroConstructor)
	struct FName                                       BlurredRimSlotName;                                       // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BlurredRimDecalsSlotName;                                 // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BlurredRimBlurSlotName;                                   // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspGraphicsOffsetFront;                                  // 0x0538(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuspGraphicsOffsetRear;                                   // 0x053C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     carName;                                                  // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ConfigName;                                               // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     GraphicsOffset;                                           // 0x0560(0x000C) (Edit, IsPlainOldData)
	float                                              GraphicsPitchRotation;                                    // 0x056C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<uint16_t>                                   NextNetCarState;                                          // 0x0570(0x0010) (Net, ZeroConstructor)
	class USkidmarks*                                  Skidmarks;                                                // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            VRCamera;                                                 // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAC2WaterSpray*                              spray;                                                    // 0x0590(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAC2TyreSmoke*                               Smoke;                                                    // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                TyreMeshComponents;                                       // 0x05A0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                StaticRimMeshComponents;                                  // 0x05B0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                BlurredRimMeshComponents;                                 // 0x05C0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            StaticRimMaterials;                                       // 0x05D0(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            BLurredRimMaterials;                                      // 0x05E0(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            StaticRimDecalsMaterials;                                 // 0x05F0(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            BlurredRimDecalsMaterials;                                // 0x0600(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            BlurredRimBlurMaterials;                                  // 0x0610(0x0010) (ZeroConstructor)
	class UMaterialInstanceDynamic*                    ShadowPlaneMaterial;                                      // 0x0620(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShadowTyresMaterial;                                      // 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ShadowPlaneMaterialName;                                  // 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ShadowTyresMaterialName;                                  // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ShadowPlaneCompScale;                                     // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowTyresCompScale;                                     // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowPlaneOffset;                                        // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowTyresOffset;                                        // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowOffRoad;                                            // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	struct FName                                       BrakeDiskMaterialName;                                    // 0x0658(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BrakeDiskMaterial;                                        // 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               usePhysicsTemp;                                           // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              BrakeDiscEmissiveMult;                                    // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakeDiscTemperature;                                     // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           BrakeDiskColorCurve;                                      // 0x0678(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       IntWindowsMaterialName;                                   // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IntWindowsMaterial;                                       // 0x0688(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RainStreaksSpeedMult;                                     // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           RainStreaksColorCurve;                                    // 0x0698(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RainStreaksDeltaSpeedFade;                                // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RainStreaksFadeTime;                                      // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RainStreaksRandRange;                                     // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	struct FName                                       CarPaintMaterialName;                                     // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           DirtPerChannelCurve;                                      // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DirtTexture;                                              // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IntWindowsDirtTexture;                                    // 0x06C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CarPaintMaterial;                                         // 0x06D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    NumberPlateMaterial;                                      // 0x06D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NumberPlateDigits;                                        // 0x06E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      NumberPlateRT;                                            // 0x06E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MainDisplayIndex;                                         // 0x06F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	TArray<class UAcCarDigitalDisplay*>                DigitalDisplays;                                          // 0x06F8(0x0010) (ExportObject, ZeroConstructor)
	TArray<ECarDigitalDisplayPages>                    DisplayPages;                                             // 0x0708(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<ECarDigitalDisplayPages>                    PracticeDefaultPage;                                      // 0x0718(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<ECarDigitalDisplayPages>                    QualifyingDefaultPage;                                    // 0x0728(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<ECarDigitalDisplayPages>                    RaceDefaultPage;                                          // 0x0738(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	class UCurveFloat*                                 DigitalDisplayOpacityMask;                                // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DigitalDisplayCloudMask;                                  // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DigitalDisplayCloudInfluenceMask;                         // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCarInfo                                    CarEntryInfo;                                             // 0x0760(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FDriverInfo                                 DriverInfo;                                               // 0x0800(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	uint16_t										   carIndex;
	uint16_t										   driverIndex;
	float                                              GearTimeToIgnoreNeutralBase;                              // 0x08D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NeutralGearText;                                          // 0x08D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               hasEnduranceAnimation;                                    // 0x08E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class UMaterialInstance*                           GhostCarMaterial;                                         // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          VirtualMirrorMaterial;                                    // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UProceduralMeshComponent*                    VirtualMirrorMesh;                                        // 0x0900(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCarAvatarRatingCalculator*                  RatingCalculator;                                         // 0x0908(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ExternalMeshComponent;                                    // 0x0910(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1568];                                    // 0x0918(0x1568) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarAvatar");
		return ptr;
	}


	void TeleportCar(class AAcPlayerStart* PlayerStart, bool resetCar);
	void StopSounds();
	void StartLineRecording();
	void ShowDriver();
	void SetTyreTemperature(unsigned char tyreIndex, int newTemperature);
	void SetForcedOnFlatPlane(bool Mode);
	void SetControllerType(EControllerType Type);
	void SetCamera(EMainCameraMode mainMode, int subMode);
	void SetAISteerSmoothing(bool Value);
	void ServerPostNetCarState(TArray<uint16_t> NewState);
	void ResumeSounds();
	void OnAIDataChanged();
	void NetCarStateReplicated();
	void LockCarAvatarForPitstop(bool Value, bool updateControls);
	bool IsABS_InAction();
	void HideDriver();
	struct FWingState GetWingState(int Index);
	struct FTransform GetWheelTransform(int Index);
	struct FTyreSuspState GetTyreSuspState(int Index);
	float GetTOE(int Index);
	struct FTransform GetSuspTransform(int Index);
	struct FVector GetSuspPos(int Index);
	float GetSteer();
	float GetSpeedMPH();
	float GetSpeedKMH();
	float GetRPMS();
	class UAcCarPitstopManager* GetPitstopManager();
	float GetOutsideBoundariesValue();
	float GetNormalizedSplinePosition();
	float GetMaxRPMS();
	struct FVector GetGForce();
	unsigned char GetGearAsIndex();
	struct FString GetGear();
	float GetGas();
	class UMeshComponent* GetExternalMeshComponent();
	struct FDriverInfo GetDriverInfo();
	struct FControlsStatus GetControlsStatus();
	EControllerType GetControllerType();
	float GetClutch();
	struct FCarInfo GetCarEntryInfo();
	float GetBrake();
	struct FAIState GetAIState();
	void CommitCarDataChanges();
	void BroadcastAnimation(ECarAnimation CarAnimation);
};


// Class AC2.CarAvatarRatingCalculator
// 0x0348 (0x0370 - 0x0028)
class UCarAvatarRatingCalculator : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCornerCompletedEvent;                                   // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x338];                                     // 0x0038(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarAvatarRatingCalculator");
		return ptr;
	}


	void OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference);
	void OnKsonLapCompletedFeedback(const struct FOnlineServicesLapPerformance& lapPerformance);
};


// Class AC2.TyreCompoundSet
// 0x0290 (0x02C0 - 0x0030)
class UTyreCompoundSet : public UDataAsset
{
public:
	struct FString                                     TyreCompoundName;                                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FTyreCompoundData                           Front;                                                    // 0x0040(0x0138) (Edit)
	struct FTyreCompoundData                           Rear;                                                     // 0x0178(0x0138) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TyreCompoundSet");
		return ptr;
	}

};


// Class AC2.AIDataAsset
// 0x0020 (0x0050 - 0x0030)
class UAIDataAsset : public UDataAsset
{
public:
	float                                              GearChangeDownPerc;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steerGain;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteerMinLookahead;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UndersteerHint;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TyresHint;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakeHint;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AeroHint;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GasHint;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.AIDataAsset");
		return ptr;
	}

};


// Class AC2.CarData
// 0x04E8 (0x0518 - 0x0030)
class UCarData : public UDataAsset
{
public:
	struct FString                                     ScreenName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              MassKG;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Inertia;                                                  // 0x0044(0x000C) (Edit, IsPlainOldData)
	float                                              MinimumHeight;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TopArea;                                                  // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSteerData                                  SteerData;                                                // 0x0058(0x0014) (Edit)
	struct FFuelData                                   FuelData;                                                 // 0x006C(0x001C) (Edit)
	struct FBrakesData                                 BrakesData;                                               // 0x0088(0x0090) (Edit)
	struct FEngineData                                 EngineData;                                               // 0x0118(0x00A0) (Edit)
	struct FDrivetrainData                             Drivetrain;                                               // 0x01B8(0x00A0) (Edit)
	struct FSuspData                                   Suspensions;                                              // 0x0258(0x0268) (Edit)
	struct FARBData                                    ARBFront;                                                 // 0x04C0(0x0004) (Edit)
	struct FARBData                                    ARBRear;                                                  // 0x04C4(0x0004) (Edit)
	struct FTractionControl                            TractionControl;                                          // 0x04C8(0x0020) (Edit, BlueprintVisible)
	struct FABSData                                    Abs;                                                      // 0x04E8(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0508(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarData");
		return ptr;
	}

};


// Class AC2.TrackGenome
// 0x0010 (0x0040 - 0x0030)
class UTrackGenome : public UDataAsset
{
public:
	TArray<struct FTrackGene>                          Genes;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackGenome");
		return ptr;
	}

};


// Class AC2.CarDriverSelectionPanel
// 0x0080 (0x0568 - 0x04E8)
class UCarDriverSelectionPanel : public UAcPanelBase
{
public:
	ESelectionPanelType                                PanelType;                                                // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class UWidgetSwitcher*                             ImageSwitcher;                                            // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnUp;                                                    // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnDown;                                                  // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PanelTitle1;                                              // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PanelTitle2;                                              // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PanelTitle3;                                              // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  PanelTitle4;                                              // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PanelImageOverlay;                                        // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgModel;                                                 // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgTeam;                                                  // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNumber;                                                // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgDriver;                                                // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNumber;                                                // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGridPanel*                                  TextGrid;                                                 // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0560(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarDriverSelectionPanel");
		return ptr;
	}


	void Forward();
	void Backward();
};


// Class AC2.CarInitializer
// 0x0000 (0x0028 - 0x0028)
class UCarInitializer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarInitializer");
		return ptr;
	}

};


// Class AC2.CarMapItem
// 0x0008 (0x0210 - 0x0208)
class UCarMapItem : public UUserWidget
{
public:
	class UImage*                                      CarImage;                                                 // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarMapItem");
		return ptr;
	}

};


// Class AC2.CarSelectionPage
// 0x02B0 (0x06E0 - 0x0430)
class UCarSelectionPage : public UAcPageBase
{
public:
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPlayingSequence;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FText                                       OfficialListFilterText;                                   // 0x0440(0x0018) (Edit, BlueprintVisible)
	struct FText                                       FullListFilterText;                                       // 0x0458(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SprintListFilterText;                                     // 0x0470(0x0018) (Edit, BlueprintVisible)
	struct FText                                       EnduranceListFilterText;                                  // 0x0488(0x0018) (Edit, BlueprintVisible)
	class UCarDriverSelectionPanel*                    Model;                                                    // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCarDriverSelectionPanel*                    Team;                                                     // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCarDriverSelectionPanel*                    Number;                                                   // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCarDriverSelectionPanel*                    Driver;                                                   // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtShowRoomCarInfo;                                       // 0x04C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtFilterBy;                                              // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x210];                                     // 0x04D0(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarSelectionPage");
		return ptr;
	}


	void StopSequence();
	void SetStartCamera();
	void PlaySequence();
	void FilterBy();
	void ExitShowroom();
};


// Class AC2.CarSelectionPanel
// 0x0000 (0x04E8 - 0x04E8)
class UCarSelectionPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CarSelectionPanel");
		return ptr;
	}

};


// Class AC2.CircuitSelectionColumnPanel
// 0x0098 (0x0580 - 0x04E8)
class UCircuitSelectionColumnPanel : public UAcPanelBase
{
public:
	TMap<struct FName, class UTexture2D*>              TrackNameImages;                                          // 0x04E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTextBlock*                                  txtCircuitName;                                           // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  CircuitCountry;                                           // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCircuitCountryFlag;                                    // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCircuit;                                               // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitLengthValue;                                    // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCornersValue;                                          // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarRecord;                                             // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRealRecordValue;                                       // 0x0570(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CircuitSelectionColumnPanel");
		return ptr;
	}

};


// Class AC2.ClientAvatar
// 0x00A0 (0x00C8 - 0x0028)
class UClientAvatar : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ClientAvatar");
		return ptr;
	}

};


// Class AC2.ControllerOptionsPage
// 0x02A0 (0x06D0 - 0x0430)
class UControllerOptionsPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0430(0x0090) MISSED OFFSET
	struct FText                                       KeyboardText;                                             // 0x04C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  PinkieIcon;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ExtendedIcon;                                             // 0x04E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PresetClass;                                              // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputPopupClass;                                          // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	class UMainSelectorItem*                           ControllerModeSelector;                                   // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainSelectorItem*                           ControlCategorySelector;                                  // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                DetectButton;                                             // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                PresetsButton;                                            // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                FFBButton;                                                // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                DeviceAdvancedButton;                                     // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  InputScrollBox;                                           // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  AdvancedScrollBox;                                        // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             Settings;                                                 // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ItemWidget;                                               // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      presetPopupClass;                                         // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	class UGenericSelectorItem*                        KeyboardMouseSteering;                                    // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardMouseAcceleratorBrake;                            // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardSteerSpeed;                                       // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardSteerOppositeDirectionFactor;                     // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardSteerGain;                                        // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardSteerResetFactor;                                 // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardlookAhead;                                        // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        KeyboardMouseSpeed;                                       // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadUseSteerWithRight;                                 // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadDeadZone;                                          // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadRumbleIntensity;                                   // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadSpeedSensitivity;                                  // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadSteerFilter;                                       // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadSteerGamma;                                        // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadSteerSpeed;                                        // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GamepadUseAutoSteer;                                      // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelForceFeedbackGain;                                   // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelSteerLock;                                           // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelDynamicDamping;                                      // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelRoadEffects;                                         // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelMinimumForceFeedback;                                // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        WheelBrakeGamma;                                          // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                GamePadAdvancedSettings;                                  // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                GamePadFFBSettings;                                       // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                SteerAdvancedSettings;                                    // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                KeyboardAdvancedSettings;                                 // 0x0628(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                SteerFFBSettings;                                         // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                KeyboardEmpty;                                            // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                DeviceList;                                               // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                PresetList;                                               // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                InputList;                                                // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                MainVerticalBox;                                          // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x70];                                      // 0x0660(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ControllerOptionsPage");
		return ptr;
	}


	void PresetsDialog();
	void ClearInput(class UGenericInputItem* Item);
	void AdvancedInput(class UGenericInputItem* Item);
};


// Class AC2.CornerInfoWidget
// 0x0068 (0x0358 - 0x02F0)
class UCornerInfoWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtTurn;                                                  // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSectionName;                                           // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBrakeHint;                                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBrakeHintDistance;                                     // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCornerHint;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0318(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.CornerInfoWidget");
		return ptr;
	}

};


// Class AC2.DownForceComponent
// 0x0080 (0x02C0 - 0x0240)
class UDownForceComponent : public USceneComponent
{
public:
	class UCurveFloat*                                 lutDownForceDeltaRideHeight;                              // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 lutDragRideHeight;                                        // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 lutDragDeltaRideHeight;                                   // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              yawGain;                                                  // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EAeroElement                                       AeroElement;                                              // 0x025C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LiftPerFrontAngle;                                        // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LiftPerRearAngle;                                         // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragPerFrontAngle;                                        // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragPerRearAngle;                                         // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              clGain;                                                   // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cdGain;                                                   // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              damageCD[0x5];                                            // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              damageCL[0x5];                                            // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<struct FDynamicDownForceControllerData>     DFControllerData;                                         // 0x02A8(0x0010) (Edit, ZeroConstructor)
	float                                              AIReferenceHeightMM;                                      // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AIReferenceDeltaHMM;                                      // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DownForceComponent");
		return ptr;
	}

};


// Class AC2.DownForceDebugHUD
// 0x0018 (0x0468 - 0x0450)
class ADownForceDebugHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0450(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DownForceDebugHUD");
		return ptr;
	}

};


// Class AC2.DriverAvatar
// 0x0010 (0x0750 - 0x0740)
class ADriverAvatar : public ACharacter
{
public:
	class USkeletalMesh*                               RaceMesh;                                                 // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               ShowroomMesh;                                             // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DriverAvatar");
		return ptr;
	}

};


// Class AC2.DriverProfileBarItem
// 0x0020 (0x0508 - 0x04E8)
class UDriverProfileBarItem : public UAcPanelBase
{
public:
	EGuiSubPages                                       SubPage;                                                  // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FText                                       MainTitle;                                                // 0x04F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DriverProfileBarItem");
		return ptr;
	}

};


// Class AC2.DriverProfilePage
// 0x0010 (0x0440 - 0x0430)
class UDriverProfilePage : public UAcPageBase
{
public:
	float                                              Divide;                                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiply;                                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  txtDriverName;                                            // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DriverProfilePage");
		return ptr;
	}

};


// Class AC2.DriverProfileRatingPage
// 0x01B8 (0x05E8 - 0x0430)
class UDriverProfileRatingPage : public UAcPageBase
{
public:
	class UCanvasPanel*                                CanvasPanel_WaitingForData;                               // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanel_NotConnected;                                 // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanel_Rating;                                       // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanel_RatingDetail;                                 // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Total;                                          // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Safety;                                         // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_TrackCompetence;                                // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Consistency;                                    // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_CarControl;                                     // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Hotlap;                                         // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Racecraft;                                      // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingSelectionPanel*                       wdg_Entry_Competition;                                    // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingFullName;                                        // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingValue;                                           // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingShortCaption;                                    // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtInfoTitle;                                             // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtInfo;                                                  // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingTCDetail*                             WDG_RatingDetailTC;                                       // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingTODetail*                             WDG_RatingDetailTO;                                       // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                testerCanvasPanel;                                        // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x118];                                     // 0x04D0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.DriverProfileRatingPage");
		return ptr;
	}


	void SetRatingCap(const struct FString& desiredCap);
	void ResetRating();
	void OnDriverSummary(const struct FOnlineServicesDriverSummary& summary);
};


// Class AC2.E3HelpTextWidget
// 0x0028 (0x0318 - 0x02F0)
class UE3HelpTextWidget : public UAcRaceWidgetBase
{
public:
	class UBorder*                                     borderBig;                                                // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBig;                                                   // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSmall;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.E3HelpTextWidget");
		return ptr;
	}

};


// Class AC2.ElectronicsWidget
// 0x0090 (0x0380 - 0x02F0)
class UElectronicsWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtABSCaption;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtABSLevel;                                              // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtABSMaxLevel;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderABS;                                                // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTCCaption;                                             // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTCLevel;                                               // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTCMaxLevel;                                            // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderTC;                                                 // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0330(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ElectronicsWidget");
		return ptr;
	}

};


// Class AC2.ExpoIntroPage
// 0x0020 (0x0450 - 0x0430)
class UExpoIntroPage : public UAcPageBase
{
public:
	class UButton*                                     btnMainMenu;                                              // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnRestartSession;                                        // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ExpoIntroPage");
		return ptr;
	}


	void OnRestartSessionClicked();
	void OnMainMenuClicked();
};


// Class AC2.ExpoModeManager
// 0x0000 (0x0028 - 0x0028)
class UExpoModeManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ExpoModeManager");
		return ptr;
	}

};


// Class AC2.ExpoOutroPage
// 0x0018 (0x0448 - 0x0430)
class UExpoOutroPage : public UAcPageBase
{
public:
	class UClass*                                      ExpoModeOutroPage;                                        // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0438(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ExpoOutroPage");
		return ptr;
	}


	void DoTransitionToIntroPage();
};


// Class AC2.Fanatec
// 0x0060 (0x0088 - 0x0028)
class UFanatec : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.Fanatec");
		return ptr;
	}

};


// Class AC2.FinalHotLapResultItems
// 0x00C0 (0x02C8 - 0x0208)
class UFinalHotLapResultItems : public UUserWidget
{
public:
	EKunosDriverCategory                               KunosCategories;                                          // 0x0208(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class UImage*                                      imgPos;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector1;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector2;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector3;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBody;                                                  // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgGap;                                                   // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCategory;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtName;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector1;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector2;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector3;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCategory;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsGap;                                                   // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsCategory;                                              // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0298(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FinalHotLapResultItems");
		return ptr;
	}

};


// Class AC2.FireWorksAudio
// 0x0030 (0x0358 - 0x0328)
class AFireWorksAudio : public AActor
{
public:
	class UFMODAudioComponent*                         fireWorksComponent;                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0330(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FireWorksAudio");
		return ptr;
	}


	void Explosion(TEnumAsByte<EFireWorkType> Type);
};


// Class AC2.FirstLaunchControllerPage
// 0x0000 (0x0430 - 0x0430)
class UFirstLaunchControllerPage : public UAcPageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FirstLaunchControllerPage");
		return ptr;
	}

};


// Class AC2.FooterButton
// 0x0018 (0x0220 - 0x0208)
class UFooterButton : public UUserWidget
{
public:
	class UButton*                                     Button;                                                   // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EControllerActionType                              UIActionType;                                             // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0211(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FooterButton");
		return ptr;
	}

};


// Class AC2.FooterWidget
// 0x0038 (0x0240 - 0x0208)
class UFooterWidget : public UUserWidget
{
public:
	class UNamedSlot*                                  Slot1;                                                    // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  Slot2;                                                    // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  Slot3;                                                    // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  Slot4;                                                    // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  Slot5;                                                    // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  Slot6;                                                    // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBlackBackground;                                       // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FooterWidget");
		return ptr;
	}

};


// Class AC2.FovPage
// 0x00D0 (0x0500 - 0x0430)
class UFovPage : public UAcPageBase
{
public:
	int                                                FovUpperLimit;                                            // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FovLowerLimit;                                            // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeightUpperLimit;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeightLowerLimit;                                         // 0x043C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DistanceUpperLimit;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DistanceLowerLimit;                                       // 0x0444(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PitchUpperLimit;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PitchLowerLimit;                                          // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAcPanelBase*                                btnSave;                                                  // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnReset;                                                 // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnCancel;                                                // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnQuit;                                                  // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Height;                                                   // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Distance;                                                 // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        FOV;                                                      // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Pitch;                                                    // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0490(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.FovPage");
		return ptr;
	}

};


// Class AC2.GalleryItemPanel
// 0x0018 (0x0500 - 0x04E8)
class UGalleryItemPanel : public UAcPanelBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	class UTextBlock*                                  txtName;                                                  // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GalleryItemPanel");
		return ptr;
	}

};


// Class AC2.GalleryPage
// 0x0038 (0x0468 - 0x0430)
class UGalleryPage : public UAcPageBase
{
public:
	class UClass*                                      GalleryItemClass;                                         // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  SBox;                                                     // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                VBox;                                                     // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0448(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GalleryPage");
		return ptr;
	}

};


// Class AC2.GameIntroPage
// 0x00A0 (0x04D0 - 0x0430)
class UGameIntroPage : public UAcPageBase
{
public:
	float                                              RegoularFadeSpeed;                                        // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FastFadeSpeed;                                            // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PagesTimeOnScreen;                                        // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UTexture2D*                                  MainBackground;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BlackBackground;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EABackground;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UImage*                                      imgBackground;                                            // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgKunos;                                                 // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      img505;                                                   // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             IntroPageSwitch;                                          // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnBackEA;                                                // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnClickToContinue;                                       // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                GoToMainPanel;                                            // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                ShowEarlyPanel;                                           // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                GoBackPanel;                                              // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x04A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GameIntroPage");
		return ptr;
	}


	void SwitchIndexChange();
	void OnVideoEnd(float Length);
	void FadeIn();
	void BP_StopVideo();
	void BP_PlayVideo(bool IsUE4Video);
};


// Class AC2.GameModeColumnPanel
// 0x0210 (0x06F8 - 0x04E8)
class UGameModeColumnPanel : public UAcPanelBase
{
public:
	struct FText                                       DayNightTime;                                             // 0x04E8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       StintLength;                                              // 0x0500(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RaceLength;                                               // 0x0518(0x0018) (Edit, BlueprintVisible)
	struct FText                                       StartingPosition;                                         // 0x0530(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NOpponents;                                               // 0x0548(0x0018) (Edit, BlueprintVisible)
	struct FText                                       OpponentSkill;                                            // 0x0560(0x0018) (Edit, BlueprintVisible)
	struct FText                                       OpponentAggro;                                            // 0x0578(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TimeMultiplier;                                           // 0x0590(0x0018) (Edit, BlueprintVisible)
	struct FText                                       GhostCar;                                                 // 0x05A8(0x0018) (Edit, BlueprintVisible)
	TArray<struct FText>                               DisabledEnabled;                                          // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EGuiGameModes, struct FText>                  GameModeTitles;                                           // 0x05D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<EGuiGameModes, class UTexture2D*>             GameModeImages;                                           // 0x0620(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTextBlock*                                  txtEventType;                                             // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement01Value;                                        // 0x0678(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement02Value;                                        // 0x0680(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement03Value;                                        // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement04Value;                                        // 0x0690(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement05Value;                                        // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement06Value;                                        // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement07Value;                                        // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement01;                                             // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement02;                                             // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement03;                                             // 0x06C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement04;                                             // 0x06C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement05;                                             // 0x06D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement06;                                             // 0x06D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtElement07;                                             // 0x06E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgEvent;                                                 // 0x06E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GameModeColumnPanel");
		return ptr;
	}

};


// Class AC2.GameModePage
// 0x0100 (0x0530 - 0x0430)
class UGameModePage : public UAcPageBase
{
public:
	class UHelpInMenu*                                 WDG_HelpInMenu;                                           // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        TimeOfDay_Quick;                                          // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Race_Quick;                                               // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        StartingPosition_Quick;                                   // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsNum_Quick;                                       // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsSkill_Quick;                                     // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsAggression_Quick;                                // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Practice_1H;                                              // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Qualifying_1H;                                            // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Race_1H;                                                  // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        StartingPosition_1H;                                      // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsNum_1H;                                          // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsSkill_1H;                                        // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsAggression_1H;                                   // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DayNight_Pratice;                                         // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        TimeMultiplier_Practice;                                  // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsNum_Practice;                                    // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsSkill_Practice;                                  // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        OpponentsAggression_Practice;                             // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DayNight_Hotlap;                                          // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GhostCar_Hotlap;                                          // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Practice_Hotstint;                                        // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DayNight_Hotstint;                                        // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DayNight_HotlapSuperpole;                                 // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCancel;                                                // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0500(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GameModePage");
		return ptr;
	}

};


// Class AC2.GameModePanel
// 0x0000 (0x04E8 - 0x04E8)
class UGameModePanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GameModePanel");
		return ptr;
	}

};


// Class AC2.GamePlatformServices
// 0x00E0 (0x0108 - 0x0028)
class UGamePlatformServices : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GamePlatformServices");
		return ptr;
	}

};


// Class AC2.GeneralOptionsPage
// 0x0038 (0x0468 - 0x0430)
class UGeneralOptionsPage : public UAcPageBase
{
public:
	class UGenericSelectorItem*                        LanguageItem;                                             // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ReplayMaxLengthItem;                                      // 0x0438(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  Scroll;                                                   // 0x0440(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0448(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GeneralOptionsPage");
		return ptr;
	}

};


// Class AC2.GenericBarItem
// 0x0068 (0x0550 - 0x04E8)
class UGenericBarItem : public UAcPanelBase
{
public:
	class UFont*                                       CurrentFont;                                              // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFontRegoular;                                           // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	struct FText                                       MainTitle;                                                // 0x04F8(0x0018) (Edit)
	struct FText                                       SecondaryTitle;                                           // 0x0510(0x0018) (Edit)
	struct FText                                       ThirdTitle;                                               // 0x0528(0x0018) (Edit)
	class UTextBlock*                                  txtTitle;                                                 // 0x0540(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GenericBarItem");
		return ptr;
	}


	void BP_UpdateActivity(bool active);
};


// Class AC2.GenericInputItem
// 0x0068 (0x0550 - 0x04E8)
class UGenericInputItem : public UAcPanelBase
{
public:
	class UTextBlock*                                  Title;                                                    // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class UImage*                                      ControllerIcon;                                           // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      PinkieIcon;                                               // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      OptionIcon;                                               // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      NormalImageBox;                                           // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HoverImageBox;                                            // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                HiddenPanel;                                              // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  DeviceName;                                               // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               clearButton;                                              // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               advancedButton;                                           // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0540(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GenericInputItem");
		return ptr;
	}


	void GoCancel();
	void GoAdvanced();
};


// Class AC2.GenericSelectorItem
// 0x0148 (0x0630 - 0x04E8)
class UGenericSelectorItem : public UAcPanelBase
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x04E8(0x0001) MISSED OFFSET
	bool                                               isFixed;                                                  // 0x04E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04EA(0x0006) MISSED OFFSET
	struct FString                                     TextPrefix;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TextPostfix;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      Decimal;                                                  // 0x0510(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               rightAsForward;                                           // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               leftAsBackward;                                           // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGuiGenericSelectorType                            SelectorType;                                             // 0x0513(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGuiColors                                         OverColor;                                                // 0x0514(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGuiColors                                         LeaveColor;                                               // 0x0515(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGuiColors                                         OptionColor;                                              // 0x0516(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0517(0x0001) MISSED OFFSET
	int                                                MinRange;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxRange;                                                 // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FText                                       FixedItemText;                                            // 0x0528(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               EnumDisplayText;                                          // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        CustomValues;                                             // 0x0550(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TimeToFirstClick;                                         // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSecondClick;                                        // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepFirstClick;                                       // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepSecondClick;                                      // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0570(0x0050) MISSED OFFSET
	class UNamedSlot*                                  TitleSlot;                                                // 0x05C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtOption;                                                // 0x05C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  rightArrow;                                               // 0x05D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  leftArrow;                                                // 0x05D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      NormalImageBox;                                           // 0x05E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HoverImageBox;                                            // 0x05E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnLeft;                                                  // 0x05F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnRight;                                                 // 0x05F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                barOption;                                                // 0x0600(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USlider*                                     sliderBar;                                                // 0x0608(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0610(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GenericSelectorItem");
		return ptr;
	}


	void SliderValueChanged(float Value);
	void ReleasedRight();
	void ReleasedLeft();
	void PressedRight();
	void PressedLeft();
};


// Class AC2.GhostCarManager
// 0x1CB8 (0x1FE0 - 0x0328)
class AGhostCarManager : public AActor
{
public:
	float                                              MinDistance;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOpacity;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartingFadeExtension;                                    // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // 0x0338(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RedVariation;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GreenVariation;                                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C90];                                    // 0x0350(0x1C90) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GhostCarManager");
		return ptr;
	}


	void OnStartingLap(double Timestamp);
};


// Class AC2.GuiUtilities
// 0x0000 (0x0028 - 0x0028)
class UGuiUtilities : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.GuiUtilities");
		return ptr;
	}


	struct FString STATIC_PadNumberWithZeroes(int InputNumber, int PaddingSize);
	struct FVector2D STATIC_GetGameViewportSize();
	struct FVector2D STATIC_GetGameResolution();
	TArray<struct FLapDataPreFormatted> STATIC_FormatDatedLapTimeTable(TArray<struct FLapDataDated> InputTable);
	struct FString STATIC_ConvertInt32ToFormattedTime(int InputTime, bool HideMillisecs);
};


// Class AC2.HeaderWidget
// 0x0000 (0x0208 - 0x0208)
class UHeaderWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HeaderWidget");
		return ptr;
	}

};


// Class AC2.HelpInMenu
// 0x0088 (0x0290 - 0x0208)
class UHelpInMenu : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	class UClass*                                      BodyTextWidgetClass;                                      // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TitleWidgetClass;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgHotlapStandingSpacerItemClass;                         // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       HelpTitle;                                                // 0x0228(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               DefaultTexts;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMultipleHelpText>                   MultipleDefaultTexts;                                     // 0x0250(0x0010) (Edit, ZeroConstructor)
	bool                                               isFixed;                                                  // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	class UTextBlock*                                  txtHelpTitle;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollHelpText;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                vboxHelpTitle;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                vboxHelpText;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HelpInMenu");
		return ptr;
	}


	void BP_Warning();
	void BP_PlayInitAnimation();
};


// Class AC2.HotlapLeaderboards
// 0x0168 (0x0598 - 0x0430)
class UHotlapLeaderboards : public UAcPageBase
{
public:
	float                                              SecondsBeforeShowsUp;                                     // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBetweenTables;                                       // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0438(0x0020) MISSED OFFSET
	class UClass*                                      WdgPausePageClass;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgStandingItemClass;                                     // 0x0460(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgRaceStandingItemClass;                                 // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgFinalHotlapStandingItemClass;                          // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgHotlapStandingSpacerItemClass;                         // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFooterWidget*                               Footer;                                                   // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     ClickScreen;                                              // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuit;                                               // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSession;                                               // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNoHotlap;                                              // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             BoardSwitcher;                                            // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                boxLapList;                                               // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                boxMyRank;                                                // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                boxWorldTop10;                                            // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgFlag;                                                  // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsHotlapTopList;                                         // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainSelectorItem*                           MainSelector;                                             // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcSessionInfoContainer*                     SessionInfoContainer;                                     // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x04E8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HotlapLeaderboards");
		return ptr;
	}


	void UpdateConnectionState(EOnlineServicesConnectionState State);
	void OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe);
};


// Class AC2.HotLapResultItems
// 0x0078 (0x0280 - 0x0208)
class UHotLapResultItems : public UUserWidget
{
public:
	class UImage*                                      imgLapNum;                                                // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgValidity;                                              // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBody;                                                  // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgGap;                                                   // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLapNum;                                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtValidity;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             InfoSwitcher;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0250(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HotLapResultItems");
		return ptr;
	}

};


// Class AC2.HotlapStandingItems
// 0x0108 (0x0310 - 0x0208)
class UHotlapStandingItems : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0208(0x0090) MISSED OFFSET
	EKunosDriverCategory                               KunosCategories;                                          // 0x0298(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UImage*                                      imgPositionPlate;                                         // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNumberPlate;                                           // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBody;                                                  // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCategory;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgGap;                                                   // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNames;                                                 // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaps;                                                  // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCategory;                                              // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtExtraInfo;                                             // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtExtraInfo2;                                            // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsCategory;                                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HotlapStandingItems");
		return ptr;
	}

};


// Class AC2.HotlapStandingWidget
// 0x00C0 (0x03B0 - 0x02F0)
class UHotlapStandingWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02F0(0x0050) MISSED OFFSET
	float                                              FirstFlipTimer;                                           // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegoularFlipInterval;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemsOnSingleList;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<class UHotlapStandingItems*>                StandingSafe;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UClass*                                      WdgStandingItemClass;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                StandingList;                                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingPosition;                                      // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingTotCars;                                       // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0380(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HotlapStandingWidget");
		return ptr;
	}

};


// Class AC2.HttpStatServices
// 0x0058 (0x0080 - 0x0028)
class UHttpStatServices : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnNewLapRecord;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestSuccess;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetWRTable;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HttpStatServices");
		return ptr;
	}


	void GetWRTable(const struct FLapDataBase& requestData);
};


// Class AC2.HttpUserWidget
// 0x0008 (0x0210 - 0x0208)
class UHttpUserWidget : public UUserWidget
{
public:
	class UHttpStatServices*                           HttpManager;                                              // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HttpUserWidget");
		return ptr;
	}

};


// Class AC2.HUDOptionsPage
// 0x0068 (0x0498 - 0x0430)
class UHUDOptionsPage : public UAcPageBase
{
public:
	class UGenericSelectorItem*                        CircuitMap;                                               // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        GearSpeed;                                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        UseMPH;                                                   // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        TyreApp;                                                  // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        VirtualMirror;                                            // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ProximityIndicators;                                      // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        RaceStandings;                                            // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        HotlapStandings;                                          // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        InfoSession;                                              // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        RatingPractice;                                           // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0480(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.HUDOptionsPage");
		return ptr;
	}

};


// Class AC2.InputPopup
// 0x01B0 (0x05E0 - 0x0430)
class UInputPopup : public UAcPageBase
{
public:
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             MainSwitcher;                                             // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               Confirm;                                                  // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               Cancel;                                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     InputCancel;                                              // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ExtendedItem;                                             // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ExtendedTimeItem;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        PinkieItem;                                               // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        InvertedAxis;                                             // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DeadZoneLeftItem;                                         // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        DeadZoneRightItem;                                        // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ScaleItem;                                                // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                ProgressInput;                                            // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                DeadZoneLeftProgress;                                     // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                DeadZoneRightProgress;                                    // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x138];                                     // 0x04A8(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.InputPopup");
		return ptr;
	}


	void UnlockNavigation();
	void OnButtonReleaseDetailedEvent(unsigned char _deviceIndex, int _buttonIndex, int _powIndex, int _powValue);
	void OnAxisPressDetailedEvent(unsigned char _deviceIndex, int _axisIndex, float _value);
	void CancelInputForward();
	void BP_InputReceived();
};


// Class AC2.KeyBindingUtil
// 0x0000 (0x0028 - 0x0028)
class UKeyBindingUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.KeyBindingUtil");
		return ptr;
	}


	bool STATIC_RemoveAxisBinding(const struct FInputAxis& BindingToRemove);
	bool STATIC_RemoveActionBinding(const struct FInputAction& BindingToRemove);
	bool STATIC_ReBindAxisKey(const struct FInputAxis& CurrentBinding, const struct FInputAxis& NewBinding);
	bool STATIC_ReBindActionKey(const struct FInputAction& CurrentBinding, const struct FInputAction& NewBinding);
	struct FInputAxis STATIC_GetInputAxisFromMouseButtonEvent(const struct FPointerEvent& MouseEvent);
	struct FInputAxis STATIC_GetInputAxisFromMouseAxisEvent(const struct FPointerEvent& MouseEvent);
	struct FInputAxis STATIC_GetInputAxisFromKeyEvent(const struct FKeyEvent& KeyEvent);
	struct FInputAction STATIC_GetInputActionFromMouseButtonEvent(const struct FPointerEvent& MouseEvent);
	struct FInputAction STATIC_GetInputActionFromKeyEvent(const struct FKeyEvent& KeyEvent);
	void STATIC_GetAllBindedInputAxis(TArray<struct FInputAxis>* InputAxis);
	void STATIC_GetAllBindedInputActions(TArray<struct FInputAction>* Actions);
	bool STATIC_AddAxisBinding(const struct FInputAxis& NewBinding, const struct FInputAxis& CurrentBinding);
	bool STATIC_AddActionBinding(const struct FInputAction& NewBinding, const struct FInputAction& CurrentBinding);
};


// Class AC2.KSAudioComponent
// 0x0030 (0x0440 - 0x0410)
class UKSAudioComponent : public UFMODAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0410(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.KSAudioComponent");
		return ptr;
	}

};


// Class AC2.KSONDataWidget
// 0x0028 (0x0318 - 0x02F0)
class UKSONDataWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtCurrentSlip;                                           // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLapValues;                                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBackendLapValues;                                      // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.KSONDataWidget");
		return ptr;
	}

};


// Class AC2.LanguageSelectionPage
// 0x0020 (0x0450 - 0x0430)
class ULanguageSelectionPage : public UAcPageBase
{
public:
	class UAcPanelBase*                                EnglishPanel;                                             // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                ItalianPanel;                                             // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.LanguageSelectionPage");
		return ptr;
	}

};


// Class AC2.LaptimeInfo01Widget
// 0x00A8 (0x0398 - 0x02F0)
class ULaptimeInfo01Widget : public UAcRaceWidgetBase
{
public:
	struct FText                                       EmptyText;                                                // 0x02F0(0x0018)
	class UTextBlock*                                  txtCurrentLap;                                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentSplit1;                                         // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentSplit2;                                         // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentSplit3;                                         // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBestLap;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLastLap;                                               // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentLapCount;                                       // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRemainingTimeBig;                                      // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRemainingTimeSmaller;                                  // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentDelta;                                          // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCurrentDelta;                                          // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtHourOfDay;                                             // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtMinutesOfDay;                                          // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBestOrStintLabel;                                      // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanel_Penalty;                                      // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPenalty;                                               // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.LaptimeInfo01Widget");
		return ptr;
	}

};


// Class AC2.LeaderboardWidget
// 0x0100 (0x03F0 - 0x02F0)
class ULeaderboardWidget : public UAcRaceWidgetBase
{
public:
	float                                              RegoularFlipInterval;                                     // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorSpecialEventForeground;                              // 0x02F4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorSpecialEventBackground;                              // 0x0304(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorSpecialEventNumberForeground;                        // 0x0314(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorSpecialEventNumberBackground;                        // 0x0324(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorGlobalLeaderboardForeground;                         // 0x0334(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorGlobalLeaderboardBackground;                         // 0x0344(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorGlobalLeaderboardWetnessForeground;                  // 0x0354(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ColorGlobalLeaderboardWetnessBackground;                  // 0x0364(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UClass*                                      WdgHotlapStandingItemClass;                               // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgHotlapStandingSpacerItemClass;                         // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UHotlapStandingItems*>                StupidChildArray;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UVerticalBox*                                StandingList;                                             // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                canvasLeaderboardHeader;                                  // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLeaderboardName;                                       // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventId;                                               // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWetnessIcon;                                           // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBackgroundEventIdOrWetness;                            // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBackgroundRight;                                       // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBackgroundCenter;                                      // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBackgroundLeft;                                        // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.LeaderboardWidget");
		return ptr;
	}

};


// Class AC2.ListSelectionPopup
// 0x0060 (0x0490 - 0x0430)
class UListSelectionPopup : public UAcPageBase
{
public:
	class UTextBlock*                                  TitleText;                                                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  MessageText;                                              // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                PanelItem1;                                               // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                PanelItem2;                                               // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                PanelItem3;                                               // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text1;                                                    // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text2;                                                    // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Text3;                                                    // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EListSelectionPopupType                            PopupType;                                                // 0x0470(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0471(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ListSelectionPopup");
		return ptr;
	}


	void BP_InitPopup();
};


// Class AC2.LoadingSessionsPage
// 0x02D8 (0x04E0 - 0x0208)
class ULoadingSessionsPage : public UUserWidget
{
public:
	struct FLoadingInfo                                LoadingInfo;                                              // 0x0208(0x0148) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       TrackName;                                                // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  txtCircuitName;                                           // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTeamName;                                              // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSessionType;                                           // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtDriverName;                                            // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtScrollingInfo;                                         // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              ScrollingBox;                                             // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtOnlineLapRecord;                                       // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSpaMap;                                                // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgMonzaMap;                                              // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgMisanoMap;                                             // 0x03A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBrandsMap;                                             // 0x03A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPaulRicardMap;                                         // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNurburgringMap;                                        // 0x03B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     StartTimeBorder;                                          // 0x03C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     OpponentsBorder;                                          // 0x03C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     MeteoBorder;                                              // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     RaceLengthBorder;                                         // 0x03D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                DamageCanvas;                                             // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                TyreFuelWearCanvas;                                       // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                OpponentsCanvas;                                          // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                RealismCanvas;                                            // 0x03F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<EGuiGameModes, struct FText>                  InfoLines;                                                // 0x0400(0x0050) (Edit, ZeroConstructor)
	TMap<EGuiGameModes, struct FText>                  GameModeText;                                             // 0x0450(0x0050) (Edit, ZeroConstructor)
	bool                                               IsRainyEvent;                                             // 0x04A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	TArray<class UTexture2D*>                          LoadingImages;                                            // 0x04A8(0x0010) (BlueprintVisible, ZeroConstructor)
	class UTextBlock*                                  txtLoading;                                               // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x04C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.LoadingSessionsPage");
		return ptr;
	}


	void UpdateLoadingInfo();
};


// Class AC2.MainCarHUD
// 0x0150 (0x0568 - 0x0418)
class AMainCarHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	class AAcChildHUD*                                 CurrentChildHUD;                                          // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x140];                                     // 0x0428(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MainCarHUD");
		return ptr;
	}


	void OnSpotterAudioComStarted(const struct FAudioCommsData& audioEventdata, int audioEventCounter, float payload);
	void OnSpotterAudioComEnded(int audioEventCounter);
	void OnRatingCornerSectionCompleted(const struct FLapCarRating& currentLap, const struct FCornerSectionCarRating& sectionCompleted);
	void OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference);
	void OnKSONLeaderboardData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass);
	void OnKSONConnectionStateChanged(EOnlineServicesConnectionState ConnectionState);
	void OnKsonAchievementEarned(int achievementId);
	void CycleNextVirtualDesktop(class APlayerController* Controller);
};


// Class AC2.MainCarHUDWidgetHost
// 0x0020 (0x0228 - 0x0208)
class UMainCarHUDWidgetHost : public UUserWidget
{
public:
	class UCanvasPanel*                                rootPanel;                                                // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderRootVisualHelper;                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MainCarHUDWidgetHost");
		return ptr;
	}


	void OnOptionsUpdated(const struct FUserOptions& newOptions);
	void OnAddItem(class UAcRaceWidgetBase* Widget, int row, int column, int rowSpan, int columnSpan, bool scaleToFitX, TEnumAsByte<EHorizontalAlignment> horizontalAlignment, TEnumAsByte<EVerticalAlignment> verticalAlignment);
};


// Class AC2.MainPage
// 0x0110 (0x0540 - 0x0430)
class UMainPage : public UAcPageBase
{
public:
	struct FText                                       QuitPopUpTitle;                                           // 0x0430(0x0018) (Edit, BlueprintVisible)
	struct FText                                       QuitPopUpText;                                            // 0x0448(0x0018) (Edit, BlueprintVisible)
	TMap<EGuiGameModes, struct FGuiRaceEventData>      gameModeDefaults;                                         // 0x0460(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EGuiGameModes, struct FText>                  GameModeTitles;                                           // 0x04B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      YesNoPopupClass;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	class UTextBlock*                                  txtTrackName;                                             // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSubTitle;                                              // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtInfoLine;                                              // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtProfileDriverName;                                     // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MainPage");
		return ptr;
	}


	void QuitPopup();
	void OnMPServerTimeout();
	void OnMPServerReceived(TArray<struct FOnlineServicesMPServerInfo> sortedServerList);
};


// Class AC2.MainSelectorItem
// 0x00A8 (0x0590 - 0x04E8)
class UMainSelectorItem : public UAcPanelBase
{
public:
	TArray<struct FText>                               EnumDisplayText;                                          // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        CustomValues;                                             // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UButton*                                     btnLeft;                                                  // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnRight;                                                 // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                panel;                                                    // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGridPanel*                                  Grid;                                                     // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtOption;                                                // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtOptionLeft;                                            // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtOptionRight;                                           // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  rightArrow;                                               // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  leftArrow;                                                // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Background;                                               // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EGuiMainSelectorType                               SelectorType;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               usePreviewText;                                           // 0x0559(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x055A(0x0002) MISSED OFFSET
	int                                                MinRange;                                                 // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxRange;                                                 // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeToFirstClick;                                         // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSecondClick;                                        // 0x056C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepFirstClick;                                       // 0x0570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeStepSecondClick;                                      // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0578(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MainSelectorItem");
		return ptr;
	}


	void ReleasedRight();
	void ReleasedLeft();
	void PressedRight();
	void PressedLeft();
};


// Class AC2.MapWidget
// 0x0098 (0x0388 - 0x02F0)
class UMapWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET
	TMap<int, class UCarMapItem*>                      CarMapItems;                                              // 0x0308(0x0050) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UClass*                                      WdgCarMapItemClass;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MapPanel;                                                 // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      MapImage;                                                 // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  MapMaterials;                                             // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    mapMaterialInstance;                                      // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0380(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MapWidget");
		return ptr;
	}

};


// Class AC2.MenuController
// 0x0028 (0x06A0 - 0x0678)
class AMenuController : public APlayerController
{
public:
	class UClass*                                      BlackCurtainClass;                                        // 0x0678(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MainPageClass;                                            // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      IntroPageClass;                                           // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FirstLaunchClass;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0698(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MenuController");
		return ptr;
	}

};


// Class AC2.MenuManager
// 0x0088 (0x00B0 - 0x0028)
class UMenuManager : public UObject
{
public:
	TArray<class UAcPageBase*>                         Pages;                                                    // 0x0028(0x0010) (ExportObject, ZeroConstructor)
	class UAcMenuState*                                MenuState;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackPage*                                  BlackCurtain;                                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UAcMenuData*                                 MenuData;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MenuManager");
		return ptr;
	}

};


// Class AC2.MeteoGenericPanel
// 0x0040 (0x0528 - 0x04E8)
class UMeteoGenericPanel : public UAcPanelBase
{
public:
	struct FText                                       MainTitle;                                                // 0x04E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Icon;                                                     // 0x0500(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTextBlock*                                  txtMainTitle;                                             // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtIcon;                                                  // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MeteoGenericPanel");
		return ptr;
	}

};


// Class AC2.MeteoPage
// 0x0040 (0x0470 - 0x0430)
class UMeteoPage : public UAcPageBase
{
public:
	class UMeteoGenericPanel*                          btnSunny;                                                 // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnCloudy;                                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnLightRain;                                             // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnMediumRain;                                            // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnHeavyRain;                                             // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnStorm;                                                 // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMeteoGenericPanel*                          btnDynamic;                                               // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MeteoPage");
		return ptr;
	}

};


// Class AC2.MeteoPanel
// 0x0000 (0x04E8 - 0x04E8)
class UMeteoPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MeteoPanel");
		return ptr;
	}

};


// Class AC2.MultiplayerPanel
// 0x0008 (0x04F0 - 0x04E8)
class UMultiplayerPanel : public UAcPanelBase
{
public:
	class UBorder*                                     borderInstantJoin;                                        // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.MultiplayerPanel");
		return ptr;
	}


	void SetInstantJoinInfoVisible(bool desiredVisibility);
};


// Class AC2.NetController
// 0x0018 (0x0450 - 0x0438)
class ANetController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0438(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.NetController");
		return ptr;
	}

};


// Class AC2.RaceNotificationBaseWidget
// 0x0058 (0x0260 - 0x0208)
class URaceNotificationBaseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0208(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceNotificationBaseWidget");
		return ptr;
	}

};


// Class AC2.NotificationAchievementWidget
// 0x0010 (0x0270 - 0x0260)
class UNotificationAchievementWidget : public URaceNotificationBaseWidget
{
public:
	class UTextBlock*                                  txtTitle;                                                 // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtMessage;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.NotificationAchievementWidget");
		return ptr;
	}

};


// Class AC2.NotificationErrorWidget
// 0x0018 (0x0278 - 0x0260)
class UNotificationErrorWidget : public URaceNotificationBaseWidget
{
public:
	class UTextBlock*                                  txtMessage;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.NotificationErrorWidget");
		return ptr;
	}

};


// Class AC2.NotificationFastestLapWidget
// 0x0020 (0x0280 - 0x0260)
class UNotificationFastestLapWidget : public URaceNotificationBaseWidget
{
public:
	class UTextBlock*                                  txtLaptime;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtDriverName;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtBestLapTypeCaption;                                    // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.NotificationFastestLapWidget");
		return ptr;
	}

};


// Class AC2.NotificationRadioEventWidget
// 0x0018 (0x0278 - 0x0260)
class UNotificationRadioEventWidget : public URaceNotificationBaseWidget
{
public:
	class UTextBlock*                                  txtMessage;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEvent;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.NotificationRadioEventWidget");
		return ptr;
	}

};


// Class AC2.OnlineServices
// 0x02F8 (0x0320 - 0x0028)
class UOnlineServices : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBackendUpdateHotlapRank;                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBackendLapPerformanceReport;                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBackendConnectionState;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverSummary;                                          // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSteamAchievement;                                       // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRatingDeltaReport;                                      // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerListReceived;                                     // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EOnlineServicesConnectionState                     ConnectionState;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FOnlineServicesCarStates                    DebugCarState;                                            // 0x00A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FDateTime                                   lastTcpMessageSent;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               expectingTcpMessage;                                      // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x267];                                     // 0x00B9(0x0267) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.OnlineServices");
		return ptr;
	}


	void UpdateDriverAccount(const struct FGamePlatformUserAccountData& account);
	void RequestMPServerList(const struct FOnlineServicesRequestMPServerListOptions& requestOptions);
	int RequestHotlapData(const struct FString& TrackName, int Take, int Skip, int eventId, float minWetness, bool includeDriver, bool useCurrentCarModel, ECarModelType CarModel);
	void RequestDriverSummary();
	void RequestDriverAccountData();
	struct FFakeSteamAchievement GetSteamAchievement(int ID);
};


// Class AC2.OnlineServicesDebugHUD
// 0x00E8 (0x0538 - 0x0450)
class AOnlineServicesDebugHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0450(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.OnlineServicesDebugHUD");
		return ptr;
	}

};


// Class AC2.OpponentsPanel
// 0x0000 (0x04E8 - 0x04E8)
class UOpponentsPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.OpponentsPanel");
		return ptr;
	}

};


// Class AC2.OptionsGenericPanel
// 0x0068 (0x0550 - 0x04E8)
class UOptionsGenericPanel : public UAcPanelBase
{
public:
	struct FText                                       MainTitle;                                                // 0x04E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       FirstRow;                                                 // 0x0500(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       SecondRow;                                                // 0x0518(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Icon;                                                     // 0x0530(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UImage*                                      imgDisabled;                                              // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.OptionsGenericPanel");
		return ptr;
	}

};


// Class AC2.OptionsPage
// 0x0008 (0x0438 - 0x0430)
class UOptionsPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.OptionsPage");
		return ptr;
	}

};


// Class AC2.PausePageContainer
// 0x0090 (0x0298 - 0x0208)
class UPausePageContainer : public UUserWidget
{
public:
	class UBackgroundBlur*                             BackgroundBlur;                                           // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTitle;                                                 // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  slotMenu;                                                 // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  slotMain;                                                 // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0228(0x0050) MISSED OFFSET
	float                                              LightBackgroundBlur;                                      // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrongBackgroundBlur;                                     // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // 0x0280(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PausePageContainer");
		return ptr;
	}


	void ToggleBlurStrength(bool isStrong);
	void SetTitleText(const struct FText& TextValue);
	void SetBlurStrength(float blurStrength);
};


// Class AC2.PedalInputWidget
// 0x0018 (0x0308 - 0x02F0)
class UPedalInputWidget : public UAcRaceWidgetBase
{
public:
	class UProgressBar*                                prgGas;                                                   // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                prgBrake;                                                 // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                prgFF;                                                    // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PedalInputWidget");
		return ptr;
	}

};


// Class AC2.PhysicsInfoPanel
// 0x0058 (0x0540 - 0x04E8)
class UPhysicsInfoPanel : public UAcPanelBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET
	class UTextBlock*                                  txtCamberValue;                                           // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtToeValue;                                              // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRideHeightValue;                                       // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtIMO1;                                                  // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtIMO2;                                                  // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtIMO3;                                                  // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWear1;                                                 // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWear2;                                                 // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWear3;                                                 // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTyrePressure;                                          // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PhysicsInfoPanel");
		return ptr;
	}

};


// Class AC2.PlayerCarController
// 0x00A8 (0x07A0 - 0x06F8)
class APlayerCarController : public AAcController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET
	class UClass*                                      wReplayHud;                                               // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReplayHUD;                                                // 0x0708(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0710(0x0008) MISSED OFFSET
	class UAcAssistController*                         assistController;                                         // 0x0718(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFanatec*                                    Fanatec;                                                  // 0x0720(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      RaceMainGuiClass;                                         // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class URaceMainGui*                                MainGui;                                                  // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x68];                                      // 0x0738(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PlayerCarController");
		return ptr;
	}


	bool UseAutoPitstopRequest();
	void SetTimeMultiplier(float Multiplier);
	void SetCurrentReplayTimeToSeconds(int Seconds);
	bool SetCurrentReplayPausedState(bool bDoPause);
	void ReturnToPit();
	int GetStartReplayTimeInSeconds();
	int GetCurrentReplayTotalTimeInSeconds();
	int GetCurrentReplayCurrentTimeInSeconds();
	void acc_TogglePitLimiter(uint16_t CarIndex);
	void acc_ToggleIdealLine();
	void acc_TestFastLane(int CarIndex);
	void acc_SwapDriverInstant(uint16_t CarIndex, uint16_t NewDriverIndex);
	void acc_SwapDriverFull(uint16_t CarIndex, uint16_t NewDriverIndex);
	void acc_StartLineRecording();
	void acc_setTC(unsigned char Level);
	void acc_setSessionOver();
	void acc_setDrivethruPenaltyToCarindex(uint16_t CarIndex);
	void acc_setABS(unsigned char Level);
	void acc_RequestPitstop(int CarIndex);
	void acc_RecordSpeedAvgs();
	void acc_RecordMicroSectorTimes();
	void acc_pitStopWindowTime(bool IsOpen, double addTime);
	void acc_DetachControllers();
	void acc_DecreaseLapCount(int CarIndex);
	void acc_carUpdatePitStrategy(uint16_t CarIndex);
	void acc_carStopOnPitzone(uint16_t CarIndex);
	void acc_carEngineOn(uint16_t CarIndex, bool Value);
	void acc_carDisqualifyCar(uint16_t CarIndex);
	void acc_CancelPitstop(int CarIndex);
	void acc_BackfireFlames(unsigned char Value);
	void acc_AddSplit(unsigned char IsValid);
	void acc_AddPenaltyToLap(int lapIndex);
	void acc_AddCutPenalty();
};


// Class AC2.PlayerDataPage
// 0x0030 (0x0460 - 0x0430)
class UPlayerDataPage : public UAcPageBase
{
public:
	int                                                MaxCharsForDataFields;                                    // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UEditableText*                               txtNameValue;                                             // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEditableText*                               txtLastnameValue;                                         // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEditableText*                               txtNicknameValue;                                         // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtMarker1;                                               // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtMarker2;                                               // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PlayerDataPage");
		return ptr;
	}

};


// Class AC2.PresetItem
// 0x0040 (0x0528 - 0x04E8)
class UPresetItem : public UAcPanelBase
{
public:
	class UTextBlock*                                  Filename;                                                 // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  FileDate;                                                 // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      Icon;                                                     // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0500(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PresetItem");
		return ptr;
	}

};


// Class AC2.PresetsPopup
// 0x01D0 (0x0600 - 0x0430)
class UPresetsPopup : public UAcPageBase
{
public:
	struct FText                                       SaveTitleText;                                            // 0x0430(0x0018) (Edit)
	struct FText                                       LoadTitleText;                                            // 0x0448(0x0018) (Edit)
	struct FText                                       RenameTitleText;                                          // 0x0460(0x0018) (Edit)
	struct FText                                       DeleteTitleText;                                          // 0x0478(0x0018) (Edit)
	struct FText                                       NewFileText;                                              // 0x0490(0x0018) (Edit)
	struct FText                                       LoadQuestionText;                                         // 0x04A8(0x0018) (Edit)
	struct FText                                       LoadQuestionDescription;                                  // 0x04C0(0x0018) (Edit)
	struct FText                                       OverwriteQuestionText;                                    // 0x04D8(0x0018) (Edit)
	struct FText                                       OverwriteQuestionDescription;                             // 0x04F0(0x0018) (Edit)
	struct FText                                       DeleteQuestionText;                                       // 0x0508(0x0018) (Edit)
	struct FText                                       DeleteQuestionDescription;                                // 0x0520(0x0018) (Edit)
	class UMainSelectorItem*                           ActionSelector;                                           // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                ItemList;                                                 // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBox;                                                // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        TrackFilter;                                              // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMultiLineEditableText*                      DescriptionReadOnly;                                      // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PresetItemClass;                                          // 0x0560(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  SaveTitle;                                                // 0x0570(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                SaveFileName;                                             // 0x0578(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                SaveDescription;                                          // 0x0580(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               Confirm;                                                  // 0x0588(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFooterButton*                               Cancel;                                                   // 0x0590(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  QuestionText;                                             // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  QuestionDescription;                                      // 0x05A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPresetItem*                                 NewPresetItem;                                            // 0x05A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x05B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PresetsPopup");
		return ptr;
	}

};


// Class AC2.ProximityHUD
// 0x0050 (0x04A0 - 0x0450)
class AProximityHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0450(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ProximityHUD");
		return ptr;
	}

};


// Class AC2.RaceDirectorInvestigationsItem
// 0x0028 (0x0230 - 0x0208)
class URaceDirectorInvestigationsItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	class UTextBlock*                                  RaceNumber;                                               // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  GainTime;                                                 // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  DeltaToReach;                                             // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceDirectorInvestigationsItem");
		return ptr;
	}

};


// Class AC2.RaceDirectorInvestigationsWidget
// 0x0068 (0x0358 - 0x02F0)
class URaceDirectorInvestigationsWidget : public UAcRaceWidgetBase
{
public:
	class UClass*                                      itemTemplate;                                             // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                Investigations;                                           // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0300(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceDirectorInvestigationsWidget");
		return ptr;
	}

};


// Class AC2.RaceEndPage
// 0x0200 (0x0630 - 0x0430)
class URaceEndPage : public UAcPageBase
{
public:
	float                                              SecondsBeforeShowsUp;                                     // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBetweenTables;                                       // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0438(0x0020) MISSED OFFSET
	class UClass*                                      WdgPausePageClass;                                        // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgStandingItemClass;                                     // 0x0460(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgRaceStandingItemClass;                                 // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgFinalHotlapStandingItemClass;                          // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgHotlapStandingSpacerItemClass;                         // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ClickScreen;                                              // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuit;                                               // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSession;                                               // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNoHotlap;                                              // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPressButton;                                           // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtFastestLapTime;                                        // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPlayerFastestLapInRace;                                // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPlayerBestLapTime;                                     // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPlayerGap;                                             // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             EventSwitcher;                                            // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                RaceFinalStandingList;                                    // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                RaceFinalStandingList2;                                   // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                boxLapList;                                               // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                boxStandingHotlaps;                                       // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgFlag;                                                  // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsCongrats;                                              // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsYourBest;                                              // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsFastestLap;                                            // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsHotlapTopList;                                         // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcControllerIcon*                           ConfirmIcon;                                              // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       HotstintSessionTitle;                                     // 0x0520(0x0018) (Edit, BlueprintVisible)
	struct FText                                       HotlapSessionTitle;                                       // 0x0538(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RaceSessionTitle;                                         // 0x0550(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NoValidLap;                                               // 0x0568(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0580(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceEndPage");
		return ptr;
	}


	void UpdateConnectionState(EOnlineServicesConnectionState State);
	void OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe);
};


// Class AC2.RaceFinalStandingItems
// 0x0118 (0x0320 - 0x0208)
class URaceFinalStandingItems : public UUserWidget
{
public:
	TArray<struct FText>                               LapsTexts;                                                // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0218(0x0048) MISSED OFFSET
	class UImage*                                      imgPositionPlate;                                         // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNumberPlate;                                           // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBodyNames;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBodyGap;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsPosition;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            OpenAnimation;                                            // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenAnimationSpeed;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UTextBlock*                                  txtDriverName;                                            // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarNum;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x02C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceFinalStandingItems");
		return ptr;
	}

};


// Class AC2.RaceIntroPage
// 0x0118 (0x0548 - 0x0430)
class URaceIntroPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET
	class UClass*                                      WdgStandingItemClass;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgPausePageClass;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeGridShow;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeGridDelay;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeFlipInfo;                                             // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeHideInfo;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       HotlapSessionTitle;                                       // 0x04A0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       HotstintSessionTitle;                                     // 0x04B8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PracticeSessionTitle;                                     // 0x04D0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RaceSessionTitle;                                         // 0x04E8(0x0018) (Edit, BlueprintVisible)
	class UButton*                                     ClickScreen;                                              // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuit;                                               // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSession;                                               // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             EventSwitcher;                                            // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                LeftLine;                                                 // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                RightLine;                                                // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgFlag;                                                  // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0538(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceIntroPage");
		return ptr;
	}

};


// Class AC2.RaceMainGui
// 0x0098 (0x04C8 - 0x0430)
class URaceMainGui : public UAcPageBase
{
public:
	int                                                CurrentSplit;                                             // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LapCount;                                                 // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastTime;                                                 // 0x0438(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	TArray<int>                                        LastSplits;                                               // 0x0440(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                BestTime;                                                 // 0x0450(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<int>                                        BestSplits;                                               // 0x0458(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0468(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceMainGui");
		return ptr;
	}


	void OnSplitEvent();
	void OnLapEvent();
	void OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference);
	bool IsEndlessSession();
	int GetSpeedDelta();
	float GetSessionStartTime();
	float GetSessionEndTime();
	int GetPhysicsLateCount();
	int GetPhysicsCPUOccupancy();
	int GetPhysicsBlendCount();
	ESessionType GetCurrentSessionType();
	float GetCurrentSessionTime();
	ERaceSessionPhase GetCurrentSessionPhase();
	unsigned char GetCarCount();
	int GetCarAtPosition(unsigned char Position);
};


// Class AC2.RaceNotificationManagerWidget
// 0x0090 (0x0380 - 0x02F0)
class URaceNotificationManagerWidget : public UAcRaceWidgetBase
{
public:
	class UCanvasPanel*                                NotificationPanel;                                        // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNotificationRadioEventWidget*               radioEventWidget;                                         // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DelayBetweenChainedNotifications;                         // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TMap<struct FName, class UClass*>                  NotificationWidgetClasses;                                // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class URaceNotificationBaseWidget*>         PendingNotifications;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceNotificationManagerWidget");
		return ptr;
	}


	void StartOutroForCurrentAnimation();
	void StartIntroForCurrentAnimation();
	void EndCurrentAnimation();
};


// Class AC2.RacePausePageBase
// 0x0910 (0x0D40 - 0x0430)
class URacePausePageBase : public UAcPageBase
{
public:
	class UPausePageContainer*                         Main;                                                     // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              TopMenu;                                                  // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightBackgroundBlur;                                      // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrongBackgroundBlur;                                     // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStrongBlurInUse;                                        // 0x0448(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	struct FText                                       PauseTitleText;                                           // 0x0450(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PreSessionTitleText;                                      // 0x0468(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PostSessionTitleText;                                     // 0x0480(0x0018) (Edit, BlueprintVisible)
	struct FText                                       StartSessionString;                                       // 0x0498(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      WdgMenuItem;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x888];                                     // 0x04B8(0x0888) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RacePausePageBase");
		return ptr;
	}


	void GoToSetup();
	void GoToResults();
	void GoToOptions();
	void GoToMain();
	void GoToHotlapLeaderboard();
	void GoToFOV();
	void ExitPausePage();
};


// Class AC2.RacePausePage
// 0x0090 (0x0DD0 - 0x0D40)
class URacePausePage : public URacePausePageBase
{
public:
	float                                              Divide;                                                   // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiply;                                                 // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugIsPauseMenu;                                         // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	class UGenericBarItem*                             btnResults;                                               // 0x0D50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnDrive;                                                 // 0x0D58(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnOptions;                                               // 0x0D60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnWeather;                                               // 0x0D68(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnSetup;                                                 // 0x0D70(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnLeaderboard;                                           // 0x0D78(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnNextSession;                                           // 0x0D80(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnPits;                                                  // 0x0D88(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnRestart;                                               // 0x0D90(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnReplay;                                                // 0x0D98(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnSave;                                                  // 0x0DA0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnQuit;                                                  // 0x0DA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnFov;                                                   // 0x0DB0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0DB8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RacePausePage");
		return ptr;
	}

};


// Class AC2.RacePausePageResults
// 0x0050 (0x0D90 - 0x0D40)
class URacePausePageResults : public URacePausePageBase
{
public:
	class UHorizontalBox*                              SessionMenu;                                              // 0x0D40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnReturn;                                                // 0x0D48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericBarItem*                             btnNextSession;                                           // 0x0D50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTable*                                  SessionTimeTable;                                         // 0x0D58(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSessionName;                                           // 0x0D60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0D68(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RacePausePageResults");
		return ptr;
	}

};


// Class AC2.RaceRatingCarRelationship
// 0x0048 (0x0070 - 0x0028)
class URaceRatingCarRelationship : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceRatingCarRelationship");
		return ptr;
	}

};


// Class AC2.RaceRatingDebugHUD
// 0x0000 (0x0450 - 0x0450)
class ARaceRatingDebugHUD : public AAcChildHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceRatingDebugHUD");
		return ptr;
	}

};


// Class AC2.RaceRatingsManager
// 0x0268 (0x0290 - 0x0028)
class URaceRatingsManager : public UObject
{
public:
	TMap<uint16_t, class URaceRatingCarRelationship*>  OpponentRelationships;                                    // 0x0028(0x0050) (ZeroConstructor)
	TArray<class URaceRatingCarRelationship*>          DogfightOpponentsInFront;                                 // 0x0078(0x0010) (ZeroConstructor)
	TArray<class URaceRatingCarRelationship*>          DogfightOpponentsBehind;                                  // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FCircuitCornerInfo>                  CornerInfos;                                              // 0x0098(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x00A8(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceRatingsManager");
		return ptr;
	}

};


// Class AC2.RaceRealtimeStandingWidget
// 0x0090 (0x0380 - 0x02F0)
class URaceRealtimeStandingWidget : public UAcRaceWidgetBase
{
public:
	float                                              FirstFlipTimer;                                           // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegoularFlipInterval;                                     // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgStandingItemClass;                                     // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                StandingList;                                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingPosition;                                      // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingTotCars;                                       // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          Position1;                                                // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          Position2;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          Position3;                                                // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          PositionAhead2;                                           // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          PositionAhead1;                                           // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          FocusedCarPosition;                                       // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          PositionBehind1;                                          // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URaceStandingItems*                          PositionBehind2;                                          // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0358(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceRealtimeStandingWidget");
		return ptr;
	}

};


// Class AC2.RaceStandingDetailedItems
// 0x0148 (0x0350 - 0x0208)
class URaceStandingDetailedItems : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0208(0x0048) MISSED OFFSET
	class UImage*                                      imgPositionPlate;                                         // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNumberPlate;                                           // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBody;                                                  // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            SwapAnimation;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            OpenCloseAnimation;                                       // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwapAnimationSpeed;                                       // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UTextBlock*                                  txtNames;                                                 // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarNum;                                                // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x02A0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceStandingDetailedItems");
		return ptr;
	}

};


// Class AC2.RaceStandingItems
// 0x0138 (0x0340 - 0x0208)
class URaceStandingItems : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0208(0x0038) MISSED OFFSET
	class UImage*                                      imgPositionPlate;                                         // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNumberPlate;                                           // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBody;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            SwapAnimation;                                            // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SwapAnimationSpeed;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UTextBlock*                                  txtNames;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarNum;                                                // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0288(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceStandingItems");
		return ptr;
	}

};


// Class AC2.RaceStandingWidget
// 0x00C0 (0x03B0 - 0x02F0)
class URaceStandingWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02F0(0x0050) MISSED OFFSET
	float                                              FirstFlipTimer;                                           // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegoularFlipInterval;                                     // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemsOnSingleList;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<class URaceStandingItems*>                  StandingSafe;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UClass*                                      WdgStandingItemClass;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                StandingList;                                             // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingPosition;                                      // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStandingTotCars;                                       // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0380(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceStandingWidget");
		return ptr;
	}

};


// Class AC2.RaceStartPage
// 0x0000 (0x0430 - 0x0430)
class URaceStartPage : public UAcPageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceStartPage");
		return ptr;
	}

};


// Class AC2.RaceTransitionPage
// 0x0020 (0x0450 - 0x0430)
class URaceTransitionPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RaceTransitionPage");
		return ptr;
	}


	void StartFade(float timeMult);
	struct FString GetCurrentGameVersion();
	void EndFade(float timeMult);
};


// Class AC2.RadarWidget
// 0x0068 (0x0358 - 0x02F0)
class URadarWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
	class UCanvasPanel*                                radarPanel;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, class UImage*>                           carImages;                                                // 0x0308(0x0050) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RadarWidget");
		return ptr;
	}

};


// Class AC2.RainBase
// 0x0048 (0x0370 - 0x0328)
class ARainBase : public AActor
{
public:
	class UParticleSystem*                             Template;                                                 // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EmitterSize;                                              // 0x0330(0x000C) (Edit, IsPlainOldData)
	float                                              VerticalOffset;                                           // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityMaxSpeed;                                         // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            ParticleChildren;                                         // 0x0348(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RainBase");
		return ptr;
	}

};


// Class AC2.RatingDetailGeneric
// 0x0020 (0x0228 - 0x0208)
class URatingDetailGeneric : public UUserWidget
{
public:
	bool                                               HasDetailItems;                                           // 0x0208(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class URatingDetailIntroItem*                      wdgIntroText;                                             // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVerticalBox*                                vboxItems;                                                // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailGeneric");
		return ptr;
	}

};


// Class AC2.RatingDetailCarControl
// 0x0020 (0x0248 - 0x0228)
class URatingDetailCarControl : public URatingDetailGeneric
{
public:
	class URatingDetailMessageItem*                    wdgLapsRemainingObjective;                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSignalSlip;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSectionsItem*                   wdg_sections;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailCarControl");
		return ptr;
	}

};


// Class AC2.RatingDetailCompetition
// 0x0000 (0x0228 - 0x0228)
class URatingDetailCompetition : public URatingDetailGeneric
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailCompetition");
		return ptr;
	}

};


// Class AC2.RatingDetailConsistency
// 0x0028 (0x0250 - 0x0228)
class URatingDetailConsistency : public URatingDetailGeneric
{
public:
	class URatingDetailMessageItem*                    wdgConsistencyObjective;                                  // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailMessageItem*                    wdgLapsRemainingObjective;                                // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSignalMinPush;                                         // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSectionsItem*                   wdg_sections;                                             // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailConsistency");
		return ptr;
	}

};


// Class AC2.RatingDetailIntroItem
// 0x0010 (0x0218 - 0x0208)
class URatingDetailIntroItem : public UUserWidget
{
public:
	class UClass*                                      RatingDetailIntroItemWidgetClass;                         // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                vboxObjectives;                                           // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailIntroItem");
		return ptr;
	}

};


// Class AC2.RatingDetailIntroLine
// 0x0008 (0x0210 - 0x0208)
class URatingDetailIntroLine : public UUserWidget
{
public:
	class UTextBlock*                                  txtObjective;                                             // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailIntroLine");
		return ptr;
	}

};


// Class AC2.RatingDetailMessageItem
// 0x0008 (0x0210 - 0x0208)
class URatingDetailMessageItem : public UUserWidget
{
public:
	class UTextBlock*                                  txtObjective;                                             // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailMessageItem");
		return ptr;
	}

};


// Class AC2.RatingDetailPace
// 0x0000 (0x0228 - 0x0228)
class URatingDetailPace : public URatingDetailGeneric
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailPace");
		return ptr;
	}

};


// Class AC2.RatingDetailRacecraft
// 0x0010 (0x0238 - 0x0228)
class URatingDetailRacecraft : public URatingDetailGeneric
{
public:
	class URatingDetailMessageItem*                    wdgDogfightHintFront;                                     // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailMessageItem*                    wdgDogfightHintBehind;                                    // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailRacecraft");
		return ptr;
	}

};


// Class AC2.RatingDetailSafetyRating
// 0x0018 (0x0240 - 0x0228)
class URatingDetailSafetyRating : public URatingDetailGeneric
{
public:
	class URatingDetailSignalItem*                     wdgTrustPoints;                                           // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgOBWPoints;                                             // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSpotterHint;                                           // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailSafetyRating");
		return ptr;
	}

};


// Class AC2.RatingDetailSectionsItem
// 0x0050 (0x0258 - 0x0208)
class URatingDetailSectionsItem : public UUserWidget
{
public:
	class UHorizontalBox*                              hBox;                                                     // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtHint;                                                  // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PopupAnimation;                                           // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0220(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailSectionsItem");
		return ptr;
	}

};


// Class AC2.RatingDetailSignalItem
// 0x0010 (0x0218 - 0x0208)
class URatingDetailSignalItem : public UUserWidget
{
public:
	class UTextBlock*                                  txtObjective;                                             // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSignal;                                                // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailSignalItem");
		return ptr;
	}

};


// Class AC2.RatingDetailTrackCompetence
// 0x0038 (0x0260 - 0x0228)
class URatingDetailTrackCompetence : public URatingDetailGeneric
{
public:
	class URatingDetailMessageItem*                    wdgMessageMedals;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSignalLapObjective;                                    // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSignalPushHint;                                        // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSignalItem*                     wdgSignalOverdriveHint;                                   // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSectionsItem*                   wdg_sections;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingDetailTrackCompetence");
		return ptr;
	}

};


// Class AC2.RatingItem
// 0x0088 (0x0290 - 0x0208)
class URatingItem : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnExpandAnimationCompletedEvent;                          // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollapseAnimationCompletedEvent;                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     RatingShort;                                              // 0x0228(0x0010) (Edit, ZeroConstructor)
	struct FString                                     RatingLong;                                               // 0x0238(0x0010) (Edit, ZeroConstructor)
	int                                                ratingIndex;                                              // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UTextBlock*                                  txtRatingShort;                                           // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingLong;                                            // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingValue;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Anim_Expand;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Anim_Collapse;                                            // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailGeneric*                        DetailPage;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0280(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingItem");
		return ptr;
	}


	void OnExpandAnimationEnded();
	void OnCollapseAnimationEnded();
};


// Class AC2.RatingProgressionItem
// 0x0028 (0x0230 - 0x0208)
class URatingProgressionItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0208(0x0018) MISSED OFFSET
	class UGridPanel*                                  GridPanel_RatingDelta;                                    // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaBar;                                          // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingProgressionItem");
		return ptr;
	}

};


// Class AC2.RatingProgressionMiniItem
// 0x0050 (0x0258 - 0x0208)
class URatingProgressionMiniItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0208(0x0018) MISSED OFFSET
	class UTextBlock*                                  TextBlock_RatingShortCaption;                             // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaMinus2;                                       // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaMinus1;                                       // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaMinus0;                                       // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaPlus0;                                        // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaPlus1;                                        // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_DeltaPlus2;                                        // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingProgressionMiniItem");
		return ptr;
	}

};


// Class AC2.RatingProgressionMiniWidget
// 0x0030 (0x0320 - 0x02F0)
class URatingProgressionMiniWidget : public UAcRaceWidgetBase
{
public:
	class URatingProgressionMiniItem*                  itemTrackCompetence;                                      // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionMiniItem*                  itemConsistency;                                          // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionMiniItem*                  itemCarControl;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionMiniItem*                  itemHotlap;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionMiniItem*                  itemRacecraft;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionMiniItem*                  itemCompetition;                                          // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingProgressionMiniWidget");
		return ptr;
	}

};


// Class AC2.RatingProgressionWidget
// 0x0038 (0x0328 - 0x02F0)
class URatingProgressionWidget : public UAcRaceWidgetBase
{
public:
	class URatingProgressionItem*                      itemTrackCompetence;                                      // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionItem*                      itemConsistency;                                          // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionItem*                      itemCarControl;                                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionItem*                      itemHotlap;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionItem*                      itemRacecraft;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingProgressionItem*                      itemCompetition;                                          // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingProgressionWidget");
		return ptr;
	}


	void OnShowRatingWidgetAnimated();
	void OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference);
};


// Class AC2.RatingSelectionPanel
// 0x0018 (0x0500 - 0x04E8)
class URatingSelectionPanel : public UAcPanelBase
{
public:
	class UTextBlock*                                  txtRatingCaptionShort;                                    // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRatingValue;                                           // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOverlay*                                    wdgLockedForeground;                                      // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingSelectionPanel");
		return ptr;
	}

};


// Class AC2.RatingTCDetail
// 0x0010 (0x0218 - 0x0208)
class URatingTCDetail : public UUserWidget
{
public:
	class UUniformGridPanel*                           ugridTrackItems;                                          // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      TrackItemWidgetClass;                                     // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingTCDetail");
		return ptr;
	}

};


// Class AC2.RatingTCTrackItem
// 0x0020 (0x0228 - 0x0208)
class URatingTCTrackItem : public UUserWidget
{
public:
	class UTextBlock*                                  txtTrackCaption;                                          // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtStars;                                                 // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgTrackPreview;                                          // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCountryFlag;                                           // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingTCTrackItem");
		return ptr;
	}


	void SetTrackData(const struct FString& TrackName, class UTexture2D* trackImage, class UTexture2D* FlagImage, const struct FString& starText);
};


// Class AC2.RatingTODetail
// 0x0058 (0x0260 - 0x0208)
class URatingTODetail : public UUserWidget
{
public:
	class USimpleColumnChart*                          WDG_ChartRatings;                                         // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleAreaChart*                            WDG_ChartProgression2;                                    // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgTrendIndicator;                                        // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtFiaCategory;                                           // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSC;                                                    // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTC;                                                    // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCO;                                                    // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCC;                                                    // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPC;                                                    // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRC;                                                    // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCP;                                                    // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingTODetail");
		return ptr;
	}

};


// Class AC2.RatingWidget
// 0x0158 (0x0448 - 0x02F0)
class URatingWidget : public UAcRaceWidgetBase
{
public:
	class UWidgetSwitcher*                             wdgSwitcher_RatingDetail;                                 // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailTrackCompetence*                WDG_RaceRatingDetailTrackCompetence;                      // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailConsistency*                    WDG_RaceRatingDetailConsistency;                          // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailCarControl*                     WDG_RaceRatingDetailCarControl;                           // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailPace*                           WDG_RaceRatingDetailPace;                                 // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailSafetyRating*                   WDG_RaceRatingDetailSafetyRating;                         // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailRacecraft*                      WDG_RaceRatingDetailRacecraft;                            // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingDetailCompetition*                    WDG_RaceRatingDetailCompetition;                          // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemTC;                                     // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemCN;                                     // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemCC;                                     // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemPC;                                     // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemSA;                                     // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemRC;                                     // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URatingItem*                                 WDG_RaceRatingItemCP;                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                canvas_ErrorMsgPanel;                                     // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txt_ErrorBig;                                             // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txt_ErrorHint;                                            // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0380(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RatingWidget");
		return ptr;
	}


	void UpdateUIState(int recursionCounter);
	void SetNewTargetUIState(TEnumAsByte<ERatingWidgetUIState> targetUIState, int recursionCounter);
	void OnRatingItemExpandedAnimationEnded(int ratingIndex, bool isExpanded);
	void OnRatingItemCollapsedAnimationEnded(int ratingIndex, bool isCollapsed);
};


// Class AC2.RealismPage
// 0x0050 (0x0480 - 0x0430)
class URealismPage : public UAcPageBase
{
public:
	class UGenericSelectorItem*                        damageRate;                                               // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        tyreWear;                                                 // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        unlimitedTyreSet;                                         // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        brakeFading;                                              // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        FormationLap;                                             // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      presetPopupClass;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0460(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RealismPage");
		return ptr;
	}


	void OpenPresetDialogBox();
};


// Class AC2.RealismPanel
// 0x0000 (0x04E8 - 0x04E8)
class URealismPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RealismPanel");
		return ptr;
	}

};


// Class AC2.RearMirrorWidget
// 0x0008 (0x02F8 - 0x02F0)
class URearMirrorWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.RearMirrorWidget");
		return ptr;
	}

};


// Class AC2.ReplayActor
// 0x0008 (0x0330 - 0x0328)
class AReplayActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayActor");
		return ptr;
	}

};


// Class AC2.ReplayController
// 0x0010 (0x0708 - 0x06F8)
class AReplayController : public AAcController
{
public:
	class UClass*                                      wReplayHud;                                               // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReplayHUD;                                                // 0x0700(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayController");
		return ptr;
	}


	void SetTimeMultiplier(float Multiplier);
	void SetCurrentReplayTimeToSeconds(int Seconds);
	bool SetCurrentReplayPausedState(bool bDoPause);
	void OnPossess();
	int GetStartReplayTimeInSeconds();
	int GetCurrentReplayTotalTimeInSeconds();
	int GetCurrentReplayCurrentTimeInSeconds();
};


// Class AC2.ReplayHighlightEvents
// 0x00D0 (0x00F8 - 0x0028)
class UReplayHighlightEvents : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayHighlightEvents");
		return ptr;
	}

};


// Class AC2.ReplayHUD
// 0x01A0 (0x05D0 - 0x0430)
class UReplayHUD : public UAcPageBase
{
public:
	bool                                               IsSliderPicked;                                           // 0x0430(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentPauses;                                            // 0x0431(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	float                                              SliderPoint;                                              // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMultiplier;                                           // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SliderPicked;                                             // 0x043C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                CurrentTime;                                              // 0x0440(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalTime;                                                // 0x0448(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HideTimeout;                                              // 0x044C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Jump5SecondsBackText;                                     // 0x0450(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PlayText;                                                 // 0x0468(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PauseText;                                                // 0x0480(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SlowMotionText;                                           // 0x0498(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ReduceSpeedText;                                          // 0x04B0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ResetSpeedText;                                           // 0x04C8(0x0018) (Edit, BlueprintVisible)
	class UCanvasPanel*                                CursorCanvas;                                             // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                RedCursor;                                                // 0x04E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USlider*                                     TimeSlider;                                               // 0x04F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCurrentTime;                                           // 0x04F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRewindSpeed;                                           // 0x0500(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtForwardSpeed;                                          // 0x0508(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPlayPause;                                             // 0x0510(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProgressBar*                                TimeBar;                                                  // 0x0518(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPlay;                                                  // 0x0520(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPause;                                                 // 0x0528(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnPlayPause;                                             // 0x0530(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnDecreaseSpeed;                                         // 0x0538(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnIncreaseSpeed;                                         // 0x0540(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnQuit;                                                  // 0x0548(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnPhoto;                                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnPrevCar;                                               // 0x0558(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnNextCar;                                               // 0x0560(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnNextCam;                                               // 0x0568(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnPrevCam;                                               // 0x0570(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnSlowMotion;                                            // 0x0578(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCar;                                                   // 0x0580(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCam;                                                   // 0x0588(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      loadSavePopupClass;                                       // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0598(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayHUD");
		return ptr;
	}


	void SlowMotionClick();
	void SliderOnValueChange(float Value);
	void SliderMouseEnd();
	void SliderMouseCaptureEnd();
	void SliderMouseCaptureBegin();
	void SliderMouseBegin();
	void Remove_PB();
	void QuitClick();
	void PrevCarClick();
	void PrevCamClick();
	void PlayPauseClick();
	void PhotoClick();
	void NextCarClick();
	void NextCamClick();
	void IncreaseSpeedClick();
	float GetTimerSliderValue();
	void DecreaseSpeedClick();
};


// Class AC2.ReplayManager
// 0x0CD0 (0x0CF8 - 0x0028)
class UReplayManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC98];                                     // 0x0028(0x0C98) MISSED OFFSET
	class UReplayHighlightEvents*                      highLightManager;                                         // 0x0CC0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0CC8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayManager");
		return ptr;
	}

};


// Class AC2.ReplayPanel
// 0x0000 (0x04E8 - 0x04E8)
class UReplayPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ReplayPanel");
		return ptr;
	}

};


// Class AC2.ResolutionPopup
// 0x0048 (0x0478 - 0x0430)
class UResolutionPopup : public UAcPageBase
{
public:
	struct FText                                       PreText;                                                  // 0x0430(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       PostText;                                                 // 0x0448(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0460(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ResolutionPopup");
		return ptr;
	}

};


// Class AC2.SessionInfoFallbackEntry
// 0x0030 (0x0240 - 0x0210)
class USessionInfoFallbackEntry : public UAcSessionInfoEntryBase
{
public:
	class UTextBlock*                                  txtUpperName;                                             // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLowerName;                                             // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtFullspaceName;                                         // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRankOrNumber;                                          // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLapsRight;                                             // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptimeRight;                                          // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionInfoFallbackEntry");
		return ptr;
	}

};


// Class AC2.SessionInfoLapEntry
// 0x0020 (0x0230 - 0x0210)
class USessionInfoLapEntry : public UAcSessionInfoEntryBase
{
public:
	class UTextBlock*                                  txtLapNum;                                                // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             InfoSwitcher;                                             // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionInfoLapEntry");
		return ptr;
	}

};


// Class AC2.SessionInfoRaceEntry
// 0x0028 (0x0238 - 0x0210)
class USessionInfoRaceEntry : public UAcSessionInfoEntryBase
{
public:
	class UTextBlock*                                  txtPos;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarNum;                                                // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtDriverName;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionInfoRaceEntry");
		return ptr;
	}

};


// Class AC2.SessionInfoRankEntry
// 0x0070 (0x0280 - 0x0210)
class USessionInfoRankEntry : public UAcSessionInfoEntryBase
{
public:
	class UTextBlock*                                  txtPos;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPos;                                                   // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtName;                                                  // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsSector1;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector1;                                               // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector1;                                               // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsSector2;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector2;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector2;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsSector3;                                               // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSector3;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtSector3;                                               // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionInfoRankEntry");
		return ptr;
	}

};


// Class AC2.SessionInfoWidget
// 0x0018 (0x0308 - 0x02F0)
class USessionInfoWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtMessage;                                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionInfoWidget");
		return ptr;
	}

};


// Class AC2.SessionResults
// 0x0000 (0x0208 - 0x0208)
class USessionResults : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SessionResults");
		return ptr;
	}

};


// Class AC2.SetupManager
// 0x0810 (0x0840 - 0x0030)
class USetupManager : public UDataAsset
{
public:
	struct FSetupLimits                                SetupLimits;                                              // 0x0030(0x07E0) (Edit, BlueprintVisible)
	bool                                               isFrontToeArmPositive;                                    // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isRearToeArmPositive;                                     // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0812(0x0002) MISSED OFFSET
	float                                              aeroBalanceInfoOffset;                                    // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              aeroBalanceInfoScale;                                     // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              brakeBalanceInfoOffset;                                   // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              brakeBalanceInfoScale;                                    // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class UDataTable*                                  FrontDamperLuts;                                          // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  RearDamperLuts;                                           // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UDataTable*                                  SetupPresets;                                             // 0x0838(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SetupManager");
		return ptr;
	}


	bool GetSetupList(TArray<struct FName>* List);
	bool GetSetup(const struct FName& RowName, struct FCarSetup* Destination);
	bool GetDamperLutList(int Axle, TArray<struct FName>* List);
	bool GetDamperLut(const struct FName& RowName, int Axle, struct FDamperLut* Destination);
};


// Class AC2.SetupPage
// 0x0E58 (0x1288 - 0x0430)
class USetupPage : public UAcPageBase
{
public:
	TArray<struct FSetupCarPreviews>                   CarPreviews;                                              // 0x0430(0x0010) (Edit, ZeroConstructor)
	struct FText                                       currentSetupText;                                         // 0x0440(0x0018)
	class UClass*                                      YesNoPopupClass;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0460(0x0008) MISSED OFFSET
	struct FText                                       YesNoPopUpTitle;                                          // 0x0468(0x0018) (Edit, BlueprintVisible)
	struct FText                                       YesNoPopUpText;                                           // 0x0480(0x0018) (Edit, BlueprintVisible)
	class UTextBlock*                                  txtCurrentSetup;                                          // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        fuelConsumption;                                          // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarPresets;                                            // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarTyres;                                              // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarElectronics;                                        // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarFuel;                                               // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarMechBalance;                                        // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarDampers;                                            // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarAero;                                               // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnSafePreset;                                            // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnAggressivePreset;                                      // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnWetPreset;                                             // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnCurrentSetup;                                          // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               CamberNames;                                              // 0x0500(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ToeNames;                                                 // 0x0510(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               WheelRateNames;                                           // 0x0520(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BumpSlowNames;                                            // 0x0530(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ReboundSlowNames;                                         // 0x0540(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BumpFastNames;                                            // 0x0550(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               ReboundFastNames;                                         // 0x0560(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               RideHeightNames;                                          // 0x0570(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               TyreNames;                                                // 0x0580(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BumpStopRateUpNames;                                      // 0x0590(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BumpStopRateDnNames;                                      // 0x05A0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BumpStopRangeUpNames;                                     // 0x05B0(0x0010) (Edit, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                Camber;                                                   // 0x05C0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                Toe;                                                      // 0x05D0(0x0010) (ExportObject, ZeroConstructor)
	class UGenericSelectorItem*                        SteerRatio;                                               // 0x05E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UGenericSelectorItem*>                WheelRate;                                                // 0x05E8(0x0010) (ExportObject, ZeroConstructor)
	class UGenericSelectorItem*                        ARBFront;                                                 // 0x05F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ARBRear;                                                  // 0x0600(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        BrakeTorque;                                              // 0x0608(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        BrakeBias;                                                // 0x0610(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UGenericSelectorItem*>                BumpStopRateUp;                                           // 0x0618(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                BumpStopRateDn;                                           // 0x0628(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                BumpStopRangeUp;                                          // 0x0638(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                BumpSlow;                                                 // 0x0648(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                ReboundSlow;                                              // 0x0658(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                BumpFast;                                                 // 0x0668(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                ReboundFast;                                              // 0x0678(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGenericSelectorItem*>                tyrePressure;                                             // 0x0688(0x0010) (ExportObject, ZeroConstructor)
	class UGenericSelectorItem*                        tyreCompound;                                             // 0x0698(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        TC1;                                                      // 0x06A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Abs;                                                      // 0x06A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        ECUMap;                                                   // 0x06B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Fuel;                                                     // 0x06B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UGenericSelectorItem*>                RideHeight;                                               // 0x06C0(0x0010) (ExportObject, ZeroConstructor)
	class UGenericSelectorItem*                        Splitter;                                                 // 0x06D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        RearWing;                                                 // 0x06D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGenericSelectorItem*                        Preload;                                                  // 0x06E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           infosLF;                                                  // 0x06E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           infosRF;                                                  // 0x06F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           infosLR;                                                  // 0x06F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           infosRR;                                                  // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           DebugLF;                                                  // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           DebugRF;                                                  // 0x0710(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           DebugLR;                                                  // 0x0718(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInfoPanel*                           DebugRR;                                                  // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              HorizontalMenu;                                           // 0x0728(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              tyres;                                                    // 0x0730(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              electronics;                                              // 0x0738(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              FuelStrategy;                                             // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              MechBalance;                                              // 0x0748(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              Dampers;                                                  // 0x0750(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcTogglePanel*                              AeroBalance;                                              // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             SwitchPage;                                               // 0x0760(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             SwitchDetails;                                            // 0x0768(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                PresetPage;                                               // 0x0770(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                SettingPage;                                              // 0x0778(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnTyreLF;                                                // 0x0780(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnTyreRF;                                                // 0x0788(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnTyreLR;                                                // 0x0790(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnTyreRR;                                                // 0x0798(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementElectronics;                                    // 0x07A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnFuelStrategy;                                          // 0x07A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceLF;                                  // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceRF;                                  // 0x07B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceLR;                                  // 0x07C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceRR;                                  // 0x07C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceFront;                               // 0x07D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementMechBalanceRear;                                // 0x07D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementDampersLF;                                      // 0x07E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementDampersRF;                                      // 0x07E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementDampersLR;                                      // 0x07F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementDampersRR;                                      // 0x07F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementAeroBalanceRear;                                // 0x0800(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                btnElementAeroBalanceFront;                               // 0x0808(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtAeroFrontBalance;                                      // 0x0810(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeGraphPanel*                             BumpStopGraphLF;                                          // 0x0818(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeGraphPanel*                             BumpStopGraphRF;                                          // 0x0820(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeGraphPanel*                             BumpStopGraphLR;                                          // 0x0828(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeGraphPanel*                             BumpStopGraphRR;                                          // 0x0830(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x0838(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCarBrandLogo;                                          // 0x0840(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      loadSavePopupClass;                                       // 0x0848(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0850(0x0008) MISSED OFFSET
	class UCanvasPanel*                                cvsWaiting;                                               // 0x0858(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0860(0x0088) MISSED OFFSET
	struct FSetupLimits                                SetupLimits;                                              // 0x08E8(0x07E0)
	struct FCarSetup                                   currentSetup;                                             // 0x10C8(0x0178)
	unsigned char                                      UnknownData03[0x48];                                      // 0x1240(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SetupPage");
		return ptr;
	}


	void OpenYesNoPopup();
	void OpenLoadSaveDialogBox();
};


// Class AC2.SharedPage
// 0x0000 (0x0430 - 0x0430)
class USharedPage : public UAcPageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SharedPage");
		return ptr;
	}

};


// Class AC2.SimpleAreaChart
// 0x0028 (0x0230 - 0x0208)
class USimpleAreaChart : public UUserWidget
{
public:
	class UImage*                                      imgBackground;                                            // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                SeriesColor;                                              // 0x0210(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0220(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SimpleAreaChart");
		return ptr;
	}


	void SetBackground(const struct FLinearColor& Color);
	void OnCppPaint(struct FPaintContext* Context);
};


// Class AC2.SimpleColumnChart
// 0x0000 (0x0208 - 0x0208)
class USimpleColumnChart : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SimpleColumnChart");
		return ptr;
	}


	void ClearColumns();
	void AddColumn(float Value);
};


// Class AC2.SimpleColumnChartColumn
// 0x0010 (0x0218 - 0x0208)
class USimpleColumnChartColumn : public UUserWidget
{
public:
	class UGridPanel*                                  GridPanel_BarHeight;                                      // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     Border_BarFill;                                           // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SimpleColumnChartColumn");
		return ptr;
	}


	void SetValue(float Value);
};


// Class AC2.PhysicsSettingsAC
// 0x0030 (0x0060 - 0x0030)
class UPhysicsSettingsAC : public UDataAsset
{
public:
	float                                              PuddlesGain;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreSlipVibrationThresholdMin;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreSlipVibrationThresholdMax;                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreSlipVibrationStrength;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MarblesAccumulationGain;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MarblesDissipationGain;                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MarblesMuK;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MarblesGrooveK;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRaycastWheels;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              GyroGainFF;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GyroGainTyres;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FfRoadEffect;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PhysicsSettingsAC");
		return ptr;
	}

};


// Class AC2.PhysicsAvatar
// 0x0158 (0x0480 - 0x0328)
class APhysicsAvatar : public AActor
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0328(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.PhysicsAvatar");
		return ptr;
	}

};


// Class AC2.SinglePlayerColumnPage
// 0x01D0 (0x0600 - 0x0430)
class USinglePlayerColumnPage : public UAcPageBase
{
public:
	class UTeamSelectionColumnPanel*                   DriverTeamSelectionPanel;                                 // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCircuitSelectionColumnPanel*                CircuitSelectionPanel;                                    // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameModeColumnPanel*                        GameModePanel;                                            // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWeatherIcon;                                           // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWeatherLevel;                                          // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRealismLevel;                                          // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtAssistsLevel;                                          // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x198];                                     // 0x0468(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SinglePlayerColumnPage");
		return ptr;
	}


	void UpdateLapInfo(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass);
};


// Class AC2.SinglePlayerPanel
// 0x0070 (0x0558 - 0x04E8)
class USinglePlayerPanel : public UAcPanelBase
{
public:
	TMap<EGuiGameModes, struct FText>                  GameModeTitles;                                           // 0x04E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTextBlock*                                  SubTitle_txt;                                             // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  TrackName_txt;                                            // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  CarModel_txt;                                             // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SinglePlayerPanel");
		return ptr;
	}

};


// Class AC2.Skidmarks
// 0x0190 (0x03D0 - 0x0240)
class USkidmarks : public USceneComponent
{
public:
	int                                                MaxSegments;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x178];                                     // 0x0250(0x0178) MISSED OFFSET
	class UProceduralMeshComponent*                    Mesh;                                                     // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.Skidmarks");
		return ptr;
	}

};


// Class AC2.Skin
// 0x0048 (0x0138 - 0x00F0)
class USkin : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET
	class UTexture*                                    baseColorOverlay;                                         // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.Skin");
		return ptr;
	}


	bool SetUserOverlay(const struct FString& folder);
	void SetTertiaryColor(const struct FLinearColor& Color);
	void SetSecondaryColor(const struct FLinearColor& Color);
	void SetPrimaryColor(const struct FLinearColor& Color);
	class UTexture2D* STATIC_LoadImageAsTexture(const struct FString& FullFilePath, bool* IsValid, int* Width, int* Height);
	TArray<struct FString> STATIC_ListSkinsForCar(const struct FString& Car);
	TArray<struct FString> STATIC_ListCars();
	void ApplySkin(const struct FString& Skin);
};


// Class AC2.SkinManager
// 0x0000 (0x0028 - 0x0028)
class USkinManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SkinManager");
		return ptr;
	}

};


// Class AC2.SpecialEventLeaderboardItems
// 0x0060 (0x0268 - 0x0208)
class USpecialEventLeaderboardItems : public UUserWidget
{
public:
	EKunosDriverCategory                               KunosCategories;                                          // 0x0208(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	class UTextBlock*                                  txtPos;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtName;                                                  // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLaptime;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtGap;                                                   // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                cvsGap;                                                   // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0238(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SpecialEventLeaderboardItems");
		return ptr;
	}

};


// Class AC2.SpecialEventSinglePanel
// 0x01E0 (0x06C8 - 0x04E8)
class USpecialEventSinglePanel : public UAcPanelBase
{
public:
	class UTextBlock*                                  txtEventName;                                             // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventDescription;                                      // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtLock;                                                  // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgLock;                                                  // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPoster;                                                // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             InfoPanelSwitch;                                          // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0518(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SpecialEventSinglePanel");
		return ptr;
	}


	void OnExpandAnimationEnded();
};


// Class AC2.SpecialEventsPage
// 0x01C8 (0x05F8 - 0x0430)
class USpecialEventsPage : public UAcPageBase
{
public:
	TMap<ECarModelType, class UTexture2D*>             carImages;                                                // 0x0430(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      WdgLeaderboardHotlapStandingItemClass;                    // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgHotlapStandingSpacerItemClass;                         // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WdgSpecialEventSinglePanelClass;                          // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStartSessionPanel*                          StartSessionPanel;                                        // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPages;                                                 // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventName;                                             // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventDescription;                                      // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitCountry;                                        // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWeather;                                               // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtWeatherIcon;                                           // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitLengthValue;                                    // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCornersValue;                                          // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTeamName;                                              // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarModel;                                              // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCircuitCountryFlag;                                    // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgTrackMap;                                              // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCar;                                                   // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgEventTrophy;                                           // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSinglePoster;                                          // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventStatus;                                           // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtEventTimeOfDay;                                        // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtAssistsLevel;                                          // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtRealismLevel;                                          // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  scrollLeaderboard;                                        // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnPreviousPage;                                          // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     btnNextPage;                                              // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpecialEventSinglePanel*                    Panel01;                                                  // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpecialEventSinglePanel*                    Panel02;                                                  // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpecialEventSinglePanel*                    Panel03;                                                  // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpecialEventSinglePanel*                    Panel04;                                                  // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	TArray<class USpecialEventSinglePanel*>            EventPanelList;                                           // 0x0578(0x0010) (ExportObject, ZeroConstructor)
	class UHorizontalBox*                              hboxEvents;                                               // 0x0588(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0590(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SpecialEventsPage");
		return ptr;
	}


	void OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe);
	void ClickRightShoulder();
	void ClickPreviousPage();
	void ClickNextPage();
	void ClickLeftShoulder();
};


// Class AC2.StartSessionPanel
// 0x0000 (0x04E8 - 0x04E8)
class UStartSessionPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.StartSessionPanel");
		return ptr;
	}

};


// Class AC2.SysPerformanceWidget
// 0x0020 (0x0310 - 0x02F0)
class USysPerformanceWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtFPS;                                                   // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtMS;                                                    // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPhy;                                                   // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SysPerformanceWidget");
		return ptr;
	}

};


// Class AC2.TeamSelectionColumnPanel
// 0x00B0 (0x0598 - 0x04E8)
class UTeamSelectionColumnPanel : public UAcPanelBase
{
public:
	TMap<ECarModelType, class UTexture2D*>             carImages;                                                // 0x04E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UImage*                                      imgCarLogo;                                               // 0x0538(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCar;                                                   // 0x0540(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCarName;                                               // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtTeamName;                                              // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNumber;                                                // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      BPEmptyPlate;                                             // 0x0560(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtDriverName01;                                          // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtDriverSurname01;                                       // 0x0570(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtShortName01;                                           // 0x0578(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgNationalityFlag01;                                     // 0x0580(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      DriverPhoto01;                                            // 0x0588(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TeamSelectionColumnPanel");
		return ptr;
	}

};


// Class AC2.TimeGraphPanel
// 0x0040 (0x0528 - 0x04E8)
class UTimeGraphPanel : public UAcPanelBase
{
public:
	TArray<struct FGraphicArray>                       graphData;                                                // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	float                                              T;                                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x04FC(0x0008) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FGraphSettings                              Settings;                                                 // 0x0504(0x0018) (Edit, BlueprintVisible, EditConst)
	float                                              Time;                                                     // 0x051C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              tLast;                                                    // 0x0520(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dTime;                                                    // 0x0524(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeGraphPanel");
		return ptr;
	}


	void STATIC_DrawLinesThick(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, float Thickness, bool bAntiAlias, struct FPaintContext* Context);
};


// Class AC2.TimeLeftWidget
// 0x0020 (0x0310 - 0x02F0)
class UTimeLeftWidget : public UAcRaceWidgetBase
{
public:
	class UTextBlock*                                  txtRemainingTime;                                         // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtInfo;                                                  // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderInfo;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderSessionStateIndicator;                              // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeLeftWidget");
		return ptr;
	}

};


// Class AC2.TimeTable
// 0x0020 (0x0508 - 0x04E8)
class UTimeTable : public UAcPanelBase
{
public:
	class UScrollBox*                                  ScrollTimes;                                              // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtNoLaps;                                                // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0500(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeTable");
		return ptr;
	}


	void OnItemFocused(class UTimeTableItem* Source);
};


// Class AC2.TimeTableItem
// 0x00D0 (0x05B8 - 0x04E8)
class UTimeTableItem : public UAcPanelBase
{
public:
	class UBorder*                                     borderMain;                                               // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPos;                                                   // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtPos;                                                   // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableSectorTimeItem*                    SectorOne;                                                // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableSectorTimeItem*                    SectorTwo;                                                // 0x0508(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableSectorTimeItem*                    SectorThree;                                              // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableSectorTimeItem*                    Laptime;                                                  // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableSectorTimeItem*                    DeltaTime;                                                // 0x0520(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableNameItem*                          NameOne;                                                  // 0x0528(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTimeTableNameItem*                          NameTwo;                                                  // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0538(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimeTableItemFocused;                                   // 0x0540(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTimeTableItemForward;                                   // 0x0550(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTimeTableItemBackward;                                  // 0x0560(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0570(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeTableItem");
		return ptr;
	}

};


// Class AC2.TimeTableNameItem
// 0x0008 (0x0210 - 0x0208)
class UTimeTableNameItem : public UUserWidget
{
public:
	class UTextBlock*                                  txtValue;                                                 // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeTableNameItem");
		return ptr;
	}

};


// Class AC2.TimeTableSectorTimeItem
// 0x0018 (0x0220 - 0x0208)
class UTimeTableSectorTimeItem : public UUserWidget
{
public:
	class UTextBlock*                                  txtValue;                                                 // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgBgr;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TimeTableSectorTimeItem");
		return ptr;
	}

};


// Class AC2.SurfaceData
// 0x0010 (0x0040 - 0x0030)
class USurfaceData : public UDataAsset
{
public:
	TArray<struct FSurfaceDef>                         Surfaces;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.SurfaceData");
		return ptr;
	}

};


// Class AC2.TrackPhysicsDataCache
// 0x0020 (0x0050 - 0x0030)
class UTrackPhysicsDataCache : public UDataAsset
{
public:
	struct FString                                     Comment;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<unsigned char>                              Data;                                                     // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackPhysicsDataCache");
		return ptr;
	}

};


// Class AC2.TrackAvatar
// 0x01E8 (0x0510 - 0x0328)
class ATrackAvatar : public AActor
{
public:
	struct FString                                     TrackName;                                                // 0x0328(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ConfigName;                                               // 0x0338(0x0010) (Edit, ZeroConstructor)
	class UTrackPhysicsDataCache*                      PhysicsDataCache;                                         // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCameraSet>                          TVCameraSets;                                             // 0x0350(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 ReflectionBrightnessCurve;                                // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ReflBrightnessCloudDensity;                               // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SunShadowBiasCurve;                                       // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTrackGenome*                                Genome;                                                   // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class USurfaceData*>                        SurfaceData;                                              // 0x0380(0x0010) (Edit, ZeroConstructor)
	class UTrackPeopleController*                      TrackPeopleController;                                    // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            StartingLightsMaterials;                                  // 0x03A0(0x0010) (ZeroConstructor)
	struct FVector2D                                   GreenFlagTriggerRange;                                    // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   FormationLapTriggerRange;                                 // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<float>                                      normalizedSectorLimits;                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x140];                                     // 0x03D0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackAvatar");
		return ptr;
	}


	void UpdateGarageLights(bool bIsLightOn);
	void OnPitLaneEntry(class AActor* OverlappedActor, class AActor* OtherActor);
	class ASceneCapture2D* GetMapCapture();
	float GetFastLaneDistanceToPoint(const struct FVector& PointLocation);
	class AAcTrackSpline* GetFastLane();
};


// Class AC2.TrackIdentityPanel
// 0x0028 (0x0510 - 0x04E8)
class UTrackIdentityPanel : public UAcPanelBase
{
public:
	struct FName                                       TrackName;                                                // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class UImage*                                      imgUnavailable;                                           // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgSelected;                                              // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0508(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackIdentityPanel");
		return ptr;
	}

};


struct MarshalStruct
{
	uint8_t flagColor : 4;
};
struct MarshalLogic
{
	ACarAvatar *  carAvatar;
	uint8_t warningLevel;
	EMarshalFlagType winFlag;
};
// Class AC2.TrackPeopleController
// 0x00E0 (0x01D0 - 0x00F0)
class UTrackPeopleController : public UActorComponent
{
public:
	AAcRaceGameMode *RaceGameMode;
	ksRacing::RaceManager *raceManager;
	TArray<class AAcMarshal *> Marshals;
	TArray<class UParticleSystemComponent *> Smokers;
	ATrackAvatar *TrackAvatar;
	TArray<TArray<unsigned char>> MarshalsBySectorsStart;
	TArray<TArray<unsigned char>> MarshalsBySectorsEnd;
	TArray<TArray<unsigned char>> busyMarshalsByCar;
	char checkeredFlagMarshalIndex;
	ACarAvatar *carAvatar;
	unsigned __int16 currentCarIndex;
	unsigned __int16 currentDriverIndex;
	float normalizedBlueFlagDistance;
	MarshalStruct marshalBitField[32];
	MarshalStruct lastMarshalBitField[32];
	TArray<MarshalLogic> marshalLogics;
	bool hasLeaderCrossed;
	FVector2D lerpValues;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackPeopleController");
		return ptr;
	}

};


// Class AC2.TrackPreviewPanel
// 0x0000 (0x04E8 - 0x04E8)
class UTrackPreviewPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackPreviewPanel");
		return ptr;
	}

};


// Class AC2.TrackSectionServices
// 0x0370 (0x0398 - 0x0028)
class UTrackSectionServices : public UObject
{
public:
	unsigned char                                      UnknownData00[0x370];                                     // 0x0028(0x0370) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackSectionServices");
		return ptr;
	}

};


// Class AC2.TrackSelectionPage
// 0x0080 (0x04B0 - 0x0430)
class UTrackSelectionPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	struct FName                                       CircuitName;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                CircuitList;                                              // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitName;                                           // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitCountry;                                        // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCircuitLengthValue;                                    // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtCornersValue;                                          // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  txtHistory;                                               // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgCircuitCountryFlag;                                    // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgTrackMap;                                              // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPreview01;                                             // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPreview02;                                             // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPreview03;                                             // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgPreview04;                                             // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackSelectionPage");
		return ptr;
	}


	void BP_PlayVideo();
};


// Class AC2.TrackSelectionPanel
// 0x0000 (0x04E8 - 0x04E8)
class UTrackSelectionPanel : public UAcPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TrackSelectionPanel");
		return ptr;
	}

};


// Class AC2.TyreTemps01ItemWidget
// 0x0088 (0x0290 - 0x0208)
class UTyreTemps01ItemWidget : public UUserWidget
{
public:
	class UBorder*                                     borderInnerTyre;                                          // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderMiddleTyre;                                         // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderOuterTyre;                                          // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBorder*                                     borderBrakeTemp;                                          // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgInnerCore;                                             // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgMiddleCore;                                            // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      imgOuterCore;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                colorCold;                                                // 0x0240(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                colorOperatingWindow;                                     // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                colorHot;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0270(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TyreTemps01ItemWidget");
		return ptr;
	}

};


// Class AC2.TyreTemps01Widget
// 0x0020 (0x0310 - 0x02F0)
class UTyreTemps01Widget : public UAcRaceWidgetBase
{
public:
	class UTyreTemps01ItemWidget*                      itemTyreLF;                                               // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTyreTemps01ItemWidget*                      itemTyreLR;                                               // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTyreTemps01ItemWidget*                      itemTyreRF;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTyreTemps01ItemWidget*                      itemTyreRR;                                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.TyreTemps01Widget");
		return ptr;
	}

};


// Class AC2.UltraDynamicSky
// 0x0300 (0x0628 - 0x0328)
class AUltraDynamicSky : public AActor
{
public:
	class ADirectionalLight*                           SunLight;                                                 // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADirectionalLight*                           MoonLight;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASkyLight*                                   SkyLight;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bRefreshSettings;                                         // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              TimeOfDay;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Saturation;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OverallIntensity;                                         // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NightBrightness;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColorScheme;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TimeFromGameState;                                        // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	float                                              DayLength;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnimateDayNightCycle;                                     // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SimulateCloudDensityChanges;                              // 0x0371(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              CloudDensityShiftFrequencyMin;                            // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensityShiftFrequencyMax;                            // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensityChangeSmoothing;                              // 0x037C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SimulateMoonPhaseChanges;                                 // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              CloudSpeed;                                               // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensity;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudWispsOpacity;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudPhase;                                               // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudOpacity;                                             // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunLightingIntensity;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCloudShadows;                                         // 0x039C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              CloudShadowsScale;                                        // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowsIntensity;                                    // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    CloudsBaseTexture;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudTiling;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudDirection;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOneCloudLayer;                                           // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              CloudHeight1;                                             // 0x03BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudHeight2;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunAngle;                                                 // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunBrightness;                                            // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunHighlightRadius;                                       // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SunRotation;                                              // 0x03D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              SunRadius;                                                // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bManuallySelectSunColor;                                  // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallySetSunLightRotation;                        // 0x03E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	float                                              SunInclination;                                           // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunLightIntensity;                                        // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SkyAroundSun;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallySetAdvancedSettingsUsingTimeOfDay;          // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              StarsVisibility;                                          // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonPosition;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HorizonBaseColor;                                         // 0x0404(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ZenithBaseColor;                                          // 0x0414(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                CloudLightColor;                                          // 0x0424(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                CloudDarkColor;                                           // 0x0434(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SunColor;                                                 // 0x0444(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              CloudShineIntensity;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SunLightColor;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AuroraIntensity;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AuroraSpeed;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAuroras;                                              // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRecaptureSkylightPeriodically;                           // 0x0471(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0472(0x0002) MISSED OFFSET
	float                                              SkyLightRecapturePeriod;                                  // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFastSkylight;                                         // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              MoonScale;                                                // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonInclination;                                          // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonPhase;                                                // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonIntensity;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MoonColor;                                                // 0x048C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              StarsIntensity;                                           // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StarsColor;                                               // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MoonOrbitOffset;                                          // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallySetMoonLightRotation;                       // 0x04B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	float                                              MoonlightIntensity;                                       // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StarsSpeed;                                               // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonRotation;                                             // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UTexture2D*                                  CustomMoonTexture;                                        // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomMoonTexture;                                    // 0x04D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              MoonGlowIntensity;                                        // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UDMmat;                                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCurveLinearColor*>                   HorizonBaseColorCurve;                                    // 0x04E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCurveLinearColor*>                   ZenithBaseColorCurve;                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCurveLinearColor*>                   CloudLightColorCurve;                                     // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCurveLinearColor*>                   CloudDarkColorCurve;                                      // 0x0510(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCurveLinearColor*>                   SunColorCurve;                                            // 0x0520(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 ShineIntensityCurve;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           SunCloudyColorCurve;                                      // 0x0538(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 StarsIntensityCurve;                                      // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 MoonPositionCurve;                                        // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloudDensityTarget;                                       // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShineVariation;                                           // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SunHighlightRadiusCurve;                                  // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFirstDay;                                                // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CloudShadowsMID;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunYaw;                                                   // 0x0570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class UCurveFloat*                                 NightFilterCurve;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DirectionalIntensityCurve;                                // 0x0580(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCurveLinearColor*>                   SkylightCurve;                                            // 0x0588(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 MinBrightness;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BloomIntensity;                                           // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ExposureValue;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSunUp;                                                 // 0x05B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CloudyExposureCompensation;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ExposureCompensationAngle;                                // 0x05C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 haze;                                                     // 0x05C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Azimuth;                                                  // 0x05D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Elevation;                                                // 0x05D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   CloudShadowsMaterialRef;                                  // 0x05E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceConstant*                   AurorasAndCloudLayer;                                     // 0x05E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceConstant*                   NoAurorasAndCloudLayer;                                   // 0x05F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   AurorasAndNoCloudLayer;                                   // 0x05F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceConstant*                   NoAurorasAndNoCloudLayer;                                 // 0x0600(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialParameterCollection*                MaterialParameterCollection;                              // 0x0608(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x18];                                      // 0x0610(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.UltraDynamicSky");
		return ptr;
	}

};


// Class AC2.VideoOptionsPage
// 0x00E8 (0x0518 - 0x0430)
class UVideoOptionsPage : public UAcPageBase
{
public:
	class UResolutionPopup*                            popup;                                                    // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainSelectorItem*                           MainSelector;                                             // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0440(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.VideoOptionsPage");
		return ptr;
	}


	void ResolutionConfirm(class UAcPageBase* popup);
	void ResolutionCancel(class UAcPageBase* popup);
};


// Class AC2.ViewOptionsLibrary
// 0x0018 (0x0040 - 0x0028)
class UViewOptionsLibrary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ViewOptionsLibrary");
		return ptr;
	}


	void UpdateFromFile(class UWorld* World, class APlayerController* Controller);
	void ToggleTemporalAA();
	void ToggleMotionBlur();
	bool TestSetScreenResolution(int Width, int Height, bool Fullscreen);
	bool TestSaveVideoModeAndQuality();
	bool TestRevertVideoSettings();
	void TestRequestResolutionChange(int X, int Y, TEnumAsByte<EWindowMode> Window);
	void TestConfirmResolution(bool isConfirmed);
	bool TestChangeScreenResolution(int Width, int Height, bool Fullscreen);
	bool TempApplyAndSave();
	void SetTemporalAAEnabled(bool Value);
	void SetSharpen(float Value);
	bool SetSetting(EGraphicsOptions Type, float Value);
	bool SetScreenResolution(int Width, int Height, bool Fullscreen);
	void SetMotionBlurEnabled(bool Value);
	void SetHDREnabled(bool Value);
	bool SaveVideoSettings();
	void SaveToFile(unsigned char maxCars, unsigned char mirrorQuality, bool isMBlurEnabled, bool AATemporal, float ColorSaturation, bool isHDR, float sharpen);
	bool SaveSettings();
	void LaunchConsoleCMD(const struct FString& Cmd, const struct FString& Value);
	struct FViewGUIResult GetValueFromSave(TArray<struct FString> ValueNames, float Value, float MaxValue, float Step);
	struct FViewGUIResult GetValue(TArray<struct FString> ValueNames, float Value, float MaxValue, float Step);
	bool GetTemporalAAEnabled();
	float GetSharpen();
	bool GetSetting(EGraphicsOptions Type, float* Result);
	bool GetScreenResolution(int* Width, int* Height, bool* Fullscreen);
	struct FString GetProjectVersion();
	bool GetMotionBlurEnabled();
	unsigned char GetMirrorQualityLevel();
	unsigned char GetMaxCarsVisible();
	bool GetHDREnabled();
	void GetConsoleCMDValue(const struct FString& Cmd, struct FString* Value);
	float GetColorSaturation();
	bool GetAllScreenResolutions(TArray<struct FString>* Resolutions);
	bool ChangeScreenResolution(int Width, int Height, bool Fullscreen);
	void ApplyVSync();
};


// Class AC2.ViewOptionsSaves
// 0x0020 (0x0048 - 0x0028)
class UViewOptionsSaves : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      MirrorQualityLevel;                                       // 0x0038(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MaxCarsVisible;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isMBlurEnabled;                                           // 0x003A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isAATemporal;                                             // 0x003B(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ColorSaturation;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              sharpen;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               isHDRActive;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ViewOptionsSaves");
		return ptr;
	}


	void SaveGraphicOptions(unsigned char MirrorLevel, unsigned char maxCars, bool isBlur, bool isTemporal, float colourSaturation, bool IsHDREnabled, float sharpness);
	bool GetTemporalEnabled();
	bool GetMotionBlurEnabled();
	unsigned char GetMirrorQualityLevel();
	unsigned char GetMaxCarsVisible();
	bool GetHDR();
};


// Class AC2.WearEditorPage
// 0x0008 (0x0438 - 0x0430)
class UWearEditorPage : public UAcPageBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.WearEditorPage");
		return ptr;
	}


	void AnimDriver();
};


// Class AC2.WingComponent
// 0x0070 (0x02B0 - 0x0240)
class UWingComponent : public USceneComponent
{
public:
	bool                                               IsFin;                                                    // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UCurveFloat*                                 lutAOA_CL;                                                // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 lutAOA_CD;                                                // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 lutGH_CL;                                                 // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 lutGH_CD;                                                 // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              clGain;                                                   // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cdGain;                                                   // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              yawGain;                                                  // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              defaultAngle;                                             // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              damageCL[0x5];                                            // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              damageCD[0x5];                                            // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDynamicWingControllerData>          WingControllerData;                                       // 0x02A0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.WingComponent");
		return ptr;
	}

};


// Class AC2.WingDebugHUD
// 0x0018 (0x0468 - 0x0450)
class AWingDebugHUD : public AAcChildHUD
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0450(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.WingDebugHUD");
		return ptr;
	}

};


// Class AC2.WrongWayWidget
// 0x0008 (0x02F8 - 0x02F0)
class UWrongWayWidget : public UAcRaceWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.WrongWayWidget");
		return ptr;
	}

};


// Class AC2.YesNoPopup
// 0x0030 (0x0460 - 0x0430)
class UYesNoPopup : public UAcPageBase
{
public:
	class UTextBlock*                                  MessageText;                                              // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  Title;                                                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                YesButton;                                                // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAcPanelBase*                                NoButton;                                                 // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EYesNoPopupType                                    PopupType;                                                // 0x0450(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0451(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.YesNoPopup");
		return ptr;
	}


	void BP_InitPopup();
};


// Class AC2.ZoneAmbientSound
// 0x0040 (0x0368 - 0x0328)
class AZoneAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                         AmbientSound;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            OuterSphere;                                              // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            InnerSphere;                                              // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OnlyFocusedCar;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SpeedUpdate;                                              // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseFading;                                                // 0x0342(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x25];                                      // 0x0343(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AC2.ZoneAmbientSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
