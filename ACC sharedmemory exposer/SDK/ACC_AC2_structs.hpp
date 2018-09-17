#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Basic.hpp"
#include "ACC_UMG_classes.hpp"
#include "ACC_Engine_classes.hpp"
#include "ACC_CoreUObject_classes.hpp"
#include "ACC_SlateCore_classes.hpp"
#include "ACC_FMODStudio_classes.hpp"
#include "ACC_AIModule_classes.hpp"
#include "ACC_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AC2.ECarAnimation
enum class ECarAnimation : uint8_t
{
	ECarAnimation__GearUp          = 0,
	ECarAnimation__GearDown        = 1,
	ECarAnimation__Wiper           = 2,
	ECarAnimation__Lights          = 3,
	ECarAnimation__Display         = 4,
	ECarAnimation__FlashingLights  = 5,
	ECarAnimation__PitLimiter      = 6,
	ECarAnimation__Radio           = 7,
	ECarAnimation__TC              = 8,
	ECarAnimation__ABS             = 9,
	ECarAnimation__BrakeBias       = 10,
	ECarAnimation__RainLight       = 11,
	ECarAnimation__IgnitionSequenceOn = 12,
	ECarAnimation__EngineMap       = 13,
	ECarAnimation__DirectionLightLeft = 14,
	ECarAnimation__DirectionLightRight = 15,
	ECarAnimation__DirectionLights = 16,
	ECarAnimation__FuelMixture     = 17,
	ECarAnimation__NeutralGear     = 18,
	ECarAnimation__StandardLight   = 19,
	ECarAnimation__EnduranceLight  = 20,
	ECarAnimation__EngineStarter   = 21,
	ECarAnimation__EngineStarterNotify = 22,
	ECarAnimation__EngineStarterReleased = 23,
	ECarAnimation__EngineStarterOff = 24,
	ECarAnimation__ReverseGear     = 25,
	ECarAnimation__HazardLights    = 26,
	ECarAnimation__ECarAnimation_MAX = 27
};


// Enum AC2.EOnlineServicesConnectionState
enum class EOnlineServicesConnectionState : uint8_t
{
	EOnlineServicesConnectionState__PreInit = 0,
	EOnlineServicesConnectionState__Init = 1,
	EOnlineServicesConnectionState__Off = 2,
	EOnlineServicesConnectionState__Connected = 3,
	EOnlineServicesConnectionState__Disconnected = 4,
	EOnlineServicesConnectionState__Error = 5,
	EOnlineServicesConnectionState__EOnlineServicesConnectionState_MAX = 6
};


// Enum AC2.EKunosDriverCategory
enum class EKunosDriverCategory : uint8_t
{
	EKunosDriverCategory__Normal   = 0,
	EKunosDriverCategory__Developer = 1,
	EKunosDriverCategory__Certified = 2,
	EKunosDriverCategory__NotSet   = 3,
	EKunosDriverCategory__EKunosDriverCategory_MAX = 4
};


// Enum AC2.EDriverCategory
enum class EDriverCategory : uint8_t
{
	EDriverCategory__Platinum      = 0,
	EDriverCategory__Gold          = 1,
	EDriverCategory__Silver        = 2,
	EDriverCategory__Bronze        = 3,
	EDriverCategory__EDriverCategory_MAX = 4
};


// Enum AC2.ESessionType
enum class ESessionType : uint8_t
{
	ESessionType__FreePractice1    = 0,
	ESessionType__FreePractice2    = 1,
	ESessionType__PreQualifying    = 2,
	ESessionType__WarmUp           = 3,
	ESessionType__Qualifying       = 4,
	ESessionType__Qualifying1      = 5,
	ESessionType__Qualifying2      = 6,
	ESessionType__Qualifying3      = 7,
	ESessionType__Qualifying4      = 8,
	ESessionType__Superpole        = 9,
	ESessionType__Race             = 10,
	ESessionType__HotlapSprint     = 11,
	ESessionType__HotlapEndurance  = 12,
	ESessionType__HotlapSuperpole  = 13,
	ESessionType__ESessionType_MAX = 14
};


// Enum AC2.EOnlineServicesHotlapUpdateType
enum class EOnlineServicesHotlapUpdateType : uint8_t
{
	EOnlineServicesHotlapUpdateType__NoEntry = 0,
	EOnlineServicesHotlapUpdateType__NoChange = 1,
	EOnlineServicesHotlapUpdateType__LostPosition = 2,
	EOnlineServicesHotlapUpdateType__GainedPosition = 3,
	EOnlineServicesHotlapUpdateType__MinorRecord = 4,
	EOnlineServicesHotlapUpdateType__WorldRecord = 5,
	EOnlineServicesHotlapUpdateType__NotSet = 6,
	EOnlineServicesHotlapUpdateType__EOnlineServicesHotlapUpdateType_MAX = 7
};


// Enum AC2.ESafetyRating
enum class ESafetyRating : uint8_t
{
	ESafetyRating__NotRated        = 0,
	ESafetyRating__W               = 1,
	ESafetyRating__D               = 2,
	ESafetyRating__C               = 3,
	ESafetyRating__B               = 4,
	ESafetyRating__A               = 5,
	ESafetyRating__Error           = 6,
	ESafetyRating__ESafetyRating_MAX = 7
};


// Enum AC2.EAudioCommsAppearanceHint
enum class EAudioCommsAppearanceHint : uint8_t
{
	EAudioCommsAppearanceHint__NotSet = 0,
	EAudioCommsAppearanceHint__Gossip = 1,
	EAudioCommsAppearanceHint__Info = 2,
	EAudioCommsAppearanceHint__Hint = 3,
	EAudioCommsAppearanceHint__Warning = 4,
	EAudioCommsAppearanceHint__LastWarning = 5,
	EAudioCommsAppearanceHint__BadConsequences = 6,
	EAudioCommsAppearanceHint__EAudioCommsAppearanceHint_MAX = 7
};


// Enum AC2.EAudioCommsLevel
enum class EAudioCommsLevel : uint8_t
{
	EAudioCommsLevel__High         = 0,
	EAudioCommsLevel__Medium       = 1,
	EAudioCommsLevel__Low          = 2,
	EAudioCommsLevel__EAudioCommsLevel_MAX = 3
};


// Enum AC2.EAudioCommsDataType
enum class EAudioCommsDataType : uint8_t
{
	EAudioCommsDataType__None      = 0,
	EAudioCommsDataType__RaceStartTarget = 1,
	EAudioCommsDataType__RadioGreenLight = 2,
	EAudioCommsDataType__RaceOver  = 3,
	EAudioCommsDataType__RaceOverTarget = 4,
	EAudioCommsDataType__SessionOver = 5,
	EAudioCommsDataType__ToGo1m    = 6,
	EAudioCommsDataType__ToGo5m    = 7,
	EAudioCommsDataType__InvalidLap = 8,
	EAudioCommsDataType__RainBegin = 9,
	EAudioCommsDataType__RainWarning = 10,
	EAudioCommsDataType__PersonalBestLap = 11,
	EAudioCommsDataType__OverallBestLap = 12,
	EAudioCommsDataType__YellowFlag = 13,
	EAudioCommsDataType__BlueFlag  = 14,
	EAudioCommsDataType__GreenFlag = 15,
	EAudioCommsDataType__RaceOverPending = 16,
	EAudioCommsDataType__LastLap   = 17,
	EAudioCommsDataType__LastLapAsLeader = 18,
	EAudioCommsDataType__HalfRace  = 19,
	EAudioCommsDataType__RaceOverNoTarget = 20,
	EAudioCommsDataType__RaceStart = 21,
	EAudioCommsDataType__HotstintStart = 22,
	EAudioCommsDataType__EAudioCommsDataType_MAX = 23
};


// Enum AC2.ECarModelType
enum class ECarModelType : uint8_t
{
	ECarModelType__Porsche_991_GT3_R = 0,
	ECarModelType__Mercedes_AMG_GT3 = 1,
	ECarModelType__Ferrari_488_GT3 = 2,
	ECarModelType__Audi_R8_LMS     = 3,
	ECarModelType__Lamborghini_Huracan_GT3 = 4,
	ECarModelType__Mclaren_650s_GT3 = 5,
	ECarModelType__Nissan_GT_R_Nismo_GT3 = 6,
	ECarModelType__BMW_M6_GT3      = 7,
	ECarModelType__Bentley_Continental_GT3 = 8,
	ECarModelType__Porsche_991II_GT3_Cup = 9,
	ECarModelType__Nissan_GT_R_Nismo_GT301 = 10,
	ECarModelType__Bentley_Continental_GT301 = 11,
	ECarModelType__Aston_Martin_Vantage_V12_GT3 = 12,
	ECarModelType__Lamborghini_Gallardo_R_EX = 13,
	ECarModelType__Jaguar_G3       = 14,
	ECarModelType__Lexus_RC_F_GT3  = 15,
	ECarModelType__Lamborghini_Huracan_GT301 = 16,
	ECarModelType__ECarModelType_MAX = 17
};


// Enum AC2.ELoosePartType
enum class ELoosePartType : uint8_t
{
	ELoosePartType__ProtectionNet  = 0,
	ELoosePartType__SteerCable     = 1,
	ELoosePartType__ELoosePartType_MAX = 2
};


// Enum AC2.ECarWiperType
enum class ECarWiperType : uint8_t
{
	ECarWiperType__RestOnCenter    = 0,
	ECarWiperType__RestOnLeft      = 1,
	ECarWiperType__RestOnRight     = 2,
	ECarWiperType__ECarWiperType_MAX = 3
};


// Enum AC2.ECarDigitalDisplayType
enum class ECarDigitalDisplayType : uint8_t
{
	ECarDigitalDisplayType__ABS    = 0,
	ECarDigitalDisplayType__TC     = 1,
	ECarDigitalDisplayType__LapCount = 2,
	ECarDigitalDisplayType__Rpm    = 3,
	ECarDigitalDisplayType__Speed  = 4,
	ECarDigitalDisplayType__Fuel   = 5,
	ECarDigitalDisplayType__Delta  = 6,
	ECarDigitalDisplayType__Pitlimiter = 7,
	ECarDigitalDisplayType__GasPerc = 8,
	ECarDigitalDisplayType__CurrentLapTime = 9,
	ECarDigitalDisplayType__BestLapTime = 10,
	ECarDigitalDisplayType__WaterTemp = 11,
	ECarDigitalDisplayType__Gear   = 12,
	ECarDigitalDisplayType__TyrePression_LF = 13,
	ECarDigitalDisplayType__TyrePression_RF = 14,
	ECarDigitalDisplayType__TyrePression_LR = 15,
	ECarDigitalDisplayType__TyrePression_RR = 16,
	ECarDigitalDisplayType__FuelLaps = 17,
	ECarDigitalDisplayType__BrakeBias = 18,
	ECarDigitalDisplayType__FuelConsumed = 19,
	ECarDigitalDisplayType__PredLapTime = 20,
	ECarDigitalDisplayType__ABS_InAction = 21,
	ECarDigitalDisplayType__TC_InAction = 22,
	ECarDigitalDisplayType__Slip_LF = 23,
	ECarDigitalDisplayType__Slip_RF = 24,
	ECarDigitalDisplayType__Slip_LR = 25,
	ECarDigitalDisplayType__Slip_RR = 26,
	ECarDigitalDisplayType__Lock_LF = 27,
	ECarDigitalDisplayType__Lock_RF = 28,
	ECarDigitalDisplayType__Lock_LR = 29,
	ECarDigitalDisplayType__Lock_RR = 30,
	ECarDigitalDisplayType__FlashingLight = 31,
	ECarDigitalDisplayType__EngineOff = 32,
	ECarDigitalDisplayType__TC_Level0 = 33,
	ECarDigitalDisplayType__ABS_Level0 = 34,
	ECarDigitalDisplayType__TyreTemperature_LF = 35,
	ECarDigitalDisplayType__TyreTemperature_RF = 36,
	ECarDigitalDisplayType__TyreTemperature_LR = 37,
	ECarDigitalDisplayType__TyreTemperature_RR = 38,
	ECarDigitalDisplayType__EngineMap = 39,
	ECarDigitalDisplayType__LastLapTime = 40,
	ECarDigitalDisplayType__ExhaustTemp = 41,
	ECarDigitalDisplayType__FuelPerLap = 42,
	ECarDigitalDisplayType__DirectionLightLeft = 43,
	ECarDigitalDisplayType__DirectionLightRight = 44,
	ECarDigitalDisplayType__DirectionLightShared = 45,
	ECarDigitalDisplayType__RainLight = 46,
	ECarDigitalDisplayType__ECarDigitalDisplayType_MAX = 47
};


// Enum AC2.ECarDigitalDisplayPages
enum class ECarDigitalDisplayPages : uint8_t
{
	ECarDigitalDisplayPages__RacePage1 = 0,
	ECarDigitalDisplayPages__RacePage2 = 1,
	ECarDigitalDisplayPages__RacePage3 = 2,
	ECarDigitalDisplayPages__QualifyPage = 3,
	ECarDigitalDisplayPages__WarmupPage = 4,
	ECarDigitalDisplayPages__PitLimiterPage = 5,
	ECarDigitalDisplayPages__ECarDigitalDisplayPages_MAX = 6
};


// Enum AC2.EGlovesBrand
enum class EGlovesBrand : uint8_t
{
	EGlovesBrand__AlpineStar       = 0,
	EGlovesBrand__Sparco           = 1,
	EGlovesBrand__OMP              = 2,
	EGlovesBrand__Puma             = 3,
	EGlovesBrand__Freem            = 4,
	EGlovesBrand__Sabelt           = 5,
	EGlovesBrand__EGlovesBrand_MAX = 6
};


// Enum AC2.EHelmetMaterialType
enum class EHelmetMaterialType : uint8_t
{
	EHelmetMaterialType__Chrome    = 0,
	EHelmetMaterialType__SatinMetallic = 1,
	EHelmetMaterialType__SatinPastel = 2,
	EHelmetMaterialType__GlossyPastel = 3,
	EHelmetMaterialType__GlossyMetallic = 4,
	EHelmetMaterialType__GlossyCarbon = 5,
	EHelmetMaterialType__MatteCarbon = 6,
	EHelmetMaterialType__EHelmetMaterialType_MAX = 7
};


// Enum AC2.ESkinMaterialType
enum class ESkinMaterialType : uint8_t
{
	ESkinMaterialType__Solid       = 0,
	ESkinMaterialType__Matte       = 1,
	ESkinMaterialType__Satin       = 2,
	ESkinMaterialType__Metallic    = 3,
	ESkinMaterialType__Chrome      = 4,
	ESkinMaterialType__ESkinMaterialType_MAX = 5
};


// Enum AC2.ECarLightStage
enum class ECarLightStage : uint8_t
{
	ECarLightStage__Daylights      = 0,
	ECarLightStage__HighBeam       = 1,
	ECarLightStage__Endurance      = 2,
	ECarLightStage__ECarLightStage_MAX = 3
};


// Enum AC2.ECarLightMaterialType
enum class ECarLightMaterialType : uint8_t
{
	ECarLightMaterialType__Front   = 0,
	ECarLightMaterialType__Rear    = 1,
	ECarLightMaterialType__Endurance = 2,
	ECarLightMaterialType__ECarLightMaterialType_MAX = 3
};


// Enum AC2.ECarLightMaterialParameter
enum class ECarLightMaterialParameter : uint8_t
{
	ECarLightMaterialParameter__L_indicators_intensity = 0,
	ECarLightMaterialParameter__R_indicators_intensity = 1,
	ECarLightMaterialParameter__beams_intensity = 2,
	ECarLightMaterialParameter__daylights_intensity = 3,
	ECarLightMaterialParameter__endurance_beams_intensity = 4,
	ECarLightMaterialParameter__brakes_intensity = 5,
	ECarLightMaterialParameter__lights_intensity = 6,
	ECarLightMaterialParameter__rainlights = 7,
	ECarLightMaterialParameter__ECarLightMaterialParameter_MAX = 8
};


// Enum AC2.ECarLightEvent
enum class ECarLightEvent : uint8_t
{
	ECarLightEvent__EngineOff      = 0,
	ECarLightEvent__Daylights      = 1,
	ECarLightEvent__HighBeam       = 2,
	ECarLightEvent__Endurance      = 3,
	ECarLightEvent__PitLimiter     = 4,
	ECarLightEvent__Rain           = 5,
	ECarLightEvent__Flashing       = 6,
	ECarLightEvent__DirectionLeft  = 7,
	ECarLightEvent__DirectionRight = 8,
	ECarLightEvent__ECarLightEvent_MAX = 9
};


// Enum AC2.ECarLocationTrigger
enum class ECarLocationTrigger : uint8_t
{
	ECarLocationTrigger__PitEntryLaneStart = 0,
	ECarLocationTrigger__PitEntryLaneSide = 1,
	ECarLocationTrigger__PitLaneEntry = 2,
	ECarLocationTrigger__PitLaneExit = 3,
	ECarLocationTrigger__PitExitLaneSide = 4,
	ECarLocationTrigger__PitExitLaneEnd = 5,
	ECarLocationTrigger__SafetyCarLine1 = 6,
	ECarLocationTrigger__SafetyCarLine2 = 7,
	ECarLocationTrigger__ECarLocationTrigger_MAX = 8
};


// Enum AC2.EPitstopCarInside
enum class EPitstopCarInside : uint8_t
{
	EPitstopCarInside__OnGround    = 0,
	EPitstopCarInside__Raising     = 1,
	EPitstopCarInside__OnTop       = 2,
	EPitstopCarInside__EPitstopCarInside_MAX = 3
};


// Enum AC2.EPitstopCarOutside
enum class EPitstopCarOutside : uint8_t
{
	EPitstopCarOutside__EnteringPit = 0,
	EPitstopCarOutside__ManuallyPushed = 1,
	EPitstopCarOutside__OnSkate    = 2,
	EPitstopCarOutside__InPosition = 3,
	EPitstopCarOutside__LeavingPit = 4,
	EPitstopCarOutside__WaitingForMainPit = 5,
	EPitstopCarOutside__EPitstopCarOutside_MAX = 6
};


// Enum AC2.LapTimeReferenceType
enum class ELapTimeReferenceType : uint8_t
{
	LapTimeReferenceType__Standard = 0,
	LapTimeReferenceType__GhostCar = 1,
	LapTimeReferenceType__Replay   = 2,
	LapTimeReferenceType__LapTimeReferenceType_MAX = 3
};


// Enum AC2.EBackFireFlameType
enum class EBackFireFlameType : uint8_t
{
	EBackFireFlameType__FlameA     = 0,
	EBackFireFlameType__FlameB     = 1,
	EBackFireFlameType__FlameC     = 2,
	EBackFireFlameType__EBackFireFlameType_MAX = 3
};


// Enum AC2.EBackFireType
enum class EBackFireType : uint8_t
{
	EBackFireType__None            = 0,
	EBackFireType__TYPE            = 1,
	EBackFireType__TYPE01          = 2,
	EBackFireType__TYPE02          = 3,
	EBackFireType__TYPE03          = 4,
	EBackFireType__TYPE04          = 5,
	EBackFireType__EBackFireType_MAX = 6
};


// Enum AC2.EBackFireStatus
enum class EBackFireStatus : uint8_t
{
	EBackFireStatus__GAS           = 0,
	EBackFireStatus__GAS_COAST     = 1,
	EBackFireStatus__TIME_WAITING  = 2,
	EBackFireStatus__TIME_BLIP     = 3,
	EBackFireStatus__NONE          = 4,
	EBackFireStatus__EBackFireStatus_MAX = 5
};


// Enum AC2.ELaptimeFormat
enum class ELaptimeFormat : uint8_t
{
	ELaptimeFormat__FullLaptime    = 0,
	ELaptimeFormat__AdaptiveLaptime = 1,
	ELaptimeFormat__SimpleSplit    = 2,
	ELaptimeFormat__ELaptimeFormat_MAX = 3
};


// Enum AC2.ELaptimeDeltaFormat
enum class ELaptimeDeltaFormat : uint8_t
{
	ELaptimeDeltaFormat__DefaultDelta = 0,
	ELaptimeDeltaFormat__ShortDelta = 1,
	ELaptimeDeltaFormat__SectorTime = 2,
	ELaptimeDeltaFormat__ELaptimeDeltaFormat_MAX = 3
};


// Enum AC2.EOnlineServicesStage
enum class EOnlineServicesStage : uint8_t
{
	EOnlineServicesStage__None     = 0,
	EOnlineServicesStage__Local    = 1,
	EOnlineServicesStage__Dev      = 2,
	EOnlineServicesStage__QA       = 3,
	EOnlineServicesStage__Beta     = 4,
	EOnlineServicesStage__Live     = 5,
	EOnlineServicesStage__EOnlineServicesStage_MAX = 6
};


// Enum AC2.ERaceStructureLocation
enum class ERaceStructureLocation : uint8_t
{
	ERaceStructureLocation__UI     = 0,
	ERaceStructureLocation__DataTable = 1,
	ERaceStructureLocation__Json   = 2,
	ERaceStructureLocation__Build  = 3,
	ERaceStructureLocation__ERaceStructureLocation_MAX = 4
};


// Enum AC2.EControllerAxisType
enum class EControllerAxisType : uint8_t
{
	EControllerAxisType__None      = 0,
	EControllerAxisType__Steer     = 1,
	EControllerAxisType__Gas       = 2,
	EControllerAxisType__Brake     = 3,
	EControllerAxisType__Clutch    = 4,
	EControllerAxisType__Other     = 5,
	EControllerAxisType__MoveForwardGamepad = 6,
	EControllerAxisType__StrafeRightGamepad = 7,
	EControllerAxisType__MoveUpGamepad = 8,
	EControllerAxisType__CameraPitchGamepad = 9,
	EControllerAxisType__CameraYawGamepad = 10,
	EControllerAxisType__CameraRollGamepad = 11,
	EControllerAxisType__MoveForwardMouse = 12,
	EControllerAxisType__StrafeRightMouse = 13,
	EControllerAxisType__CameraPitchMouse = 14,
	EControllerAxisType__CameraYawMouse = 15,
	EControllerAxisType__EControllerAxisType_MAX = 16
};


// Enum AC2.EControllerDebugActionType
enum class EControllerDebugActionType : uint8_t
{
	EControllerDebugActionType__None = 0,
	EControllerDebugActionType__SetFreeCamera = 1,
	EControllerDebugActionType__FreeCameraSpeedUp = 2,
	EControllerDebugActionType__FreeCameraSpeedDown = 3,
	EControllerDebugActionType__ToggleFreeCameraLock = 4,
	EControllerDebugActionType__ToggleForceLOD = 5,
	EControllerDebugActionType__SwitchCompound = 6,
	EControllerDebugActionType__IncreaseRain = 7,
	EControllerDebugActionType__DecreaseRain = 8,
	EControllerDebugActionType__IncreaseWet = 9,
	EControllerDebugActionType__DecreaseWet = 10,
	EControllerDebugActionType__LeftDoor = 11,
	EControllerDebugActionType__RightDoor = 12,
	EControllerDebugActionType__SendFakeLaptime = 13,
	EControllerDebugActionType__SwitchController = 14,
	EControllerDebugActionType__ForceEndSession = 15,
	EControllerDebugActionType__ForceLongerSession = 16,
	EControllerDebugActionType__TakeScreenshot = 17,
	EControllerDebugActionType__EmitSparks = 18,
	EControllerDebugActionType__ToggleCarSystemReplayOverride = 19,
	EControllerDebugActionType__SwitchPlayerToAI = 20,
	EControllerDebugActionType__IncreaseTime = 21,
	EControllerDebugActionType__DecreaseTime = 22,
	EControllerDebugActionType__IncreaseCloud = 23,
	EControllerDebugActionType__DecreaseCloud = 24,
	EControllerDebugActionType__EControllerDebugActionType_MAX = 25
};


// Enum AC2.EControllerActionType
enum class EControllerActionType : uint8_t
{
	EControllerActionType__None    = 0,
	EControllerActionType__Forward = 1,
	EControllerActionType__Backward = 2,
	EControllerActionType__Up      = 3,
	EControllerActionType__Down    = 4,
	EControllerActionType__Left    = 5,
	EControllerActionType__Right   = 6,
	EControllerActionType__Pause   = 7,
	EControllerActionType__CycleLeft = 8,
	EControllerActionType__CycleRight = 9,
	EControllerActionType__Gamepad3 = 10,
	EControllerActionType__Gamepad4 = 11,
	EControllerActionType__GamepadBack = 12,
	EControllerActionType__GamepadStart = 13,
	EControllerActionType__CycleCamera = 14,
	EControllerActionType__SelectChaseCamera = 15,
	EControllerActionType__SelectBonnetCamera = 16,
	EControllerActionType__SelectCockpitCamera = 17,
	EControllerActionType__SelectTVCamera = 18,
	EControllerActionType__SelectPreviousCar = 19,
	EControllerActionType__SelectNextCar = 20,
	EControllerActionType__SelectPlayerCar = 21,
	EControllerActionType__SaveReplay = 22,
	EControllerActionType__LoadReplay = 23,
	EControllerActionType__PlayReplay = 24,
	EControllerActionType__SaveHighlightReplay = 25,
	EControllerActionType__PlayHighlights = 26,
	EControllerActionType__SaveMotec = 27,
	EControllerActionType__CycleCarLightStages = 28,
	EControllerActionType__EnableRainLights = 29,
	EControllerActionType__EnableFlashingLights = 30,
	EControllerActionType__LeftDirectionalLight = 31,
	EControllerActionType__RightDirectionalLight = 32,
	EControllerActionType__CycleWiper = 33,
	EControllerActionType__GearUp  = 34,
	EControllerActionType__GearDown = 35,
	EControllerActionType__PitLimiter = 36,
	EControllerActionType__DisplayPageUp = 37,
	EControllerActionType__DisplayPageDown = 38,
	EControllerActionType__IncreaseABS = 39,
	EControllerActionType__DecreaseABS = 40,
	EControllerActionType__SetABS0 = 41,
	EControllerActionType__SetABS1 = 42,
	EControllerActionType__SetABS2 = 43,
	EControllerActionType__SetABS3 = 44,
	EControllerActionType__SetABS4 = 45,
	EControllerActionType__SetABS5 = 46,
	EControllerActionType__SetABS6 = 47,
	EControllerActionType__SetABS7 = 48,
	EControllerActionType__SetABS8 = 49,
	EControllerActionType__SetABS9 = 50,
	EControllerActionType__SetABS10 = 51,
	EControllerActionType__SetABS11 = 52,
	EControllerActionType__SetABS12 = 53,
	EControllerActionType__SetABS13 = 54,
	EControllerActionType__SetABS14 = 55,
	EControllerActionType__SetABS15 = 56,
	EControllerActionType__IncreaseTC = 57,
	EControllerActionType__DecreaseTC = 58,
	EControllerActionType__SetTC0  = 59,
	EControllerActionType__SetTC1  = 60,
	EControllerActionType__SetTC2  = 61,
	EControllerActionType__SetTC3  = 62,
	EControllerActionType__SetTC4  = 63,
	EControllerActionType__SetTC5  = 64,
	EControllerActionType__SetTC6  = 65,
	EControllerActionType__SetTC7  = 66,
	EControllerActionType__SetTC8  = 67,
	EControllerActionType__SetTC9  = 68,
	EControllerActionType__SetTC10 = 69,
	EControllerActionType__SetTC11 = 70,
	EControllerActionType__SetTC12 = 71,
	EControllerActionType__SetTC13 = 72,
	EControllerActionType__SetTC14 = 73,
	EControllerActionType__SetTC15 = 74,
	EControllerActionType__IncreaseBrakeBias = 75,
	EControllerActionType__DecreaseBrakeBias = 76,
	EControllerActionType__ReturnToPit = 77,
	EControllerActionType__SetAutomaticGearbox = 78,
	EControllerActionType__SetupTest = 79,
	EControllerActionType__Starter = 80,
	EControllerActionType__IgnitionOn = 81,
	EControllerActionType__IgnitionOff = 82,
	EControllerActionType__ChangeDisplayFocus = 83,
	EControllerActionType__Pinkie  = 84,
	EControllerActionType__Radio   = 85,
	EControllerActionType__ReverseGear = 86,
	EControllerActionType__NeutralGear = 87,
	EControllerActionType__IncreaseEngineMap = 88,
	EControllerActionType__DecreaseEngineMap = 89,
	EControllerActionType__IncreaseFuelMixture = 90,
	EControllerActionType__DecreaseFuelMixture = 91,
	EControllerActionType__ToggleEnduranceLights = 92,
	EControllerActionType__IgnitionSequenceOn = 93,
	EControllerActionType__ResetVRPosition = 94,
	EControllerActionType__HideHud = 95,
	EControllerActionType__IncreaseFOV = 96,
	EControllerActionType__DecreaseFOV = 97,
	EControllerActionType__CameraMoveForward = 98,
	EControllerActionType__CameraMoveBackward = 99,
	EControllerActionType__CameraMoveUp = 100,
	EControllerActionType__CameraMoveDown = 101,
	EControllerActionType__LookLeft = 102,
	EControllerActionType__LookRight = 103,
	EControllerActionType__LookBack = 104,
	EControllerActionType__ToggleNightLight = 105,
	EControllerActionType__KeyboardSteerLeft = 106,
	EControllerActionType__KeyboardSteerRight = 107,
	EControllerActionType__KeyboardGas = 108,
	EControllerActionType__KeyboardBrake = 109,
	EControllerActionType__KeyboardGearUp = 110,
	EControllerActionType__KeyboardGearDown = 111,
	EControllerActionType__MouseLeftButton = 112,
	EControllerActionType__MouseRightButton = 113,
	EControllerActionType__EControllerActionType_MAX = 114
};


// Enum AC2.ECarControllerMode
enum class ECarControllerMode : uint8_t
{
	ECarControllerMode__DirectInput = 0,
	ECarControllerMode__Gamepad    = 1,
	ECarControllerMode__Keyboard   = 2,
	ECarControllerMode__ECarControllerMode_MAX = 3
};


// Enum AC2.EMarshalFlagType
enum class EMarshalFlagType : uint8_t
{
	EMarshalFlagType__White        = 0,
	EMarshalFlagType__Green        = 1,
	EMarshalFlagType__Red          = 2,
	EMarshalFlagType__Blue         = 3,
	EMarshalFlagType__Yellow       = 4,
	EMarshalFlagType__Black        = 5,
	EMarshalFlagType__BlackWhite   = 6,
	EMarshalFlagType__Checkered    = 7,
	EMarshalFlagType__OrangeCircle = 8,
	EMarshalFlagType__RedYellowStipes = 9,
	EMarshalFlagType__None         = 10,
	EMarshalFlagType__EMarshalFlagType_MAX = 11
};


// Enum AC2.EGuiLanguages
enum class EGuiLanguages : uint8_t
{
	EGuiLanguages__English         = 0,
	EGuiLanguages__Italiano        = 1,
	EGuiLanguages__EGuiLanguages_MAX = 2
};


// Enum AC2.EGuiLoadingInfoType
enum class EGuiLoadingInfoType : uint8_t
{
	EGuiLoadingInfoType__SinglePlayer = 0,
	EGuiLoadingInfoType__SpecialEvents = 1,
	EGuiLoadingInfoType__EGuiLoadingInfoType_MAX = 2
};


// Enum AC2.EGuiLoadingScreens
enum class EGuiLoadingScreens : uint8_t
{
	EGuiLoadingScreens__StartUp    = 0,
	EGuiLoadingScreens__StartSessions = 1,
	EGuiLoadingScreens__BackToMenus = 2,
	EGuiLoadingScreens__EGuiLoadingScreens_MAX = 3
};


// Enum AC2.ESprintToEndurance
/*
enum class ESprintToEndurance : uint8_t
{
	ESprintToEndurance__Sprint     = 0,
	ESprintToEndurance__Endurance  = 1,
	ESprintToEndurance__ESprintToEndurance_MAX = 2
};
*/

// Enum AC2.EWearSponsors
enum class EWearSponsors : uint8_t
{
	EWearSponsors__KunosSimluazioni = 0,
	EWearSponsors__Fosforica       = 1,
	EWearSponsors__Sparco          = 2,
	EWearSponsors__Fanatec         = 3,
	EWearSponsors__EWearSponsors_MAX = 4
};


// Enum AC2.EWearMaterial
enum class EWearMaterial : uint8_t
{
	EWearMaterial__Kevlar          = 0,
	EWearMaterial__Carbon          = 1,
	EWearMaterial__EWearMaterial_MAX = 2
};


// Enum AC2.EShowRoomToBoxStage
enum class EShowRoomToBoxStage : uint8_t
{
	EShowRoomToBoxStage__BoxStage  = 0,
	EShowRoomToBoxStage__ShowRoom  = 1,
	EShowRoomToBoxStage__EShowRoomToBoxStage_MAX = 2
};


// Enum AC2.EXMultiplier
enum class EXMultiplier : uint8_t
{
	EXMultiplier__DISABLED         = 0,
	EXMultiplier__X2               = 1,
	EXMultiplier__X4               = 2,
	EXMultiplier__X8               = 3,
	EXMultiplier__X16              = 4,
	EXMultiplier__EXMultiplier_MAX = 5
};


// Enum AC2.EWeatherSeason
enum class EWeatherSeason : uint8_t
{
	EWeatherSeason__WINTER         = 0,
	EWeatherSeason__SPRING         = 1,
	EWeatherSeason__SUMMER         = 2,
	EWeatherSeason__AUTUMN         = 3,
	EWeatherSeason__EWeatherSeason_MAX = 4
};


// Enum AC2.EGuiPopUpType
enum class EGuiPopUpType : uint8_t
{
	EGuiPopUpType__VideoOptionsConfirm = 0,
	EGuiPopUpType__YesNo           = 1,
	EGuiPopUpType__EGuiPopUpType_MAX = 2
};


// Enum AC2.EMeteoConditions
enum class EMeteoConditions : uint8_t
{
	EMeteoConditions__Sunny        = 0,
	EMeteoConditions__SunnyIntervals = 1,
	EMeteoConditions__Cloudy       = 2,
	EMeteoConditions__Rain         = 3,
	EMeteoConditions__LightRain    = 4,
	EMeteoConditions__HeavyRain    = 5,
	EMeteoConditions__Variable     = 6,
	EMeteoConditions__GettingWorst = 7,
	EMeteoConditions__GettingBetter = 8,
	EMeteoConditions__EMeteoConditions_MAX = 9
};


// Enum AC2.EOffToEpic
enum class EOffToEpic : uint8_t
{
	EOffToEpic__OFF                = 0,
	EOffToEpic__LOW                = 1,
	EOffToEpic__MID                = 2,
	EOffToEpic__HIGH               = 3,
	EOffToEpic__EPIC               = 4,
	EOffToEpic__EOffToEpic_MAX     = 5
};

/*
// Enum AC2.EOffToHigh
enum class EOffToHigh : uint8_t
{
	EOffToHigh__OFF                = 0,
	EOffToHigh__LOW                = 1,
	EOffToHigh__MID                = 2,
	EOffToHigh__HIGH               = 3,
	EOffToHigh__EOffToHigh_MAX     = 4
};
*/

// Enum AC2.ELowToEpic
enum class ELowToEpic : uint8_t
{
	ELowToEpic__LOW                = 0,
	ELowToEpic__MID                = 1,
	ELowToEpic__HIGH               = 2,
	ELowToEpic__EPIC               = 3,
	ELowToEpic__ELowToEpic_MAX     = 4
};


// Enum AC2.EGuiMainSelectorType
enum class EGuiMainSelectorType : uint8_t
{
	EGuiMainSelectorType__GameModes = 0,
	EGuiMainSelectorType__BasicToAdvanced = 1,
	EGuiMainSelectorType__Realism  = 2,
	EGuiMainSelectorType__SetupSection = 3,
	EGuiMainSelectorType__Custom   = 4,
	EGuiMainSelectorType__EGuiMainSelectorType_MAX = 5
};


// Enum AC2.EGuiGenericSelectorType
enum class EGuiGenericSelectorType : uint8_t
{
	EGuiGenericSelectorType__LowToEpic = 0,
	EGuiGenericSelectorType__OnOff = 1,
	EGuiGenericSelectorType__XMultiplier = 2,
	EGuiGenericSelectorType__ResolutionList = 3,
	EGuiGenericSelectorType__PercentageSlider = 4,
	EGuiGenericSelectorType__WeatherSeasons = 5,
	EGuiGenericSelectorType__GridPosition = 6,
	EGuiGenericSelectorType__NumOpponents = 7,
	EGuiGenericSelectorType__DayNightTime = 8,
	EGuiGenericSelectorType__FrameLimit = 9,
	EGuiGenericSelectorType__OffToHigh = 10,
	EGuiGenericSelectorType__OpponentsVisibility = 11,
	EGuiGenericSelectorType__MinToMaxInt = 12,
	EGuiGenericSelectorType__Sponsors = 13,
	EGuiGenericSelectorType__WearMaterial = 14,
	EGuiGenericSelectorType__GridPositionQualifying = 15,
	EGuiGenericSelectorType__DryToWet = 16,
	EGuiGenericSelectorType__DayToNight = 17,
	EGuiGenericSelectorType__ExternalArray = 18,
	EGuiGenericSelectorType__FixedItem = 19,
	EGuiGenericSelectorType__OffTo100 = 20,
	EGuiGenericSelectorType__Percentage = 21,
	EGuiGenericSelectorType__Custom = 22,
	EGuiGenericSelectorType__OffToEpic = 23,
	EGuiGenericSelectorType__CarSetupSelector = 24,
	EGuiGenericSelectorType__TrackFilter = 25,
	EGuiGenericSelectorType__EGuiGenericSelectorType_MAX = 26
};


// Enum AC2.ELicenseStatus
enum class ELicenseStatus : uint8_t
{
	ELicenseStatus__Locked         = 0,
	ELicenseStatus__D              = 1,
	ELicenseStatus__C              = 2,
	ELicenseStatus__B              = 3,
	ELicenseStatus__A              = 4,
	ELicenseStatus__ELicenseStatus_MAX = 5
};


// Enum AC2.EGuiSetupSection
enum class EGuiSetupSection : uint8_t
{
	EGuiSetupSection__Tyres        = 0,
	EGuiSetupSection__Alignment    = 1,
	EGuiSetupSection__Electronics  = 2,
	EGuiSetupSection__Strategy     = 3,
	EGuiSetupSection__MechanicalBalance = 4,
	EGuiSetupSection__Dampers      = 5,
	EGuiSetupSection__AeroBalance  = 6,
	EGuiSetupSection__Drivetrain   = 7,
	EGuiSetupSection__EGuiSetupSection_MAX = 8
};


// Enum AC2.EGuiGameModes
enum class EGuiGameModes : uint8_t
{
	EGuiGameModes__Practice        = 0,
	EGuiGameModes__Hotlap          = 1,
	EGuiGameModes__Hotstint        = 2,
	EGuiGameModes__QuickRace       = 3,
	EGuiGameModes__SprintRace      = 4,
	EGuiGameModes__Endurance3H     = 5,
	EGuiGameModes__Endurance6H     = 6,
	EGuiGameModes__Superpole       = 7,
	EGuiGameModes__Endurance24H    = 8,
	EGuiGameModes__CustomRace      = 9,
	EGuiGameModes__EGuiGameModes_MAX = 10
};


// Enum AC2.EGuiEnabledToDisabled
enum class EGuiEnabledToDisabled : uint8_t
{
	EGuiEnabledToDisabled__DISABLED = 0,
	EGuiEnabledToDisabled__ENABLED = 1,
	EGuiEnabledToDisabled__EGuiEnabledToDisabled_MAX = 2
};


// Enum AC2.EBasicToAdvanced
enum class EBasicToAdvanced : uint8_t
{
	EBasicToAdvanced__BASIC        = 0,
	EBasicToAdvanced__ADVANCED     = 1,
	EBasicToAdvanced__EBasicToAdvanced_MAX = 2
};


// Enum AC2.EWeatherPresetType
enum class EWeatherPresetType : uint8_t
{
	EWeatherPresetType__Sunny      = 0,
	EWeatherPresetType__Cloudy     = 1,
	EWeatherPresetType__LightRain  = 2,
	EWeatherPresetType__MediumRain = 3,
	EWeatherPresetType__HeavyRain  = 4,
	EWeatherPresetType__ThunderStorm = 5,
	EWeatherPresetType__Random     = 6,
	EWeatherPresetType__EWeatherPresetType_MAX = 7
};


// Enum AC2.EGuiPresetType
enum class EGuiPresetType : uint8_t
{
	EGuiPresetType__Custom         = 0,
	EGuiPresetType__Platinum       = 1,
	EGuiPresetType__Gold           = 2,
	EGuiPresetType__Silver         = 3,
	EGuiPresetType__Bronze         = 4,
	EGuiPresetType__EGuiPresetType_MAX = 5
};


// Enum AC2.EGuiDryToWet
enum class EGuiDryToWet : uint8_t
{
	EGuiDryToWet__Dry              = 0,
	EGuiDryToWet__Wet              = 1,
	EGuiDryToWet__EGuiDryToWet_MAX = 2
};


// Enum AC2.EGuiDayToNight
enum class EGuiDayToNight : uint8_t
{
	EGuiDayToNight__Day            = 0,
	EGuiDayToNight__Night          = 1,
	EGuiDayToNight__EGuiDayToNight_MAX = 2
};


// Enum AC2.ESpecialEventStatus
enum class ESpecialEventStatus : uint8_t
{
	ESpecialEventStatus__Locked    = 0,
	ESpecialEventStatus__Unlocked  = 1,
	ESpecialEventStatus__Succeed   = 2,
	ESpecialEventStatus__ESpecialEventStatus_MAX = 3
};


// Enum AC2.EGuiColors
enum class EGuiColors : uint8_t
{
	EGuiColors__None               = 0,
	EGuiColors__Black              = 1,
	EGuiColors__Red                = 2,
	EGuiColors__Green              = 3,
	EGuiColors__White              = 4,
	EGuiColors__Orange             = 5,
	EGuiColors__Brown              = 6,
	EGuiColors__Grey               = 7,
	EGuiColors__GreyLight          = 8,
	EGuiColors__GreyDark           = 9,
	EGuiColors__Cyan               = 10,
	EGuiColors__GreenWater         = 11,
	EGuiColors__RedDark            = 12,
	EGuiColors__Yellow             = 13,
	EGuiColors__BlueLight          = 14,
	EGuiColors__Transparent        = 15,
	EGuiColors__Gold               = 16,
	EGuiColors__Bronze             = 17,
	EGuiColors__Purple             = 18,
	EGuiColors__DarkGreen          = 19,
	EGuiColors__EGuiColors_MAX     = 20
};


// Enum AC2.EGuiSubPages
enum class EGuiSubPages : uint8_t
{
	EGuiSubPages__WearEditor       = 0,
	EGuiSubPages__EGuiSubPages_MAX = 1
};


// Enum AC2.EGuiInputType
enum class EGuiInputType : uint8_t
{
	EGuiInputType__NewKey          = 0,
	EGuiInputType__Advanced        = 1,
	EGuiInputType__Clear           = 2,
	EGuiInputType__NewKeyAdvanced  = 3,
	EGuiInputType__EGuiInputType_MAX = 4
};


// Enum AC2.EGuiFileAction
enum class EGuiFileAction : uint8_t
{
	EGuiFileAction__Load           = 0,
	EGuiFileAction__Save           = 1,
	EGuiFileAction__Rename         = 2,
	EGuiFileAction__Delete         = 3,
	EGuiFileAction__EGuiFileAction_MAX = 4
};


// Enum AC2.EParticleLod
enum class EParticleLod : uint8_t
{
	EParticleLod__Water            = 0,
	EParticleLod__WaterParticles   = 1,
	EParticleLod__SmokeDirt        = 2,
	EParticleLod__SmokeDirtParticles = 3,
	EParticleLod__EParticleLod_MAX = 4
};


// Enum AC2.ECameraMovement
enum class ECameraMovement : uint8_t
{
	ECameraMovement__Forward       = 0,
	ECameraMovement__Backward      = 1,
	ECameraMovement__Up            = 2,
	ECameraMovement__Down          = 3,
	ECameraMovement__ECameraMovement_MAX = 4
};


// Enum AC2.EFreeCamera
enum class EFreeCamera : uint8_t
{
	EFreeCamera__Relative          = 0,
	EFreeCamera__Absolute          = 1,
	EFreeCamera__EFreeCamera_MAX   = 2
};


// Enum AC2.EDrivableCamera
enum class EDrivableCamera : uint8_t
{
	EDrivableCamera__Chase         = 0,
	EDrivableCamera__Bonnet        = 1,
	EDrivableCamera__Cockpit       = 2,
	EDrivableCamera__Dash          = 3,
	EDrivableCamera__Helmet        = 4,
	EDrivableCamera__Count         = 5,
	EDrivableCamera__EDrivableCamera_MAX = 6
};


// Enum AC2.EMainCameraMode
enum class EMainCameraMode : uint8_t
{
	EMainCameraMode__Drivable      = 0,
	EMainCameraMode__TV            = 1,
	EMainCameraMode__Free          = 2,
	EMainCameraMode__EMainCameraMode_MAX = 3
};


// Enum AC2.EPresetType
enum class EPresetType : uint8_t
{
	EPresetType__DirectInput       = 0,
	EPresetType__Audio             = 1,
	EPresetType__Graphics          = 2,
	EPresetType__SpecialEvents     = 3,
	EPresetType__Setup             = 4,
	EPresetType__Realism           = 5,
	EPresetType__Weather           = 6,
	EPresetType__Assists           = 7,
	EPresetType__EPresetType_MAX   = 8
};


// Enum AC2.ERaceSessionPhase
enum class ERaceSessionPhase : uint8_t
{
	ERaceSessionPhase__StartingUI  = 0,
	ERaceSessionPhase__PreFormationTime = 1,
	ERaceSessionPhase__FormationTime = 2,
	ERaceSessionPhase__PreSessionTime = 3,
	ERaceSessionPhase__SessionTime = 4,
	ERaceSessionPhase__SessionOverTime = 5,
	ERaceSessionPhase__PostSessionTime = 6,
	ERaceSessionPhase__ResultUI    = 7,
	ERaceSessionPhase__ERaceSessionPhase_MAX = 8
};


// Enum AC2.ETrackFlagLights
enum class ETrackFlagLights : uint8_t
{
	ETrackFlagLights__Green        = 0,
	ETrackFlagLights__Yellow       = 1,
	ETrackFlagLights__Red          = 2,
	ETrackFlagLights__Off          = 3,
	ETrackFlagLights__ETrackFlagLights_MAX = 4
};


// Enum AC2.EBrandType
enum class EBrandType : uint8_t
{
	EBrandType__Porsche            = 0,
	EBrandType__Mercedes           = 1,
	EBrandType__Ferrari            = 2,
	EBrandType__Audi               = 3,
	EBrandType__Lamborghini        = 4,
	EBrandType__Mclaren            = 5,
	EBrandType__Nissan             = 6,
	EBrandType__BMW                = 7,
	EBrandType__Bentley            = 8,
	EBrandType__Aston_Martin       = 9,
	EBrandType__Chevrolet          = 10,
	EBrandType__Jaguar             = 11,
	EBrandType__EBrandType_MAX     = 12
};


// Enum AC2.ERaceEventType
enum class ERaceEventType : uint8_t
{
	ERaceEventType__A_3H           = 0,
	ERaceEventType__B_24H          = 1,
	ERaceEventType__C_6H           = 2,
	ERaceEventType__D_1H           = 3,
	ERaceEventType__ERaceEventType_MAX = 4
};


// Enum AC2.ELicenseType
enum class ELicenseType : uint8_t
{
	ELicenseType__FullSeason       = 0,
	ELicenseType__Race_2_Race      = 1,
	ELicenseType__ELicenseType_MAX = 2
};


// Enum AC2.ECupCategory
enum class ECupCategory : uint8_t
{
	ECupCategory__Overall          = 0,
	ECupCategory__ProAm            = 1,
	ECupCategory__Am               = 2,
	ECupCategory__Silver           = 3,
	ECupCategory__National         = 4,
	ECupCategory__ECupCategory_MAX = 5
};


// Enum AC2.ENationality
enum class ENationality : uint8_t
{
	ENationality__Any              = 0,
	ENationality__Italy            = 1,
	ENationality__Germany          = 2,
	ENationality__France           = 3,
	ENationality__Spain            = 4,
	ENationality__GreatBritain     = 5,
	ENationality__Hungary          = 6,
	ENationality__Belgium          = 7,
	ENationality__Switzerland      = 8,
	ENationality__Austria          = 9,
	ENationality__Russia           = 10,
	ENationality__Thailand         = 11,
	ENationality__Netherlands      = 12,
	ENationality__Poland           = 13,
	ENationality__Argentina        = 14,
	ENationality__Monaco           = 15,
	ENationality__Ireland          = 16,
	ENationality__Brazil           = 17,
	ENationality__SouthAfrica      = 18,
	ENationality__PuertoRico       = 19,
	ENationality__Slovakia         = 20,
	ENationality__Oman             = 21,
	ENationality__Greece           = 22,
	ENationality__SaudiArabia      = 23,
	ENationality__Norway           = 24,
	ENationality__Turkey           = 25,
	ENationality__SouthKorea       = 26,
	ENationality__Lebanon          = 27,
	ENationality__Armenia          = 28,
	ENationality__Mexico           = 29,
	ENationality__Sweden           = 30,
	ENationality__Finland          = 31,
	ENationality__Denmark          = 32,
	ENationality__Croatia          = 33,
	ENationality__Canada           = 34,
	ENationality__China            = 35,
	ENationality__Portugal         = 36,
	ENationality__ENationality_MAX = 37
};


// Enum AC2.ECircuitCornerBrakeHint
enum class ECircuitCornerBrakeHint : uint8_t
{
	ECircuitCornerBrakeHint__Undefined = 0,
	ECircuitCornerBrakeHint__Straight = 1,
	ECircuitCornerBrakeHint__AlwaysFlatout = 2,
	ECircuitCornerBrakeHint__Flatout = 3,
	ECircuitCornerBrakeHint__Slight_Lift = 4,
	ECircuitCornerBrakeHint__Brake = 5,
	ECircuitCornerBrakeHint__HardBrake = 6,
	ECircuitCornerBrakeHint__ECircuitCornerBrakeHint_MAX = 7
};


// Enum AC2.ECircuitSectionCornerType
enum class ECircuitSectionCornerType : uint8_t
{
	ECircuitSectionCornerType__Undefined = 0,
	ECircuitSectionCornerType__LeftHander = 1,
	ECircuitSectionCornerType__RightHander = 2,
	ECircuitSectionCornerType__LeftRight = 3,
	ECircuitSectionCornerType__RightLeft = 4,
	ECircuitSectionCornerType__Complex = 5,
	ECircuitSectionCornerType__Straight = 6,
	ECircuitSectionCornerType__ECircuitSectionCornerType_MAX = 7
};


// Enum AC2.ETrackBopType
enum class ETrackBopType : uint8_t
{
	ETrackBopType__A_HighSpeedLowerDownforce = 0,
	ETrackBopType__B_HighSpeedMediumDownforce = 1,
	ETrackBopType__C_MidSpeedHigherDownforce = 2,
	ETrackBopType__D_LowSpeedMediumDownforce = 3,
	ETrackBopType__ETrackBopType_MAX = 4
};


// Enum AC2.EInfoType
enum class EInfoType : uint8_t
{
	EInfoType__Driver              = 0,
	EInfoType__CarEntry            = 1,
	EInfoType__Circuit             = 2,
	EInfoType__Model               = 3,
	EInfoType__SkinTemplate        = 4,
	EInfoType__NumberPlateMesh     = 5,
	EInfoType__AuxLightMesh        = 6,
	EInfoType__StickerSet          = 7,
	EInfoType__Brand               = 8,
	EInfoType__Nationality         = 9,
	EInfoType__Competition         = 10,
	EInfoType__EInfoType_MAX       = 11
};


// Enum AC2.EAcPlayerStartType
enum class EAcPlayerStartType : uint8_t
{
	EAcPlayerStartType__ParcFerme  = 0,
	EAcPlayerStartType__PitLane    = 1,
	EAcPlayerStartType__Grid       = 2,
	EAcPlayerStartType__FastStart  = 3,
	EAcPlayerStartType__FastLane   = 4,
	EAcPlayerStartType__Hotlap     = 5,
	EAcPlayerStartType__PitLane45  = 6,
	EAcPlayerStartType__DummyStart = 7,
	EAcPlayerStartType__EAcPlayerStartType_MAX = 8
};


// Enum AC2.ECarLocation
enum class ECarLocation : uint8_t
{
	ECarLocation__Null             = 0,
	ECarLocation__Track            = 1,
	ECarLocation__PitLane          = 2,
	ECarLocation__PitEntry         = 3,
	ECarLocation__PitExit          = 4,
	ECarLocation__ECarLocation_MAX = 5
};


// Enum AC2.EAudioVCA
enum class EAudioVCA : uint8_t
{
	EAudioVCA__None                = 0,
	EAudioVCA__Main                = 1,
	EAudioVCA__EngineExt           = 2,
	EAudioVCA__EngineInt           = 3,
	EAudioVCA__Wheel               = 4,
	EAudioVCA__Wind                = 5,
	EAudioVCA__Environment         = 6,
	EAudioVCA__Damage              = 7,
	EAudioVCA__Comms               = 8,
	EAudioVCA__Music               = 9,
	EAudioVCA__Opponent            = 10,
	EAudioVCA__EAudioVCA_MAX       = 11
};


// Enum AC2.FSessionInfoPanelType
enum class EFSessionInfoPanelType : uint8_t
{
	FSessionInfoPanelType__NotInitialized = 0,
	FSessionInfoPanelType__LapOverview = 1,
	FSessionInfoPanelType__UseRaceManager = 2,
	FSessionInfoPanelType__UseKsonLeaderboard = 3,
	FSessionInfoPanelType__FSessionInfoPanelType_MAX = 4
};


// Enum AC2.EControllerType
enum class EControllerType : uint8_t
{
	EControllerType__None          = 0,
	EControllerType__Player        = 1,
	EControllerType__Ai            = 2,
	EControllerType__Client        = 3,
	EControllerType__EControllerType_MAX = 4
};


// Enum AC2.EABSChannels
enum class EABSChannels : uint8_t
{
	EABSChannels__OneChannel       = 0,
	EABSChannels__TwoChannels      = 1,
	EABSChannels__FourChannels     = 2,
	EABSChannels__EABSChannels_MAX = 3
};


// Enum AC2.ESuspType
enum class ESuspType : uint8_t
{
	ESuspType__DWB                 = 0,
	ESuspType__Strut               = 1,
	ESuspType__ESuspType_MAX       = 2
};


// Enum AC2.ETractionType
enum class ETractionType : uint8_t
{
	ETractionType__RWD             = 0,
	ETractionType__FWD             = 1,
	ETractionType__AWD             = 2,
	ETractionType__AWD01           = 3,
	ETractionType__ETractionType_MAX = 4
};


// Enum AC2.EEBBMode
enum class EEBBMode : uint8_t
{
	EEBBMode__Disabled             = 0,
	EEBBMode__Internal             = 1,
	EEBBMode__DynamicController    = 2,
	EEBBMode__EEBBMode_MAX         = 3
};


// Enum AC2.EDynamicControllerCombinatorMode
enum class EDynamicControllerCombinatorMode : uint8_t
{
	EDynamicControllerCombinatorMode__Add = 0,
	EDynamicControllerCombinatorMode__Mult = 1,
	EDynamicControllerCombinatorMode__EDynamicControllerCombinatorMode_MAX = 2
};


// Enum AC2.EDynamicControllerInput
enum class EDynamicControllerInput : uint8_t
{
	EDynamicControllerInput__UndefinedInput = 0,
	EDynamicControllerInput__Brake = 1,
	EDynamicControllerInput__Gas   = 2,
	EDynamicControllerInput__LatG  = 3,
	EDynamicControllerInput__LonG  = 4,
	EDynamicControllerInput__Steer = 5,
	EDynamicControllerInput__Speed = 6,
	EDynamicControllerInput__Gear  = 7,
	EDynamicControllerInput__SlipRatioMAX = 8,
	EDynamicControllerInput__SlipRatioAVG = 9,
	EDynamicControllerInput__SlipAngleFrontAVG = 10,
	EDynamicControllerInput__SlipAngleRearAVG = 11,
	EDynamicControllerInput__SlipAngleFrontMAX = 12,
	EDynamicControllerInput__SlipAngleRearMAX = 13,
	EDynamicControllerInput__OversteerFactor = 14,
	EDynamicControllerInput__RearSpeedRatio = 15,
	EDynamicControllerInput__SteerDEG = 16,
	EDynamicControllerInput__Const = 17,
	EDynamicControllerInput__RPMS  = 18,
	EDynamicControllerInput__WheelSteerDEG = 19,
	EDynamicControllerInput__LoadSpreadLF = 20,
	EDynamicControllerInput__LoadSpreadRF = 21,
	EDynamicControllerInput__AvgTravelRear = 22,
	EDynamicControllerInput__SusTravelLR = 23,
	EDynamicControllerInput__SusTravelRR = 24,
	EDynamicControllerInput__EDynamicControllerInput_MAX = 25
};


// Enum AC2.ESelectionPanelType
enum class ESelectionPanelType : uint8_t
{
	ESelectionPanelType__Model     = 0,
	ESelectionPanelType__Team      = 1,
	ESelectionPanelType__Number    = 2,
	ESelectionPanelType__Driver    = 3,
	ESelectionPanelType__ESelectionPanelType_MAX = 4
};


// Enum AC2.FDiscordClientAPIConnectionState
enum class EFDiscordClientAPIConnectionState : uint8_t
{
	FDiscordClientAPIConnectionState__NotInitialized = 0,
	FDiscordClientAPIConnectionState__Connecting = 1,
	FDiscordClientAPIConnectionState__Error = 2,
	FDiscordClientAPIConnectionState__Connected = 3,
	FDiscordClientAPIConnectionState__FDiscordClientAPIConnectionState_MAX = 4
};


// Enum AC2.EAeroElement
enum class EAeroElement : uint8_t
{
	EAeroElement__FrontLeft        = 0,
	EAeroElement__FrontRight       = 1,
	EAeroElement__RearLeft         = 2,
	EAeroElement__RearRight        = 3,
	EAeroElement__EAeroElement_MAX = 4
};


// Enum AC2.ECombinatorModeDF
enum class ECombinatorModeDF : uint8_t
{
	ECombinatorModeDF__eAddH       = 0,
	ECombinatorModeDF__eMultH      = 1,
	ECombinatorModeDF__eAddDH      = 2,
	ECombinatorModeDF__eMultDH     = 3,
	ECombinatorModeDF__eAddYawGain = 4,
	ECombinatorModeDF__eMultYawGain = 5,
	ECombinatorModeDF__eAddClGain  = 6,
	ECombinatorModeDF__eMultClGain = 7,
	ECombinatorModeDF__ECombinatorModeDF_MAX = 8
};


// Enum AC2.EInputVarDF
enum class EInputVarDF : uint8_t
{
	EInputVarDF__eBrake            = 0,
	EInputVarDF__eGas              = 1,
	EInputVarDF__eYaw              = 2,
	EInputVarDF__eLatG             = 3,
	EInputVarDF__eLonG             = 4,
	EInputVarDF__eSteer            = 5,
	EInputVarDF__eSpeed            = 6,
	EInputVarDF__SusTravelLR       = 7,
	EInputVarDF__SusTravelRR       = 8,
	EInputVarDF__EInputVarDF_MAX   = 9
};


// Enum AC2.EFireWorkType
enum class EFireWorkType : uint8_t
{
	Launch                         = 0,
	Standard                       = 1,
	Shaped                         = 2,
	EFireWorkType_MAX              = 3
};


// Enum AC2.FGamePlatformType
enum class EFGamePlatformType : uint8_t
{
	FGamePlatformType__NotInitialized = 0,
	FGamePlatformType__Standalone  = 1,
	FGamePlatformType__SteamBuildButStandaloneFallback = 2,
	FGamePlatformType__Steam       = 3,
	FGamePlatformType__SteamOffline = 4,
	FGamePlatformType__PSN         = 5,
	FGamePlatformType__XBLive      = 6,
	FGamePlatformType__DMM         = 7,
	FGamePlatformType__Discord     = 8,
	FGamePlatformType__Error       = 9,
	FGamePlatformType__FGamePlatformType_MAX = 10
};


// Enum AC2.FGamePlatformLoginResult
enum class EFGamePlatformLoginResult : uint8_t
{
	FGamePlatformLoginResult__NotInitialized = 0,
	FGamePlatformLoginResult__Success = 1,
	FGamePlatformLoginResult__GenericError = 2,
	FGamePlatformLoginResult__NotRunning = 3,
	FGamePlatformLoginResult__NotAuthorized = 4,
	FGamePlatformLoginResult__Offline = 5,
	FGamePlatformLoginResult__FGamePlatformLoginResult_MAX = 6
};


// Enum AC2.EListSelectionPopupType
enum class EListSelectionPopupType : uint8_t
{
	EListSelectionPopupType__SteeringWheel = 0,
	EListSelectionPopupType__EListSelectionPopupType_MAX = 1
};


// Enum AC2.EWigetAnchor
enum class EWigetAnchor : uint8_t
{
	EWigetAnchor__TopLeft          = 0,
	EWigetAnchor__TopCenter        = 1,
	EWigetAnchor__TopRight         = 2,
	EWigetAnchor__CenterLeft       = 3,
	EWigetAnchor__CenterCenter     = 4,
	EWigetAnchor__CenterRight      = 5,
	EWigetAnchor__BottomLeft       = 6,
	EWigetAnchor__BottomCenter     = 7,
	EWigetAnchor__BottomRight      = 8,
	EWigetAnchor__EWigetAnchor_MAX = 9
};


// Enum AC2.ERaceTransitionPageType
enum class ERaceTransitionPageType : uint8_t
{
	ERaceTransitionPageType__StartLevel = 0,
	ERaceTransitionPageType__ReturnToPit = 1,
	ERaceTransitionPageType__PostSession = 2,
	ERaceTransitionPageType__ChangeSession = 3,
	ERaceTransitionPageType__RestartSession = 4,
	ERaceTransitionPageType__ERaceTransitionPageType_MAX = 5
};


// Enum AC2.ERatingWidgetUIState
enum class ERatingWidgetUIState : uint8_t
{
	Init                           = 0,
	WELCOME_SCREEN                 = 1,
	ERROR_MESSAGE                  = 2,
	HIGHLIGHTED_RATING             = 3,
	DISPLAY_RELEVANT_RATINGS       = 4,
	EXPAND_FOCUSED_RATING          = 5,
	TARGET_STATE                   = 6,
	DON_T_USE                      = 7,
	ERatingWidgetUIState_MAX       = 8
};


// Enum AC2.EHighLightsEventType
enum class EHighLightsEventType : uint8_t
{
	EHighLightsEventType__None     = 0,
	EHighLightsEventType__TrackCut = 1,
	EHighLightsEventType__Overdriving = 2,
	EHighLightsEventType__Overtake = 3,
	EHighLightsEventType__Accident = 4,
	EHighLightsEventType__Pitstop  = 5,
	EHighLightsEventType__Start    = 6,
	EHighLightsEventType__Finish   = 7,
	EHighLightsEventType__Manual   = 8,
	EHighLightsEventType__EHighLightsEventType_MAX = 9
};


// Enum AC2.ESurfaceType
enum class ESurfaceType : uint8_t
{
	ESurfaceType__Default          = 0,
	ESurfaceType__Kerb             = 1,
	ESurfaceType__ExtraTurf        = 2,
	ESurfaceType__Grass            = 3,
	ESurfaceType__Sand             = 4,
	ESurfaceType__ESurfaceType_MAX = 5
};


// Enum AC2.ECornerSectionCarResultReference
enum class ECornerSectionCarResultReference : uint8_t
{
	ECornerSectionCarResultReference__None = 0,
	ECornerSectionCarResultReference__LastLap = 1,
	ECornerSectionCarResultReference__SecondLastLap = 2,
	ECornerSectionCarResultReference__ECornerSectionCarResultReference_MAX = 3
};


// Enum AC2.GraphicsOptions
enum class EGraphicsOptions : uint8_t
{
	GraphicsOptions__None          = 0,
	GraphicsOptions__ResolutionScale = 1,
	GraphicsOptions__Shadow        = 2,
	GraphicsOptions__PPEffects     = 3,
	GraphicsOptions__Effects       = 4,
	GraphicsOptions__AntiAliasing  = 5,
	GraphicsOptions__ViewDistance  = 6,
	GraphicsOptions__Foliage       = 7,
	GraphicsOptions__Texture       = 8,
	GraphicsOptions__VSync         = 9,
	GraphicsOptions__FrameLimit    = 10,
	GraphicsOptions__MaxCarVisible = 11,
	GraphicsOptions__MirrorQuality = 12,
	GraphicsOptions__LightFunctionQuality = 13,
	GraphicsOptions__ShadowQuality = 14,
	GraphicsOptions__MaxCascades   = 15,
	GraphicsOptions__ShadowMaxResolution = 16,
	GraphicsOptions__RadiusThreshold = 17,
	GraphicsOptions__DistanceScale = 18,
	GraphicsOptions__TransitionScale = 19,
	GraphicsOptions__MotionBlurQuality = 20,
	GraphicsOptions__BlurGBuffer   = 21,
	GraphicsOptions__AmbientOcclusionLevels = 22,
	GraphicsOptions__AmbientOcclusionRadiusScale = 23,
	GraphicsOptions__DepthOfFieldQuality = 24,
	GraphicsOptions__RenderTargetPoolMin = 25,
	GraphicsOptions__LensFlareQuality = 26,
	GraphicsOptions__SceneColorFringeQuality = 27,
	GraphicsOptions__EyeAdaptationQuality = 28,
	GraphicsOptions__BloomQuality  = 29,
	GraphicsOptions__FastBlurThreshold = 30,
	GraphicsOptions__UpscaleQuality = 31,
	GraphicsOptions__GrainQuantization = 32,
	GraphicsOptions__TranslucensyVolumeDim = 33,
	GraphicsOptions__RefractionQuality = 34,
	GraphicsOptions__SSR           = 35,
	GraphicsOptions__SceneColorFormat = 36,
	GraphicsOptions__DetailMode    = 37,
	GraphicsOptions__TranslucencyVolumeBlur = 38,
	GraphicsOptions__MaterialQualityLevel = 39,
	GraphicsOptions__GraphicsOptions_MAX = 40
};


// Enum AC2.GraphicsIndexType
enum class EGraphicsIndexType : uint8_t
{
	GraphicsIndexType__None        = 0,
	GraphicsIndexType__PresetValues = 1,
	GraphicsIndexType__AAType      = 2,
	GraphicsIndexType__GraphicsIndexType_MAX = 3
};


// Enum AC2.ECombinatorModeW
enum class ECombinatorModeW : uint8_t
{
	ECombinatorModeW__eAdd         = 0,
	ECombinatorModeW__eMult        = 1,
	ECombinatorModeW__ECombinatorModeW_MAX = 2
};


// Enum AC2.EInputVarW
enum class EInputVarW : uint8_t
{
	EInputVarW__eBrake             = 0,
	EInputVarW__eGas               = 1,
	EInputVarW__eLatG              = 2,
	EInputVarW__eLonG              = 3,
	EInputVarW__eSteer             = 4,
	EInputVarW__eSpeed             = 5,
	EInputVarW__SusTravelLR        = 6,
	EInputVarW__SusTravelRR        = 7,
	EInputVarW__EInputVarW_MAX     = 8
};


// Enum AC2.EYesNoPopupType
enum class EYesNoPopupType : uint8_t
{
	EYesNoPopupType__InputOverride = 0,
	EYesNoPopupType__PresetOverride = 1,
	EYesNoPopupType__EYesNoPopupType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AC2.CarLoosePart
// 0x0014
struct FCarLoosePart
{
	ELoosePartType                                     LoosePartType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GForceFilter;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentGForce;                                            // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct AC2.CarWiper
// 0x003C
struct FCarWiper
{
	ECarWiperType                                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinVibrationCarSpeed;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVibrationCarSpeed;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VibrationSpeed;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VibrationMaxAmplitudeSeconds;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GForceFilter;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GForceMaxAmplitudeSeconds;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinGForce;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxGForce;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
};

// ScriptStruct AC2.CarDigitalDisplayPage
// 0x0018
struct FCarDigitalDisplayPage
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	float                                              DisplayLightIntensity;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ECarDigitalDisplayPages                            PageType;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.CarDigitalDisplayTimeTextBlock
// 0x0040
struct FCarDigitalDisplayTimeTextBlock
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ECarDigitalDisplayType                             ValueType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      HoursDigits;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      MinutesDigits;                                            // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      SecondsDigits;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      MillisecondsDigits;                                       // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bShowPlusSign;                                            // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                MinimumValueMs;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaximumValueMs;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bShowLastLapOnLapEvent;                                   // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              TimeAfterOnLap;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.CarDigitalDisplayNumberTextBlock
// 0x0060
struct FCarDigitalDisplayNumberTextBlock
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ECarDigitalDisplayType                             ValueType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               UseGrouping;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                MinimumIntegralDigits;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET
	struct FString                                     CultureLocaleName;                                        // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
};

// ScriptStruct AC2.CarDigitalDisplayProgressBar
// 0x0030
struct FCarDigitalDisplayProgressBar
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ECarDigitalDisplayType                             ValueType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Value;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct AC2.CarDigitalDisplayCanvas
// 0x0060
struct FCarDigitalDisplayCanvas
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ECarDigitalDisplayType                             ValueType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TimeToShow;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayType>                     SharedWith;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	struct FVector2D                                   MinMaxValue;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bIsInverted;                                              // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.CarDigitalDisplayNeedle
// 0x0030
struct FCarDigitalDisplayNeedle
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	ECarDigitalDisplayType                             ValueType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 Value;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct AC2.CarDigitalDisplayLight
// 0x0038
struct FCarDigitalDisplayLight
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<ECarDigitalDisplayPages>                    Pages;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	TArray<ECarLightStage>                             ValueType;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bIsInverted;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.SkinMaterialType
// 0x0010 (0x0018 - 0x0008)
struct FSkinMaterialType : public FTableRowBase
{
	float                                              Roughness;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClearCoatRoughness;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Metallic;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.SkinMaterial
// 0x0010
struct FSkinMaterial
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MaterialInstance;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TeamTemplate
// 0x0068 (0x0070 - 0x0008)
struct FTeamTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FSkinMaterial>                       HelmetMaterials;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkinMaterial>                       SuitMaterials;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Logo;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Garage;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Refueller;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Plate;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PitstopPlate;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  GaragePlate;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.DriverSuitTemplate
// 0x0028 (0x0030 - 0x0008)
struct FDriverSuitTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FSkinMaterial                               SuitMaterials;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FString                                     Comment;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.StickerSet
// 0x0118 (0x0120 - 0x0008)
struct FStickerSet : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFrontNumber;                                          // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	struct FTransform                                  FrontNumber;                                              // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       FrontNumberSocket;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRoofNumber;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FTransform                                  RoofNumber;                                               // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       RoofNumberSocket;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasClassFrontSticker;                                    // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FTransform                                  ClassFrontSticker;                                        // 0x0090(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       ClassFrontStickerSocket;                                  // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasClassRearSticker;                                     // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FTransform                                  ClassRearSticker;                                         // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       ClassRearStickerSocket;                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.SkinTemplate
// 0x0030 (0x0038 - 0x0008)
struct FSkinTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FSkinMaterial>                       Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      NumberPlateKey;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StickerSetKey;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RimKey;                                                   // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FString                                     Comment;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.RimTemplate
// 0x0038 (0x0040 - 0x0008)
struct FRimTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FSkinMaterial>                       StaticRimMaterials;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkinMaterial>                       BLurredRimMaterials;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Comment;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.NumberPanelMesh
// 0x0020 (0x0028 - 0x0008)
struct FNumberPanelMesh : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class USkeletalMesh*                               NumberPlateMesh;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.DriverHelmetTemplate
// 0x0028 (0x0030 - 0x0008)
struct FDriverHelmetTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOfficial;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FSkinMaterial>                       HelmetMaterials;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Comment;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.DriverGlovesTemplate
// 0x0028 (0x0030 - 0x0008)
struct FDriverGlovesTemplate : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGlovesBrand                                       Brand;                                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FSkinMaterial                               GlovesMaterial;                                           // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FString                                     Comment;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.SkinColor
// 0x00B0 (0x00B8 - 0x0008)
struct FSkinColor : public FTableRowBase
{
	int                                                Code;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FText                                       Category;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible)
	TMap<ESkinMaterialType, struct FSkinMaterialType>  SpecialMaterialType;                                      // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               UseWithAuxLights;                                         // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FString                                     RealRGB;                                                  // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.AuxLightMesh
// 0x0020 (0x0028 - 0x0008)
struct FAuxLightMesh : public FTableRowBase
{
	unsigned char                                      TemplateKey;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class USkeletalMesh*                               AuxLightMesh;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.SwitchAnimation
// 0x0048
struct FSwitchAnimation
{
	ECarAnimation                                      CarAnimation;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StartingStage;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector2D                                   StageLimits;                                              // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RelativeAngleLimits;                                      // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateOnRed;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateOnGreen;                                            // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateOnBlue;                                             // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              ForcedTimeDelay;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentRelativeRotation;                                  // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct AC2.CarLights
// 0x0040
struct FCarLights
{
	ECarLightMaterialType                              MaterialType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECarLightMaterialParameter                         MaterialParameter;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	float                                              IntensityWhenOn;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBlink;                                                 // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseStageMaterialIntensityWhenOn;                          // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseStageMaterialIntensityWhenOff;                         // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              BlinkDuration_Ms_WhenOn;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntensityWhenOff;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlinkDuration_Ms_WhenOff;                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0024(0x0008) MISSED OFFSET
	bool                                               UseStageLightIntensityWhenOn;                             // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseStageLightIntensityWhenOff;                            // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              LightFrontComponentIntensity;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightRearComponentIntensity;                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlassIntesityMultiplier;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSharingDayLights;                                      // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.CarLightStage
// 0x0010
struct FCarLightStage
{
	TArray<struct FCarLights>                          MaterialsParameters;                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.LapTimeReference
// 0x0008
struct FLapTimeReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.BackfireFlame
// 0x0002
struct FBackfireFlame
{
	EBackFireFlameType                                 flameType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      spawnProbability;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DebugWeatherOverride
// 0x001C
struct FDebugWeatherOverride
{
	unsigned char                                      overrideWeather;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              rainLevel;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              wetLevel;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cloudLevel;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              puddlesLevel;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ambientTemp;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              roadTemp;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DebugEventOverride
// 0x0048
struct FDebugEventOverride
{
	unsigned char                                      OverrideEvent;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CarCount;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SessionType;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      raceEventType;                                            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      usableCarsOnly;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseRaceFastStart;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                OfflineSpecialEventID;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxDriversCount;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDebugWeatherOverride                       weather;                                                  // 0x0010(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     TrackName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              IdealLineGrip;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.DebugCarOverride
// 0x0020
struct FDebugCarOverride
{
	unsigned char                                      OverrideCarModel;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       CarRowName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverRowName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CarNumber;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.DebugOnline
// 0x0020
struct FDebugOnline
{
	EOnlineServicesStage                               AcOnlineServer;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Port;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DriverName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                IdentitySwitchSimulatorNumber;                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseRaceDirectorPenalties;                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.DebugVideoEditing
// 0x000C
struct FDebugVideoEditing
{
	unsigned char                                      bUseGamepadForFreeCamera;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CameraTVCenterHeight;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseExperimentalCameraTV;                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowPhotomodeButton;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct AC2.AudioModules
// 0x0004
struct FAudioModules
{
	unsigned char                                      UseAudio;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseAmbientSounds;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCollisionSounds;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseRayCastAudio;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.CarModules
// 0x0009
struct FCarModules
{
	unsigned char                                      UseDigitalDisplays;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseLedSystem;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDriverAnimation;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCarAnimation;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseBrakeGlow;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseLightingSystem;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDistanceSaving;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCarParticles;                                          // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseLumirank;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TelemetryModules
// 0x0003
struct FTelemetryModules
{
	unsigned char                                      exportEntireSession;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      debugPhysics;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      debugAI;                                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.ModulesEnabler
// 0x001C
struct FModulesEnabler
{
	unsigned char                                      UseReplay;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseHUD;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseSpotter;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAudioModules                               AudioModules;                                             // 0x0003(0x0004) (Edit, BlueprintVisible)
	struct FCarModules                                 CarModules;                                               // 0x0007(0x0009) (Edit, BlueprintVisible)
	struct FTelemetryModules                           TelemetryModules;                                         // 0x0010(0x0003) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	int                                                PhysicsThreadsCount;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseHMD;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.ReplayConfiguration
// 0x0018
struct FReplayConfiguration
{
	unsigned char                                      PausePhysicsDuringReplay;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MaxTimeReplaySeconds;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplayQuality;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FarAIReplayQuality;                                       // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                HighlightsRecTimeBefore;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HighlightsRecTimeAfter;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExperimentalMinQualityFactor;                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.UIConfiguration
// 0x0014
struct FUIConfiguration
{
	float                                              TransitionStartLevelTime;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionOtherTime;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DrawHUDDebugVisuals;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ChildHudEnabled;                                          // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowElectronicsActivityOnPedals1;                         // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowGameIntroPages;                                       // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DebugShuffleLeaderboards;                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              DebugRebroadcastLeaderboardSeconds;                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DebugStruct
// 0x00F0
struct FDebugStruct
{
	unsigned char                                      StartupLocation;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDebugEventOverride                         EventOverride;                                            // 0x0008(0x0048) (Edit, BlueprintVisible)
	struct FDebugCarOverride                           CarOverride;                                              // 0x0050(0x0020) (Edit, BlueprintVisible)
	struct FDebugOnline                                Online;                                                   // 0x0070(0x0020) (Edit, BlueprintVisible)
	struct FDebugVideoEditing                          VideoEditing;                                             // 0x0090(0x000C) (Edit, BlueprintVisible)
	struct FModulesEnabler                             ModulesEnabler;                                           // 0x009C(0x001C) (Edit, BlueprintVisible)
	struct FReplayConfiguration                        ReplayConfiguration;                                      // 0x00B8(0x0018) (Edit, BlueprintVisible)
	struct FUIConfiguration                            UIConfiguration;                                          // 0x00D0(0x0014) (Edit, BlueprintVisible)
	int                                                IsDeveloper;                                              // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IsTester;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.Nationality
// 0x0058 (0x0060 - 0x0008)
struct FNationality : public FTableRowBase
{
	ENationality                                       Nationality;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ShortName;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>                   FlagImage;                                                // 0x0038(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct AC2.ModelCockpitCamInfo
// 0x0020 (0x0028 - 0x0008)
struct FModelCockpitCamInfo : public FTableRowBase
{
	float                                              LeftMirrorYaw;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightMirrorYaw;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftMirrorPitch;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightMirrorPitch;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RearMirrorYaw;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RearMirrorPitch;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              E3DemoExtraSmoothness;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.ModelInfo
// 0x00A0 (0x00A8 - 0x0008)
struct FModelInfo : public FTableRowBase
{
	struct FName                                       CarModelName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      CarModel;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelectableCar;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpponentCar;                                            // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBrandType                                         Brand;                                                    // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DebutYear;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<ETrackBopType, class UBOPData*>               TrackBOP;                                                 // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModelCockpitCamInfo                        CockpitCamSettings;                                       // 0x0070(0x0028) (Edit, BlueprintVisible)
	TArray<struct FVector>                             CameraOffsets;                                            // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.MeteoInfos
// 0x0038 (0x0040 - 0x0008)
struct FMeteoInfos : public FTableRowBase
{
	EWeatherPresetType                                 MeteoType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       MeteoText;                                                // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MeteoIcon;                                                // 0x0028(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct AC2.DriverInfo
// 0x00C8 (0x00D0 - 0x0008)
struct FDriverInfo : public FTableRowBase
{
	struct FString                                     FirstName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SecondName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LastName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Nickname;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShortName;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Weight;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENationality                                       Nationality;                                              // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDriverCategory                                    DriverCategory;                                           // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FName                                       DriverRow;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   Picture;                                                  // 0x0068(0x0028) (Edit, BlueprintVisible)
	int                                                HelmetTemplateKey;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetBaseColor;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HelmetDetailColor;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHelmetMaterialType                                HelmetMaterialType;                                       // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	int                                                HelmetGlassColor;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HelmetGlassMetallic;                                      // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GlovesTemplateKey;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SuitTemplateKey;                                          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SuitDetailColor1;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SuitDetailColor2;                                         // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SkillLevel;                                               // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AggroLevel;                                               // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x00BA(0x0016) MISSED OFFSET
};

// ScriptStruct AC2.CommonTexts
// 0x0018 (0x0020 - 0x0008)
struct FCommonTexts : public FTableRowBase
{
	struct FText                                       CommonText;                                               // 0x0008(0x0018) (Edit)
};

// ScriptStruct AC2.CircuitCornerInfo
// 0x0028 (0x0030 - 0x0008)
struct FCircuitCornerInfo : public FTableRowBase
{
	float                                              SplineBrakeHint;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SplineStart;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SplineEnd;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TurnNumber;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECircuitSectionCornerType                          CornerType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECircuitCornerBrakeHint                            BrakeHint;                                                // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct AC2.CircuitSectionDefinition
// 0x0038 (0x0040 - 0x0008)
struct FCircuitSectionDefinition : public FTableRowBase
{
	float                                              SplineStart;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SplineEnd;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              ReferenceDuration;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceExitVelocity;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceMinVelocity;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CCRatingPushAdjustment;                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CCRatingOverdriveAdjustment;                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECircuitSectionCornerType                          CornerType;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0035(0x000B) MISSED OFFSET
};

// ScriptStruct AC2.CircuitInfo
// 0x0190 (0x0198 - 0x0008)
struct FCircuitInfo : public FTableRowBase
{
	struct FString                                     CircuitName;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                CircuitId;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENationality                                       Nationality;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      PitNumber;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ERaceEventType                                     raceEventType;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector2D                                   FormationTriggerNormalizedRange;                          // 0x0034(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   GreenFlagTriggerNormalizedRange;                          // 0x003C(0x0008) (Edit, IsPlainOldData)
	float                                              BaseGrip;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETrackBopType                                      TrackBopType;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FCircuitCornerInfo>                  CornerInfos;                                              // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCircuitSectionDefinition>           Sections;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        IdealLineSpeeds;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	int                                                ReferenceLaptime;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<int>                                        MicroSectorTimes;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	float                                              StartYellowFlagTime;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPolesitterOnLeft;                                      // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Corners;                                                  // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isClockWise;                                              // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	int                                                Length;                                                   // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FText                                       InfoText;                                                 // 0x00A8(0x0018) (Edit)
	TSoftObjectPtr<class UTexture2D>                   TitleBanner;                                              // 0x00C0(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   SmallMap;                                                 // 0x00E8(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   LargeMap;                                                 // 0x0110(0x0028) (Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class UTexture2D>>           DayDryTrackImages;                                        // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UTexture2D>>           NightDryTrackImages;                                      // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UTexture2D>>           DayWetTrackImages;                                        // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UTexture2D>>           NightWetTrackImages;                                      // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UTexture2D>>           DayCloudyTrackImages;                                     // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UTexture2D>>           NightCloudyTrackImages;                                   // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.CarInfo
// 0x0090 (0x0098 - 0x0008)
struct FCarInfo : public FTableRowBase
{
	int                                                RaceNumber;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000C(0x0003) MISSED OFFSET
	bool                                               bUsable;                                                  // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<ERaceEventType>                             CarRaceEventType;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ECarModelType                                      CarModel;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECupCategory                                       CupCategory;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELicenseType                                       LicenseType;                                              // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FString                                     TeamName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ENationality                                       Nationality;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CompetitorName;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ENationality                                       CompetitorNationality;                                    // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamTemplateKey;                                          // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AuxLightKey;                                              // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	int                                                AuxLightColor;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SkinTemplateKey;                                          // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                SkinColor1Id;                                             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkinMaterialType                                  SkinMaterialType1;                                        // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                SkinColor2Id;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkinMaterialType                                  SkinMaterialType2;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                SkinColor3Id;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkinMaterialType                                  SkinMaterialType3;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                RimColor1Id;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkinMaterialType                                  RimMaterialType1;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                RimColor2Id;                                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkinMaterialType                                  RimMaterialType2;                                         // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.BrandInfo
// 0x0020 (0x0028 - 0x0008)
struct FBrandInfo : public FTableRowBase
{
	struct FName                                       BrandName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBrandType                                         Brand;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENationality                                       Nationality;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                FoundationYear;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BrandLogo;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BrandIcon;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.LedInstance
// 0x0070
struct FLedInstance
{
	unsigned char                                      LedIndex;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
	float                                              PhysicsValueOn;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsReversed;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x001D(0x000B) MISSED OFFSET
	float                                              TimeOn;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                ColorOn;                                                  // 0x002C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	float                                              ValueOn;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TimeOff;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                ColorOff;                                                 // 0x0044(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	float                                              ValueOff;                                                 // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IgnoreNone;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorNone;                                                // 0x005C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, IsPlainOldData)
	float                                              ValueNone;                                                // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

// ScriptStruct AC2.GuiIconTemplate
// 0x0078 (0x0080 - 0x0008)
struct FGuiIconTemplate : public FTableRowBase
{
	class UTexture2D*                                  HardwarePicture;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          ButtonIcons;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          AxisIcon;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, class UTexture2D*>              PowIcons;                                                 // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.GuiActionCategory
// 0x0048 (0x0050 - 0x0008)
struct FGuiActionCategory : public FTableRowBase
{
	EControllerActionType                              Action;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerAxisType                                Axis;                                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       ActionText;                                               // 0x0010(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      CategoryId;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FText                                       CategoryText;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsUI;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.GuiCar
// 0x0110
struct FGuiCar
{
	struct FModelInfo                                  Info;                                                     // 0x0000(0x00A8)
	class ACarAvatar*                                  SprintCarAvatar;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACarAvatar*                                  EnduranceCarAvatar;                                       // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET
	class UClass*                                      UClass;                                                   // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET
};

// ScriptStruct AC2.GuiRaceEventData
// 0x0040
struct FGuiRaceEventData
{
	int                                                PositionOnGrid;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OpponentCount;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                TimeOfDay;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PracticeLength;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                QualifyLength;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RaceLength;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERaceEventType                                     raceEventType;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                TimeMultiplier;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrackName;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       carName;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdealLineGrip;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      skillMultiplier;                                          // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      aggroMultiplier;                                          // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct AC2.AudioSave
// 0x0028
struct FAudioSave
{
	float                                              Main;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EngineExt;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EngineInt;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Wheel;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Wind;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Environment;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Damage;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Comms;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Music;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Opponent;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct AC2.GuiLoadingScreenInfo
// 0x0110
struct FGuiLoadingScreenInfo
{
	struct FText                                       TrackDisplayName;                                         // 0x0000(0x0018) (Edit, EditConst)
	struct FText                                       TrackName;                                                // 0x0018(0x0018) (Edit, EditConst)
	int                                                TrackId;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       carName;                                                  // 0x0038(0x0018) (Edit, EditConst)
	struct FText                                       DriverName;                                               // 0x0050(0x0018) (Edit, EditConst)
	struct FText                                       Laptime;                                                  // 0x0068(0x0018) (Edit, EditConst)
	struct FText                                       TeamName;                                                 // 0x0080(0x0018) (Edit, EditConst)
	struct FText                                       TypeSession;                                              // 0x0098(0x0018) (Edit, EditConst)
	struct FText                                       InfoLine;                                                 // 0x00B0(0x0018) (Edit, EditConst)
	bool                                               IsInfoFromSpecialEvent;                                   // 0x00C8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EGuiLoadingInfoType                                LoadingType;                                              // 0x00C9(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EGuiGameModes                                      GameMode;                                                 // 0x00CA(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00CB(0x0005) MISSED OFFSET
	struct FGuiRaceEventData                           RaceData;                                                 // 0x00D0(0x0040) (Edit, EditConst)
};

// ScriptStruct AC2.WaterParticles
// 0x0020 (0x0028 - 0x0008)
struct FWaterParticles : public FTableRowBase
{
	class UParticleSystem*                             waterSprayDrops;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             backSpray;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             waterSprayDetail;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             waterSprayFog;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.WaterCurves
// 0x0070 (0x0078 - 0x0008)
struct FWaterCurves : public FTableRowBase
{
	class UCurveFloat*                                 WaterCurve;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogSpeedRateCurve;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DetailsSpeedRateCurve;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DetailsSpeedVelMinCurve;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                DetailsSpeedVelMaxCurve;                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DropsSpeedRateCurve;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ChaseSpeedRateCurve;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedVelMinCurve;                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedVelMaxCurve;                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseFocusedAlphaLifeCurve;                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedRateCurve;                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedVelMinCurve;                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedVelMaxCurve;                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 fogChaseNotFocusedAlphaLifeCurve;                         // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SmokeDirtParticles
// 0x0018 (0x0020 - 0x0008)
struct FSmokeDirtParticles : public FTableRowBase
{
	class UParticleSystem*                             Smoke;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             dirt;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             stone;                                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SmokeDirtCurves
// 0x0030 (0x0038 - 0x0008)
struct FSmokeDirtCurves : public FTableRowBase
{
	class UCurveFloat*                                 rate1Curve;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 rate2Curve;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 smokeRateCurve;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 stonesRateCurve;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 smokeBuildCurve;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 smokeCoolCurve;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.PitstopOffsets
// 0x0050
struct FPitstopOffsets
{
	TArray<float>                                      HubPosition_LF_RF_LR_RR;                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   CrewManOnLeft_Start;                                      // 0x0010(0x0008) (Edit, IsPlainOldData)
	TArray<struct FVector2D>                           CrewManOnLeft_A_B_C_D;                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   CrewManOnLeft_End;                                        // 0x0028(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   CrewManOnRight_Start;                                     // 0x0030(0x0008) (Edit, IsPlainOldData)
	TArray<struct FVector2D>                           CrewManOnRight_A_B_C_D;                                   // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   CrewManOnRight_End;                                       // 0x0048(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AC2.ACCameraCarInfo
// 0x003C
struct FACCameraCarInfo
{
	struct FVector                                     Offsets[0x5];                                             // 0x0000(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct AC2.ACCameraSettings
// 0x0068
struct FACCameraSettings
{
	float                                              CameraFOV[0x5];                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TMap<struct FString, struct FACCameraCarInfo>      MapCarCameraData;                                         // 0x0018(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.CompetitionEntryList
// 0x0018 (0x0020 - 0x0008)
struct FCompetitionEntryList : public FTableRowBase
{
	struct FName                                       CarKey;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               DriverKey;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.CompetitionList
// 0x0010 (0x0018 - 0x0008)
struct FCompetitionList : public FTableRowBase
{
	TArray<struct FCompetitionEntryList>               EntryList;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.WeatherStatus
// 0x001C
struct FWeatherStatus
{
	float                                              AmbientTemperature;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoadTemperature;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              wetLevel;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindDirection;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rainLevel;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cloudLevel;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.RaceSpecialEventData
// 0x0090 (0x0098 - 0x0008)
struct FRaceSpecialEventData : public FTableRowBase
{
	struct FCompetitionList                            CompetitionList;                                          // 0x0008(0x0018) (Edit)
	EGuiGameModes                                      EventGameMode;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FGuiRaceEventData                           RaceEventData;                                            // 0x0028(0x0040) (Edit)
	struct FString                                     TargetPosition;                                           // 0x0068(0x0010) (Edit, ZeroConstructor)
	int                                                OnlineEventRefId;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeatherStatus                              weather;                                                  // 0x007C(0x001C) (Edit)
};

// ScriptStruct AC2.SpecialEventPreset
// 0x0150 (0x0158 - 0x0008)
struct FSpecialEventPreset : public FTableRowBase
{
	int                                                EventSortOrder;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit)
	struct FText                                       InfoText;                                                 // 0x0028(0x0018) (Edit)
	struct FText                                       LoadingInfoLine;                                          // 0x0040(0x0018) (Edit)
	struct FText                                       BestLapDriverName;                                        // 0x0058(0x0018) (Edit)
	struct FText                                       BestLapTime;                                              // 0x0070(0x0018) (Edit)
	TSoftObjectPtr<class UTexture2D>                   Poster;                                                   // 0x0088(0x0028) (Edit)
	struct FRaceSpecialEventData                       EventDetails;                                             // 0x00B0(0x0098) (Edit)
	struct FString                                     Comment;                                                  // 0x0148(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.RaceHUDState
// 0x00D8
struct FRaceHUDState
{
	bool                                               IsCarAvatarValid;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsTimingValid;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class ACarAvatar*                                  Car;                                                      // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ACarAvatar*                                  PlayerCar;                                                // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeOfDaySeconds;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentSplit;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInPreparationLap;                                       // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                LapCount;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsLaptimeCurrentValid;                                    // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                LaptimeCurrent;                                           // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<int>                                        LaptimeSplitsCurrent;                                     // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LaptimeBest;                                              // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<int>                                        LaptimeSplitsBest;                                        // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LaptimeLast;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<int>                                        LaptimeSplitsLast;                                        // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TotalLaptimesIncludingPenalty;                            // 0x0078(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalSessionPenalty;                                      // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SessionStartTime;                                         // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SessionEndTime;                                           // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsEndlessSession;                                         // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              CurrentSessionTime;                                       // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AbsSessionTimeLeft;                                       // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SessionNegativityMultiplier;                              // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaSpeed;                                               // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaLaptime;                                             // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaPredictedLaptime;                                    // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERaceSessionPhase                                  CurrentSessionPhase;                                      // 0x00A4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESessionType                                       CurrentSessionType;                                       // 0x00A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentRacePosition;                                      // 0x00A6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CarCount;                                                 // 0x00A7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhysicsLateCount;                                         // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhysicsBlendCount;                                        // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhysicsCPUOccupancy;                                      // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CarIndex;                                                 // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DriverIndex;                                              // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1C];                                      // 0x00BC(0x001C) MISSED OFFSET
};

// ScriptStruct AC2.HUDCarState
// 0x0188
struct FHUDCarState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FDriverInfo                                 DriverInfo;                                               // 0x0008(0x00D0) (BlueprintVisible, BlueprintReadOnly)
	struct FCarInfo                                    CarInfo;                                                  // 0x00D8(0x0098) (BlueprintVisible, BlueprintReadOnly)
	int                                                OfficialPosition;                                         // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RealtimePosition;                                         // 0x0174(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SplinePosition;                                           // 0x0178(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaToFront;                                             // 0x017C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaToBack;                                              // 0x0180(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.OnlineServicesHotlapUpdate
// 0x0040
struct FOnlineServicesHotlapUpdate
{
	int                                                RequestNumber;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EOnlineServicesHotlapUpdateType                    UpdateType;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     CarModel;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TrackName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                DriverRank;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalDrivers;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DebugCarControlValue;                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinumumWetness;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventReferenceId;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESessionType                                       LeaderboardType;                                          // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.OnlineServicesHotlapEntry
// 0x0080
struct FOnlineServicesHotlapEntry
{
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SteamId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDriverCategory                                    FIADriverCategory;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKunosDriverCategory                               KunosDriverCategory;                                      // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Wetness;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CarModel;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                Laps;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Laptime;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IsProjection;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Sectors;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsRecordSectors;                                          // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                DeltaToRecord;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeltaToDriver;                                            // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BoPAdjustment;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FDateTime                                   CreatedOnUtc;                                             // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsCurrentUser;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.HUDOptions
// 0x0060
struct FHUDOptions
{
	int                                                SafezoneLeft;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SafezoneTop;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SafezoneRight;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SafezoneBottom;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RaceNotificationsVisible;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RatingWidgetVisible;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RatingSensitiveWidgetVisibility;                          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                BasicCarInfoVisible;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SysPerformanceVisible;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ElectronicsVisible;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HotlapStandingVisible;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LaptimeInfo01Visible;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LeaderboardVisible;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TrackMapVisible;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RaceDirectorInvestigationVisible;                         // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RaceRealtimeStandingVisible;                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RaceStandingVisible;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RadarVisible;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SessionInfoVisible;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TyreTemps01Visible;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimeLeftWidgetVisible;                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WrongWayVisible;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VirtualMirrorVisible;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProximityIndicatorsVisible;                               // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.CameraOptionsEA
// 0x0028
struct FCameraOptionsEA
{
	unsigned char                                      DefaultCamera;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LookBehindCar;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              GeneralMovement;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DashcamFactor;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetForwardCm;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetUpCm;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetPitch;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookWithWheel;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookWithWheelGamma;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookWithWheelSmoothing;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookWithWheelHeadRoll;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.CameraOptions
// 0x0001
struct FCameraOptions
{
	bool                                               NothingYet;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.GhostCarOptions
// 0x0010
struct FGhostCarOptions
{
	unsigned char                                      Enabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseInPractice;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDifferentOpponent;                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      OpponentModelType;                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseExperimentalStateColor;                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                OffsetTimeMS;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      GhostQuality;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.UserOptions
// 0x0170
struct FUserOptions
{
	struct FHUDOptions                                 HUD;                                                      // 0x0000(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCameraOptionsEA                            CameraEA;                                                 // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCameraOptions                              Camera;                                                   // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FGhostCarOptions                            GhostCar;                                                 // 0x008C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xD4];                                      // 0x009C(0x00D4) MISSED OFFSET
};

// ScriptStruct AC2.DynamicControllerStage
// 0x0020
struct FDynamicControllerStage
{
	EDynamicControllerInput                            InputVar;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDynamicControllerCombinatorMode                   CombinatorMode;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UCurveFloat*                                 Lut;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Filter;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpLimit;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownLimit;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstValue;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DynamicControllerData
// 0x0010
struct FDynamicControllerData
{
	TArray<struct FDynamicControllerStage>             Stages;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.TurboData
// 0x0030
struct FTurboData
{
	float                                              MaxBoost;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LagUP;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LagDN;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmRef;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GammaGas;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GammaRpm;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Wastegate;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAdjustable;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FDynamicControllerData                      Controller;                                               // 0x0020(0x0010) (Edit)
};

// ScriptStruct AC2.TyreCompoundSetDefinition
// 0x0060
struct FTyreCompoundSetDefinition
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ShortName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UTyreCompoundSet*                            PhysicsData;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         TyreMeshes_LF_RF_LR_RR;                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FName                                       BlurMaterialSlot;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MaterialIndexes;                                          // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            TyreBlurMaterials;                                        // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct AC2.WingState
// 0x0048
struct FWingState
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              aoa;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cd;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cl;                                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              inputAngle;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              groundHeight;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              frontShare;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              dragKG;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              liftKG;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              angleMult;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              groundEffectLift;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              groundEffectDrag;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              yawAngle;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isVertical;                                               // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.TyreSuspState
// 0x0034
struct FTyreSuspState
{
	float                                              slipAngle;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              slipRatio;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              suspensionTravel;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              coreTemp;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              thermalInput;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              pressure;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              cpTemperature;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RealTimeIMO1;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RealTimeIMO2;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RealTimeIMO3;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Camber;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ndSlip;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steer;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.ControlsStatus
// 0x0014
struct FControlsStatus
{
	float                                              steer;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Gas;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Brake;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Clutch;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FF;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.AIState
// 0x0010
struct FAIState
{
	float                                              CurrentPush;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetSpeed;                                              // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTargetSpeed;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTargetDistance;                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.RatingReport
// 0x0088
struct FRatingReport
{
	float                                              totalScore;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              safetyRating;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              trackCompetence;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              consistency;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CarControl;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              hotlapRating;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              racecraft;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              competition;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<unsigned char, int>                           trackMedals;                                              // 0x0020(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                trLapsDriven;                                             // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                cnLapsDriven;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ccLapsDriven;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pcLapsDriven;                                             // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rcLapsDriven;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                cpLapsDriven;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.OnlineServicesLapPerformance
// 0x0018
struct FOnlineServicesLapPerformance
{
	float                                              CarControl;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CarControlPushing;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CarControlOverdrive;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConsistencyRatingLastLap;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConsistencyRatingSession;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConsistencyMinorMistakesLastLap;                          // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConsistencyMajorMistakesLastLap;                          // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConsistencyCutsLastLap;                                   // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct AC2.TyreData
// 0x0038
struct FTyreData
{
	float                                              Width;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamperRate;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              angularInertia;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rimRadius;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              radiusRaiseK;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              treadHeightMM;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              treadConsumptionK;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TyreMass;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              flexC;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              flexK;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongitudinalFlexC;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LongitudinalFlexK;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlanketTemp;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.RollingResistanceData
// 0x000C
struct FRollingResistanceData
{
	float                                              RR0;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RR1;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RR_slip;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TyrePressureData
// 0x0020
struct FTyrePressureData
{
	float                                              PressureFlexGain;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollingResistanceGain;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GainD;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IdealPressure;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PressureReference;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PressureSpringCurve;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TyreModelData
// 0x00A8
struct FTyreModelData
{
	float                                              Dy0;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Dx0;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              lsExpY;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              lsExpX;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FalloffLevel;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FalloffLevelX;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FalloffSpeed;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FalloffSpeedX;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Fz0;                                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedSensitivity;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionLimitAngle;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlexGain;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              relaxationLength;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              camberGain;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              dcamber0;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              dcamber1;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cfXmult;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              brakeDXMod;                                               // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrooveFactor;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrooveSAFactor;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CombinedFactor;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GripSlipFactor;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 wearCurve;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRollingResistanceData                      RollingResistance;                                        // 0x0060(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FTyrePressureData                           PressureData;                                             // 0x0070(0x0020) (Edit)
	float                                              ThermalVerticalSpringK;                                   // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThermalVerticalDampK;                                     // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamberVerticalKRangeDEG;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamberVerticalKGain;                                      // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThermalWearMult;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RRWearMult;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TyreThermalPatchData
// 0x0050
struct FTyreThermalPatchData
{
	float                                              FrictionK;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollingK;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RollingSurfaceK;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              surfaceTransfer;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              patchTransfer;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              patchCoreTransfer;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              internalCoreTransfer;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolFactorBASE;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolFactor;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolFactorRain;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              grainGain;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              grainGamma;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              blisterGain;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              blisterGamma;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              practicalTempSource;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTransferFactor;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PerformanceCurve;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpeedToSpeedK;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.TyreCompoundData
// 0x0130
struct FTyreCompoundData
{
	struct FTyreData                                   Data;                                                     // 0x0000(0x0038) (Edit)
	struct FTyreModelData                              modelData;                                                // 0x0038(0x00A8) (Edit)
	struct FTyreThermalPatchData                       ThermalData;                                              // 0x00E0(0x0050) (Edit)
};

// ScriptStruct AC2.SteerData
// 0x0014
struct FSteerData
{
	float                                              SteerLock;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerRatio;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearSteerRodRatio;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FFMult;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerAssist;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.FuelData
// 0x0020
struct FFuelData
{
	float                                              FuelKG;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FuelConsumptionK;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFuel;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	float                                              Fuel;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FuelUsedPerKm;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.BrakeDiscData
// 0x0030
struct FBrakeDiscData
{
	float                                              CoolTransfer;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TorqueK;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoolSpeedFactor;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Emissivity;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Surface;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThermalCapacity;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CoreThermalCapacity;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThermalConductivity;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConductionThickness;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PerfCurve;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.BrakesData
// 0x0090
struct FBrakesData
{
	float                                              TotalTorque;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontBias;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinBias;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxBias;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandBrakeTorque;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasCockpitBias;                                           // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              CockpitBiasAdjustStep;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEBBMode                                           EBBMode;                                                  // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              EBBFrontShareMultiplier;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FBrakeDiscData                              DiscDataFront;                                            // 0x0028(0x0030) (Edit)
	struct FBrakeDiscData                              DiscDataRear;                                             // 0x0058(0x0030) (Edit)
	bool                                               IsBrakeTempActive;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.EngineMapData
// 0x0008
struct FEngineMapData
{
	float                                              PowerMult;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConsumptionMult;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.StartECUAssistData
// 0x000C
struct FStartECUAssistData
{
	float                                              RpmRange;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              gain;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedRangeKHM;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.EngineData
// 0x00A0
struct FEngineData
{
	float                                              Inertia;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PowerCurve;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CoastCurve;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEngineMapData>                      Maps;                                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	int                                                Minimum;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Limiter;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LimiterCycles;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FTurboData>                          Turbos;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              DefaultTurboAdjustment;                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ThrottleResponseCurve;                                    // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmDamageThreshold;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurboBoostDamageThreshold;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurboBoostDamageK;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmDamageK;                                               // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BovThreshold;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StarterTime;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IgnitionTime;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartupTime;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineDamping;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OmegaN;                                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OmegaGainRPM;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmSuggestedShift;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmLimiterAlarm;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStartECUAssistData                         StartECUAssistData;                                       // 0x008C(0x000C) (Edit)
	float                                              StarterEngineTorque;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.DifferentialData
// 0x000C
struct FDifferentialData
{
	float                                              power;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Coast;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Preload;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DownshiftProtectionData
// 0x000C
struct FDownshiftProtectionData
{
	bool                                               IsActive;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDebug;                                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                Overrev;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LockN;                                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.AutoBlipData
// 0x0010
struct FAutoBlipData
{
	class UCurveFloat*                                 BlipProfile;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsElectronic;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.AutoClutchData
// 0x0020
struct FAutoClutchData
{
	class UCurveFloat*                                 UpshiftProfile;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DownshiftProfile;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsForcedOn;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RpmMin;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RpmMax;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.AutoShifterData
// 0x0010
struct FAutoShifterData
{
	int                                                ChangeUpRpm;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChangeDnRpm;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlipThreshold;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GasCutoffTimeS;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DrivetrainData
// 0x00A0
struct FDrivetrainData
{
	ETractionType                                      TractionType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DriveInertia;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClutchInertia;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearR;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Gears;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              FinalRatio;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDifferentialData                           Differential;                                             // 0x0024(0x000C) (Edit)
	float                                              GearUpTimeMS;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearDnTimeMS;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoCutOffTimeMS;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsShifterSupported;                                       // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FDownshiftProtectionData                    DownshiftProtection;                                      // 0x0040(0x000C) (Edit)
	float                                              ClutchMaxTorque;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValidShiftRPMWindow;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ControlsWindowGain;                                       // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageRpmWindow;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAutoBlipData                               AutoBlip;                                                 // 0x0060(0x0010) (Edit)
	struct FAutoClutchData                             autoClutch;                                               // 0x0070(0x0020) (Edit)
	struct FAutoShifterData                            AutoShifter;                                              // 0x0090(0x0010) (Edit)
};

// ScriptStruct AC2.SuspBumpStopDef
// 0x0010
struct FSuspBumpStopDef
{
	float                                              Range;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Reference;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gamma;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SuspBumpStop
// 0x0020
struct FSuspBumpStop
{
	struct FSuspBumpStopDef                            Up;                                                       // 0x0000(0x0010) (Edit)
	struct FSuspBumpStopDef                            Down;                                                     // 0x0010(0x0010) (Edit)
};

// ScriptStruct AC2.SuspDamageData
// 0x000C
struct FSuspDamageData
{
	float                                              minSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              gain;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maxDamage;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DamperData2W
// 0x0008
struct FDamperData2W
{
	float                                              bump;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rebound;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DamperData
// 0x0020
struct FDamperData
{
	struct FDamperData2W                               slow;                                                     // 0x0000(0x0008) (Edit)
	struct FDamperData2W                               fast;                                                     // 0x0008(0x0008) (Edit)
	float                                              fastThresholdBump;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              fastThresholdRebound;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Lut;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SuspHubData
// 0x0070
struct FSuspHubData
{
	ESuspType                                          Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              mass;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rimOffset;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSuspBumpStop                               bumpStop;                                                 // 0x000C(0x0020) (Edit)
	float                                              rodLength;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              K;                                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              progressiveK;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              toeOut;                                                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              staticCamber;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              packerRange;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSuspDamageData                             Damage;                                                   // 0x0044(0x000C) (Edit)
	struct FDamperData                                 damper;                                                   // 0x0050(0x0020) (Edit)
};

// ScriptStruct AC2.WishboneData
// 0x0024
struct FWishboneData
{
	struct FVector                                     carFront;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     carRear;                                                  // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Wheel;                                                    // 0x0018(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct AC2.RodData
// 0x0018
struct FRodData
{
	struct FVector                                     Car;                                                      // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Wheel;                                                    // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct AC2.SuspDataDW
// 0x0060
struct FSuspDataDW
{
	struct FWishboneData                               wbTop;                                                    // 0x0000(0x0024) (Edit)
	struct FWishboneData                               wbBottom;                                                 // 0x0024(0x0024) (Edit)
	struct FRodData                                    steer;                                                    // 0x0048(0x0018) (Edit)
};

// ScriptStruct AC2.SuspDataStrut
// 0x0054
struct FSuspDataStrut
{
	struct FRodData                                    strut;                                                    // 0x0000(0x0018) (Edit)
	struct FWishboneData                               wbBottom;                                                 // 0x0018(0x0024) (Edit)
	struct FRodData                                    steer;                                                    // 0x003C(0x0018) (Edit)
};

// ScriptStruct AC2.SuspData
// 0x0268
struct FSuspData
{
	float                                              wheelbase;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              cgLocation;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isBumpStopAbsolute;                                       // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              baseYFront;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              baseYRear;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              trackFront;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              trackRear;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSuspHubData                                hubFront;                                                 // 0x0020(0x0070) (Edit)
	struct FSuspHubData                                hubRear;                                                  // 0x0090(0x0070) (Edit)
	struct FSuspDataDW                                 dwFront;                                                  // 0x0100(0x0060) (Edit)
	struct FSuspDataDW                                 dwRear;                                                   // 0x0160(0x0060) (Edit)
	struct FSuspDataStrut                              strutFront;                                               // 0x01C0(0x0054) (Edit)
	struct FSuspDataStrut                              strutRear;                                                // 0x0214(0x0054) (Edit)
};

// ScriptStruct AC2.ARBData
// 0x0004
struct FARBData
{
	float                                              K;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TractionControlSettings
// 0x0010
struct FTractionControlSettings
{
	float                                              MinSlipRatio;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlipRatio;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceSlipAngleDEG;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineCutLevel;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.TractionControl
// 0x0020
struct FTractionControl
{
	bool                                               IsPresent;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrequencylHZ;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedKMH;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultIndex;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTractionControlSettings>            Settings;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.ABSSettings
// 0x0010
struct FABSSettings
{
	float                                              MinSlipRatio;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlipRatio;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceSlipAngleDEG;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CutLevel;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.ABSData
// 0x0020
struct FABSData
{
	bool                                               IsPresent;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EABSChannels                                       Channels;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              FrequencylHZ;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedKMH;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultIndex;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FABSSettings>                        Settings;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.TrackGene
// 0x0004
struct FTrackGene
{
	float                                              Push;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.DynamicDownForceControllerData
// 0x0020
struct FDynamicDownForceControllerData
{
	ECombinatorModeDF                                  CombinatorMode;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EInputVarDF                                        InputVar;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UCurveFloat*                                 Lut;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Filter;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpLimit;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownLimit;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.RatingReportTrackCompetence
// 0x0068
struct FRatingReportTrackCompetence
{
	float                                              rating;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<int, unsigned char>                           trackMedalsById;                                          // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             improvementHints;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AC2.OnlineServicesDriverStatistics
// 0x0034
struct FOnlineServicesDriverStatistics
{
	float                                              TotalDistanceDrivenKm;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalLapsDriven;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalRacesDriven;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalRaceWins;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalPodiums;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RaceFinishedPercentage;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalAccidents;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalMassAccidents;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalCombatDistanceKm;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BestHotlapRankRank;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BestHotlapRankTotal;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BestConsistencyPercentage;                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BestConsistencyValue;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.OnlineServicesDriverSummary
// 0x0108
struct FOnlineServicesDriverSummary
{
	struct FString                                     DriverDisplayName;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EDriverCategory                                    FIADriverCategory;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKunosDriverCategory                               KunosDriverCategory;                                      // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                TotalValue;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalTrendIndicator;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<float>                                      TotalRatingProgression;                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              SafetyRatingPercentage;                                   // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESafetyRating                                      SafetyRatingCategory;                                     // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              TrackCompetencePercentage;                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FRatingReportTrackCompetence                trackCompetenceDetail;                                    // 0x0040(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              ConsistencyRatingPercentage;                              // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ConsistencyRatingValue;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CarControlPercentage;                                     // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CarControlValue;                                          // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HotlapRatingPercentage;                                   // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HotlapRatingValue;                                        // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RacecraftRatingPercentage;                                // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RacecraftRatingValue;                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CompetitionPercentage;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CompetitionValue;                                         // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FOnlineServicesDriverStatistics             Statistics;                                               // 0x00D0(0x0034) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.LapDataBase
// 0x0058
struct FLapDataBase
{
	struct FString                                     playerName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TrackName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     trackConfig;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     carName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     carConfig;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              rainGlobalLevel;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.LapDataTimes
// 0x0018 (0x0070 - 0x0058)
struct FLapDataTimes : public FLapDataBase
{
	TArray<int>                                        splitTimes;                                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	int                                                Laptime;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.LapDataDated
// 0x0010 (0x0080 - 0x0070)
struct FLapDataDated : public FLapDataTimes
{
	int64_t                                            date;                                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                deltaFirst;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                deltaPrevious;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.LapDataPreFormatted
// 0x0050 (0x00A8 - 0x0058)
struct FLapDataPreFormatted : public FLapDataBase
{
	TArray<struct FString>                             splitTimes;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Laptime;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     date;                                                     // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     deltaFirst;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     deltaPrevious;                                            // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.MultipleHelpText
// 0x0010
struct FMultipleHelpText
{
	TArray<struct FText>                               Texts;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.InputAxis
// 0x0040
struct FInputAxis
{
	struct FString                                     AxisName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     KeyAsString;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0020(0x0018) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.InputAction
// 0x0040
struct FInputAction
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FString                                     KeyAsString;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bShift : 1;                                               // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.LoadingInfo
// 0x0148
struct FLoadingInfo
{
	struct FText                                       RaceLength;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TimeOfDay;                                                // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Opponents;                                                // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       OpponentsStrength;                                        // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FText                                       OpponentsAbility;                                         // 0x0060(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TrackTemp;                                                // 0x0078(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AirTemp;                                                  // 0x0090(0x0018) (Edit, BlueprintVisible)
	struct FText                                       WeatherIcon;                                              // 0x00A8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Realism;                                                  // 0x00C0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       tyreWear;                                                 // 0x00D8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Fuel;                                                     // 0x00F0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Damage;                                                   // 0x0108(0x0018) (Edit, BlueprintVisible)
	struct FText                                       txtTeamName;                                              // 0x0120(0x0018) (Edit, BlueprintVisible)
	struct FVector                                     WeatherValues;                                            // 0x0138(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.AudioCommsData
// 0x0070 (0x0078 - 0x0008)
struct FAudioCommsData : public FTableRowBase
{
	EAudioCommsDataType                                CommType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFMODEvent*                                  AudioEvent;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePositionsAsCondition;                                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAudioCommsLevel                                   Level;                                                    // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                Priority;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
	struct FText                                       DisplayTitle;                                             // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DisplayText;                                              // 0x0058(0x0018) (Edit, BlueprintVisible)
	EAudioCommsAppearanceHint                          AppearanceHint;                                           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.LapCarRating
// 0x0130
struct FLapCarRating
{
	unsigned char                                      UnknownData00[0x130];                                     // 0x0000(0x0130) MISSED OFFSET
};

// ScriptStruct AC2.CornerSectionCarRating
// 0x006C
struct FCornerSectionCarRating
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0000(0x006C) MISSED OFFSET
};

// ScriptStruct AC2.OnlineServicesMPServerInfo
// 0x0028
struct FOnlineServicesMPServerInfo
{
	struct FString                                     IP;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TcpPort;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Track;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AC2.OnlineServicesCarStates
// 0x0008
struct FOnlineServicesCarStates
{
	float                                              CarControlCurrentNdSlipThreshold;                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CarControlIsInNdSlipActionTime;                           // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.GamePlatformUserAccountData
// 0x00A0
struct FGamePlatformUserAccountData
{
	int                                                KunosIdentityIdHigh;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KunosIdentityIdLow;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     GamePlatformUserId;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LocalMachineId;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FirstName;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LastName;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Nickname;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     EMail;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Country;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DiscordUserId;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DiscordUserName;                                          // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   UpdatedUtc;                                               // 0x0098(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct AC2.OnlineServicesRequestMPServerListOptions
// 0x0008
struct FOnlineServicesRequestMPServerListOptions
{
	int                                                Take;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Skip;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.FakeSteamAchievement
// 0x0028
struct FFakeSteamAchievement
{
	int                                                achievementId;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     fakeTitle;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     fakeMessage;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AC2.SetupSelectorLimits
// 0x0020
struct FSetupSelectorLimits
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Step;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowValue;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.SetupAeroLimits
// 0x00C0
struct FSetupAeroLimits
{
	struct FSetupSelectorLimits                        RearWing;                                                 // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        Splitter;                                                 // 0x0020(0x0020) (Edit)
	struct FSetupSelectorLimits                        RideHeight[0x4];                                          // 0x0040(0x0020) (Edit)
};

// ScriptStruct AC2.SetupAlignmentLimits
// 0x0120
struct FSetupAlignmentLimits
{
	struct FSetupSelectorLimits                        Camber[0x4];                                              // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        Toe[0x4];                                                 // 0x0080(0x0020) (Edit)
	struct FSetupSelectorLimits                        SteerRatio;                                               // 0x0100(0x0020) (Edit)
};

// ScriptStruct AC2.SetupSuspensionsLimits
// 0x0240
struct FSetupSuspensionsLimits
{
	struct FSetupSelectorLimits                        ARB[0x2];                                                 // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        WheelRate[0x4];                                           // 0x0040(0x0020) (Edit)
	struct FSetupSelectorLimits                        BumpStopRateUp[0x4];                                      // 0x00C0(0x0020) (Edit)
	struct FSetupSelectorLimits                        BumpStopRateDn[0x4];                                      // 0x0140(0x0020) (Edit)
	struct FSetupSelectorLimits                        BumpStopRange[0x4];                                       // 0x01C0(0x0020) (Edit)
};

// ScriptStruct AC2.SetupDamperLimits
// 0x0200
struct FSetupDamperLimits
{
	struct FSetupSelectorLimits                        BumpSlow[0x4];                                            // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        ReboundSlow[0x4];                                         // 0x0080(0x0020) (Edit)
	struct FSetupSelectorLimits                        BumpFast[0x4];                                            // 0x0100(0x0020) (Edit)
	struct FSetupSelectorLimits                        ReboundFast[0x4];                                         // 0x0180(0x0020) (Edit)
};

// ScriptStruct AC2.SetupDifferentialLimits
// 0x0020
struct FSetupDifferentialLimits
{
	struct FSetupSelectorLimits                        Preload;                                                  // 0x0000(0x0020) (Edit)
};

// ScriptStruct AC2.SetupTyresLimits
// 0x00A0
struct FSetupTyresLimits
{
	struct FSetupSelectorLimits                        TyreSetLimits;                                            // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        pressure[0x4];                                            // 0x0020(0x0020) (Edit)
};

// ScriptStruct AC2.SetupElectronicsLimits
// 0x0060
struct FSetupElectronicsLimits
{
	struct FSetupSelectorLimits                        TC1;                                                      // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        Abs;                                                      // 0x0020(0x0020) (Edit)
	struct FSetupSelectorLimits                        ECU;                                                      // 0x0040(0x0020) (Edit)
};

// ScriptStruct AC2.SetupBrakesLimits
// 0x0040
struct FSetupBrakesLimits
{
	struct FSetupSelectorLimits                        Torque;                                                   // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        Bias;                                                     // 0x0020(0x0020) (Edit)
};

// ScriptStruct AC2.SetupStrategyLimits
// 0x0040
struct FSetupStrategyLimits
{
	struct FSetupSelectorLimits                        Fuel;                                                     // 0x0000(0x0020) (Edit)
	struct FSetupSelectorLimits                        Compound;                                                 // 0x0020(0x0020) (Edit)
};

// ScriptStruct AC2.SetupLimits
// 0x07C0
struct FSetupLimits
{
	struct FSetupAeroLimits                            AeroLimits;                                               // 0x0000(0x00C0) (Edit)
	struct FSetupAlignmentLimits                       AlignmentLimits;                                          // 0x00C0(0x0120) (Edit)
	struct FSetupSuspensionsLimits                     SuspensionLimits;                                         // 0x01E0(0x0240) (Edit)
	struct FSetupDamperLimits                          DamperLimits;                                             // 0x0420(0x0200) (Edit)
	struct FSetupDifferentialLimits                    DifferentialLimits;                                       // 0x0620(0x0020) (Edit)
	struct FSetupTyresLimits                           TyresLimits;                                              // 0x0640(0x00A0) (Edit)
	struct FSetupElectronicsLimits                     ElectronicsLimits;                                        // 0x06E0(0x0060) (Edit)
	struct FSetupBrakesLimits                          BrakesLimits;                                             // 0x0740(0x0040) (Edit)
	struct FSetupStrategyLimits                        StrategyLimits;                                           // 0x0780(0x0040) (Edit)
};

// ScriptStruct AC2.DamperLut
// 0x0018 (0x0020 - 0x0008)
struct FDamperLut : public FTableRowBase
{
	struct FString                                     ScreenName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 DamperLut;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupTyre
// 0x0018
struct FSetupTyre
{
	int                                                tyreSet;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                tyreCompound;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                tyrePressure[0x4];                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupAlignment
// 0x0044
struct FSetupAlignment
{
	int                                                Camber[0x4];                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Toe[0x4];                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              staticCamber[0x4];                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToeOutLinear[0x4];                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SteerRatio;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupElectronics
// 0x0014
struct FSetupElectronics
{
	int                                                TC1;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TC2;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Abs;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ECUMap;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FuelMix;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.PitStrategy
// 0x0064
struct FPitStrategy
{
	int                                                FuelToAdd;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSetupTyre                                  tyres[0x4];                                               // 0x0004(0x0018) (Edit)
};

// ScriptStruct AC2.SetupStrategy
// 0x0068
struct FSetupStrategy
{
	int                                                Fuel;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPitStrategy                                PitStrategy;                                              // 0x0004(0x0064) (Edit)
};

// ScriptStruct AC2.BasicCarSetup
// 0x00D8
struct FBasicCarSetup
{
	struct FSetupTyre                                  tyres;                                                    // 0x0000(0x0018) (Edit)
	struct FSetupAlignment                             Alignment;                                                // 0x0018(0x0044) (Edit)
	struct FSetupElectronics                           electronics;                                              // 0x005C(0x0014) (Edit)
	struct FSetupStrategy                              Strategy;                                                 // 0x0070(0x0068) (Edit)
};

// ScriptStruct AC2.SetupMechanicalBalance
// 0x0050
struct FSetupMechanicalBalance
{
	int                                                ARBFront;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ARBRear;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WheelRate[0x4];                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BumpStopRateUp[0x4];                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BumpStopRateDn[0x4];                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BumpStopWindow[0x4];                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BrakeTorque;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BrakeBias;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupDampers
// 0x0040
struct FSetupDampers
{
	int                                                BumpSlow[0x4];                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BumpFast[0x4];                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReboundSlow[0x4];                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReboundFast[0x4];                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupAeroBalance
// 0x0028
struct FSetupAeroBalance
{
	int                                                RideHeight[0x4];                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rodLength[0x4];                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Splitter;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RearWing;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.SetupDrivetrain
// 0x0004
struct FSetupDrivetrain
{
	int                                                Preload;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.AdvancedCarSetup
// 0x00BC
struct FAdvancedCarSetup
{
	struct FSetupMechanicalBalance                     MechanicalBalance;                                        // 0x0000(0x0050) (Edit)
	struct FSetupDampers                               Dampers;                                                  // 0x0050(0x0040) (Edit)
	struct FSetupAeroBalance                           AeroBalance;                                              // 0x0090(0x0028) (Edit)
	struct FSetupDrivetrain                            Drivetrain;                                               // 0x00B8(0x0004) (Edit)
};

// ScriptStruct AC2.CarSetup
// 0x0194
struct FCarSetup
{
	struct FBasicCarSetup                              BasicSetup;                                               // 0x0000(0x00D8) (Edit, BlueprintVisible)
	struct FAdvancedCarSetup                           AdvancedSetup;                                            // 0x00D8(0x00BC) (Edit, BlueprintVisible)
};

// ScriptStruct AC2.SurfaceDef
// 0x0040
struct FSurfaceDef
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	ESurfaceType                                       SurfaceType;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Friction;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionRain;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionRainGamma;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirtAdditiveK;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsValidTrack;                                             // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPitlane;                                                // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              SinHeight;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sinlength;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Vibration;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VibrationLength;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WearMultiplier;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.CameraSet
// 0x0038
struct FCameraSet
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct AC2.ViewGUIResult
// 0x0018
struct FViewGUIResult
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.DynamicWingControllerData
// 0x0020
struct FDynamicWingControllerData
{
	ECombinatorModeW                                   CombinatorMode;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EInputVarW                                         InputVar;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UCurveFloat*                                 Lut;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Filter;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpLimit;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownLimit;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.TimedCameraHeadTranslator
// 0x0018
struct FTimedCameraHeadTranslator
{
	struct FDateTime                                   Time;                                                     // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.CommandButton
// 0x0020 (0x0028 - 0x0008)
struct FCommandButton : public FTableRowBase
{
	int                                                ButtonIndex;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PowIndex;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PowValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerActionType                              InstantActionCode;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsExtendedAction;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerActionType                              ExtendedActionCode;                                       // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              ExtendedTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerActionType                              PinkieInstanceActionCode;                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerActionType                              PinkieExtendedActionCode;                                 // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x001E(0x000A) MISSED OFFSET
};

// ScriptStruct AC2.CommandAxis
// 0x0018 (0x0020 - 0x0008)
struct FCommandAxis : public FTableRowBase
{
	int                                                AxisIndex;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerAxisType                                AxisCode;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              MinRange;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.CommandDevice
// 0x0078 (0x0080 - 0x0008)
struct FCommandDevice : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FName                                       ProductName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProductId;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SteeringWheelModel;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsGamePad;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsPedals;                                                 // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FName                                       IconTemplate;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FCommandButton>                      UICommandButtonList;                                      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FCommandButton>                      RaceCommandButtonList;                                    // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FCommandAxis>                        RaceCommandAxisList;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ForceFeedbackGain;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteerScale;                                               // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteerLock;                                                // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumForceFeedback;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakeGamma;                                               // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CombinedPedals;                                           // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.GamepadSettings
// 0x0020 (0x0028 - 0x0008)
struct FGamepadSettings : public FTableRowBase
{
	bool                                               UseSteerWithRight;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              RumbleIntensity;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steerSpeed;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteerGamma;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteerFilter;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedSensitivity;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAutoSteer;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AC2.KeyboardSettings
// 0x0020 (0x0028 - 0x0008)
struct FKeyboardSettings : public FTableRowBase
{
	bool                                               mouseSteering;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               mouseAcceleratorBrake;                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              steerSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steerOppositeDirectionFactor;                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steerGain;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              steerResetFactor;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lookAhead;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mouseSpeed;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.CommandConfiguration
// 0x0090
struct FCommandConfiguration
{
	struct FString                                     ConfigurationName;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      CarControllerMode;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FCommandDevice>                      CommandDevices;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGamepadSettings                            GamepadSettings;                                          // 0x0028(0x0028) (Edit, BlueprintVisible)
	struct FKeyboardSettings                           KeyboardSettings;                                         // 0x0050(0x0028) (Edit, BlueprintVisible)
	struct FString                                     Comment;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.GuiColorsAsset
// 0x0030 (0x0038 - 0x0008)
struct FGuiColorsAsset : public FTableRowBase
{
	EGuiColors                                         ColorName;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0010(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct AC2.GuiAssists
// 0x0010 (0x0018 - 0x0008)
struct FGuiAssists : public FTableRowBase
{
	EGuiPresetType                                     PresetType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoGear;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoClutch;                                               // 0x000A(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              stabilityControl;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoEngineSwitch;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoWiper;                                                // 0x0011(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoLights;                                               // 0x0012(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoPitLimiter;                                           // 0x0013(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoPitProcedure;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               autoPitRequest;                                           // 0x0015(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               showIdealLine;                                            // 0x0016(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct AC2.GuiRealism
// 0x0010 (0x0018 - 0x0008)
struct FGuiRealism : public FTableRowBase
{
	EGuiPresetType                                     PresetType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              damageRate;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               tyreWear;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               fuelConsumption;                                          // 0x0011(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               unlimitedTyreSet;                                         // 0x0012(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               brakeFading;                                              // 0x0013(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.CameraType
// 0x0008
struct FCameraType
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AC2.SessionInfoEntryBaseRaceEntryInfo
// 0x01B8
struct FSessionInfoEntryBaseRaceEntryInfo
{
	struct FCarInfo                                    CarInfo;                                                  // 0x0000(0x0098) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	TArray<struct FDriverInfo>                         DriversOnCar;                                             // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDriverInfo                                 ActiveDriverInfo;                                         // 0x00B0(0x00D0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	int                                                PositionTotal;                                            // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PositionInClass;                                          // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Laps;                                                     // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayer;                                                 // 0x0194(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	TArray<int>                                        Splits;                                                   // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       IsRecordSplit;                                            // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.SessionInfoPanelSettings
// 0x0060
struct FSessionInfoPanelSettings
{
	EFSessionInfoPanelType                             PanelType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      EntryWidgetClass;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	int                                                EventIndex;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RaceSessionType;                                          // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                KsonOnlineEventReference;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     UE4TrackName;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               KsonIncludeDriver;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                KsonTake;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KsonRelativeN;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KsonCombinedWetness;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KsonRestrictToDriverCarModel;                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECarModelType                                      KsonDriverCarModel;                                       // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct AC2.SessionInfoLapInfo
// 0x0030
struct FSessionInfoLapInfo
{
	int                                                LapNo;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Laptime;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Gap;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DriverIndex;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<int>                                        splitTimes;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsValid;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.CarDataJson
// 0x04E8
struct FCarDataJson
{
	struct FString                                     ScreenName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MassKG;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Inertia;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MinimumHeight;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSteerData                                  SteerData;                                                // 0x0024(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FFuelData                                   FuelData;                                                 // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBrakesData                                 BrakesData;                                               // 0x0058(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FEngineData                                 EngineData;                                               // 0x00E8(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDrivetrainData                             Drivetrain;                                               // 0x0188(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSuspData                                   Suspensions;                                              // 0x0228(0x0268) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FARBData                                    ARBFront;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FARBData                                    ARBRear;                                                  // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FTractionControl                            TractionControl;                                          // 0x0498(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FABSData                                    Abs;                                                      // 0x04B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     FilePath;                                                 // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AC2.TyreCompoundSetJson
// 0x0280
struct FTyreCompoundSetJson
{
	struct FString                                     TyreCompoundName;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTyreCompoundData                           Front;                                                    // 0x0010(0x0130) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FTyreCompoundData                           Rear;                                                     // 0x0140(0x0130) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     FilePath;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AC2.CompoundSet
// 0x0280
struct FCompoundSet
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ShortName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FTyreCompoundData                           Front;                                                    // 0x0020(0x0130) (Edit)
	struct FTyreCompoundData                           Rear;                                                     // 0x0150(0x0130) (Edit)
};

// ScriptStruct AC2.LapTimeResponse
// 0x0002
struct FLapTimeResponse
{
	bool                                               bNewWR;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNewPB;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.LapData
// 0x0008 (0x0078 - 0x0070)
struct FLapData : public FLapDataTimes
{
	bool                                               bIsValidLap;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct AC2.RaceWidgetLayout
// 0x0040 (0x0048 - 0x0008)
struct FRaceWidgetLayout : public FTableRowBase
{
	class UClass*                                      raceWidgetClass;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     caption;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EWigetAnchor                                       widgetAnchor;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              offsetX;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              offsetY;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisabled;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isDevOrTestOnly;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isDevOnly;                                                // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<ESessionType>                               hideInSessionTypes;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AC2.VirtualDesktopLayout
// 0x0048 (0x0050 - 0x0008)
struct FVirtualDesktopLayout : public FTableRowBase
{
	int                                                ID;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     caption;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRaceWidgetLayout>                   widgetDefinitions;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	bool                                               IsDisabled;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isDevOrTestOnly;                                          // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isDevOnly;                                                // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<ESessionType>                               hideInSessionTypes;                                       // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DesktopHUDClass;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.CornerSectionLapData
// 0x0020
struct FCornerSectionLapData
{
	int                                                CarIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SectionsCompleted;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SectionsTotal;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              TrafficPercent;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Cuts;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                CutAdvantage;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinorMistakes;                                            // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MajorMistakes;                                            // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              ConsistencyLapRating;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConsistencyLastLapReferences;                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AC2.UGearRatioSplit
// 0x0008 (0x0010 - 0x0008)
struct FUGearRatioSplit : public FTableRowBase
{
	float                                              RatioSplit;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AC2.UIniValue
// 0x0020 (0x0028 - 0x0008)
struct FUIniValue : public FTableRowBase
{
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AC2.RaceTransitionStruct
// 0x0010
struct FRaceTransitionStruct
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AC2.HighlightEventsData
// 0x0018 (0x0020 - 0x0008)
struct FHighlightEventsData : public FTableRowBase
{
	EHighLightsEventType                               EventType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Weigth;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxPresence;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct AC2.CornerSectionLapDataStack
// 0x0018
struct FCornerSectionLapDataStack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AC2.CornerSectionCarResultArray
// 0x0010
struct FCornerSectionCarResultArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AC2.CornerSectionCarResult
// 0x00C4
struct FCornerSectionCarResult
{
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0000(0x00C4) MISSED OFFSET
};

// ScriptStruct AC2.CornerSectionTyreStatistics
// 0x0090
struct FCornerSectionTyreStatistics
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct AC2.ViewOptions
// 0x0038
struct FViewOptions
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steps;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Command;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EGraphicsOptions                                   Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGraphicsIndexType                                 IndexType;                                                // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
