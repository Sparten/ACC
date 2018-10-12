#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <memory>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <set>
#include <winsock.h>
namespace ksRacing
{
	#define __int8 char
	#define __int16 short
	#define __int32 int
	#define __int64 long long

	struct type_info;
	struct type_infoVtbl;
	struct WritableRaceStructureVtbl;
	struct CarInfo;
	struct DriverInfo;
	struct OnRemoteLapEvent;
	struct TrackEvent;
	struct Lap;
	struct NextSessionPenalty;
	struct SessionPenalty;
	struct WeatherStatus;
	struct PitStopEvent;
	struct TyreSet;
	struct EventResult;
	struct DriverEntity;
	struct CarEntity;
	struct SessionEntity;
	struct EventEntity;
	struct EntryListUpdatedEvent;
	struct RaceStateEvent;
	struct RaceStartTimeEvent;
	struct StartSessionEvent;
	struct SwapDriverEvent;
	struct DriverEntry;
	struct AddOnlineEvent;
	struct spawnType;
	struct EntryList;
	struct UpdateOfficialPositionEvent;
	struct CarState;
	struct UpdateCarSystems;
	struct CarPenalty;
	struct CarStateServices;
	struct DriverStateServices;
	struct WeatherServices;
	struct SeasonItem;
	struct ResultServices;
	struct GarageStock;
	struct GarageServices;
	struct DriverState;
	struct TrackServices;
	struct OnSplitTimeEvent;
	struct BestLap;
	struct CarInvestigation;
	struct TimingServices;
	struct InvestigationStart;
	struct InvestigationEnd;
	struct RaceDirectorServices;

	enum class RaceSessionType : uint8_t
	{
		FreePractice1 = 0,
		FreePractice2 = 1,
		PreQualifying = 2,
		WarmUp = 3,
		Qualifying = 4,
		Qualifying1 = 5,
		Qualifying2 = 6,
		Qualifying3 = 7,
		Qualifying4 = 8,
		Superpole = 9,
		Race = 10,
		Hotlap = 11,
		Hotstint = 12,
		HotlapSuperpole = 13,
	};
	enum class RaceSessionPhase : uint8_t
	{
		StartingUI = 0,
		PreFormationTime = 1,
		FormationTime = 2,
		PreSessionTime = 3,
		SessionTime = 4,
		SessionOverTime = 5,
		PostSessionTime = 6,
		ResultUI = 7,
	};
	enum class DriverCategory : uint8_t
	{
		EDriverCategory__Platinum = 0,
		EDriverCategory__Gold = 1,
		EDriverCategory__Silver = 2,
		EDriverCategory__Bronze = 3,
		EDriverCategory__EDriverCategory_MAX = 4
	};
	enum class Nationality : uint16_t
	{
		ENationality__Any = 0,
		ENationality__Italy = 1,
		ENationality__Germany = 2,
		ENationality__France = 3,
		ENationality__Spain = 4,
		ENationality__GreatBritain = 5,
		ENationality__Hungary = 6,
		ENationality__Belgium = 7,
		ENationality__Switzerland = 8,
		ENationality__Austria = 9,
		ENationality__Russia = 10,
		ENationality__Thailand = 11,
		ENationality__Netherlands = 12,
		ENationality__Poland = 13,
		ENationality__Argentina = 14,
		ENationality__Monaco = 15,
		ENationality__Ireland = 16,
		ENationality__Brazil = 17,
		ENationality__SouthAfrica = 18,
		ENationality__PuertoRico = 19,
		ENationality__Slovakia = 20,
		ENationality__Oman = 21,
		ENationality__Greece = 22,
		ENationality__SaudiArabia = 23,
		ENationality__Norway = 24,
		ENationality__Turkey = 25,
		ENationality__SouthKorea = 26,
		ENationality__Lebanon = 27,
		ENationality__Armenia = 28,
		ENationality__Mexico = 29,
		ENationality__Sweden = 30,
		ENationality__Finland = 31,
		ENationality__Denmark = 32,
		ENationality__Croatia = 33,
		ENationality__Canada = 34,
		ENationality__China = 35,
		ENationality__Portugal = 36,
		ENationality__ENationality_MAX = 37
	};
	// Enum AC2.ECarModelType
	enum class CarModelType : uint8_t
	{
		ECarModelType__Porsche_991_GT3_R = 0,
		ECarModelType__Mercedes_AMG_GT3 = 1,
		ECarModelType__Ferrari_488_GT3 = 2,
		ECarModelType__Audi_R8_LMS = 3,
		ECarModelType__Lamborghini_Huracan_GT3 = 4,
		ECarModelType__Mclaren_650s_GT3 = 5,
		ECarModelType__Nissan_GT_R_Nismo_GT3 = 6,
		ECarModelType__BMW_M6_GT3 = 7,
		ECarModelType__Bentley_Continental_GT3 = 8,
		ECarModelType__Porsche_991II_GT3_Cup = 9,
		ECarModelType__Nissan_GT_R_Nismo_GT301 = 10,
		ECarModelType__Bentley_Continental_GT301 = 11,
		ECarModelType__Aston_Martin_Vantage_V12_GT3 = 12,
		ECarModelType__Lamborghini_Gallardo_R_EX = 13,
		ECarModelType__Jaguar_G3 = 14,
		ECarModelType__Lexus_RC_F_GT3 = 15,
		ECarModelType__Lamborghini_Huracan_GT301 = 16,
		ECarModelType__ECarModelType_MAX = 17
	};
	// Enum AC2.EMarshalFlagType
	enum class MarshalFlagType : uint8_t
	{
		EMarshalFlagType__White = 0,
		EMarshalFlagType__Green = 1,
		EMarshalFlagType__Red = 2,
		EMarshalFlagType__Blue = 3,
		EMarshalFlagType__Yellow = 4,
		EMarshalFlagType__Black = 5,
		EMarshalFlagType__BlackWhite = 6,
		EMarshalFlagType__Checkered = 7,
		EMarshalFlagType__OrangeCircle = 8,
		EMarshalFlagType__RedYellowStipes = 9,
		EMarshalFlagType__None = 10,
		EMarshalFlagType__EMarshalFlagType_MAX = 11
	};
	enum class CupCategory : uint8_t
	{
		ECupCategory__Overall = 0,
		ECupCategory__ProAm = 1,
		ECupCategory__Am = 2,
		ECupCategory__Silver = 3,
		ECupCategory__National = 4,
		ECupCategory__ECupCategory_MAX = 5
	};
	enum class CarLocation : uint8_t
	{
		ECarLocation__Null = 0,
		ECarLocation__Track = 1,
		ECarLocation__PitLane = 2,
		ECarLocation__PitEntry = 3,
		ECarLocation__PitExit = 4,
		ECarLocation__ECarLocation_MAX = 5
	};

	enum class RaceEventType : uint8_t
	{
		ERaceEventType__A_3H = 0,
		ERaceEventType__B_24H = 1,
		ERaceEventType__C_6H = 2,
		ERaceEventType__D_1H = 3,
		ERaceEventType__ERaceEventType_MAX = 4
	};

	/* 1737 */
	enum class LapStateFlags : uint16_t
	{
		HasCut = 0x0,
		IsInvalidLap = 1,
		HasPenalty = 2,
		IsOutLap = 3,
		IsInLap = 4,
		IsFormationLap = 5,
		IsSafetyCarOnTrack = 6,
		IsFullCourseYellow = 7,
		IsRetired = 8,
		IsDisqualified = 9,
		IsOnPitWorkingZone = 10,
		DriverSwap = 11,
	};

	/* 1750 */
	typedef LapStateFlags PitStopMistakeType;

	/* 1751 */
	enum class PitStopRepairType : uint8_t
	{
		Chassis = 0x0,
		SuspensionLF = 0x1,
		SuspensionRF = 0x2,
		SuspensionLR = 0x3,
		SuspensionRR = 0x4,
		Brakes = 0x5,
		Radiator = 0x6,
		GearBox = 0x7,
	};
	enum NextSessionPenaltyType : uint8_t
	{
		WorsenPosition = 0x0,
		DelayOnPit = 0x1,
		DriveThrough = 0x2,
		StopAndGo = 0x3,
		NoRace = 0x4,
		BadPoints = 0x5,
	};

	template<typename T>
	struct Event
	{
		std::vector<std::pair<void *, std::function<void __cdecl(T const &)> >> handlers;
		// I still need to get this one worked out it would be nice to be able to added events handlers and only update when needed.
		/*void addHandler(std::function<void __cdecl(T const &)> *h, void *owner)
		{			
			handlers.push_back(std::make_pair(owner,*h));
		}*/
	};
	/* 67188 */
	struct WritableRaceStructure
	{
		WritableRaceStructureVtbl *vfptr;
		std::wstring fileDir;
	};

	/* 67368 */
	struct __declspec(align(8)) RaceRules : WritableRaceStructure
	{
		char fullSeasonJokerTyreCount;
		char raceToRaceJokerTyreCount;
		char pitlaneSpeedLimitKmh;
	};

	/* 67369 */
	struct HudRules : WritableRaceStructure
	{
		unsigned char highlightTargetLocation[1];
		unsigned char highlightRollingStartLocation[1];
		unsigned char showVirtualMirror[1];
		unsigned char showVirtualFlags[1];
		unsigned char showRadar[1];
		unsigned char showFuelAlert[1];
		unsigned char showTyreTempAlert[1];
	};

	/* 67370 */
	struct __declspec(align(8)) AssistRules : WritableRaceStructure
	{
		char presetIndex;
		std::wstring description;
		unsigned char autoGear[1];
		unsigned char autoClutch[1];
		float stabilityControlLevelMin;
		float stabilityControlLevelMax;
		unsigned char autoEngineSwitch[1];
		unsigned char autoPitLimiter[1];
		unsigned char autoPitProcedure[1];
		unsigned char autoWiper[1];
		unsigned char autoLights[1];
		unsigned char autoPitRequest[1];
		unsigned char showIdealLine[1];
	};

	/* 67371 */
	struct GraphicsRules : WritableRaceStructure
	{
		char rainSprayLevelMin;
		char rainSprayLevelMax;
		char rainWindShieldLevelMin;
		char rainWindShieldLevelMax;
		char cockpitLevelMirrorMin;
		char cockpitLevelMirrorMax;
	};

	/* 67372 */
	struct SuperpoleRules : WritableRaceStructure
	{
		char d_Q3_EligibleCarFactor;
		char superpoleEligibleCarNumber;
		unsigned __int16 superpoleCarStartInterval;
		char superpoleMaxValidLapCount;
		char superPoleLimitedTyreSetCount;
	};

	/* 67373 */
	struct RealismRules : WritableRaceStructure
	{
		char presetIndex;
		std::wstring description;
		char eventIndex;
		char sessionIndex;
		float damageRate;
		unsigned char instantSetupChange[1];
		float setupChangeTimeRate;
		float carRepairTimeRate;
		unsigned char yellowFlags[1];
		unsigned char fullYellowCourse[1];
		unsigned char safetyCar[1];
		unsigned char fastRollingStart[1];
		unsigned char tyreFuelWear[1];
		unsigned char unlimitedTyreSet[1];
		unsigned char brakeFading[1];
	};

	/* 67374 */
	struct __declspec(align(8)) GameplayRules : WritableRaceStructure
	{
		char eventIndex;
		char sessionIndex;
		unsigned char canTeleportToPit[1];
		unsigned __int16 teleportToPitPenaltyTime;
		unsigned char superpoleVirtualSession[1];
		int preSessionTime;
		unsigned char simulateTeammates[1];
		char skillMultiplier;
		char aggroMultiplier;
		int playerSessionPostTime;
	};

	/* 67375 */
	struct OnlineRules : WritableRaceStructure
	{
		char eventIndex;
		char sessionIndex;
		unsigned char singleEvents[1];
		unsigned char loopSeason[1];
		unsigned __int16 maxPing;
		char lagSecs;
		char lagCount;
		unsigned char simulateAsOneManTeam[1];
		unsigned char forcePlayerSwap[1];
		unsigned char cockpitCameraMode[1];
		unsigned char dashCameraMode[1];
		unsigned char chaseCameraMode[1];
		unsigned char bumperCameraMode[1];
		unsigned char bonnetCameraMode[1];
		unsigned char freeJoinMode[1];
		unsigned int sessionStartingUITime;
		unsigned int sessionResultUITime;
		unsigned int sessionRaceOverTime;
		unsigned int sessionPostRaceTime;
	};


	struct __declspec(align(8)) RaceDirectorRules : WritableRaceStructure
	{
		char eventIndex;
		char sessionIndex;
		unsigned char humanRaceDirector[1];
		int severeCutTimeLimit;
		int lightCutTimeLimit;
		unsigned int cutClearTime;
		char activeCutInvestigationLimit;
	};
	struct DriverInfo : WritableRaceStructure
	{
		std::wstring firstName;
		std::wstring secondName;
		std::wstring lastName;
		std::wstring nickName;
		std::wstring shortName;
		char weight;
		Nationality nationality;
		DriverCategory driverCategory;
		std::wstring driverRow;
		int helmetTemplateKey;
		int helmetBaseColor;
		int helmetDetailColor;
		char helmetMaterialType;
		int helmetGlassColor;
		float helmetGlassMetallic;
		int glovesTemplateKey;
		int suitTemplateKey;
		int suitDetailColor1;
		int suitDetailColor2;
		char skillLevel;
		char aggroLevel;
		char aiRainSkill;
		char aiConsistency;
		std::wstring playerID;
	};
	struct __declspec(align(8)) DriverEntry
	{
		DriverInfo driverInfo;
		unsigned __int16 connectedCarIndex;
		bool isDriving;
	};

	struct __declspec(align(8)) SeasonEntity : WritableRaceStructure
	{
		RaceRules rules;
		HudRules hud;
		AssistRules assists;
		GraphicsRules graphics;
		SuperpoleRules superpoleRules;
		RealismRules sessionRealism;
		GameplayRules sessionGameplay;
		OnlineRules sessionOnline;
		RaceDirectorRules sessionRaceDirector;
		std::vector<RealismRules> sessionRealismOverride;
		std::vector<GameplayRules> sessionGameplayOverride;
		std::vector<OnlineRules> sessionOnlineOverride;
		std::vector<RaceDirectorRules> sessionRaceDirectorOverride;
		std::vector<EventEntity> events;
		int eventOnlineReference;
	};

	struct  __declspec(align(8)) TeamResult : WritableRaceStructure
	{
		int teamGuid;
		std::wstring teamName;
		Nationality nationality;
		std::wstring displayName;
		std::wstring competitorName;
		Nationality competitorNationality;
	};

	struct __declspec(align(8)) CarResult : WritableRaceStructure
	{
		int carGuid;
		int raceNumber;
		CarModelType carModelType;
		CupCategory cupCategory;
	};
	struct  DriverResult : WritableRaceStructure
	{
		std::wstring firstName;
		std::wstring secondName;
		std::wstring lastName;
		std::wstring nickName;
		std::wstring shortName;
		char weight;
		Nationality nationality;
		DriverCategory driverCategory;
		std::wstring  playerID;
	};
	/* 67357 */
	struct SessionResult : WritableRaceStructure
	{
		unsigned char sessionType;
		unsigned char round;
		unsigned char displayResult;
		std::vector<TrackEvent > trackEvents;
		std::vector<Lap> laps;
		std::vector<NextSessionPenalty > nextSessionPenalties;
		std::vector<SessionPenalty> currentSessionPenalties;
		std::vector<WeatherStatus> weatherForUpdateMinutes;
		std::vector<PitStopEvent> pitstopEvents;
		std::vector<std::vector<TyreSet>> tyresConditions;
		std::map<unsigned short, unsigned short> startingDriverIndex;
		std::map<unsigned short, float> carFuelStatus;
		std::vector<unsigned short > standing;
		std::vector<short> points;
	};

	/* 67367 */
	struct SeasonResult : WritableRaceStructure
	{
		std::vector<TeamResult> teams;
		std::vector<CarResult> cars;
		std::vector<DriverResult> drivers;
		std::vector<EventResult> events;
		std::vector<short> points;
		SessionResult savedSession;
	};

	/* 68554 */
	struct RaceManager
	{
		Event<enum TrackFlagLights> onTrackLightsEvent;
		Event<RaceStateEvent> onRaceStateEvent;
		Event<RaceStartTimeEvent> onRaceStartTimeEvent;
		Event<StartSessionEvent> onStartSessionEvent;
		Event<SwapDriverEvent> onSwapDriverEvent;
		Event<bool> onPitWindowEvent;
		Event<bool> onSessionOverEvent;
		Event<bool> onSeasonOverEvent;
		Event<bool> onCheckCarInitializatedEvent;
		Event<ksRacing::AddOnlineEvent> onAddOnlineEvent;
		char sectorCount;
		std::wstring exportFileName;
		long double physicsTime;
		long double sessionStartTimeStamp;
		long double receivedServerTime;
		long double serverTimeOffset;
		bool isServer;
		bool isClient;
		bool canProceed;
		bool isMandatoryPitWindowOpen;
		float pitWindowOpenAtTime;
		float pitWindowCloseAtTime;
		bool canTick;
		bool areCarsInitializated;
		bool isTimeStopped;
		bool hasPlayerCarMoved;
		std::unique_ptr<EntryList > entryList;
		std::unique_ptr<CarStateServices> carStateServices;
		std::unique_ptr<DriverStateServices> driverStateServices;
		std::unique_ptr<WeatherServices> weatherServices;
		std::unique_ptr<ResultServices > resultServices;
		std::unique_ptr<GarageServices> garageServices;
		std::unique_ptr<TrackServices> trackServices;
		std::unique_ptr<TimingServices> timingServices;
		std::unique_ptr<RaceDirectorServices> raceDirectorServices;
		SeasonEntity seasonEntity;
		GameplayRules sessionGameplayRules;
		OnlineRules sessionOnlineRules;
		RealismRules sessionRealismRules;
		SeasonResult originalSeasonResult;
		float sessionStartTime;
		float sessionEndTime;
		unsigned __int16 currentEventIndex;
		unsigned __int16 currentSessionIndex;
		unsigned __int16 currentIndexBySession;
		RaceEventType currentEventType;
		RaceSessionType currentSessionType;
		RaceSessionPhase currentSessionPhase;
		bool isEventInitializated;
		bool isSessionInitializated;
	};

	/* 68508 */
	struct EntryList
	{
		Event<EntryListUpdatedEvent> onEntryListUpdatedEvent;
		std::map<unsigned short, CarInfo> carMap;
		std::map<unsigned short, DriverEntry> driverMap;
		RaceManager *raceManager;
		RaceEventType eventType;
		std::map<unsigned short, std::set<unsigned short, std::less<unsigned short> > > carDrivers;
	};

	const struct __declspec(align(8)) UpdateCarPosition
	{
		long double time;
		unsigned __int16 newPosition;
		unsigned __int16 carIndex;
	};
	/* 68576 */
	struct __declspec(align(8)) CarStateServices
	{
		Event<UpdateOfficialPositionEvent> onUpdateOfficialPositionEvent;
		Event<bool> onUpdateStandingEvent;
		Event<UpdateCarSystems> onUpdateSystems;
		Event<UpdateCarSystems> onUpdateReplaySystem;
		Event<unsigned short> onSessionOverEvent;
		Event<UpdateCarPosition> onPositionUpdate;
		RaceManager *raceManager;
		char sorterState;
		std::map<unsigned short, CarState> carStates;
		std::map<unsigned short, CarState *> liveCarStates;
		std::map<unsigned short, UpdateCarPosition> realtimePositionsChanges;
		std::vector<unsigned short> lastRealtimePositions;
		std::vector<unsigned short> realtimePositions;
		std::vector<unsigned short> splinePositions;
		std::vector<std::vector<unsigned short>> cupStandingAsCarIndex;
		bool doAllCarsCompleteTheSession;
		bool realtimePositionsTriggerEnabled;
	};

	/* 68591 */
	struct DriverStateServices
	{
		RaceManager *raceManager;
		std::map<unsigned short, DriverState> driverStates;
	};

	/* 67320 */
	struct __declspec(align(8)) WeatherStatus : WritableRaceStructure
	{
		float ambientTemperature;
		float roadTemperature;
		float wetLevel;
		float windSpeed;
		float windDirection;
		float rainLevel;
		float cloudLevel;
		float sunLightFactor;
	};

	/* 67420 */
	struct WeatherData : WritableRaceStructure
	{
		char enabled;
		float sunlightMean;
		float sunlightAmplitude;
		float ambientTemperatureMean;
		float ambientTemperatureAmplitude;
		int nHarmonics;
		float weatherBaseMean;
		float weatherBaseDeviation;
		float variabilityMean;
		float variabilityDeviation;
		std::vector<float, std::allocator<float> > sineCoefficients;
		std::vector<float, std::allocator<float> > cosineCoefficients;
	};

	/* 68596 */
	struct __declspec(align(8)) WeatherServices
	{
		bool isRandomInitialized;
		RaceManager *raceManager;
		WeatherStatus status;
		WeatherData data;		
		float timeOfDaySeconds;
		float dayLenght;
	};

	/*struct __declspec(align(2)) ksRacing::SeasonItem
	{
		unsigned __int16 indexInSeasonList;
		CupCategory cupCategory;
	};*/
	/* 68607 */
	struct __declspec(align(8)) ResultServices
	{
		RaceManager *raceManager;
		SeasonResult seasonResult;
		RaceEventType raceEventType;
		std::map<unsigned short, ksRacing::SeasonItem > carToSeasonIndex;
		std::map<unsigned short, ksRacing::SeasonItem > driverToSeasonIndex;
		std::map<unsigned short, unsigned short > seasonIndexToCar;
		std::map<unsigned short, unsigned short > seasonIndexToDriver;
		unsigned __int16 lastPositionForNewCars;
	};

	/* 68618 */
	struct GarageServices
	{
		RaceManager *raceManager;
		std::vector<GarageStock, std::allocator<GarageStock> > stocks;
	};

	/* 68629 */
	struct DynamicTrackData
	{
		bool isExternal;
		bool enabled;
		float baseGrip;
		float rubberAccumulationMultiplier;
	};

	/* 67613 */
	struct DynamicTrackStatus
	{
		float idealLineGrip;
		float outsideLineGrip;
		float wetLevel;
		float puddlesLevel;
		float wetDryLineLevel;
		float marblesLevel;
	};

	/* 68630 */
	struct DynamicTrackWeatherParams
	{
		float waterAccumulationSpeed;
		float waterDissipationSpeed;
		float puddlesAccumulationSpeed;
		float puddlesDissipationSpeed;
	};

	/* 68631 */
	struct DynamicTrack
	{
		DynamicTrackData data;
		DynamicTrackStatus status;
		DynamicTrackWeatherParams weatherParams;
		float rubberLevel;
		float wetLevel;
		float puddlesLevel;
		float wetDryLineMod;
	};

	/* 68632 */
	struct __declspec(align(8)) TrackServices
	{
		Event<bool> onPitAvailability;
		RaceManager *raceManager;
		int trackId;
		std::wstring trackName;
		std::pair<float, float> greenFlagTriggerRange;
		std::pair<float, float> formationTriggerRange;
		float greenFlagFinalDistance;
		unsigned char trackStartingLight[1];
		unsigned char pitEntryLight[1];
		unsigned char pitExitLight[1];
		std::vector<std::pair<unsigned short, unsigned short>> fastLaneSpots;
		std::vector<std::pair<bool, unsigned short>> pitZoneStatus;
		DynamicTrack dynamicTrack;
	};
	/* 68227 */
	struct TimingRecord : WritableRaceStructure
	{
		unsigned __int16 index;
		std::vector<unsigned short> overallLapSet;
		std::vector<unsigned short> completedLapSet;
		std::vector<unsigned short> bestLapQueue;
		std::vector<std::vector<unsigned short>> bestSplitLapQueue;
		int bestLapValue;
		std::vector<int> bestSplitValues;
		int minBestLapValue;
		std::vector<int> minBestSplitValues;
	};

	/* 68244 */
	struct SessionTiming : WritableRaceStructure
	{
		std::vector<Lap> overallLaps;
		TimingRecord overallRecord;
		std::map<unsigned short, TimingRecord > carRecords;
		std::map<unsigned short, TimingRecord > driverRecords;
		std::vector<std::pair<unsigned short, unsigned short>> carCurrentLap;
	};

	/* 67302 */
	struct __declspec(align(8)) Lap : WritableRaceStructure
	{
		unsigned __int16 driverIndex;
		float timeStamp;
		int lapTime;
		std::vector<int> splitTimes;
		unsigned __int16 lapStates;
	};
	/* 78039 */
	struct __declspec(align(4)) PitSpeedingInvestigation
	{
		unsigned char investigationType;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		float sessionTime;
		float timeOverLimit;
		unsigned __int16 lapIndex;
		float notificationTriggerTime;
		bool hasBeenNotificated;
	};
	/* 68664 */
	struct TimingServices
	{
		Event<OnSplitTimeEvent> onSplitTimeEvent;
		Event<Lap> onLapEvent;
		Event<BestLap> onBestLapEvent;
		Event<OnRemoteLapEvent> onRemoteLapEvent;
		RaceManager *raceManager;
		SessionTiming timing;
		const char carMaxBestHistory;
		Lap nullLap;
	};
	/* 68728 */
	struct __declspec(align(8)) RaceDirectorServices
	{
		Event<InvestigationStart> onInvestigationStart;
		Event<InvestigationEnd> onInvestigationEnd;
		RaceManager *raceManager;
		CarStateServices *carStateServices;
		std::set<std::pair<unsigned short, unsigned short>> noOvertakeSectors;
		std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short, unsigned short> > > > it;
		std::set<unsigned short, std::less<unsigned short> > carsToRemove;
		std::map<unsigned short, CarInvestigation> cutInvestigations;
		std::map<unsigned short, PitSpeedingInvestigation>  pitSpeedingInvestigations;
		std::map<unsigned short, CarPenalty > penalties;
		bool isWetSession;
	};

	/* 67398 */
	struct CircuitEntity : WritableRaceStructure
	{
		bool enabled;
		char pitNumber;
		char sectorCount;
		float formationTriggerNormalizedRangeStart;
		float formationTriggerNormalizedRangeEnd;
		float greenFlagTriggerNormalizedRangeStart;
		float greenFlagTriggerNormalizedRangeEnd;
		float baseGrip;
	};

	/* 67411 */
	struct CarSet : WritableRaceStructure
	{
		std::vector<CarEntity> cars;
	};

	/* 67412 */
	struct EventRaceRules : WritableRaceStructure
	{
		char mandatoryPitStopToleranceCount;
		unsigned __int16 mandatoryPitStopDuration;
		char mandatoryPitStopCount;
		unsigned int maxStintTime;
		unsigned int extendedMaxStintTime;
		unsigned int specialProAm_D3_MaxStintTime;
		unsigned int extendedSpecialProAm_D3_MaxStintTime;
		unsigned int specialProAm_D3_MaxDrivingTime;
		unsigned int extendedSpecialProAm_D3_MaxDrivingTime;
		unsigned __int16 forcedTechnicalPitStopDuration;
		unsigned int forcedTechnicalPitStopTimeLimit;
		unsigned int maxContinuousDrivingTime;
		unsigned int maxDrivingTime;
		char penaltyLapLimit;
		unsigned int stintPenaltyTimeThresholdMins;
		unsigned int timeToEndOfRace;
		unsigned int timeToEndOfRacePenalty;
		unsigned int proAm_MinBronze_P_DrivingTime;
		unsigned int proAm_MinBronze_PP_DrivingTime;
		unsigned int proAm_MinBronzeTimePer24H_Stage;
		unsigned int am_MaxSilverDrivingTotalTime;
		unsigned int am_MinSilverTimePer24H_Stage;
		char firstEventNewTyreSetCount;
		char nextEventNewTyreSetCount;
		char nextEventUsedTyreSetCount;
		char bronzeSilverExtraNewTyreSetCount;
		char qualifyingRaceStartLimitedTyreSetCount;
		unsigned int pitWindowOpenAtTime;
		unsigned int pitWindowCloseAtTime;
		unsigned int singleDriverPitStopTime;
	};


	struct RaceEntity : WritableRaceStructure
	{
		RaceEventType eventType;
		EventRaceRules eventRaceRules;
		std::vector<SessionEntity> sessions;
	};

	/* 67421 */
	struct __declspec(align(8)) EventEntity : WritableRaceStructure
	{
		std::wstring trackName;
		CircuitEntity circuit;
		GraphicsRules graphics;
		CarSet carSet;
		RaceEntity race;
		WeatherStatus startupWeatherStatus;
		WeatherData startupWeatherData;
		float startupIdealLineGrip;
	};

	/* 67208 */
	struct __declspec(align(8)) CarInfo : WritableRaceStructure
	{
		int raceNumber;
		char auxLightKey;
		int auxLightColor;
		char skinTemplateKey;
		int skinColor1Id;
		int skinColor2Id;
		int skinColor3Id;
		char skinMaterialType1;
		char skinMaterialType2;
		char skinMaterialType3;
		int rimColor1Id;
		int rimColor2Id;
		char rimMaterialType1;
		char rimMaterialType2;
		std::wstring teamName;
		Nationality nationality;
		std::wstring displayName;
		std::wstring competitorName;
		Nationality competitorNationality;
		char teamTemplateKey;
		CarModelType carModelType;
		unsigned char cupCategory[1];
		unsigned char licenseType[1];
		bool useEnduranceKit;
		bool isPlayerCar;
		bool isNetCar;
	};

	/* 67209 */


	struct CarEntity : WritableRaceStructure
	{
		CarInfo info;
		std::vector<DriverEntity> drivers;
	};
	/* 67362 */
	struct EventResult : WritableRaceStructure
	{
		std::wstring trackName;
		std::vector<std::pair<unsigned short, unsigned short> > carDrivers;
		std::vector<SessionResult > sessions;
		std::vector<short> points;
	};

	/* 67296 */
	struct __declspec(align(8)) TrackEvent : WritableRaceStructure
	{
		unsigned int triggerSessionTime;
		unsigned char trackEvent[1];
		int value;
	};

	/* 67308 */
	struct NextSessionPenalty : WritableRaceStructure
	{
		unsigned __int16 carIndex;
		NextSessionPenaltyType penalty;
		unsigned int value;
	};

	/* 67314 */
	struct SessionPenalty : WritableRaceStructure
	{
		unsigned __int16 carIndex;
		unsigned char penalty[1];
		unsigned int assignedAtSessionTime;
		unsigned int paidOnAtSessionTime;
		unsigned int value;
	};


	/* 67336 */
	struct PitStopEvent : WritableRaceStructure
	{
		unsigned int triggerSessionTime;
		unsigned __int16 currentDriverIndex;
		unsigned __int16 newDriverIndex;
		unsigned char speedType[1];
		unsigned __int16 newTyreSetIndex;
		unsigned int pitStopTimeLength;
		std::vector<enum PitStopMistakeType> mistakes;
		std::vector<enum PitStopRepairType> repairs;
	};

	/* 68557 */
	struct CarSystemsStruct
	{
		__int8 rainLights : 1;
		__int8 directionLightLeft : 1;
		__int8 directionLightRight : 1;
		__int8 flashingLights : 1;
		__int8 pitLimiterOn : 1;
		__int8 hazardLights : 1;
		__int8 leftDoorOpen : 1;
		__int8 rightDoorOpen : 1;
		unsigned __int32 lightStage : 2;
		unsigned __int32 wiperLevel : 2;
		unsigned __int32 display : 3;
		unsigned __int32 fuelMixture : 3;
		unsigned __int32 engineMap : 3;
		unsigned __int32 TC_Level : 4;
		unsigned __int32 ABS_Level : 4;
		unsigned __int32 brakeBias : 7;
	};

	/* 68558 */
	union carSystemsUnion
	{
		CarSystemsStruct c;
		unsigned __int64 i;
	};

	/* 68559 */
	struct CarState
	{
		CupCategory cupCategory;
		std::vector<unsigned short, std::allocator<unsigned short> > officialCupPositionAsPosition;
		unsigned __int16 realtimePosition;
		float totalDistance;
		unsigned __int16 lapCount;
		int totalTime;
		unsigned __int16 splinePosition;
		float splineDistance;
		unsigned __int16 currentSpeed;
		int currentDelta;
		Lap bestLap;
		unsigned int sectorCount;
		float lastSectorTimeStamp;
		CarLocation carLocation;
		bool isBetweenSafetyCarLines;
		char formationLapCounter;
		bool isSessionOver;
		bool isDisqualified;
		bool isRetired;
		bool sprintRaceSwap;
		bool hasStoppedOnPit;
		unsigned __int16 pitGarageIndex;
		unsigned __int16 lastStanding;
		unsigned __int16 driverIndex;
		float fuel;
		carSystemsUnion carSystems;
	};
	/* 68583 */
	struct DriverState
	{
		bool isConnected;
		char behaviourWarningPoints;
		char lightWarningsCount;
		char severeWarningsCount;
	};

	/* 68602 */
	struct __declspec(align(2))SeasonItem
	{
		unsigned __int16 indexInSeasonList;
		unsigned char cupCategory[1];
	};

	/* 68613 */
	struct GarageStock
	{
		std::vector<TyreSet> tyreSets;
	};

	/* 68710 */
	struct CarInvestigation
	{
		unsigned char investigationType[1];
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		int deltaToReach;
		int gainedTime;
		int deltaDiff;
		float sessionTimeLimit;
		float sessionTime;
		unsigned __int16 lapIndex;
		std::vector<unsigned short> investigatedCutMicroSectors;
		float notificationTriggerTime;
		bool hasBeenNotificated;
	};

	/* 68720 */
	struct CarPenalty
	{
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		bool istigatorType;
		unsigned char penaltyType[1];
		float sessionTime;
		unsigned __int16 lapIndex;
	};

	/* 67414 */
	struct SessionEntity : WritableRaceStructure
	{
		unsigned __int16 date_year;
		char date_month;
		char date_day;
		char date_hour;
		char date_minute;
		unsigned char sessionType[1];
		int sessionDuration;
		float timeMultiplier;
	};

	/* 67343 */
	struct TyreSet : WritableRaceStructure
	{
		bool isPracticeOnlyReserved;
		bool isSuperpoleSet;
		bool isQualifyRaceStartReserved;
		bool isPracticeReserved;
		bool isWet;
		std::vector<float> avgTreadHeight;
		std::vector<float> avgBlistering;
		std::vector<float> avgGraining;
		std::vector<float> avgPuncture;
		std::vector<float> avgFlatSpot;
	};


	/* 67401 */
	struct DriverEntity : WritableRaceStructure
	{
		DriverInfo info;
	};

	/* 68427 */
	const struct __declspec(align(8)) RaceStateEvent
	{
		float sessionStartTime;
		float sessionEndTime;
		long double timeStamp;
		unsigned char sessionPhase[1];
	};

	/* 68441 */
	const struct __declspec(align(8)) RaceStartTimeEvent
	{
		long double timeStamp;
		float startTime;
	};

	/* 641 */
	enum ESpawnActorCollisionHandlingMethod
	{
		Undefined = 0x0,
		AlwaysSpawn = 0x1,
		AdjustIfPossibleButAlwaysSpawn = 0x2,
		AdjustIfPossibleButDontSpawnIfColliding = 0x3,
		DontSpawnIfColliding = 0x4,
	};

	/* 1734 */
	typedef ESpawnActorCollisionHandlingMethod SessionType;

	/* 67502 */
	const struct SessionInfo
	{
		SessionType type;
		long double startTimeMS;
		long double timeSecs;
		int laps;
		int index;
	};

	/* 68455 */
	const struct StartSessionEvent
	{
		long double timeStamp;
		SessionInfo physicsSessionInfo;
	};

	/* 68469 */
	const struct SwapDriverEvent
	{
		long double timeStamp;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		bool isStartingDriver;
	};

	/* 68496 */
	const struct __declspec(align(8)) AddOnlineEvent
	{
		CarInfo carInfo;
		unsigned __int16 carIndex;
		DriverInfo driverInfo;
		unsigned __int16 driverIndex;
		char connectedCarId;
	};
	/* 68384 */
	const struct EntryListUpdatedEvent
	{
		long double timeStamp;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		unsigned __int16 carCount;
		unsigned __int16 driverCount;
		int32_t spawnType;
		char connectedCarId;
		CarInfo carInfo;
		DriverInfo driverInfo;
	};

	/* 68516 */
	const struct __declspec(align(8)) UpdateOfficialPositionEvent
	{
		long double timeStamp;
		unsigned __int16 carIndex;
		unsigned __int16 newPosition;
	};

	/* 68530 */
	const struct __declspec(align(8)) UpdateCarSystems
	{
		unsigned __int16 carIndex;
		unsigned __int64 newSystems;
		bool isReplay;
	};

	/* 67237 */
	const struct OnSplitTimeEvent
	{
		unsigned int timeStamp;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		unsigned int splitTime;
		char sector;
	};

	/* 68653 */
	const struct __declspec(align(8)) BestLap
	{
		Lap lap;
		bool bestPersonal;
		bool bestOverall;
	};

	/* 67251 */
	const struct OnRemoteLapEvent
	{
		unsigned int timeStamp;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		unsigned int splitTime;
	};

	/* 68672 */
	const struct InvestigationStart
	{
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		unsigned char investigationType[1];
		unsigned __int16 microSector;
	};

	/* 68686 */
	const struct InvestigationEnd
	{
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
		unsigned char penaltyType[1];
		unsigned __int16 microSector;
		int value;
	};
	struct ServerInfo
	{
		/*std::wstring _ip;
		std::wstring password;
		int32_t updPort;
		int32_t tcpPort;
		int32_t maxClients;
		int16_t unknownData;*/
		unsigned char unknownData[0x48];
	};
	/* 67205 */
	struct IPAddress
	{
		sockaddr_in sokaddr;
	};
	struct  AC2Client
	{
		Event<OnRemoteLapEvent> evOnCarConnected;
		Event<unsigned char> evOnCarDisconnected;
		Event<OnSplitTimeEvent> evOnRemoteSplit;
		Event<OnRemoteLapEvent> evOnRemoteLapCompleted;
		Event<OnRemoteLapEvent> evOnSessionUpdateEvent;
		ServerInfo serverInfo;
		unsigned char clientStatus;
		unsigned char unknownData[7];
		SeasonResult seasonResult;
		SeasonEntity seasonEntity;
		DriverInfo driverInfo;
		CarInfo carInfo;
		bool isAssociated;
		std::unique_ptr<void > sok;
		long double lastSendTime;
		long double sendInterval;
		IPAddress serverIP;
		char connectionID;
		char connectedCarId;
		char pakSequenceIndex;
		std::unique_ptr<void> tcpSock;
		std::vector<unsigned char, std::allocator<unsigned char> > connectedCarIDS;
		std::vector<unsigned char, std::allocator<unsigned char> > requestedCarIDS;
		void *physicsEngine;
		unsigned int pingTime;
		long double lastPingTime;
		std::vector<int> clientColissionEvents;
		long double lastClientEventSendTime;
		bool isGameStarted;
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
	};
	
}