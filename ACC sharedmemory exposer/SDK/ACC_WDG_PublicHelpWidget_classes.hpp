#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_PublicHelpWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_PublicHelpWidget.WDG_PublicHelpWidget_C
// 0x0000 (0x02F0 - 0x02F0)
class UWDG_PublicHelpWidget_C : public UAcRaceWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_PublicHelpWidget.WDG_PublicHelpWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
