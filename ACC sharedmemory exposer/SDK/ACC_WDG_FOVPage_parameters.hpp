#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_FOVPage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeMultiplierText_Text_1
struct UWDG_FOVPage_C_Get_TimeMultiplierText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_FOVPage.WDG_FOVPage_C.GetText_1
struct UWDG_FOVPage_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_FOVPage.WDG_FOVPage_C.Get_TimeSlider_Value_1
struct UWDG_FOVPage_C_Get_TimeSlider_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WDG_FOVPage.WDG_FOVPage_C.Get_TotalTime_Text_1
struct UWDG_FOVPage_C_Get_TotalTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WDG_FOVPage.WDG_FOVPage_C.Get_CurrentTime_Text_1
struct UWDG_FOVPage_C_Get_CurrentTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
