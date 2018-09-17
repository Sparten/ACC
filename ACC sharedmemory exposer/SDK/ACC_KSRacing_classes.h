#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include <memory>
#include <string>
namespace ksRacing
{
	class WritableRaceStructure
	{
		unsigned char unknowdata[0x28];
	};
	class DriverInfo : WritableRaceStructure
	{
		std::wstring firstName;
		std::wstring secondName;
		std::wstring lastName;
		std::wstring nickName;
		std::wstring shortName;
		uint8_t weight;
		unsigned char unknowdata00C9;
		uint8_t nationality[2];
		uint8_t driverCategory;
		unsigned char unknowdata00CC[0x3];
		std::wstring driverRow;
		uint32_t helmetTemplateKey;
		uint32_t helmetBaseColor;
		uint32_t helmetDetailColor;
		uint8_t helmetMaterialType;
		unsigned char unknowdata00FD[0x3];
		uint32_t helmetGlassColor;
		uint32_t helmetGlassMetallic;
		uint32_t glovesTemplateKey;
		uint32_t suitTemplateKey;
		uint32_t suitDetailColor1;
		uint32_t suitDetailColor2;
		uint8_t skillLevel;
		uint8_t aggroLevel;
		unsigned char unknowdata011A[0x6];
		std::wstring playerID;
	};
	template <typename EventFunction>
	class Event
	{
		unsigned char unknowdata[0x18];
	};
	class EntryList
	{
	public:
	};
	class
	{
	public:
		std::std::unique_ptr<EntryList> entryList;
	};
	
}