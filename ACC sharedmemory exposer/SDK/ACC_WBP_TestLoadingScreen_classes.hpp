#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WBP_TestLoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TestLoadingScreen.WBP_TestLoadingScreen_C
// 0x005C (0x0264 - 0x0208)
class UWBP_TestLoadingScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      IMG_BackGround;                                           // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TB_Loading;                                               // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                            BrandsHatchDry;                                           // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LoadingDots;                                              // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotsTime;                                                 // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentImageIndex;                                        // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImageTime;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Color;                                                    // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoaded;                                                 // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	TArray<class UTexture*>                            BrandsHatchWet;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     weather;                                                  // 0x0258(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TestLoadingScreen.WBP_TestLoadingScreen_C");
		return ptr;
	}


	struct FText Get_TB_Loading_Text_1();
	struct FSlateBrush Get_IMG_BackGround_Brush_1();
	void Construct();
	void ExecuteUbergraph_WBP_TestLoadingScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
