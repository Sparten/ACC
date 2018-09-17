#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_BP_IdealLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IdealLine.BP_IdealLine_C
// 0x0010 (0x03F0 - 0x03E0)
class ABP_IdealLine_C : public AAcIdealLineActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IdealLine.BP_IdealLine_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_IdealLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
