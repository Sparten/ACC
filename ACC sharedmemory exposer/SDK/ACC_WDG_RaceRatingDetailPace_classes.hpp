#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_RaceRatingDetailPace_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_RaceRatingDetailPace.WDG_RaceRatingDetailPace_C
// 0x0000 (0x0228 - 0x0228)
class UWDG_RaceRatingDetailPace_C : public URatingDetailPace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_RaceRatingDetailPace.WDG_RaceRatingDetailPace_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
