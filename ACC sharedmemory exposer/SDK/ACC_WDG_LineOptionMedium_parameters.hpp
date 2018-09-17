#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_LineOptionMedium_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseButtonDown
struct UWDG_LineOptionMedium_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnPaint
struct UWDG_LineOptionMedium_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LeftArrowClick
struct UWDG_LineOptionMedium_C_WDG_LeftArrowClick_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_RightArrowClick
struct UWDG_LineOptionMedium_C_WDG_RightArrowClick_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_GetRaceLength
struct UWDG_LineOptionMedium_C_WDG_GetRaceLength_Params
{
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentOption
struct UWDG_LineOptionMedium_C_WDG_LineOption_setCurrentOption_Params
{
	int                                                Current_Option;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentResolutionIndex
struct UWDG_LineOptionMedium_C_WDG_LineOption_getCurrentResolutionIndex_Params
{
	int                                                inUseResolutionIndex;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setEnableDisable
struct UWDG_LineOptionMedium_C_WDG_LineOption_setEnableDisable_Params
{
	bool                                               EnableDisable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentOption
struct UWDG_LineOptionMedium_C_WDG_LineOption_getCurrentOption_Params
{
	int                                                CurrentOptionIndex;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentResolutionIndex
struct UWDG_LineOptionMedium_C_WDG_LineOption_setCurrentResolutionIndex_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateArrowVisibility
struct UWDG_LineOptionMedium_C_WDG_UpdateArrowVisibility_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateOptionText
struct UWDG_LineOptionMedium_C_WDG_UpdateOptionText_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Get_LineOption_textLine_txt_Text_1
struct UWDG_LineOptionMedium_C_Get_LineOption_textLine_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowUnhover_func
struct UWDG_LineOptionMedium_C_WDG_LineOptions_arrowUnhover_func_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowHover_func
struct UWDG_LineOptionMedium_C_WDG_LineOptions_arrowHover_func_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Construct
struct UWDG_LineOptionMedium_C_Construct_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Tick
struct UWDG_LineOptionMedium_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature
struct UWDG_LineOptionMedium_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature
struct UWDG_LineOptionMedium_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature
struct UWDG_LineOptionMedium_C_BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature
struct UWDG_LineOptionMedium_C_BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseEnter
struct UWDG_LineOptionMedium_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseLeave
struct UWDG_LineOptionMedium_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.ExecuteUbergraph_WDG_LineOptionMedium
struct UWDG_LineOptionMedium_C_ExecuteUbergraph_WDG_LineOptionMedium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OptionLineHasUpdate__DelegateSignature
struct UWDG_LineOptionMedium_C_OptionLineHasUpdate__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
