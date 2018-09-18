// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <memory>
#include <string>
#include <Windows.h>

class __declspec(align(4))Track
{
	char name[MAX_PATH];
	int length;
	int corners;

};

class __declspec(align(4)) ACCSharedMemory
{
	~ACCSharedMemory() {}
	
	ACCSharedMemory()
	{
		int updateTick;
		Track track;
	}
};
template <typename WriteStruct>
class SharedMemeoryWriter
{
public:
	SharedMemeoryWriter(SharedMemeoryWriter& other) = delete;
	SharedMemeoryWriter<WriteStruct>(const char *regionName)
	{
		name = regionName;
		HANDLE  hMapFile = CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(WriteStruct), regionName);
		if (hMapFile != nullptr)
		{
			mappedRegion.reset((void*)hMapFile, CloseHandle);
		}
		WriteStruct*  tmpdata = (WriteStruct*)MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(WriteStruct));
		if (data != nullptr)
		{
			data.reset(tmpdata, UnmapViewOfFile);
		}
	}
private:
	std::shared_ptr< WriteStruct > data;
	std::string name;
	std::shared_ptr< void > mappedRegion;
};