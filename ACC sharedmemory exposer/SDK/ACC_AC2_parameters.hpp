#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_AC2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AC2.AcCarAnimations.GetWipersMaxLevel
struct UAcCarAnimations_GetWipersMaxLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetWipersCount
struct UAcCarAnimations_GetWipersCount_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetWiperPosition
struct UAcCarAnimations_GetWiperPosition_Params
{
	unsigned char                                      WiperIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetRightDoorOpenRate
struct UAcCarAnimations_GetRightDoorOpenRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetNormalizedWiperPosition
struct UAcCarAnimations_GetNormalizedWiperPosition_Params
{
	unsigned char                                      WiperIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetLeftDoorOpenRate
struct UAcCarAnimations_GetLeftDoorOpenRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarAnimations.GetCarLoosePartPosition
struct UAcCarAnimations_GetCarLoosePartPosition_Params
{
	unsigned char                                      LoosePartIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarDigitalDisplay.OnLapEvent
struct UAcCarDigitalDisplay_OnLapEvent_Params
{
};

// Function AC2.AcCarGraphicData.GetTeam
struct UAcCarGraphicData_GetTeam_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTeamTemplate                               Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetSuitTable
struct UAcCarGraphicData_GetSuitTable_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDriverSuitTemplate                         Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetStickerSet
struct UAcCarGraphicData_GetStickerSet_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FStickerSet                                 Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetSkinTemplate
struct UAcCarGraphicData_GetSkinTemplate_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSkinTemplate                               Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetRimTemplate
struct UAcCarGraphicData_GetRimTemplate_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRimTemplate                                Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetNumberPanelMesh
struct UAcCarGraphicData_GetNumberPanelMesh_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FNumberPanelMesh                            Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetHelmetTable
struct UAcCarGraphicData_GetHelmetTable_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDriverHelmetTemplate                       Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetGlovesTable
struct UAcCarGraphicData_GetGlovesTable_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDriverGlovesTemplate                       Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetColorTable
struct UAcCarGraphicData_GetColorTable_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSkinColor                                  Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarGraphicData.GetAuxLightMesh
struct UAcCarGraphicData_GetAuxLightMesh_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FAuxLightMesh                               Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarInteriorAnimations.UpdateAnimation
struct UAcCarInteriorAnimations_UpdateAnimation_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarInteriorAnimations.OnNotifyReceived
struct UAcCarInteriorAnimations_OnNotifyReceived_Params
{
	float                                              TimeDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarInteriorAnimations.OnCarAnimationEvent
struct UAcCarInteriorAnimations_OnCarAnimationEvent_Params
{
	ECarAnimation                                      CarAnimation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarInteriorAnimations.GetCurrentSwitchRotator
struct UAcCarInteriorAnimations_GetCurrentSwitchRotator_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnSafetyCarLine2
struct AAcCarLocationManager_OnSafetyCarLine2_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnSafetyCarLine1
struct AAcCarLocationManager_OnSafetyCarLine1_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitLaneExit
struct AAcCarLocationManager_OnPitLaneExit_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitLaneEntry
struct AAcCarLocationManager_OnPitLaneEntry_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitExitLaneSide
struct AAcCarLocationManager_OnPitExitLaneSide_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitExitLaneEnd
struct AAcCarLocationManager_OnPitExitLaneEnd_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitEntryLaneStart
struct AAcCarLocationManager_OnPitEntryLaneStart_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.OnPitEntryLaneSide
struct AAcCarLocationManager_OnPitEntryLaneSide_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarLocationManager.FindCarLocationManager
struct AAcCarLocationManager_FindCarLocationManager_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AAcCarLocationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarPitstopManager.SetPitZone_BP
struct UAcCarPitstopManager_SetPitZone_BP_Params
{
	int                                                _mainIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _secondaryIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarPitstopManager.SetOutside
struct UAcCarPitstopManager_SetOutside_Params
{
	EPitstopCarOutside                                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarPitstopManager.RequestPitstop_BP
struct UAcCarPitstopManager_RequestPitstop_BP_Params
{
};

// Function AC2.AcCarSystems.ToggleRightDoor
struct UAcCarSystems_ToggleRightDoor_Params
{
};

// Function AC2.AcCarSystems.ToggleLeftDoor
struct UAcCarSystems_ToggleLeftDoor_Params
{
};

// Function AC2.AcCarSystems.SetWiperLevel
struct UAcCarSystems_SetWiperLevel_Params
{
	unsigned char                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateSystems;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarSystems.GetWiperLevel
struct UAcCarSystems_GetWiperLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarSystems.GetLightStage
struct UAcCarSystems_GetLightStage_Params
{
	ECarLightStage                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarSystems.EnableDriverDoor
struct UAcCarSystems_EnableDriverDoor_Params
{
	bool                                               isOpening;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarSystems.CycleWiperLevel
struct UAcCarSystems_CycleWiperLevel_Params
{
	bool                                               isUp;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.Reset
struct UAcCarTimingServices_Reset_Params
{
};

// Function AC2.AcCarTimingServices.OnSplit_BP
struct UAcCarTimingServices_OnSplit_BP_Params
{
	int                                                SectorId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetSpeedDiff
struct UAcCarTimingServices_GetSpeedDiff_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetPredictedLapTime
struct UAcCarTimingServices_GetPredictedLapTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetLastLapTime
struct UAcCarTimingServices_GetLastLapTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetLapTimeDiff
struct UAcCarTimingServices_GetLapTimeDiff_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetLapCount
struct UAcCarTimingServices_GetLapCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetCurrentLapTime
struct UAcCarTimingServices_GetCurrentLapTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcCarTimingServices.GetBestLapTime
struct UAcCarTimingServices_GetBestLapTime_Params
{
	struct FLapTimeReference                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcController.SetCameraOnCar
struct AAcController_SetCameraOnCar_Params
{
	class ACarAvatar*                                  Car;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcDriverAnimations.OnAnimationEvent
struct UAcDriverAnimations_OnAnimationEvent_Params
{
	ECarAnimation                                      CarAnimationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcExhaustComponent.SetTemperature
struct UAcExhaustComponent_SetTemperature_Params
{
	float                                              _Temperature;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcExhaustComponent.GetTemperature
struct UAcExhaustComponent_GetTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcExhaustComponent.DebugSound
struct UAcExhaustComponent_DebugSound_Params
{
	EBackFireType                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcExhaustComponent.DeactivateFlames
struct UAcExhaustComponent_DeactivateFlames_Params
{
};

// Function AC2.AcExhaustComponent.ActivateFlames
struct UAcExhaustComponent_ActivateFlames_Params
{
	EBackFireType                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcFireworks.BaseLaunchShell
struct AAcFireworks_BaseLaunchShell_Params
{
};

// Function AC2.AcFormatLibrary.Int32ToLaptimeText
struct UAcFormatLibrary_Int32ToLaptimeText_Params
{
	int                                                Laptime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ELaptimeFormat                                     Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcFormatLibrary.Int32ToLaptimeDeltaText
struct UAcFormatLibrary_Int32ToLaptimeDeltaText_Params
{
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ELaptimeDeltaFormat                                Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcFormatLibrary.Int32ToLaptimeDelta
struct UAcFormatLibrary_Int32ToLaptimeDelta_Params
{
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ELaptimeDeltaFormat                                Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcFormatLibrary.Int32ToLaptime
struct UAcFormatLibrary_Int32ToLaptime_Params
{
	int                                                Laptime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ELaptimeFormat                                     Format;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcGameInstance.UseGamepadAndSave
struct UAcGameInstance_UseGamepadAndSave_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcGameInstance.UseGamepad
struct UAcGameInstance_UseGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcGameInstance.SetTargetUI
struct UAcGameInstance_SetTargetUI_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcGameInstance.SetLoadingScreen
struct UAcGameInstance_SetLoadingScreen_Params
{
	EGuiLoadingScreens                                 LoadingType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcGameInstance.IsUserTester
struct UAcGameInstance_IsUserTester_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcGameInstance.IsUserDeveloper
struct UAcGameInstance_IsUserDeveloper_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcGameInstance.GetTrackName
struct UAcGameInstance_GetTrackName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcGameInstance.GetOnlineServices
struct UAcGameInstance_GetOnlineServices_Params
{
	class UOnlineServices*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcGameInstance.GetMenuColor
struct UAcGameInstance_GetMenuColor_Params
{
	EGuiColors                                         colorToGet;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcGameInstance.GetGamePlatformServices
struct UAcGameInstance_GetGamePlatformServices_Params
{
	class UGamePlatformServices*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcGameInstance.GetGamePlatformPlayerID
struct UAcGameInstance_GetGamePlatformPlayerID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcGameInstance.GetCurrentGameVersion
struct UAcGameInstance_GetCurrentGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcGameInstance.EndLoadingScreen
struct UAcGameInstance_EndLoadingScreen_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcGameInstance.BeginLoadingScreen
struct UAcGameInstance_BeginLoadingScreen_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function AC2.AcInfoManager.GetNationalityInfo
struct UAcInfoManager_GetNationalityInfo_Params
{
	ENationality                                       Nationality;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FNationality                                Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetModelInfo
struct UAcInfoManager_GetModelInfo_Params
{
	ECarModelType                                      Model;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FModelInfo                                  Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetMeteoInfo
struct UAcInfoManager_GetMeteoInfo_Params
{
	EWeatherPresetType                                 MeteoType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMeteoInfos                                 Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetInfoList
struct UAcInfoManager_GetInfoList_Params
{
	EInfoType                                          InfoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.AcInfoManager.GetDriverInfo
struct UAcInfoManager_GetDriverInfo_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDriverInfo                                 Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetCommonTexts
struct UAcInfoManager_GetCommonTexts_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCommonTexts                                Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetCircuitInfo
struct UAcInfoManager_GetCircuitInfo_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCircuitInfo                                Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetCarInfo
struct UAcInfoManager_GetCarInfo_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCarInfo                                    Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcInfoManager.GetBrandInfo
struct UAcInfoManager_GetBrandInfo_Params
{
	EBrandType                                         Brand;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBrandInfo                                  Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcMarshal.SetFlag
struct AAcMarshal_SetFlag_Params
{
	EMarshalFlagType                                   flagColor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcMarshal.ForceAnimation
struct AAcMarshal_ForceAnimation_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcMarshal.EnableAnimation
struct AAcMarshal_EnableAnimation_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EMarshalFlagType                                   flagColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcMenuData.GetIconTemplate
struct UAcMenuData_GetIconTemplate_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuiIconTemplate                            Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcMenuData.GetColor
struct UAcMenuData_GetColor_Params
{
	EGuiColors                                         colorToGet;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcMenuData.GetActionTexts
struct UAcMenuData_GetActionTexts_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.AcMenuData.GetActionText
struct UAcMenuData_GetActionText_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGuiActionCategory                          Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcMenuGameMode.getViewLibrary
struct AAcMenuGameMode_getViewLibrary_Params
{
	class UViewOptionsLibrary*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcPageBase.Forward
struct UAcPageBase_Forward_Params
{
};

// Function AC2.AcPageBase.Backward
struct UAcPageBase_Backward_Params
{
};

// Function AC2.AcPanelBase.SetFocus
struct UAcPanelBase_SetFocus_Params
{
	bool                                               hasFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcPanelBase.GetMenuColor
struct UAcPanelBase_GetMenuColor_Params
{
	EGuiColors                                         colorToGet;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.AcPanelBase.ChangeTextBlockVisiblityBySlot
struct UAcPanelBase_ChangeTextBlockVisiblityBySlot_Params
{
	class UNamedSlot*                                  SlotName;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcPanelBase.ChangeTextBlockVisibilityByCanvas
struct UAcPanelBase_ChangeTextBlockVisibilityByCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcPanelBase.ChangeTextBlockColorBySlot
struct UAcPanelBase_ChangeTextBlockColorBySlot_Params
{
	class UNamedSlot*                                  SlotName;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EGuiColors                                         Color;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcPanelBase.ChangeTextBlockColorByCanvas
struct UAcPanelBase_ChangeTextBlockColorByCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EGuiColors                                         Color;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcPanelBase.BP_MouseOver
struct UAcPanelBase_BP_MouseOver_Params
{
};

// Function AC2.AcPanelBase.BP_MouseLeave
struct UAcPanelBase_BP_MouseLeave_Params
{
};

// Function AC2.AcParticlesManager.GetWaterParticles
struct UAcParticlesManager_GetWaterParticles_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWaterParticles                             Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcParticlesManager.GetWaterCurves
struct UAcParticlesManager_GetWaterCurves_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWaterCurves                                Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcParticlesManager.GetSmokeDirtParticles
struct UAcParticlesManager_GetSmokeDirtParticles_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSmokeDirtParticles                         Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcParticlesManager.GetSmokeDirtCurves
struct UAcParticlesManager_GetSmokeDirtCurves_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSmokeDirtCurves                            Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcParticlesManager.GetParticleList
struct UAcParticlesManager_GetParticleList_Params
{
	EParticleLod                                       ParticleLod;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ACPlayerCameraManager.ToggleFreeCameraLock
struct AACPlayerCameraManager_ToggleFreeCameraLock_Params
{
};

// Function AC2.ACPlayerCameraManager.SetFocusOnPlayerCar
struct AACPlayerCameraManager_SetFocusOnPlayerCar_Params
{
};

// Function AC2.ACPlayerCameraManager.SetFocusedCar
struct AACPlayerCameraManager_SetFocusedCar_Params
{
	class ACarAvatar*                                  newCar;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetUniqueActorsVisibility;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ACPlayerCameraManager.RefreshCamera
struct AACPlayerCameraManager_RefreshCamera_Params
{
};

// Function AC2.ACPlayerCameraManager.GetFreeCamera
struct AACPlayerCameraManager_GetFreeCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AC2.ACPlayerCameraManager.GetFocusedCar
struct AACPlayerCameraManager_GetFocusedCar_Params
{
	class ACarAvatar*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcPlayerStartManager.GetPlayerStart
struct AAcPlayerStartManager_GetPlayerStart_Params
{
	EAcPlayerStartType                                 PlayerStartType;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerPosition;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AAcPlayerStart*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcPlayerStartManager.FindPlayerStartManager
struct AAcPlayerStartManager_FindPlayerStartManager_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AAcPlayerStartManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcPresetManager.GetSortedSpecialEventList
struct UAcPresetManager_GetSortedSpecialEventList_Params
{
	TArray<struct FSpecialEventPreset>                 List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.AcPresetManager.GetPresetList
struct UAcPresetManager_GetPresetList_Params
{
	EPresetType                                        PresetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.AcRaceGameMode.ShowPostSessionTimeNotification
struct AAcRaceGameMode_ShowPostSessionTimeNotification_Params
{
};

// Function AC2.AcRaceGameMode.Proceed
struct AAcRaceGameMode_Proceed_Params
{
};

// Function AC2.AcRaceGameMode.getViewLibrary
struct AAcRaceGameMode_getViewLibrary_Params
{
	class UViewOptionsLibrary*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameMode.GetSunPitch
struct AAcRaceGameMode_GetSunPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameMode.GetRaceRatingsManager
struct AAcRaceGameMode_GetRaceRatingsManager_Params
{
	class URaceRatingsManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameMode.GetPlayerCarAvatar
struct AAcRaceGameMode_GetPlayerCarAvatar_Params
{
	class ACarAvatar*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameMode.CloseLevel
struct AAcRaceGameMode_CloseLevel_Params
{
};

// Function AC2.AcRaceGameMode.BPPhysicsPause
struct AAcRaceGameMode_BPPhysicsPause_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcRaceGameState.SetMainVolume
struct AAcRaceGameState_SetMainVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcRaceGameState.SetAudioVCA
struct AAcRaceGameState_SetAudioVCA_Params
{
	EAudioVCA                                          Vca;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcRaceGameState.RestartSession
struct AAcRaceGameState_RestartSession_Params
{
};

// Function AC2.AcRaceGameState.NextSession
struct AAcRaceGameState_NextSession_Params
{
};

// Function AC2.AcRaceGameState.isInReplay
struct AAcRaceGameState_isInReplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetTimeOfDayAsSeconds
struct AAcRaceGameState_GetTimeOfDayAsSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetTimeOfDayAs1440
struct AAcRaceGameState_GetTimeOfDayAs1440_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetReplayController
struct AAcRaceGameState_GetReplayController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetRainGlobalLevel
struct AAcRaceGameState_GetRainGlobalLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetCloudGlobalLevel
struct AAcRaceGameState_GetCloudGlobalLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.GetAudioVCA
struct AAcRaceGameState_GetAudioVCA_Params
{
	EAudioVCA                                          Vca;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcRaceGameState.AddSecondsToTimeOfday
struct AAcRaceGameState_AddSecondsToTimeOfday_Params
{
	int                                                secondsToAdd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcRacePlayerState.SetDriverInfo
struct AAcRacePlayerState_SetDriverInfo_Params
{
	struct FDriverInfo                                 _driverInfo;                                              // (Parm)
};

// Function AC2.AcRacePlayerState.SetCarInfo
struct AAcRacePlayerState_SetCarInfo_Params
{
	struct FCarInfo                                    _carInfo;                                                 // (Parm)
};

// Function AC2.AcRaceWidgetBase.OnUpdateOfficialPositionEvent
struct UAcRaceWidgetBase_OnUpdateOfficialPositionEvent_Params
{
	int                                                CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcRaceWidgetBase.OnHudTick
struct UAcRaceWidgetBase_OnHudTick_Params
{
	struct FRaceHUDState                               State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.AcRaceWidgetBase.OnHudSplitEvent
struct UAcRaceWidgetBase_OnHudSplitEvent_Params
{
};

// Function AC2.AcRaceWidgetBase.OnHudLapEvent
struct UAcRaceWidgetBase_OnHudLapEvent_Params
{
	int                                                Laptime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHUDCarState                                carState;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               isDriverFastestLap;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSessionFastestLap;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcSessionInfoPanel.OnHotlapData
struct UAcSessionInfoPanel_OnHotlapData_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDriverCarClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcSteeringWheelAnimations.UpdateAnimation
struct UAcSteeringWheelAnimations_UpdateAnimation_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcSteeringWheelAnimations.ResetGearState
struct UAcSteeringWheelAnimations_ResetGearState_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcSteeringWheelAnimations.OnNotifyReceived
struct UAcSteeringWheelAnimations_OnNotifyReceived_Params
{
	float                                              TimeDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcSteeringWheelAnimations.OnCarAnimationEvent
struct UAcSteeringWheelAnimations_OnCarAnimationEvent_Params
{
	ECarAnimation                                      CarAnimation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcSteeringWheelAnimations.GetCurrentSwitchRotator
struct UAcSteeringWheelAnimations_GetCurrentSwitchRotator_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.AcTogglePanel.GetState
struct UAcTogglePanel_GetState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AcTogglePanel.BP_UpdateState
struct UAcTogglePanel_BP_UpdateState_Params
{
	bool                                               IsElementActive;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AcTogglePanel.BP_IsUnSelected
struct UAcTogglePanel_BP_IsUnSelected_Params
{
};

// Function AC2.AcTogglePanel.BP_IsSelected
struct UAcTogglePanel_BP_IsSelected_Params
{
};

// Function AC2.AcTogglePanel.BP_Forward
struct UAcTogglePanel_BP_Forward_Params
{
};

// Function AC2.AcTrackSpline.GetSpline
struct AAcTrackSpline_GetSpline_Params
{
	class USplineComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AC2.AcTrackSpline.GetDistanceAtLocation
struct AAcTrackSpline_GetDistanceAtLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AdvancedScalabilityConfig.SetParameter
struct AAdvancedScalabilityConfig_SetParameter_Params
{
	EGraphicsOptions                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.AdvancedScalabilityConfig.saveConfig
struct AAdvancedScalabilityConfig_saveConfig_Params
{
};

// Function AC2.AdvancedScalabilityConfig.GetParameter
struct AAdvancedScalabilityConfig_GetParameter_Params
{
	EGraphicsOptions                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AdvancedScalabilityConfig.getEnum
struct AAdvancedScalabilityConfig_getEnum_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	EGraphicsOptions                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.AssistsPage.OpenPresetDialogBox
struct UAssistsPage_OpenPresetDialogBox_Params
{
};

// Function AC2.BestLapNotificationWidget.PlayShowupAnimation
struct UBestLapNotificationWidget_PlayShowupAnimation_Params
{
};

// Function AC2.BlackPage.FadeAnimationFinished
struct UBlackPage_FadeAnimationFinished_Params
{
};

// Function AC2.CarAudio.StopSounds
struct UCarAudio_StopSounds_Params
{
};

// Function AC2.CarAudio.ResumeSounds
struct UCarAudio_ResumeSounds_Params
{
};

// Function AC2.CarAvatar.TeleportCar
struct ACarAvatar_TeleportCar_Params
{
	class AAcPlayerStart*                              PlayerStart;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               resetCar;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.StopSounds
struct ACarAvatar_StopSounds_Params
{
};

// Function AC2.CarAvatar.StartLineRecording
struct ACarAvatar_StartLineRecording_Params
{
};

// Function AC2.CarAvatar.ShowDriver
struct ACarAvatar_ShowDriver_Params
{
};

// Function AC2.CarAvatar.SetTyreTemperature
struct ACarAvatar_SetTyreTemperature_Params
{
	unsigned char                                      tyreIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                newTemperature;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.SetForcedOnFlatPlane
struct ACarAvatar_SetForcedOnFlatPlane_Params
{
	bool                                               Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.SetControllerType
struct ACarAvatar_SetControllerType_Params
{
	EControllerType                                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.SetCamera
struct ACarAvatar_SetCamera_Params
{
	EMainCameraMode                                    mainMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                subMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.SetAISteerSmoothing
struct ACarAvatar_SetAISteerSmoothing_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.ServerPostNetCarState
struct ACarAvatar_ServerPostNetCarState_Params
{
	TArray<uint16_t>                                   NewState;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AC2.CarAvatar.ResumeSounds
struct ACarAvatar_ResumeSounds_Params
{
};

// Function AC2.CarAvatar.OnAIDataChanged
struct ACarAvatar_OnAIDataChanged_Params
{
};

// Function AC2.CarAvatar.NetCarStateReplicated
struct ACarAvatar_NetCarStateReplicated_Params
{
};

// Function AC2.CarAvatar.LockCarAvatarForPitstop
struct ACarAvatar_LockCarAvatarForPitstop_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               updateControls;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatar.IsABS_InAction
struct ACarAvatar_IsABS_InAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.HideDriver
struct ACarAvatar_HideDriver_Params
{
};

// Function AC2.CarAvatar.GetWingState
struct ACarAvatar_GetWingState_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWingState                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.CarAvatar.GetWheelTransform
struct ACarAvatar_GetWheelTransform_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetTyreSuspState
struct ACarAvatar_GetTyreSuspState_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTyreSuspState                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.CarAvatar.GetTOE
struct ACarAvatar_GetTOE_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetSuspTransform
struct ACarAvatar_GetSuspTransform_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetSuspPos
struct ACarAvatar_GetSuspPos_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetSteer
struct ACarAvatar_GetSteer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetSpeedMPH
struct ACarAvatar_GetSpeedMPH_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetSpeedKMH
struct ACarAvatar_GetSpeedKMH_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetRPMS
struct ACarAvatar_GetRPMS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetPitstopManager
struct ACarAvatar_GetPitstopManager_Params
{
	class UAcCarPitstopManager*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AC2.CarAvatar.GetOutsideBoundariesValue
struct ACarAvatar_GetOutsideBoundariesValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetNormalizedSplinePosition
struct ACarAvatar_GetNormalizedSplinePosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetMaxRPMS
struct ACarAvatar_GetMaxRPMS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetGForce
struct ACarAvatar_GetGForce_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetGearAsIndex
struct ACarAvatar_GetGearAsIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetGear
struct ACarAvatar_GetGear_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.CarAvatar.GetGas
struct ACarAvatar_GetGas_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetExternalMeshComponent
struct ACarAvatar_GetExternalMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AC2.CarAvatar.GetDriverInfo
struct ACarAvatar_GetDriverInfo_Params
{
	struct FDriverInfo                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AC2.CarAvatar.GetControlsStatus
struct ACarAvatar_GetControlsStatus_Params
{
	struct FControlsStatus                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.CarAvatar.GetControllerType
struct ACarAvatar_GetControllerType_Params
{
	EControllerType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetClutch
struct ACarAvatar_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetCarEntryInfo
struct ACarAvatar_GetCarEntryInfo_Params
{
	struct FCarInfo                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function AC2.CarAvatar.GetBrake
struct ACarAvatar_GetBrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.CarAvatar.GetAIState
struct ACarAvatar_GetAIState_Params
{
	struct FAIState                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.CarAvatar.CommitCarDataChanges
struct ACarAvatar_CommitCarDataChanges_Params
{
};

// Function AC2.CarAvatar.BroadcastAnimation
struct ACarAvatar_BroadcastAnimation_Params
{
	ECarAnimation                                      CarAnimation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatarRatingCalculator.OnKsonRatingReport
struct UCarAvatarRatingCalculator_OnKsonRatingReport_Params
{
	struct FRatingReport                               ratingCurrent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRatingReport                               deltaRating;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               isSessionReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.CarAvatarRatingCalculator.OnKsonLapCompletedFeedback
struct UCarAvatarRatingCalculator_OnKsonLapCompletedFeedback_Params
{
	struct FOnlineServicesLapPerformance               lapPerformance;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.CarDriverSelectionPanel.Forward
struct UCarDriverSelectionPanel_Forward_Params
{
};

// Function AC2.CarDriverSelectionPanel.Backward
struct UCarDriverSelectionPanel_Backward_Params
{
};

// Function AC2.CarSelectionPage.StopSequence
struct UCarSelectionPage_StopSequence_Params
{
};

// Function AC2.CarSelectionPage.SetStartCamera
struct UCarSelectionPage_SetStartCamera_Params
{
};

// Function AC2.CarSelectionPage.PlaySequence
struct UCarSelectionPage_PlaySequence_Params
{
};

// Function AC2.CarSelectionPage.FilterBy
struct UCarSelectionPage_FilterBy_Params
{
};

// Function AC2.CarSelectionPage.ExitShowroom
struct UCarSelectionPage_ExitShowroom_Params
{
};

// Function AC2.ControllerOptionsPage.PresetsDialog
struct UControllerOptionsPage_PresetsDialog_Params
{
};

// Function AC2.ControllerOptionsPage.ClearInput
struct UControllerOptionsPage_ClearInput_Params
{
	class UGenericInputItem*                           Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC2.ControllerOptionsPage.AdvancedInput
struct UControllerOptionsPage_AdvancedInput_Params
{
	class UGenericInputItem*                           Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC2.DriverProfileRatingPage.SetRatingCap
struct UDriverProfileRatingPage_SetRatingCap_Params
{
	struct FString                                     desiredCap;                                               // (Parm, ZeroConstructor)
};

// Function AC2.DriverProfileRatingPage.ResetRating
struct UDriverProfileRatingPage_ResetRating_Params
{
};

// Function AC2.DriverProfileRatingPage.OnDriverSummary
struct UDriverProfileRatingPage_OnDriverSummary_Params
{
	struct FOnlineServicesDriverSummary                summary;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.ExpoIntroPage.OnRestartSessionClicked
struct UExpoIntroPage_OnRestartSessionClicked_Params
{
};

// Function AC2.ExpoIntroPage.OnMainMenuClicked
struct UExpoIntroPage_OnMainMenuClicked_Params
{
};

// Function AC2.ExpoOutroPage.DoTransitionToIntroPage
struct UExpoOutroPage_DoTransitionToIntroPage_Params
{
};

// Function AC2.FireWorksAudio.Explosion
struct AFireWorksAudio_Explosion_Params
{
	TEnumAsByte<EFireWorkType>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GameIntroPage.SwitchIndexChange
struct UGameIntroPage_SwitchIndexChange_Params
{
};

// Function AC2.GameIntroPage.OnVideoEnd
struct UGameIntroPage_OnVideoEnd_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GameIntroPage.FadeIn
struct UGameIntroPage_FadeIn_Params
{
};

// Function AC2.GameIntroPage.BP_StopVideo
struct UGameIntroPage_BP_StopVideo_Params
{
};

// Function AC2.GameIntroPage.BP_PlayVideo
struct UGameIntroPage_BP_PlayVideo_Params
{
	bool                                               IsUE4Video;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GenericBarItem.BP_UpdateActivity
struct UGenericBarItem_BP_UpdateActivity_Params
{
	bool                                               active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GenericInputItem.GoCancel
struct UGenericInputItem_GoCancel_Params
{
};

// Function AC2.GenericInputItem.GoAdvanced
struct UGenericInputItem_GoAdvanced_Params
{
};

// Function AC2.GenericSelectorItem.SliderValueChanged
struct UGenericSelectorItem_SliderValueChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GenericSelectorItem.ReleasedRight
struct UGenericSelectorItem_ReleasedRight_Params
{
};

// Function AC2.GenericSelectorItem.ReleasedLeft
struct UGenericSelectorItem_ReleasedLeft_Params
{
};

// Function AC2.GenericSelectorItem.PressedRight
struct UGenericSelectorItem_PressedRight_Params
{
};

// Function AC2.GenericSelectorItem.PressedLeft
struct UGenericSelectorItem_PressedLeft_Params
{
};

// Function AC2.GhostCarManager.OnStartingLap
struct AGhostCarManager_OnStartingLap_Params
{
	double                                             Timestamp;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.GuiUtilities.PadNumberWithZeroes
struct UGuiUtilities_PadNumberWithZeroes_Params
{
	int                                                InputNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PaddingSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.GuiUtilities.GetGameViewportSize
struct UGuiUtilities_GetGameViewportSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.GuiUtilities.GetGameResolution
struct UGuiUtilities_GetGameResolution_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AC2.GuiUtilities.FormatDatedLapTimeTable
struct UGuiUtilities_FormatDatedLapTimeTable_Params
{
	TArray<struct FLapDataDated>                       InputTable;                                               // (Parm, ZeroConstructor)
	TArray<struct FLapDataPreFormatted>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.GuiUtilities.ConvertInt32ToFormattedTime
struct UGuiUtilities_ConvertInt32ToFormattedTime_Params
{
	int                                                InputTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideMillisecs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.HelpInMenu.BP_Warning
struct UHelpInMenu_BP_Warning_Params
{
};

// Function AC2.HelpInMenu.BP_PlayInitAnimation
struct UHelpInMenu_BP_PlayInitAnimation_Params
{
};

// Function AC2.HotlapLeaderboards.UpdateConnectionState
struct UHotlapLeaderboards_UpdateConnectionState_Params
{
	EOnlineServicesConnectionState                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.HotlapLeaderboards.OnHotlapData
struct UHotlapLeaderboards_OnHotlapData_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ignoreMe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.HttpStatServices.GetWRTable
struct UHttpStatServices_GetWRTable_Params
{
	struct FLapDataBase                                requestData;                                              // (Parm)
};

// Function AC2.InputPopup.UnlockNavigation
struct UInputPopup_UnlockNavigation_Params
{
};

// Function AC2.InputPopup.OnButtonReleaseDetailedEvent
struct UInputPopup_OnButtonReleaseDetailedEvent_Params
{
	unsigned char                                      _deviceIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _buttonIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _powIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _powValue;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.InputPopup.OnAxisPressDetailedEvent
struct UInputPopup_OnAxisPressDetailedEvent_Params
{
	unsigned char                                      _deviceIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                _axisIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              _value;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.InputPopup.CancelInputForward
struct UInputPopup_CancelInputForward_Params
{
};

// Function AC2.InputPopup.BP_InputReceived
struct UInputPopup_BP_InputReceived_Params
{
};

// Function AC2.KeyBindingUtil.RemoveAxisBinding
struct UKeyBindingUtil_RemoveAxisBinding_Params
{
	struct FInputAxis                                  BindingToRemove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.KeyBindingUtil.RemoveActionBinding
struct UKeyBindingUtil_RemoveActionBinding_Params
{
	struct FInputAction                                BindingToRemove;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.KeyBindingUtil.ReBindAxisKey
struct UKeyBindingUtil_ReBindAxisKey_Params
{
	struct FInputAxis                                  CurrentBinding;                                           // (Parm)
	struct FInputAxis                                  NewBinding;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.KeyBindingUtil.ReBindActionKey
struct UKeyBindingUtil_ReBindActionKey_Params
{
	struct FInputAction                                CurrentBinding;                                           // (Parm)
	struct FInputAction                                NewBinding;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.KeyBindingUtil.GetInputAxisFromMouseButtonEvent
struct UKeyBindingUtil_GetInputAxisFromMouseButtonEvent_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputAxis                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.KeyBindingUtil.GetInputAxisFromMouseAxisEvent
struct UKeyBindingUtil_GetInputAxisFromMouseAxisEvent_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputAxis                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.KeyBindingUtil.GetInputAxisFromKeyEvent
struct UKeyBindingUtil_GetInputAxisFromKeyEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputAxis                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.KeyBindingUtil.GetInputActionFromMouseButtonEvent
struct UKeyBindingUtil_GetInputActionFromMouseButtonEvent_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputAction                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.KeyBindingUtil.GetInputActionFromKeyEvent
struct UKeyBindingUtil_GetInputActionFromKeyEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInputAction                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.KeyBindingUtil.GetAllBindedInputAxis
struct UKeyBindingUtil_GetAllBindedInputAxis_Params
{
	TArray<struct FInputAxis>                          InputAxis;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.KeyBindingUtil.GetAllBindedInputActions
struct UKeyBindingUtil_GetAllBindedInputActions_Params
{
	TArray<struct FInputAction>                        Actions;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.KeyBindingUtil.AddAxisBinding
struct UKeyBindingUtil_AddAxisBinding_Params
{
	struct FInputAxis                                  NewBinding;                                               // (Parm)
	struct FInputAxis                                  CurrentBinding;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.KeyBindingUtil.AddActionBinding
struct UKeyBindingUtil_AddActionBinding_Params
{
	struct FInputAction                                NewBinding;                                               // (Parm)
	struct FInputAction                                CurrentBinding;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ListSelectionPopup.BP_InitPopup
struct UListSelectionPopup_BP_InitPopup_Params
{
};

// Function AC2.LoadingSessionsPage.UpdateLoadingInfo
struct ULoadingSessionsPage_UpdateLoadingInfo_Params
{
};

// Function AC2.MainCarHUD.OnSpotterAudioComStarted
struct AMainCarHUD_OnSpotterAudioComStarted_Params
{
	struct FAudioCommsData                             audioEventdata;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                audioEventCounter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              payload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.OnSpotterAudioComEnded
struct AMainCarHUD_OnSpotterAudioComEnded_Params
{
	int                                                audioEventCounter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.OnRatingCornerSectionCompleted
struct AMainCarHUD_OnRatingCornerSectionCompleted_Params
{
	struct FLapCarRating                               currentLap;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCornerSectionCarRating                     sectionCompleted;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.MainCarHUD.OnKsonRatingReport
struct AMainCarHUD_OnKsonRatingReport_Params
{
	struct FRatingReport                               ratingCurrent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRatingReport                               deltaRating;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               isSessionReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.OnKSONLeaderboardData
struct AMainCarHUD_OnKSONLeaderboardData_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDriverCarClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.OnKSONConnectionStateChanged
struct AMainCarHUD_OnKSONConnectionStateChanged_Params
{
	EOnlineServicesConnectionState                     ConnectionState;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.OnKsonAchievementEarned
struct AMainCarHUD_OnKsonAchievementEarned_Params
{
	int                                                achievementId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUD.CycleNextVirtualDesktop
struct AMainCarHUD_CycleNextVirtualDesktop_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainCarHUDWidgetHost.OnOptionsUpdated
struct UMainCarHUDWidgetHost_OnOptionsUpdated_Params
{
	struct FUserOptions                                newOptions;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.MainCarHUDWidgetHost.OnAddItem
struct UMainCarHUDWidgetHost_OnAddItem_Params
{
	class UAcRaceWidgetBase*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rowSpan;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                columnSpan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               scaleToFitX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  horizontalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    verticalAlignment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.MainPage.QuitPopup
struct UMainPage_QuitPopup_Params
{
};

// Function AC2.MainPage.OnMPServerTimeout
struct UMainPage_OnMPServerTimeout_Params
{
};

// Function AC2.MainPage.OnMPServerReceived
struct UMainPage_OnMPServerReceived_Params
{
	TArray<struct FOnlineServicesMPServerInfo>         sortedServerList;                                         // (Parm, ZeroConstructor)
};

// Function AC2.MainSelectorItem.ReleasedRight
struct UMainSelectorItem_ReleasedRight_Params
{
};

// Function AC2.MainSelectorItem.ReleasedLeft
struct UMainSelectorItem_ReleasedLeft_Params
{
};

// Function AC2.MainSelectorItem.PressedRight
struct UMainSelectorItem_PressedRight_Params
{
};

// Function AC2.MainSelectorItem.PressedLeft
struct UMainSelectorItem_PressedLeft_Params
{
};

// Function AC2.MultiplayerPanel.SetInstantJoinInfoVisible
struct UMultiplayerPanel_SetInstantJoinInfoVisible_Params
{
	bool                                               desiredVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.OnlineServices.UpdateDriverAccount
struct UOnlineServices_UpdateDriverAccount_Params
{
	struct FGamePlatformUserAccountData                account;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.OnlineServices.RequestMPServerList
struct UOnlineServices_RequestMPServerList_Params
{
	struct FOnlineServicesRequestMPServerListOptions   requestOptions;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AC2.OnlineServices.RequestHotlapData
struct UOnlineServices_RequestHotlapData_Params
{
	struct FString                                     TrackName;                                                // (Parm, ZeroConstructor)
	int                                                Take;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Skip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                eventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              minWetness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeDriver;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useCurrentCarModel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.OnlineServices.RequestDriverSummary
struct UOnlineServices_RequestDriverSummary_Params
{
};

// Function AC2.OnlineServices.RequestDriverAccountData
struct UOnlineServices_RequestDriverAccountData_Params
{
};

// Function AC2.OnlineServices.GetSteamAchievement
struct UOnlineServices_GetSteamAchievement_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFakeSteamAchievement                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.PausePageContainer.ToggleBlurStrength
struct UPausePageContainer_ToggleBlurStrength_Params
{
	bool                                               isStrong;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PausePageContainer.SetTitleText
struct UPausePageContainer_SetTitleText_Params
{
	struct FText                                       TextValue;                                                // (Parm)
};

// Function AC2.PausePageContainer.SetBlurStrength
struct UPausePageContainer_SetBlurStrength_Params
{
	float                                              blurStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.UseAutoPitstopRequest
struct APlayerCarController_UseAutoPitstopRequest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.PlayerCarController.SetTimeMultiplier
struct APlayerCarController_SetTimeMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.SetCurrentReplayTimeToSeconds
struct APlayerCarController_SetCurrentReplayTimeToSeconds_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.SetCurrentReplayPausedState
struct APlayerCarController_SetCurrentReplayPausedState_Params
{
	bool                                               bDoPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.PlayerCarController.ReturnToPit
struct APlayerCarController_ReturnToPit_Params
{
};

// Function AC2.PlayerCarController.GetStartReplayTimeInSeconds
struct APlayerCarController_GetStartReplayTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.PlayerCarController.GetCurrentReplayTotalTimeInSeconds
struct APlayerCarController_GetCurrentReplayTotalTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.PlayerCarController.GetCurrentReplayCurrentTimeInSeconds
struct APlayerCarController_GetCurrentReplayCurrentTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_TogglePitLimiter
struct APlayerCarController_acc_TogglePitLimiter_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_ToggleIdealLine
struct APlayerCarController_acc_ToggleIdealLine_Params
{
};

// Function AC2.PlayerCarController.acc_TestFastLane
struct APlayerCarController_acc_TestFastLane_Params
{
	int                                                CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_SwapDriverInstant
struct APlayerCarController_acc_SwapDriverInstant_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           NewDriverIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_SwapDriverFull
struct APlayerCarController_acc_SwapDriverFull_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           NewDriverIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_StartLineRecording
struct APlayerCarController_acc_StartLineRecording_Params
{
};

// Function AC2.PlayerCarController.acc_setTC
struct APlayerCarController_acc_setTC_Params
{
	unsigned char                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_setSessionOver
struct APlayerCarController_acc_setSessionOver_Params
{
};

// Function AC2.PlayerCarController.acc_setDrivethruPenaltyToCarindex
struct APlayerCarController_acc_setDrivethruPenaltyToCarindex_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_setABS
struct APlayerCarController_acc_setABS_Params
{
	unsigned char                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_RequestPitstop
struct APlayerCarController_acc_RequestPitstop_Params
{
	int                                                CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_RecordSpeedAvgs
struct APlayerCarController_acc_RecordSpeedAvgs_Params
{
};

// Function AC2.PlayerCarController.acc_RecordMicroSectorTimes
struct APlayerCarController_acc_RecordMicroSectorTimes_Params
{
};

// Function AC2.PlayerCarController.acc_pitStopWindowTime
struct APlayerCarController_acc_pitStopWindowTime_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             addTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_DetachControllers
struct APlayerCarController_acc_DetachControllers_Params
{
};

// Function AC2.PlayerCarController.acc_DecreaseLapCount
struct APlayerCarController_acc_DecreaseLapCount_Params
{
	int                                                CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_carUpdatePitStrategy
struct APlayerCarController_acc_carUpdatePitStrategy_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_carStopOnPitzone
struct APlayerCarController_acc_carStopOnPitzone_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_carEngineOn
struct APlayerCarController_acc_carEngineOn_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_carDisqualifyCar
struct APlayerCarController_acc_carDisqualifyCar_Params
{
	uint16_t                                           CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_CancelPitstop
struct APlayerCarController_acc_CancelPitstop_Params
{
	int                                                CarIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_BackfireFlames
struct APlayerCarController_acc_BackfireFlames_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_AddSplit
struct APlayerCarController_acc_AddSplit_Params
{
	unsigned char                                      IsValid;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_AddPenaltyToLap
struct APlayerCarController_acc_AddPenaltyToLap_Params
{
	int                                                lapIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.PlayerCarController.acc_AddCutPenalty
struct APlayerCarController_acc_AddCutPenalty_Params
{
};

// Function AC2.RaceEndPage.UpdateConnectionState
struct URaceEndPage_UpdateConnectionState_Params
{
	EOnlineServicesConnectionState                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RaceEndPage.OnHotlapData
struct URaceEndPage_OnHotlapData_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ignoreMe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RaceMainGui.OnSplitEvent
struct URaceMainGui_OnSplitEvent_Params
{
};

// Function AC2.RaceMainGui.OnLapEvent
struct URaceMainGui_OnLapEvent_Params
{
};

// Function AC2.RaceMainGui.OnKsonRatingReport
struct URaceMainGui_OnKsonRatingReport_Params
{
	struct FRatingReport                               ratingCurrent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRatingReport                               deltaRating;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               isSessionReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RaceMainGui.IsEndlessSession
struct URaceMainGui_IsEndlessSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetSpeedDelta
struct URaceMainGui_GetSpeedDelta_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetSessionStartTime
struct URaceMainGui_GetSessionStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetSessionEndTime
struct URaceMainGui_GetSessionEndTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetPhysicsLateCount
struct URaceMainGui_GetPhysicsLateCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetPhysicsCPUOccupancy
struct URaceMainGui_GetPhysicsCPUOccupancy_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetPhysicsBlendCount
struct URaceMainGui_GetPhysicsBlendCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetCurrentSessionType
struct URaceMainGui_GetCurrentSessionType_Params
{
	ESessionType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetCurrentSessionTime
struct URaceMainGui_GetCurrentSessionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetCurrentSessionPhase
struct URaceMainGui_GetCurrentSessionPhase_Params
{
	ERaceSessionPhase                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetCarCount
struct URaceMainGui_GetCarCount_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceMainGui.GetCarAtPosition
struct URaceMainGui_GetCarAtPosition_Params
{
	unsigned char                                      Position;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.RaceNotificationManagerWidget.StartOutroForCurrentAnimation
struct URaceNotificationManagerWidget_StartOutroForCurrentAnimation_Params
{
};

// Function AC2.RaceNotificationManagerWidget.StartIntroForCurrentAnimation
struct URaceNotificationManagerWidget_StartIntroForCurrentAnimation_Params
{
};

// Function AC2.RaceNotificationManagerWidget.EndCurrentAnimation
struct URaceNotificationManagerWidget_EndCurrentAnimation_Params
{
};

// Function AC2.RacePausePageBase.GoToSetup
struct URacePausePageBase_GoToSetup_Params
{
};

// Function AC2.RacePausePageBase.GoToResults
struct URacePausePageBase_GoToResults_Params
{
};

// Function AC2.RacePausePageBase.GoToOptions
struct URacePausePageBase_GoToOptions_Params
{
};

// Function AC2.RacePausePageBase.GoToMain
struct URacePausePageBase_GoToMain_Params
{
};

// Function AC2.RacePausePageBase.GoToHotlapLeaderboard
struct URacePausePageBase_GoToHotlapLeaderboard_Params
{
};

// Function AC2.RacePausePageBase.GoToFOV
struct URacePausePageBase_GoToFOV_Params
{
};

// Function AC2.RacePausePageBase.ExitPausePage
struct URacePausePageBase_ExitPausePage_Params
{
};

// Function AC2.RaceTransitionPage.StartFade
struct URaceTransitionPage_StartFade_Params
{
	float                                              timeMult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RaceTransitionPage.GetCurrentGameVersion
struct URaceTransitionPage_GetCurrentGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.RaceTransitionPage.EndFade
struct URaceTransitionPage_EndFade_Params
{
	float                                              timeMult;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RatingItem.OnExpandAnimationEnded
struct URatingItem_OnExpandAnimationEnded_Params
{
};

// Function AC2.RatingItem.OnCollapseAnimationEnded
struct URatingItem_OnCollapseAnimationEnded_Params
{
};

// Function AC2.RatingProgressionWidget.OnShowRatingWidgetAnimated
struct URatingProgressionWidget_OnShowRatingWidgetAnimated_Params
{
};

// Function AC2.RatingProgressionWidget.OnKsonRatingReport
struct URatingProgressionWidget_OnKsonRatingReport_Params
{
	struct FRatingReport                               ratingCurrent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRatingReport                               deltaRating;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               isSessionReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RatingTCTrackItem.SetTrackData
struct URatingTCTrackItem_SetTrackData_Params
{
	struct FString                                     TrackName;                                                // (Parm, ZeroConstructor)
	class UTexture2D*                                  trackImage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FlagImage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     starText;                                                 // (Parm, ZeroConstructor)
};

// Function AC2.RatingWidget.UpdateUIState
struct URatingWidget_UpdateUIState_Params
{
	int                                                recursionCounter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RatingWidget.SetNewTargetUIState
struct URatingWidget_SetNewTargetUIState_Params
{
	TEnumAsByte<ERatingWidgetUIState>                  targetUIState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                recursionCounter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RatingWidget.OnRatingItemExpandedAnimationEnded
struct URatingWidget_OnRatingItemExpandedAnimationEnded_Params
{
	int                                                ratingIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isExpanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RatingWidget.OnRatingItemCollapsedAnimationEnded
struct URatingWidget_OnRatingItemCollapsedAnimationEnded_Params
{
	int                                                ratingIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isCollapsed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.RealismPage.OpenPresetDialogBox
struct URealismPage_OpenPresetDialogBox_Params
{
};

// Function AC2.ReplayController.SetTimeMultiplier
struct AReplayController_SetTimeMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ReplayController.SetCurrentReplayTimeToSeconds
struct AReplayController_SetCurrentReplayTimeToSeconds_Params
{
	int                                                Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ReplayController.SetCurrentReplayPausedState
struct AReplayController_SetCurrentReplayPausedState_Params
{
	bool                                               bDoPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ReplayController.OnPossess
struct AReplayController_OnPossess_Params
{
};

// Function AC2.ReplayController.GetStartReplayTimeInSeconds
struct AReplayController_GetStartReplayTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ReplayController.GetCurrentReplayTotalTimeInSeconds
struct AReplayController_GetCurrentReplayTotalTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ReplayController.GetCurrentReplayCurrentTimeInSeconds
struct AReplayController_GetCurrentReplayCurrentTimeInSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ReplayHUD.SlowMotionClick
struct UReplayHUD_SlowMotionClick_Params
{
};

// Function AC2.ReplayHUD.SliderOnValueChange
struct UReplayHUD_SliderOnValueChange_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ReplayHUD.SliderMouseEnd
struct UReplayHUD_SliderMouseEnd_Params
{
};

// Function AC2.ReplayHUD.SliderMouseCaptureEnd
struct UReplayHUD_SliderMouseCaptureEnd_Params
{
};

// Function AC2.ReplayHUD.SliderMouseCaptureBegin
struct UReplayHUD_SliderMouseCaptureBegin_Params
{
};

// Function AC2.ReplayHUD.SliderMouseBegin
struct UReplayHUD_SliderMouseBegin_Params
{
};

// Function AC2.ReplayHUD.Remove_PB
struct UReplayHUD_Remove_PB_Params
{
};

// Function AC2.ReplayHUD.QuitClick
struct UReplayHUD_QuitClick_Params
{
};

// Function AC2.ReplayHUD.PrevCarClick
struct UReplayHUD_PrevCarClick_Params
{
};

// Function AC2.ReplayHUD.PrevCamClick
struct UReplayHUD_PrevCamClick_Params
{
};

// Function AC2.ReplayHUD.PlayPauseClick
struct UReplayHUD_PlayPauseClick_Params
{
};

// Function AC2.ReplayHUD.PhotoClick
struct UReplayHUD_PhotoClick_Params
{
};

// Function AC2.ReplayHUD.NextCarClick
struct UReplayHUD_NextCarClick_Params
{
};

// Function AC2.ReplayHUD.NextCamClick
struct UReplayHUD_NextCamClick_Params
{
};

// Function AC2.ReplayHUD.IncreaseSpeedClick
struct UReplayHUD_IncreaseSpeedClick_Params
{
};

// Function AC2.ReplayHUD.GetTimerSliderValue
struct UReplayHUD_GetTimerSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ReplayHUD.DecreaseSpeedClick
struct UReplayHUD_DecreaseSpeedClick_Params
{
};

// Function AC2.SetupManager.GetSetupList
struct USetupManager_GetSetupList_Params
{
	TArray<struct FName>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.SetupManager.GetSetup
struct USetupManager_GetSetup_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCarSetup                                   Destination;                                              // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.SetupManager.GetDamperLutList
struct USetupManager_GetDamperLutList_Params
{
	TArray<struct FName>                               List;                                                     // (Parm, OutParm, ZeroConstructor)
	int                                                Axle;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.SetupManager.GetDamperLut
struct USetupManager_GetDamperLut_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FDamperLut                                  Destination;                                              // (Parm, OutParm, ReferenceParm)
	int                                                Axle;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.SetupPage.OpenYesNoPopup
struct USetupPage_OpenYesNoPopup_Params
{
};

// Function AC2.SetupPage.OpenLoadSaveDialogBox
struct USetupPage_OpenLoadSaveDialogBox_Params
{
};

// Function AC2.SimpleAreaChart.SetBackground
struct USimpleAreaChart_SetBackground_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AC2.SimpleAreaChart.OnCppPaint
struct USimpleAreaChart_OnCppPaint_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function AC2.SimpleColumnChart.ClearColumns
struct USimpleColumnChart_ClearColumns_Params
{
};

// Function AC2.SimpleColumnChart.AddColumn
struct USimpleColumnChart_AddColumn_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.SimpleColumnChartColumn.SetValue
struct USimpleColumnChartColumn_SetValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.SinglePlayerColumnPage.UpdateLapInfo
struct USinglePlayerColumnPage_UpdateLapInfo_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDriverCarClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.Skin.SetUserOverlay
struct USkin_SetUserOverlay_Params
{
	struct FString                                     folder;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.Skin.SetTertiaryColor
struct USkin_SetTertiaryColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AC2.Skin.SetSecondaryColor
struct USkin_SetSecondaryColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AC2.Skin.SetPrimaryColor
struct USkin_SetPrimaryColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AC2.Skin.LoadImageAsTexture
struct USkin_LoadImageAsTexture_Params
{
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.Skin.ListSkinsForCar
struct USkin_ListSkinsForCar_Params
{
	struct FString                                     Car;                                                      // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.Skin.ListCars
struct USkin_ListCars_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.Skin.ApplySkin
struct USkin_ApplySkin_Params
{
	struct FString                                     Skin;                                                     // (Parm, ZeroConstructor)
};

// Function AC2.SpecialEventSinglePanel.OnExpandAnimationEnded
struct USpecialEventSinglePanel_OnExpandAnimationEnded_Params
{
};

// Function AC2.SpecialEventsPage.OnHotlapData
struct USpecialEventsPage_OnHotlapData_Params
{
	struct FOnlineServicesHotlapUpdate                 rankUpdate;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FOnlineServicesHotlapEntry>          entries;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ignoreMe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.SpecialEventsPage.ClickRightShoulder
struct USpecialEventsPage_ClickRightShoulder_Params
{
};

// Function AC2.SpecialEventsPage.ClickPreviousPage
struct USpecialEventsPage_ClickPreviousPage_Params
{
};

// Function AC2.SpecialEventsPage.ClickNextPage
struct USpecialEventsPage_ClickNextPage_Params
{
};

// Function AC2.SpecialEventsPage.ClickLeftShoulder
struct USpecialEventsPage_ClickLeftShoulder_Params
{
};

// Function AC2.TimeGraphPanel.DrawLinesThick
struct UTimeGraphPanel_DrawLinesThick_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
	TArray<struct FVector2D>                           Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                Tint;                                                     // (Parm, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.TimeTable.OnItemFocused
struct UTimeTable_OnItemFocused_Params
{
	class UTimeTableItem*                              Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC2.TrackAvatar.UpdateGarageLights
struct ATrackAvatar_UpdateGarageLights_Params
{
	bool                                               bIsLightOn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.TrackAvatar.OnPitLaneEntry
struct ATrackAvatar_OnPitLaneEntry_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.TrackAvatar.GetMapCapture
struct ATrackAvatar_GetMapCapture_Params
{
	class ASceneCapture2D*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.TrackAvatar.GetFastLaneDistanceToPoint
struct ATrackAvatar_GetFastLaneDistanceToPoint_Params
{
	struct FVector                                     PointLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.TrackAvatar.GetFastLane
struct ATrackAvatar_GetFastLane_Params
{
	class AAcTrackSpline*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.TrackSelectionPage.BP_PlayVideo
struct UTrackSelectionPage_BP_PlayVideo_Params
{
};

// Function AC2.VideoOptionsPage.ResolutionConfirm
struct UVideoOptionsPage_ResolutionConfirm_Params
{
	class UAcPageBase*                                 popup;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC2.VideoOptionsPage.ResolutionCancel
struct UVideoOptionsPage_ResolutionCancel_Params
{
	class UAcPageBase*                                 popup;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.UpdateFromFile
struct UViewOptionsLibrary_UpdateFromFile_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.ToggleTemporalAA
struct UViewOptionsLibrary_ToggleTemporalAA_Params
{
};

// Function AC2.ViewOptionsLibrary.ToggleMotionBlur
struct UViewOptionsLibrary_ToggleMotionBlur_Params
{
};

// Function AC2.ViewOptionsLibrary.TestSetScreenResolution
struct UViewOptionsLibrary_TestSetScreenResolution_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TestSaveVideoModeAndQuality
struct UViewOptionsLibrary_TestSaveVideoModeAndQuality_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TestRevertVideoSettings
struct UViewOptionsLibrary_TestRevertVideoSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TestRequestResolutionChange
struct UViewOptionsLibrary_TestRequestResolutionChange_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWindowMode>                           Window;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TestConfirmResolution
struct UViewOptionsLibrary_TestConfirmResolution_Params
{
	bool                                               isConfirmed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TestChangeScreenResolution
struct UViewOptionsLibrary_TestChangeScreenResolution_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.TempApplyAndSave
struct UViewOptionsLibrary_TempApplyAndSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetTemporalAAEnabled
struct UViewOptionsLibrary_SetTemporalAAEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetSharpen
struct UViewOptionsLibrary_SetSharpen_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetSetting
struct UViewOptionsLibrary_SetSetting_Params
{
	EGraphicsOptions                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetScreenResolution
struct UViewOptionsLibrary_SetScreenResolution_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetMotionBlurEnabled
struct UViewOptionsLibrary_SetMotionBlurEnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SetHDREnabled
struct UViewOptionsLibrary_SetHDREnabled_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SaveVideoSettings
struct UViewOptionsLibrary_SaveVideoSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SaveToFile
struct UViewOptionsLibrary_SaveToFile_Params
{
	unsigned char                                      maxCars;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      mirrorQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMBlurEnabled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AATemporal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ColorSaturation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isHDR;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sharpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.SaveSettings
struct UViewOptionsLibrary_SaveSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.LaunchConsoleCMD
struct UViewOptionsLibrary_LaunchConsoleCMD_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function AC2.ViewOptionsLibrary.GetValueFromSave
struct UViewOptionsLibrary_GetValueFromSave_Params
{
	TArray<struct FString>                             ValueNames;                                               // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewGUIResult                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.ViewOptionsLibrary.GetValue
struct UViewOptionsLibrary_GetValue_Params
{
	TArray<struct FString>                             ValueNames;                                               // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewGUIResult                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AC2.ViewOptionsLibrary.GetTemporalAAEnabled
struct UViewOptionsLibrary_GetTemporalAAEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetSharpen
struct UViewOptionsLibrary_GetSharpen_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetSetting
struct UViewOptionsLibrary_GetSetting_Params
{
	EGraphicsOptions                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetScreenResolution
struct UViewOptionsLibrary_GetScreenResolution_Params
{
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetProjectVersion
struct UViewOptionsLibrary_GetProjectVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AC2.ViewOptionsLibrary.GetMotionBlurEnabled
struct UViewOptionsLibrary_GetMotionBlurEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetMirrorQualityLevel
struct UViewOptionsLibrary_GetMirrorQualityLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetMaxCarsVisible
struct UViewOptionsLibrary_GetMaxCarsVisible_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetHDREnabled
struct UViewOptionsLibrary_GetHDREnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetConsoleCMDValue
struct UViewOptionsLibrary_GetConsoleCMDValue_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function AC2.ViewOptionsLibrary.GetColorSaturation
struct UViewOptionsLibrary_GetColorSaturation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.GetAllScreenResolutions
struct UViewOptionsLibrary_GetAllScreenResolutions_Params
{
	TArray<struct FString>                             Resolutions;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.ChangeScreenResolution
struct UViewOptionsLibrary_ChangeScreenResolution_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fullscreen;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsLibrary.ApplyVSync
struct UViewOptionsLibrary_ApplyVSync_Params
{
};

// Function AC2.ViewOptionsSaves.SaveGraphicOptions
struct UViewOptionsSaves_SaveGraphicOptions_Params
{
	unsigned char                                      MirrorLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      maxCars;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isBlur;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isTemporal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              colourSaturation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHDREnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sharpness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC2.ViewOptionsSaves.GetTemporalEnabled
struct UViewOptionsSaves_GetTemporalEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsSaves.GetMotionBlurEnabled
struct UViewOptionsSaves_GetMotionBlurEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsSaves.GetMirrorQualityLevel
struct UViewOptionsSaves_GetMirrorQualityLevel_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsSaves.GetMaxCarsVisible
struct UViewOptionsSaves_GetMaxCarsVisible_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.ViewOptionsSaves.GetHDR
struct UViewOptionsSaves_GetHDR_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC2.WearEditorPage.AnimDriver
struct UWearEditorPage_AnimDriver_Params
{
};

// Function AC2.YesNoPopup.BP_InitPopup
struct UYesNoPopup_BP_InitPopup_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
