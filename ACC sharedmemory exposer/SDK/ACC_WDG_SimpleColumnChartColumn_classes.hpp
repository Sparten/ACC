#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleColumnChartColumn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_SimpleColumnChartColumn.WDG_SimpleColumnChartColumn_C
// 0x0000 (0x0218 - 0x0218)
class UWDG_SimpleColumnChartColumn_C : public USimpleColumnChartColumn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_SimpleColumnChartColumn.WDG_SimpleColumnChartColumn_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
