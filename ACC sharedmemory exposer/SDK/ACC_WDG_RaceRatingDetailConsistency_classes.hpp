#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_RaceRatingDetailConsistency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_RaceRatingDetailConsistency.WDG_RaceRatingDetailConsistency_C
// 0x0000 (0x0250 - 0x0250)
class UWDG_RaceRatingDetailConsistency_C : public URatingDetailConsistency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_RaceRatingDetailConsistency.WDG_RaceRatingDetailConsistency_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
