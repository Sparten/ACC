#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SessionInfoGenericEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_SessionInfoGenericEntry.WDG_SessionInfoGenericEntry_C
// 0x0000 (0x0240 - 0x0240)
class UWDG_SessionInfoGenericEntry_C : public USessionInfoFallbackEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_SessionInfoGenericEntry.WDG_SessionInfoGenericEntry_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
