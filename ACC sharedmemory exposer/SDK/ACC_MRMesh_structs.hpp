#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Basic.hpp"
#include "ACC_CoreUObject_classes.hpp"
#include "ACC_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MRMesh.MRMeshConfiguration
// 0x0001
struct FMRMeshConfiguration
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
