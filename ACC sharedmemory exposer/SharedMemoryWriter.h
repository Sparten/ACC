// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <memory>
#include <string>
#include <Windows.h>
#include "SDK/ACC_KSRacing_classes.h"
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
struct Track
{
	char name[MAX_PATH];
	int length;
	int corners;
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
struct Driver
{
	char name[MAX_PATH];
	int nation;
	Vec3 location;
	Rotation rotation;
	int position;
	int realTimePosition;
	float distanceRoundTrack;
	float speed;
	int lapCount;
	ksRacing::CarLocation trackLocation;	
};

struct SessionData
{
	float sessionStartTime;
	float sessionEndTime;
	uint16_t currentEventIndex;
	uint16_t currentSessionIndex;
	ksRacing::RaceSessionType currentSessionType;
	ksRacing::RaceSessionPhase currentSessionPhase;
	bool isEventInitializated;
	bool isSessionInitializated;
	double physicsTime;
	double sessionStartTimeStamp;
	double receivedServerTime;
	double serverTimeOffset;
	bool isServer;
	bool isClient;
	bool areCarsInitializated;
	bool isTimeStopped;

};
struct ACCSharedMemoryData
{
public:
	bool isReady;
	double update;	
	Track track;
	Driver playerDriver;
	Driver opponentDrivers[64];
	int opponentDriverCount;
	SessionData sessionData;
};
template <typename WriteStruct>
class SharedMemeoryWriter
{
public:
	SharedMemeoryWriter(SharedMemeoryWriter& other) = delete;
	SharedMemeoryWriter(const char *regionName)
	{	
		mappedRegion.reset(CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(WriteStruct), regionName), CloseHandle);
		if (mappedRegion == nullptr)
		{
			return;
		}
		
		data.reset((WriteStruct*)MapViewOfFile(mappedRegion.get(), FILE_MAP_ALL_ACCESS, 0, 0, sizeof(WriteStruct)), UnmapViewOfFile);
		if (data == nullptr)
		{
			return;
		}
		name = regionName;
	}
	bool updateSharedMemory(WriteStruct* newData)
	{
		CopyMemory(data.get(), newData, sizeof(WriteStruct));
		return true;
	}
	std::string name;
private:
	std::shared_ptr<WriteStruct> data;
	std::shared_ptr<void> mappedRegion;
};