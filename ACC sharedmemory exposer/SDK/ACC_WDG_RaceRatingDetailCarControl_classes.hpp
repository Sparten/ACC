#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_RaceRatingDetailCarControl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_RaceRatingDetailCarControl.WDG_RaceRatingDetailCarControl_C
// 0x0000 (0x0248 - 0x0248)
class UWDG_RaceRatingDetailCarControl_C : public URatingDetailCarControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_RaceRatingDetailCarControl.WDG_RaceRatingDetailCarControl_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
