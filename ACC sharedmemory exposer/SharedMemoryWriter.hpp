// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <memory>
#include <string>
#include <Windows.h>

#include "SDK/ACC_Engine_structs.hpp"
struct Marshal
{
	float startPos;
	float endPos;
	ksRacing::MarshalFlagType flag;
	
};
struct Marshals
{
	Marshal marshals[32];
	int marchalCount;
	uint8_t checkeredFlagMarshalIndex;
};
struct Vec3
{
	float x;
	float y;
	float z;
};

struct Rotation
{
	float pitch;
	float yaw;
	float roll;
};
struct Lap 
{
	unsigned __int16 driverIndex;
	float timeStamp;
	int lapTime;
	int splitTimes[6]; //size of this one might have to get tweaked as we dont know if kunos are going do something fanzy here
	ksRacing::LapStateFlags lapStates;
};

struct WeatherStatus
{
	float ambientTemperature;
	float roadTemperature;
	float wetLevel;
	float windSpeed;
	float windDirection;
	float rainLevel;
	float cloudLevel;
};

struct Track
{
	char name[MAX_PATH];
	int id;
	float length;
	int sectors;
	int corners;
	bool isPolesitterOnLeft;
	WeatherStatus weatherState;
};

struct Driver
{
	char name[MAX_PATH];
	ksRacing::Nationality nation;
	Vec3 location;
	Rotation rotation;
	float distanceRoundTrackNormalized;
	float speedMS;
	float speedKMH;
	float lastSectorTimeStamp;
	int position;
	int realTimePosition;
	int lapCount;
	int totalTime;
	int currentDelta;
	int32_t currentSector;
	int32_t currentlaptime;
	Lap currentLap;
	Lap lastLap;
	float trottle;
	float brake;
	float clutch;
	float rpms;
	float fuel;
	float maxFuel;
	bool isBetweenSafetyCarLines;
	bool isSessionOver;
	bool isDisqualified;
	bool isRetired;
	bool isCarOutOfTrack;
	uint16_t driverIndex;
	uint8_t formationLapCounter;
	ksRacing::CarLocation trackLocation;
	bool pitLimiterOn;
	
};
struct PlayerDriver : Driver
{

};
struct SessionData
{
	float physicsTime;
	float sessionStartTimeStamp;
	float receivedServerTime;
	float serverTimeOffset;
	float sessionStartTime;
	float sessionEndTime;
	int sessionDuration;
	uint32_t pitWindowOpenAtTime;
	uint32_t pitWindowCloseAtTime;
	uint32_t maxDrivingTime;
	bool isServer;
	bool isClient;
	bool areCarsInitializated;
	bool isTimeStopped;
	bool isEventInitializated;
	bool isSessionInitializated;
	uint16_t currentEventIndex;
	uint16_t currentSessionIndex;
	ksRacing::RaceSessionType currentSessionType;
	ksRacing::RaceSessionPhase currentSessionPhase;
	uint8_t mandatoryPitStopCount;
	uint8_t pitlaneSpeedLimitKmh;
	bool isOnline;
};

struct ACCSharedMemoryData
{
public:
	SessionData sessionData;
	Track track;
	bool isReady;
	float update;	
	Driver playerDriver;
	Driver opponentDrivers[64];
	int opponentDriverCount;
	Marshals marshals;
};

template <typename WriteStruct>
class SharedMemeoryWriter
{
public:
	SharedMemeoryWriter(SharedMemeoryWriter& other) = delete;
	SharedMemeoryWriter(const char *regionName)
	{	
		mappedRegion.reset(CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(WriteStruct), regionName), CloseHandle);
		if (!mappedRegion)
		{
			return;
		}
		
		mappedData.reset((WriteStruct*)MapViewOfFile(mappedRegion.get(), FILE_MAP_ALL_ACCESS, 0, 0, sizeof(WriteStruct)), UnmapViewOfFile);
		if (!mappedData)
		{
			return;
		}
		name = regionName;
	}
	bool updateSharedMemory(WriteStruct* newData)
	{
		*mappedData.get() = *newData;
		return true;
	}
	std::string name;
private:
	std::shared_ptr<WriteStruct> mappedData;
	std::shared_ptr<void> mappedRegion;
};