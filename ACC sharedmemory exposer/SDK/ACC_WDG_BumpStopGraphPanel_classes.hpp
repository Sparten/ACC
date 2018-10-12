#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_BumpStopGraphPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_BumpStopGraphPanel.WDG_BumpStopGraphPanel_C
// 0x0008 (0x0530 - 0x0528)
class UWDG_BumpStopGraphPanel_C : public UTimeGraphPanel
{
public:
	class UImage*                                      Image_36;                                                 // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_BumpStopGraphPanel.WDG_BumpStopGraphPanel_C");
		return ptr;
	}


	void OnPaint(struct FPaintContext* Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
