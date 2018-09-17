// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_LineOptionMedium_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWDG_LineOptionMedium_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseButtonDown");

	UWDG_LineOptionMedium_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWDG_LineOptionMedium_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnPaint");

	UWDG_LineOptionMedium_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LeftArrowClick
// (Public, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_LeftArrowClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LeftArrowClick");

	UWDG_LineOptionMedium_C_WDG_LeftArrowClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_RightArrowClick
// (Public, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_RightArrowClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_RightArrowClick");

	UWDG_LineOptionMedium_C_WDG_RightArrowClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_GetRaceLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::WDG_GetRaceLength(int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_GetRaceLength");

	UWDG_LineOptionMedium_C_WDG_GetRaceLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Option                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::WDG_LineOption_setCurrentOption(int Current_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentOption");

	UWDG_LineOptionMedium_C_WDG_LineOption_setCurrentOption_Params params;
	params.Current_Option = Current_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentResolutionIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inUseResolutionIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::WDG_LineOption_getCurrentResolutionIndex(int* inUseResolutionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentResolutionIndex");

	UWDG_LineOptionMedium_C_WDG_LineOption_getCurrentResolutionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inUseResolutionIndex != nullptr)
		*inUseResolutionIndex = params.inUseResolutionIndex;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setEnableDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableDisable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::WDG_LineOption_setEnableDisable(bool EnableDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setEnableDisable");

	UWDG_LineOptionMedium_C_WDG_LineOption_setEnableDisable_Params params;
	params.EnableDisable = EnableDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentOptionIndex             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::WDG_LineOption_getCurrentOption(int* CurrentOptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_getCurrentOption");

	UWDG_LineOptionMedium_C_WDG_LineOption_getCurrentOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentOptionIndex != nullptr)
		*CurrentOptionIndex = params.CurrentOptionIndex;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentResolutionIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_LineOption_setCurrentResolutionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOption_setCurrentResolutionIndex");

	UWDG_LineOptionMedium_C_WDG_LineOption_setCurrentResolutionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateArrowVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_UpdateArrowVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateArrowVisibility");

	UWDG_LineOptionMedium_C_WDG_UpdateArrowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateOptionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_UpdateOptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_UpdateOptionText");

	UWDG_LineOptionMedium_C_WDG_UpdateOptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Get_LineOption_textLine_txt_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWDG_LineOptionMedium_C::Get_LineOption_textLine_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Get_LineOption_textLine_txt_Text_1");

	UWDG_LineOptionMedium_C_Get_LineOption_textLine_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowUnhover_func
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_LineOptions_arrowUnhover_func()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowUnhover_func");

	UWDG_LineOptionMedium_C_WDG_LineOptions_arrowUnhover_func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowHover_func
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::WDG_LineOptions_arrowHover_func()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.WDG_LineOptions_arrowHover_func");

	UWDG_LineOptionMedium_C_WDG_LineOptions_arrowHover_func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_LineOptionMedium_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Construct");

	UWDG_LineOptionMedium_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.Tick");

	UWDG_LineOptionMedium_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWDG_LineOptionMedium_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature");

	UWDG_LineOptionMedium_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_261_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWDG_LineOptionMedium_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature");

	UWDG_LineOptionMedium_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_274_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWDG_LineOptionMedium_C::BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature");

	UWDG_LineOptionMedium_C_BndEvt__LineOptions_rightArrow_btn_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWDG_LineOptionMedium_C::BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature");

	UWDG_LineOptionMedium_C_BndEvt__LineOptions_leftArrow_btn_K2Node_ComponentBoundEvent_231_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWDG_LineOptionMedium_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseEnter");

	UWDG_LineOptionMedium_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWDG_LineOptionMedium_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OnMouseLeave");

	UWDG_LineOptionMedium_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.ExecuteUbergraph_WDG_LineOptionMedium
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_LineOptionMedium_C::ExecuteUbergraph_WDG_LineOptionMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.ExecuteUbergraph_WDG_LineOptionMedium");

	UWDG_LineOptionMedium_C_ExecuteUbergraph_WDG_LineOptionMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OptionLineHasUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWDG_LineOptionMedium_C::OptionLineHasUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_LineOptionMedium.WDG_LineOptionMedium_C.OptionLineHasUpdate__DelegateSignature");

	UWDG_LineOptionMedium_C_OptionLineHasUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
