#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_BullcrapSpacer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_BullcrapSpacer.WDG_BullcrapSpacer_C
// 0x0000 (0x0208 - 0x0208)
class UWDG_BullcrapSpacer_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_BullcrapSpacer.WDG_BullcrapSpacer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
