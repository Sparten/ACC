#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_LineOptionMedium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WDG_LineOptionMedium.WDG_LineOptionMedium_C
// 0x00E8 (0x02F0 - 0x0208)
class UWDG_LineOptionMedium_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            WDG_optionTextChangeLeft_anim;                            // 0x0210(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            WDG_optionTextChangeRight_anim;                           // 0x0218(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      BackgroundWhite;                                          // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      LineOption_bottomLine_img;                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  LineOption_textLine_txt;                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     LineOptions_leftArrow_btn;                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  LineOptions_leftArrow_lbl;                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  LineOptions_opt_txt;                                      // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     LineOptions_rightArrow_btn;                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  LineOptions_rightArrow_lbl;                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       WDG_LineOption_text;                                      // 0x0260(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EnumOptionsList>                       WDG_OptionType;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	int                                                WDG_currentOption;                                        // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WDG_maxEnumCount;                                         // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WDG_rightVisibilty_btn;                                   // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WDG_leftVisibilty_btn;                                    // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	TArray<struct FIntPoint>                           LineOption_resolutionsList;                               // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDateTime                                   WDG_LineOptions_timeDay;                                  // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OptionLineHasUpdate;                                      // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              rightButtonDelay;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightWasPressed;                                          // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftWasPressed;                                           // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	float                                              defaultButtonDelay;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              leftButtonDelay;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnPauseRight;                                           // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReleaseOnPauseRight;                                      // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReleaseOnPauseLeft;                                       // 0x02C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnPauseLeft;                                            // 0x02C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinValue;                                                 // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IncrementValue;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IncrementValue_1;                                         // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FText                                       PostFixText;                                              // 0x02D8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDG_LineOptionMedium.WDG_LineOptionMedium_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnPaint(struct FPaintContext* Context);
	void WDG_LeftArrowClick();
	void WDG_RightArrowClick();
	void WDG_GetRaceLength(int* NewParam);
	void WDG_LineOption_setCurrentOption(int Current_Option);
	void WDG_LineOption_getCurrentResolutionIndex(int* inUseResolutionIndex);
	void WDG_LineOption_setEnableDisable(bool EnableDisable);
	void WDG_LineOption_getCurrentOption(int* CurrentOptionIndex);
	void WDG_LineOption_setCurrentResolutionIndex();
	void WDG_UpdateArrowVisibility();
	void WDG_UpdateOptionText();
	struct FText Get_LineOption_textLine_txt_Text_1();
	void WDG_LineOptions_arrowUnhover_func();
	void WDG_LineOptions_arrowHover_func();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_WDG_LineOptionMedium(int EntryPoint);
	void OptionLineHasUpdate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
