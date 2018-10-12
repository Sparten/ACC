// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_WDG_Gallery_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WDG_Gallery.WDG_Gallery_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWDG_Gallery_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_Gallery.WDG_Gallery_C.Destruct");

	UWDG_Gallery_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WDG_Gallery.WDG_Gallery_C.ExecuteUbergraph_WDG_Gallery
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWDG_Gallery_C::ExecuteUbergraph_WDG_Gallery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WDG_Gallery.WDG_Gallery_C.ExecuteUbergraph_WDG_Gallery");

	UWDG_Gallery_C_ExecuteUbergraph_WDG_Gallery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
