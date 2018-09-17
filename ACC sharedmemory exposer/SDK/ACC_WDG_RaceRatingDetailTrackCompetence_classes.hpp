#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_RaceRatingDetailTrackCompetence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_RaceRatingDetailTrackCompetence.WDG_RaceRatingDetailTrackCompetence_C
// 0x0000 (0x0260 - 0x0260)
class UWDG_RaceRatingDetailTrackCompetence_C : public URatingDetailTrackCompetence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_RaceRatingDetailTrackCompetence.WDG_RaceRatingDetailTrackCompetence_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
