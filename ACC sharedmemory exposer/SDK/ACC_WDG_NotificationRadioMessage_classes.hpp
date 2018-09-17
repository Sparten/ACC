#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_NotificationRadioMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_NotificationRadioMessage.WDG_NotificationRadioMessage_C
// 0x0000 (0x0278 - 0x0278)
class UWDG_NotificationRadioMessage_C : public UNotificationRadioEventWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_NotificationRadioMessage.WDG_NotificationRadioMessage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
