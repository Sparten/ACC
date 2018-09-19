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
	/*template<typename T>struct Event
	{
		unsigned char unknowndata[0x18];
	};*/

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
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > fileDir;
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
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > description;
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
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > description;
		char eventIndex;
		char sessionIndex;
		float damageRate;
		unsigned char instantSetupChange[1];
		float setupChangeTimeRate;
		float carRepairTimeRate;
		unsigned char yellowFlags[1];
		unsigned char fullYellowCourse[1];
		unsigned char safetyCar[1];
		unsigned char tyreFuelWear[1];
		unsigned char unlimitedTyreSet[1];
		unsigned char brakeFading[1];
		float rainRealism;
	};

	/* 67374 */
	struct __declspec(align(8)) GameplayRules : WritableRaceStructure
	{
		char eventIndex;
		char sessionIndex;
		unsigned char canTeleportToPit[1];
		unsigned __int16 teleportToPitPenaltyTime;
		unsigned char superpoleVirtualSession[1];
		unsigned char fastRollingStart[1];
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
		std::vector<RealismRules, std::allocator<RealismRules> > sessionRealismOverride;
		std::vector<GameplayRules, std::allocator<GameplayRules> > sessionGameplayOverride;
		std::vector<OnlineRules, std::allocator<OnlineRules> > sessionOnlineOverride;
		std::vector<RaceDirectorRules, std::allocator<RaceDirectorRules> > sessionRaceDirectorOverride;
		std::vector<EventEntity, std::allocator<EventEntity> > events;
		int eventOnlineReference;
	};
	/* 67357 */
	struct SessionResult : WritableRaceStructure
	{
		std::vector<TrackEvent, std::allocator<TrackEvent> > trackEvents;
		std::vector<Lap, std::allocator<Lap> > laps;
		std::vector<NextSessionPenalty, std::allocator<NextSessionPenalty> > nextSessionPenalties;
		std::vector<SessionPenalty, std::allocator<SessionPenalty> > currentSessionPenalties;
		std::vector<WeatherStatus, std::allocator<WeatherStatus> > weatherForUpdateMinutes;
		std::vector<PitStopEvent, std::allocator<PitStopEvent> > pitstopEvents;
		std::vector<std::vector<TyreSet, std::allocator<TyreSet> >, std::allocator<std::vector<TyreSet, std::allocator<TyreSet> > > > tyresConditions;
		std::vector<unsigned short, std::allocator<unsigned short> > standing;
		std::vector<short, std::allocator<short> > points;
	};

	/* 67367 */
	struct SeasonResult : WritableRaceStructure
	{
		std::vector<CarInfo, std::allocator<CarInfo> > cars;
		std::vector<DriverInfo, std::allocator<DriverInfo> > drivers;
		std::vector<EventResult, std::allocator<EventResult> > events;
		std::vector<short, std::allocator<short> > points;
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
		Event<bool> onSessionOverEvent;
		Event<bool> onSeasonOverEvent;
		Event<bool> onCheckCarInitializatedEvent;
		Event<AddOnlineEvent> onAddOnlineEvent;
		char sectorCount;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > exportFileName;
		long double physicsTime;
		long double sessionStartTimeStamp;
		long double receivedServerTime;
		long double serverTimeOffset;
		bool isServer;
		bool isClient;
		bool canProceed;
		bool canTick;
		bool areCarsInitializated;
		bool isTimeStopped;
		std::unique_ptr<EntryList, std::default_delete<EntryList> > entryList;
		std::unique_ptr<CarStateServices, std::default_delete<CarStateServices> > carStateServices;
		std::unique_ptr<DriverStateServices, std::default_delete<DriverStateServices> > driverStateServices;
		std::unique_ptr<WeatherServices, std::default_delete<WeatherServices> > weatherServices;
		std::unique_ptr<ResultServices, std::default_delete<ResultServices> > resultServices;
		std::unique_ptr<GarageServices, std::default_delete<GarageServices> > garageServices;
		std::unique_ptr<TrackServices, std::default_delete<TrackServices> > trackServices;
		std::unique_ptr<TimingServices, std::default_delete<TimingServices> > timingServices;
		std::unique_ptr<RaceDirectorServices, std::default_delete<RaceDirectorServices> > raceDirectorServices;
		SeasonEntity seasonEntity;
		GameplayRules sessionGameplayRules;
		OnlineRules sessionOnlineRules;
		RealismRules sessionRealismRules;
		SeasonResult originalSeasonResult;
		float sessionStartTime;
		float sessionEndTime;
		unsigned __int16 currentEventIndex;
		unsigned __int16 currentSessionIndex;
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
		unsigned char eventType[1];
		std::map<unsigned short, std::set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, std::set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short> > > > > carDrivers;
	};
	/* 68576 */
	struct __declspec(align(8)) CarStateServices
	{
		Event<UpdateOfficialPositionEvent> onUpdateOfficialPositionEvent;
		Event<bool> onUpdateStandingEvent;
		Event<UpdateCarSystems> onUpdateSystems;
		Event<UpdateCarSystems> onUpdateReplaySystem;
		Event<unsigned short> onSessionOverEvent;
		RaceManager *raceManager;
		char sorterState;
		std::map<unsigned short, CarState, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, CarState> > > carStates;
		std::map<unsigned short, CarState *, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, CarState *> > > liveCarStates;
		std::vector<unsigned short, std::allocator<unsigned short> > realtimePositions;
		std::vector<unsigned short, std::allocator<unsigned short> > splinePositions;
		std::vector<std::vector<unsigned short, std::allocator<unsigned short> >, std::allocator<std::vector<unsigned short, std::allocator<unsigned short> > > > cupStandingAsCarIndex;
		bool doAllCarsCompleteTheSession;
	};

	/* 68591 */
	struct DriverStateServices
	{
		RaceManager *raceManager;
		std::map<unsigned short, DriverState, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, DriverState> > > driverStates;
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
		RaceManager *raceManager;
		WeatherStatus status;
		WeatherData data;
		bool isRandomInitialized;
		float timeOfDaySeconds;
		float dayLenght;
	};

	/* 68607 */
	struct __declspec(align(8)) ResultServices
	{
		RaceManager *raceManager;
		SeasonResult seasonResult;
		EventResult *eventResult;
		SessionResult *sessionResult;
		unsigned char raceEventType[1];
		std::vector<SeasonItem, std::allocator<SeasonItem> > seasonCarIndex;
		std::vector<SeasonItem, std::allocator<SeasonItem> > seasonDriverIndex;
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
		RaceManager *raceManager;
		int trackId;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > trackName;
		std::pair<float, float> greenFlagTriggerRange;
		std::pair<float, float> formationTriggerRange;
		float greenFlagFinalDistance;
		unsigned char trackStartingLight[1];
		unsigned char pitEntryLight[1];
		unsigned char pitExitLight[1];
		std::vector<std::pair<unsigned short, unsigned short>, std::allocator<std::pair<unsigned short, unsigned short> > > fastLaneSpots;
		std::vector<std::pair<bool, unsigned short>, std::allocator<std::pair<bool, unsigned short> > > pitZoneStatus;
		DynamicTrack dynamicTrack;
	};
	/* 68227 */
	struct TimingRecord : WritableRaceStructure
	{
		unsigned __int16 index;
		std::vector<unsigned short, std::allocator<unsigned short> > overallLapSet;
		std::vector<unsigned short, std::allocator<unsigned short> > completedLapSet;
		std::vector<unsigned short, std::allocator<unsigned short> > bestLapQueue;
		std::vector<std::vector<unsigned short, std::allocator<unsigned short> >, std::allocator<std::vector<unsigned short, std::allocator<unsigned short> > > > bestSplitLapQueue;
		int bestLapValue;
		std::vector<int, std::allocator<int> > bestSplitValues;
		int minBestLapValue;
		std::vector<int, std::allocator<int> > minBestSplitValues;
	};

	/* 68244 */
	struct SessionTiming : WritableRaceStructure
	{
		std::vector<Lap, std::allocator<Lap> > overallLaps;
		TimingRecord overallRecord;
		std::map<unsigned short, TimingRecord, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, TimingRecord> > > carRecords;
		std::map<unsigned short, TimingRecord, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, TimingRecord> > > driverRecords;
		std::vector<std::pair<unsigned short, unsigned short>, std::allocator<std::pair<unsigned short, unsigned short> > > carCurrentLap;
	};

	/* 67302 */
	struct __declspec(align(8)) Lap : WritableRaceStructure
	{
		unsigned __int16 driverIndex;
		float timeStamp;
		int lapTime;
		std::vector<int, std::allocator<int> > splitTimes;
		unsigned __int16 lapStates;
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
		std::set<std::pair<unsigned short, unsigned short>, std::less<std::pair<unsigned short, unsigned short> >, std::allocator<std::pair<unsigned short, unsigned short> > > noOvertakeSectors;
		std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short, unsigned short> > > > it;
		std::set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short> > carsToRemove;
		std::map<unsigned short, CarInvestigation, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, CarInvestigation> > > cutInvestigations;
		std::map<unsigned short, CarPenalty, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, CarPenalty> > > penalties;
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
		std::vector<CarEntity, std::allocator<CarEntity> > cars;
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

	/* 67419 */
	struct RaceEntity : WritableRaceStructure
	{
		unsigned char eventType[1];
		EventRaceRules eventRaceRules;
		std::vector<SessionEntity, std::allocator<SessionEntity> > sessions;
	};

	/* 67421 */
	struct __declspec(align(8)) EventEntity : WritableRaceStructure
	{
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > trackName;
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
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > teamName;
		unsigned char nationality[2];
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > displayName;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > competitorName;
		unsigned char competitorNationality[2];
		char teamTemplateKey;
		unsigned char carModelType[1];
		unsigned char cupCategory[1];
		unsigned char licenseType[1];
		bool useEnduranceKit;
		bool isPlayerCar;
		bool isNetCar;
	};

	/* 67209 */
	struct DriverInfo : WritableRaceStructure
	{
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > firstName;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > secondName;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > lastName;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > nickName;
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > shortName;
		char weight;
		__declspec(align(2)) unsigned char nationality[2];
		unsigned char driverCategory[1];
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > driverRow;
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
		std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > playerID;
	};

	struct CarEntity : WritableRaceStructure
	{
		CarInfo info;
		std::vector<DriverEntity, std::allocator<DriverEntity> > drivers;
	};
	/* 67362 */
	struct EventResult : WritableRaceStructure
	{
		std::vector<std::pair<unsigned short, unsigned short>, std::allocator<std::pair<unsigned short, unsigned short> > > carDrivers;
		std::vector<SessionResult, std::allocator<SessionResult> > sessions;
		std::vector<short, std::allocator<short> > points;
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
		unsigned char penalty[1];
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

	/* 1737 */
	enum LapStateFlags
	{
		HasCut = 0x0,
		IsInvalidLap = 0x1,
		HasPenalty = 0x2,
		IsOutLap = 0x3,
		IsInLap = 0x4,
		IsFormationLap = 0x5,
		IsSafetyCarOnTrack = 0x6,
		IsFullCourseYellow = 0x7,
		IsRetired = 0x8,
		IsDisqualified = 0x9,
		IsOnPitWorkingZone = 0xA,
		DriverSwap = 0xB,
	};

	/* 1750 */
	typedef LapStateFlags PitStopMistakeType;

	/* 1751 */
	enum PitStopRepairType
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


	/* 67336 */
	struct PitStopEvent : WritableRaceStructure
	{
		unsigned int triggerSessionTime;
		unsigned __int16 currentDriverIndex;
		unsigned __int16 newDriverIndex;
		unsigned char speedType[1];
		unsigned __int16 newTyreSetIndex;
		unsigned int pitStopTimeLength;
		std::vector<enum PitStopMistakeType, std::allocator<enum PitStopMistakeType> > mistakes;
		std::vector<enum PitStopRepairType, std::allocator<enum PitStopRepairType> > repairs;
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
		unsigned char cupCategory[1];
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
		unsigned char carLocation[1];
		bool isBetweenSafetyCarLines;
		char formationLapCounter;
		bool isSessionOver;
		bool isDisqualified;
		bool isRetired;
		unsigned __int16 pitGarageIndex;
		unsigned __int16 lastStanding;
		unsigned __int16 driverIndex;
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
	struct SeasonItem
	{
		unsigned __int16 indexInSeasonList;
		unsigned char cupCategory[1];
	};

	/* 68613 */
	struct GarageStock
	{
		std::vector<TyreSet, std::allocator<TyreSet> > tyreSets;
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
		std::vector<unsigned short, std::allocator<unsigned short> > investigatedCutMicroSectors;
		float notificationTriggerTime;
		bool hasBeenNotificated;
	};

	/* 68720 */
	struct CarPenalty
	{
		unsigned __int16 carIndex;
		unsigned __int16 driverIndex;
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
		std::vector<float, std::allocator<float> > avgTreadHeight;
		std::vector<float, std::allocator<float> > avgBlistering;
		std::vector<float, std::allocator<float> > avgGraining;
		std::vector<float, std::allocator<float> > avgPuncture;
		std::vector<float, std::allocator<float> > avgFlatSpot;
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

	
}