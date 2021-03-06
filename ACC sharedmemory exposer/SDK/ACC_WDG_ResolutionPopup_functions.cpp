// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_ResolutionPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_ResolutionPopup.WDG_ResolutionPopup_C.WDG_PopUp_UpdatePosition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWDG_ResolutionPopup_C::WDG_PopUp_UpdatePosition__DelegateSignature(const struct FVector2D& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_ResolutionPopup.WDG_ResolutionPopup_C.WDG_PopUp_UpdatePosition__DelegateSignature");

	UWDG_ResolutionPopup_C_WDG_PopUp_UpdatePosition__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
