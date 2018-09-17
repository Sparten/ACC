#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_TyreTempsItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_TyreTempsItem.WDG_TyreTempsItem_C
// 0x0000 (0x0290 - 0x0290)
class UWDG_TyreTempsItem_C : public UTyreTemps01ItemWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_TyreTempsItem.WDG_TyreTempsItem_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
