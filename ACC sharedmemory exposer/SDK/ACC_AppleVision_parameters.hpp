#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_AppleVision_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces
struct UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Params
{
	class UTexture*                                    SourceImage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
