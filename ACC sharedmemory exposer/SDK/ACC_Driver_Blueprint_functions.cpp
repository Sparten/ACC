// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_Driver_Blueprint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Driver_Blueprint.Driver_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADriver_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Driver_Blueprint.Driver_Blueprint_C.UserConstructionScript");

	ADriver_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
