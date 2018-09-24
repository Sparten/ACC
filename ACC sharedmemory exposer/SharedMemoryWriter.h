// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include <memory>
#include <string>
#include <Windows.h>


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
	__declspec(align(4))bool isPolesitterOnLeft;
	WeatherStatus weatherState;
};

struct Driver
{
	char name[MAX_PATH];
	int nation;
	Vec3 location;
	Rotation rotation;
	float distanceRoundTrack;
	float speed;
	float lastSectorTimeStamp;
	int position;
	int realTimePosition;
	int lapCount;
	int totalTime;
	int currentDelta;
	unsigned int currentSector;
	unsigned int currentlaptime;
	float trottle;
	float brake;
	float clutch;
	float rpms;
	__declspec(align(4))bool isBetweenSafetyCarLines;
	__declspec(align(4))bool isSessionOver;
	__declspec(align(4))bool isDisqualified;
	__declspec(align(4))bool isRetired;
	char pad1[2];
	__declspec(align(2))uint16_t driverIndex;
	char pad2[2];
	__declspec(align(1))uint8_t formationLapCounter;
	__declspec(align(1))ksRacing::CarLocation trackLocation;
	
};
struct PlayerDriver : Driver
{

};
struct SessionData
{
	__declspec(align(4))float physicsTime;
	__declspec(align(4))float sessionStartTimeStamp;
	__declspec(align(4))float receivedServerTime;
	__declspec(align(4))float serverTimeOffset;
	__declspec(align(4))float sessionStartTime;
	__declspec(align(4))float sessionEndTime;
	__declspec(align(4))bool isServer;
	__declspec(align(4))bool isClient;
	__declspec(align(4))bool areCarsInitializated;
	__declspec(align(4))bool isTimeStopped;
	__declspec(align(4))bool isEventInitializated;
	__declspec(align(4))bool isSessionInitializated;
	__declspec(align(1))uint8_t pad1;
	__declspec(align(1))uint8_t pad2;
	__declspec(align(2))unsigned __int16 currentEventIndex;
	__declspec(align(2))unsigned __int16 currentSessionIndex;
	__declspec(align(1))ksRacing::RaceSessionType currentSessionType;
	__declspec(align(1))ksRacing::RaceSessionPhase currentSessionPhase;
};

struct ACCSharedMemoryData
{
public:
	SessionData sessionData;
	Track track;
	__declspec(align(4))bool isReady;
	float update;	
	Driver playerDriver;
	Driver opponentDrivers[64];
	__declspec(align(4))int opponentDriverCount;
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
		///CopyMemory(mappedData.get(), newData, sizeof(WriteStruct));
		*mappedData.get() = *newData;
		//memset(newData, 0x00, sizeof(WriteStruct));
		return true;
	}
	std::string name;
private:
	std::shared_ptr<WriteStruct> mappedData;
	std::shared_ptr<void> mappedRegion;
};