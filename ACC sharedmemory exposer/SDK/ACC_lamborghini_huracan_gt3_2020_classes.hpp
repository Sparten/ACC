#pragma once

// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_lamborghini_huracan_gt3_2020_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C
// 0x0008 (0x21F0 - 0x21E8)
class Alamborghini_huracan_gt3_2019_C : public Alamborghini_huracan_gt3_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lamborghini_huracan_gt3_2020.lamborghini_huracan_gt3_2019_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_lamborghini_huracan_gt3_2020(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
