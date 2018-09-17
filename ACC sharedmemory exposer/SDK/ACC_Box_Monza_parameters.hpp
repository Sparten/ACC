#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Box_Monza_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Box_Monza.Box_Monza_C.ChangeLights
struct ABox_Monza_C_ChangeLights_Params
{
	bool                                               LightOn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Box_Monza.Box_Monza_C.UserConstructionScript
struct ABox_Monza_C_UserConstructionScript_Params
{
};

// Function Box_Monza.Box_Monza_C.ReceiveTick
struct ABox_Monza_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Box_Monza.Box_Monza_C.ExecuteUbergraph_Box_Monza
struct ABox_Monza_C_ExecuteUbergraph_Box_Monza_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
