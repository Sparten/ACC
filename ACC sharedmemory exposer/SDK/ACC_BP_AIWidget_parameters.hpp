#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_AIWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AIWidget.BP_AIWidget_C.Get_txtRPMDownshift_Text_1
struct UBP_AIWidget_C_Get_txtRPMDownshift_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_txtGasHint_Text_1
struct UBP_AIWidget_C_Get_txtGasHint_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbUndersteer_Text_1
struct UBP_AIWidget_C_Get_tbUndersteer_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbAeroHint_Text_1
struct UBP_AIWidget_C_Get_tbAeroHint_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tnTargetBrakeSpeed_Text_1
struct UBP_AIWidget_C_Get_tnTargetBrakeSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbCurrentPush_Text_1
struct UBP_AIWidget_C_Get_tbCurrentPush_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbBrakeHint_Text_1
struct UBP_AIWidget_C_Get_tbBrakeHint_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.GetCarAIData
struct UBP_AIWidget_C_GetCarAIData_Params
{
	class ACarAvatar*                                  CarAvatar;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAIDataAsset*                                AIData;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbLookAhead_Text_1
struct UBP_AIWidget_C_Get_tbLookAhead_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Get_tbSteerGain_Text_1
struct UBP_AIWidget_C_Get_tbSteerGain_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_AIWidget.BP_AIWidget_C.Construct
struct UBP_AIWidget_C_Construct_Params
{
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slSteerGain_K2Node_ComponentBoundEvent_104_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__Button_387_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slLookAhead_K2Node_ComponentBoundEvent_106_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slAeroHint_K2Node_ComponentBoundEvent_71_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slBrakeHint_K2Node_ComponentBoundEvent_180_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slUndersteer_K2Node_ComponentBoundEvent_80_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slGasHint_K2Node_ComponentBoundEvent_225_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature
struct UBP_AIWidget_C_BndEvt__slRPMDownshift_K2Node_ComponentBoundEvent_101_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIWidget.BP_AIWidget_C.ExecuteUbergraph_BP_AIWidget
struct UBP_AIWidget_C_ExecuteUbergraph_BP_AIWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
