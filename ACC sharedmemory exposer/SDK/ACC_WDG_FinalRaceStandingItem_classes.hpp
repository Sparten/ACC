#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FinalRaceStandingItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C
// 0x0010 (0x0330 - 0x0320)
class UWDG_FinalRaceStandingItem_C : public URaceFinalStandingItems
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Open;                                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_FinalRaceStandingItem.WDG_FinalRaceStandingItem_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_WDG_FinalRaceStandingItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
