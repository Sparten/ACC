// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ConfirmButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_ConfirmButton.WDG_ConfirmButton_C.ExecuteUbergraph_WDG_ConfirmButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_ConfirmButton_C::ExecuteUbergraph_WDG_ConfirmButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ConfirmButton.WDG_ConfirmButton_C.ExecuteUbergraph_WDG_ConfirmButton");

	UWDG_ConfirmButton_C_ExecuteUbergraph_WDG_ConfirmButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
