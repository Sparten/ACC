#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_SimpleAreaChart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_SimpleAreaChart.WDG_SimpleAreaChart_C
// 0x0018 (0x0248 - 0x0230)
class UWDG_SimpleAreaChart_C : public USimpleAreaChart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                DrawingCanvas;                                            // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USimpleAreaChart*                            selfRef;                                                  // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_SimpleAreaChart.WDG_SimpleAreaChart_C");
		return ptr;
	}


	void OnPaint(struct FPaintContext* Context);
	void Construct();
	void ExecuteUbergraph_WDG_SimpleAreaChart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
