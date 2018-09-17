#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_MainCarHUDWidgetHost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_MainCarHUDWidgetHost.WBP_MainCarHUDWidgetHost_C
// 0x0000 (0x0228 - 0x0228)
class UWBP_MainCarHUDWidgetHost_C : public UMainCarHUDWidgetHost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainCarHUDWidgetHost.WBP_MainCarHUDWidgetHost_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
