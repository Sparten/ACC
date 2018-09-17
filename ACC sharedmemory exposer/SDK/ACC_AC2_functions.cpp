// Assetto Corsa Competizione (0.1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ACC_AC2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC2.AcCarAnimations.GetWipersMaxLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UAcCarAnimations::GetWipersMaxLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetWipersMaxLevel");

	UAcCarAnimations_GetWipersMaxLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetWipersCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UAcCarAnimations::GetWipersCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetWipersCount");

	UAcCarAnimations_GetWipersCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetWiperPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  WiperIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAcCarAnimations::GetWiperPosition(unsigned char WiperIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetWiperPosition");

	UAcCarAnimations_GetWiperPosition_Params params;
	params.WiperIndex = WiperIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetRightDoorOpenRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAcCarAnimations::GetRightDoorOpenRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetRightDoorOpenRate");

	UAcCarAnimations_GetRightDoorOpenRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetNormalizedWiperPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  WiperIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAcCarAnimations::GetNormalizedWiperPosition(unsigned char WiperIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetNormalizedWiperPosition");

	UAcCarAnimations_GetNormalizedWiperPosition_Params params;
	params.WiperIndex = WiperIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetLeftDoorOpenRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAcCarAnimations::GetLeftDoorOpenRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetLeftDoorOpenRate");

	UAcCarAnimations_GetLeftDoorOpenRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarAnimations.GetCarLoosePartPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  LoosePartIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAcCarAnimations::GetCarLoosePartPosition(unsigned char LoosePartIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarAnimations.GetCarLoosePartPosition");

	UAcCarAnimations_GetCarLoosePartPosition_Params params;
	params.LoosePartIndex = LoosePartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarDigitalDisplay.OnLapEvent
// (Event, Protected, BlueprintEvent)

void UAcCarDigitalDisplay::OnLapEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarDigitalDisplay.OnLapEvent");

	UAcCarDigitalDisplay_OnLapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarGraphicData.GetTeam
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTeamTemplate           Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetTeam(const struct FName& RowName, struct FTeamTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetTeam");

	UAcCarGraphicData_GetTeam_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetSuitTable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDriverSuitTemplate     Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetSuitTable(const struct FName& RowName, struct FDriverSuitTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetSuitTable");

	UAcCarGraphicData_GetSuitTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetStickerSet
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FStickerSet             Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetStickerSet(const struct FName& RowName, struct FStickerSet* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetStickerSet");

	UAcCarGraphicData_GetStickerSet_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetSkinTemplate
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSkinTemplate           Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetSkinTemplate(const struct FName& RowName, struct FSkinTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetSkinTemplate");

	UAcCarGraphicData_GetSkinTemplate_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetRimTemplate
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRimTemplate            Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetRimTemplate(const struct FName& RowName, struct FRimTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetRimTemplate");

	UAcCarGraphicData_GetRimTemplate_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetNumberPanelMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FNumberPanelMesh        Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetNumberPanelMesh(const struct FName& RowName, struct FNumberPanelMesh* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetNumberPanelMesh");

	UAcCarGraphicData_GetNumberPanelMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetHelmetTable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDriverHelmetTemplate   Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetHelmetTable(const struct FName& RowName, struct FDriverHelmetTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetHelmetTable");

	UAcCarGraphicData_GetHelmetTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetGlovesTable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDriverGlovesTemplate   Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetGlovesTable(const struct FName& RowName, struct FDriverGlovesTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetGlovesTable");

	UAcCarGraphicData_GetGlovesTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetColorTable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSkinColor              Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetColorTable(const struct FName& RowName, struct FSkinColor* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetColorTable");

	UAcCarGraphicData_GetColorTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarGraphicData.GetAuxLightMesh
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FAuxLightMesh           Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcCarGraphicData::GetAuxLightMesh(const struct FName& RowName, struct FAuxLightMesh* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarGraphicData.GetAuxLightMesh");

	UAcCarGraphicData_GetAuxLightMesh_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcCarInteriorAnimations.UpdateAnimation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcCarInteriorAnimations::UpdateAnimation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarInteriorAnimations.UpdateAnimation");

	UAcCarInteriorAnimations_UpdateAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarInteriorAnimations.OnNotifyReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          TimeDelay                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarInteriorAnimations::OnNotifyReceived(float TimeDelay, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarInteriorAnimations.OnNotifyReceived");

	UAcCarInteriorAnimations_OnNotifyReceived_Params params;
	params.TimeDelay = TimeDelay;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarInteriorAnimations.OnCarAnimationEvent
// (Final, Native, Protected)
// Parameters:
// ECarAnimation                  CarAnimation                   (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarInteriorAnimations::OnCarAnimationEvent(ECarAnimation CarAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarInteriorAnimations.OnCarAnimationEvent");

	UAcCarInteriorAnimations_OnCarAnimationEvent_Params params;
	params.CarAnimation = CarAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarInteriorAnimations.GetCurrentSwitchRotator
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UAcCarInteriorAnimations::GetCurrentSwitchRotator(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarInteriorAnimations.GetCurrentSwitchRotator");

	UAcCarInteriorAnimations_GetCurrentSwitchRotator_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarLocationManager.OnSafetyCarLine2
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnSafetyCarLine2(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnSafetyCarLine2");

	AAcCarLocationManager_OnSafetyCarLine2_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnSafetyCarLine1
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnSafetyCarLine1(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnSafetyCarLine1");

	AAcCarLocationManager_OnSafetyCarLine1_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitLaneExit
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitLaneExit(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitLaneExit");

	AAcCarLocationManager_OnPitLaneExit_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitLaneEntry
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitLaneEntry(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitLaneEntry");

	AAcCarLocationManager_OnPitLaneEntry_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitExitLaneSide
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitExitLaneSide(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitExitLaneSide");

	AAcCarLocationManager_OnPitExitLaneSide_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitExitLaneEnd
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitExitLaneEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitExitLaneEnd");

	AAcCarLocationManager_OnPitExitLaneEnd_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitEntryLaneStart
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitEntryLaneStart(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitEntryLaneStart");

	AAcCarLocationManager_OnPitEntryLaneStart_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.OnPitEntryLaneSide
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcCarLocationManager::OnPitEntryLaneSide(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.OnPitEntryLaneSide");

	AAcCarLocationManager_OnPitEntryLaneSide_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarLocationManager.FindCarLocationManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class AAcCarLocationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAcCarLocationManager* AAcCarLocationManager::STATIC_FindCarLocationManager(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarLocationManager.FindCarLocationManager");

	AAcCarLocationManager_FindCarLocationManager_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarPitstopManager.SetPitZone_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            _mainIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            _secondaryIndex                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcCarPitstopManager::SetPitZone_BP(int _mainIndex, int _secondaryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarPitstopManager.SetPitZone_BP");

	UAcCarPitstopManager_SetPitZone_BP_Params params;
	params._mainIndex = _mainIndex;
	params._secondaryIndex = _secondaryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarPitstopManager.SetOutside
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPitstopCarOutside             Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarPitstopManager::SetOutside(EPitstopCarOutside Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarPitstopManager.SetOutside");

	UAcCarPitstopManager_SetOutside_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarPitstopManager.RequestPitstop_BP
// (Final, Native, Public, BlueprintCallable)

void UAcCarPitstopManager::RequestPitstop_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarPitstopManager.RequestPitstop_BP");

	UAcCarPitstopManager_RequestPitstop_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarSystems.ToggleRightDoor
// (Final, Native, Public, BlueprintCallable)

void UAcCarSystems::ToggleRightDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.ToggleRightDoor");

	UAcCarSystems_ToggleRightDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarSystems.ToggleLeftDoor
// (Final, Native, Public, BlueprintCallable)

void UAcCarSystems::ToggleLeftDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.ToggleLeftDoor");

	UAcCarSystems_ToggleLeftDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarSystems.SetWiperLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           updateSystems                  (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarSystems::SetWiperLevel(unsigned char Level, bool updateSystems)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.SetWiperLevel");

	UAcCarSystems_SetWiperLevel_Params params;
	params.Level = Level;
	params.updateSystems = updateSystems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarSystems.GetWiperLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UAcCarSystems::GetWiperLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.GetWiperLevel");

	UAcCarSystems_GetWiperLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarSystems.GetLightStage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECarLightStage                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECarLightStage UAcCarSystems::GetLightStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.GetLightStage");

	UAcCarSystems_GetLightStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarSystems.EnableDriverDoor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isOpening                      (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarSystems::EnableDriverDoor(bool isOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.EnableDriverDoor");

	UAcCarSystems_EnableDriverDoor_Params params;
	params.isOpening = isOpening;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarSystems.CycleWiperLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isUp                           (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarSystems::CycleWiperLevel(bool isUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarSystems.CycleWiperLevel");

	UAcCarSystems_CycleWiperLevel_Params params;
	params.isUp = isUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarTimingServices.Reset
// (Final, Native, Public, BlueprintCallable)

void UAcCarTimingServices::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.Reset");

	UAcCarTimingServices_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarTimingServices.OnSplit_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectorId                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PhysicsTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UAcCarTimingServices::OnSplit_BP(int SectorId, float PhysicsTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.OnSplit_BP");

	UAcCarTimingServices_OnSplit_BP_Params params;
	params.SectorId = SectorId;
	params.PhysicsTime = PhysicsTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcCarTimingServices.GetSpeedDiff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetSpeedDiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetSpeedDiff");

	UAcCarTimingServices_GetSpeedDiff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetPredictedLapTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetPredictedLapTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetPredictedLapTime");

	UAcCarTimingServices_GetPredictedLapTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetLastLapTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetLastLapTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetLastLapTime");

	UAcCarTimingServices_GetLastLapTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetLapTimeDiff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetLapTimeDiff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetLapTimeDiff");

	UAcCarTimingServices_GetLapTimeDiff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetLapCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetLapCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetLapCount");

	UAcCarTimingServices_GetLapCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetCurrentLapTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAcCarTimingServices::GetCurrentLapTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetCurrentLapTime");

	UAcCarTimingServices_GetCurrentLapTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcCarTimingServices.GetBestLapTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLapTimeReference       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLapTimeReference UAcCarTimingServices::GetBestLapTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcCarTimingServices.GetBestLapTime");

	UAcCarTimingServices_GetBestLapTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcController.SetCameraOnCar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACarAvatar*              Car                            (Parm, ZeroConstructor, IsPlainOldData)

void AAcController::SetCameraOnCar(class ACarAvatar* Car)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcController.SetCameraOnCar");

	AAcController_SetCameraOnCar_Params params;
	params.Car = Car;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcDriverAnimations.OnAnimationEvent
// (Final, Native, Protected)
// Parameters:
// ECarAnimation                  CarAnimationType               (Parm, ZeroConstructor, IsPlainOldData)

void UAcDriverAnimations::OnAnimationEvent(ECarAnimation CarAnimationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcDriverAnimations.OnAnimationEvent");

	UAcDriverAnimations_OnAnimationEvent_Params params;
	params.CarAnimationType = CarAnimationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcExhaustComponent.SetTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          _Temperature                   (Parm, ZeroConstructor, IsPlainOldData)

void UAcExhaustComponent::SetTemperature(float _Temperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcExhaustComponent.SetTemperature");

	UAcExhaustComponent_SetTemperature_Params params;
	params._Temperature = _Temperature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcExhaustComponent.GetTemperature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAcExhaustComponent::GetTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcExhaustComponent.GetTemperature");

	UAcExhaustComponent_GetTemperature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcExhaustComponent.DebugSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBackFireType                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcExhaustComponent::DebugSound(EBackFireType Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcExhaustComponent.DebugSound");

	UAcExhaustComponent_DebugSound_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcExhaustComponent.DeactivateFlames
// (Final, Native, Public, BlueprintCallable)

void UAcExhaustComponent::DeactivateFlames()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcExhaustComponent.DeactivateFlames");

	UAcExhaustComponent_DeactivateFlames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcExhaustComponent.ActivateFlames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBackFireType                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcExhaustComponent::ActivateFlames(EBackFireType Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcExhaustComponent.ActivateFlames");

	UAcExhaustComponent_ActivateFlames_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcFireworks.BaseLaunchShell
// (Event, Public, BlueprintEvent)

void AAcFireworks::BaseLaunchShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcFireworks.BaseLaunchShell");

	AAcFireworks_BaseLaunchShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcFormatLibrary.Int32ToLaptimeText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Laptime                        (Parm, ZeroConstructor, IsPlainOldData)
// ELaptimeFormat                 Format                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAcFormatLibrary::STATIC_Int32ToLaptimeText(int Laptime, ELaptimeFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcFormatLibrary.Int32ToLaptimeText");

	UAcFormatLibrary_Int32ToLaptimeText_Params params;
	params.Laptime = Laptime;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcFormatLibrary.Int32ToLaptimeDeltaText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// ELaptimeDeltaFormat            Format                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAcFormatLibrary::STATIC_Int32ToLaptimeDeltaText(int Delta, ELaptimeDeltaFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcFormatLibrary.Int32ToLaptimeDeltaText");

	UAcFormatLibrary_Int32ToLaptimeDeltaText_Params params;
	params.Delta = Delta;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcFormatLibrary.Int32ToLaptimeDelta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// ELaptimeDeltaFormat            Format                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAcFormatLibrary::STATIC_Int32ToLaptimeDelta(int Delta, ELaptimeDeltaFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcFormatLibrary.Int32ToLaptimeDelta");

	UAcFormatLibrary_Int32ToLaptimeDelta_Params params;
	params.Delta = Delta;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcFormatLibrary.Int32ToLaptime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Laptime                        (Parm, ZeroConstructor, IsPlainOldData)
// ELaptimeFormat                 Format                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAcFormatLibrary::STATIC_Int32ToLaptime(int Laptime, ELaptimeFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcFormatLibrary.Int32ToLaptime");

	UAcFormatLibrary_Int32ToLaptime_Params params;
	params.Laptime = Laptime;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.UseGamepadAndSave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcGameInstance::UseGamepadAndSave(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.UseGamepadAndSave");

	UAcGameInstance_UseGamepadAndSave_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcGameInstance.UseGamepad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcGameInstance::UseGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.UseGamepad");

	UAcGameInstance_UseGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.SetTargetUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcGameInstance::SetTargetUI(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.SetTargetUI");

	UAcGameInstance_SetTargetUI_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcGameInstance.SetLoadingScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGuiLoadingScreens             LoadingType                    (Parm, ZeroConstructor, IsPlainOldData)

void UAcGameInstance::SetLoadingScreen(EGuiLoadingScreens LoadingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.SetLoadingScreen");

	UAcGameInstance_SetLoadingScreen_Params params;
	params.LoadingType = LoadingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcGameInstance.IsUserTester
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcGameInstance::IsUserTester()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.IsUserTester");

	UAcGameInstance_IsUserTester_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.IsUserDeveloper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcGameInstance::IsUserDeveloper()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.IsUserDeveloper");

	UAcGameInstance_IsUserDeveloper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetTrackName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAcGameInstance::GetTrackName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetTrackName");

	UAcGameInstance_GetTrackName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetOnlineServices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOnlineServices*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOnlineServices* UAcGameInstance::GetOnlineServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetOnlineServices");

	UAcGameInstance_GetOnlineServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetMenuColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGuiColors                     colorToGet                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UAcGameInstance::GetMenuColor(EGuiColors colorToGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetMenuColor");

	UAcGameInstance_GetMenuColor_Params params;
	params.colorToGet = colorToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetGamePlatformServices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGamePlatformServices*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGamePlatformServices* UAcGameInstance::GetGamePlatformServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetGamePlatformServices");

	UAcGameInstance_GetGamePlatformServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetGamePlatformPlayerID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAcGameInstance::STATIC_GetGamePlatformPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetGamePlatformPlayerID");

	UAcGameInstance_GetGamePlatformPlayerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.GetCurrentGameVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAcGameInstance::GetCurrentGameVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.GetCurrentGameVersion");

	UAcGameInstance_GetCurrentGameVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcGameInstance.EndLoadingScreen
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcGameInstance::EndLoadingScreen(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.EndLoadingScreen");

	UAcGameInstance_EndLoadingScreen_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcGameInstance.BeginLoadingScreen
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UAcGameInstance::BeginLoadingScreen(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcGameInstance.BeginLoadingScreen");

	UAcGameInstance_BeginLoadingScreen_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcInfoManager.GetNationalityInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ENationality                   Nationality                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FNationality            Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetNationalityInfo(ENationality Nationality, struct FNationality* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetNationalityInfo");

	UAcInfoManager_GetNationalityInfo_Params params;
	params.Nationality = Nationality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetModelInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECarModelType                  Model                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FModelInfo              Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetModelInfo(ECarModelType Model, struct FModelInfo* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetModelInfo");

	UAcInfoManager_GetModelInfo_Params params;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetMeteoInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EWeatherPresetType             MeteoType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMeteoInfos             Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetMeteoInfo(EWeatherPresetType MeteoType, struct FMeteoInfos* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetMeteoInfo");

	UAcInfoManager_GetMeteoInfo_Params params;
	params.MeteoType = MeteoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetInfoList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EInfoType                      InfoType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           List                           (Parm, OutParm, ZeroConstructor)

void UAcInfoManager::GetInfoList(EInfoType InfoType, TArray<struct FName>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetInfoList");

	UAcInfoManager_GetInfoList_Params params;
	params.InfoType = InfoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function AC2.AcInfoManager.GetDriverInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDriverInfo             Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetDriverInfo(const struct FName& RowName, struct FDriverInfo* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetDriverInfo");

	UAcInfoManager_GetDriverInfo_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetCommonTexts
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCommonTexts            Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetCommonTexts(const struct FName& RowName, struct FCommonTexts* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetCommonTexts");

	UAcInfoManager_GetCommonTexts_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetCircuitInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCircuitInfo            Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetCircuitInfo(const struct FName& RowName, struct FCircuitInfo* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetCircuitInfo");

	UAcInfoManager_GetCircuitInfo_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetCarInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCarInfo                Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetCarInfo(const struct FName& RowName, struct FCarInfo* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetCarInfo");

	UAcInfoManager_GetCarInfo_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcInfoManager.GetBrandInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EBrandType                     Brand                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBrandInfo              Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcInfoManager::GetBrandInfo(EBrandType Brand, struct FBrandInfo* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcInfoManager.GetBrandInfo");

	UAcInfoManager_GetBrandInfo_Params params;
	params.Brand = Brand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcMarshal.SetFlag
// (Event, Public, BlueprintEvent)
// Parameters:
// EMarshalFlagType               flagColor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAcMarshal::SetFlag(EMarshalFlagType flagColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMarshal.SetFlag");

	AAcMarshal_SetFlag_Params params;
	params.flagColor = flagColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcMarshal.ForceAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AAcMarshal::ForceAnimation(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMarshal.ForceAnimation");

	AAcMarshal_ForceAnimation_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcMarshal.EnableAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// EMarshalFlagType               flagColor                      (Parm, ZeroConstructor, IsPlainOldData)

void AAcMarshal::EnableAnimation(bool Value, EMarshalFlagType flagColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMarshal.EnableAnimation");

	AAcMarshal_EnableAnimation_Params params;
	params.Value = Value;
	params.flagColor = flagColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcMenuData.GetIconTemplate
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuiIconTemplate        Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcMenuData::GetIconTemplate(const struct FName& RowName, struct FGuiIconTemplate* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMenuData.GetIconTemplate");

	UAcMenuData_GetIconTemplate_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcMenuData.GetColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGuiColors                     colorToGet                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UAcMenuData::GetColor(EGuiColors colorToGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMenuData.GetColor");

	UAcMenuData_GetColor_Params params;
	params.colorToGet = colorToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcMenuData.GetActionTexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAcMenuData::GetActionTexts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMenuData.GetActionTexts");

	UAcMenuData_GetActionTexts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcMenuData.GetActionText
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FGuiActionCategory      Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcMenuData::GetActionText(const struct FName& RowName, struct FGuiActionCategory* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMenuData.GetActionText");

	UAcMenuData_GetActionText_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcMenuGameMode.getViewLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UViewOptionsLibrary*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UViewOptionsLibrary* AAcMenuGameMode::getViewLibrary()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcMenuGameMode.getViewLibrary");

	AAcMenuGameMode_getViewLibrary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcPageBase.Forward
// (Native, Public)

void UAcPageBase::Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPageBase.Forward");

	UAcPageBase_Forward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPageBase.Backward
// (Native, Public)

void UAcPageBase::Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPageBase.Backward");

	UAcPageBase_Backward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           hasFocus                       (Parm, ZeroConstructor, IsPlainOldData)

void UAcPanelBase::SetFocus(bool hasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.SetFocus");

	UAcPanelBase_SetFocus_Params params;
	params.hasFocus = hasFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.GetMenuColor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGuiColors                     colorToGet                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UAcPanelBase::GetMenuColor(EGuiColors colorToGet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.GetMenuColor");

	UAcPanelBase_GetMenuColor_Params params;
	params.colorToGet = colorToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcPanelBase.ChangeTextBlockVisiblityBySlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNamedSlot*              SlotName                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcPanelBase::ChangeTextBlockVisiblityBySlot(class UNamedSlot* SlotName, ESlateVisibility Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.ChangeTextBlockVisiblityBySlot");

	UAcPanelBase_ChangeTextBlockVisiblityBySlot_Params params;
	params.SlotName = SlotName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.ChangeTextBlockVisibilityByCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            Canvas                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcPanelBase::ChangeTextBlockVisibilityByCanvas(class UCanvasPanel* Canvas, ESlateVisibility Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.ChangeTextBlockVisibilityByCanvas");

	UAcPanelBase_ChangeTextBlockVisibilityByCanvas_Params params;
	params.Canvas = Canvas;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.ChangeTextBlockColorBySlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNamedSlot*              SlotName                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EGuiColors                     Color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcPanelBase::ChangeTextBlockColorBySlot(class UNamedSlot* SlotName, EGuiColors Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.ChangeTextBlockColorBySlot");

	UAcPanelBase_ChangeTextBlockColorBySlot_Params params;
	params.SlotName = SlotName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.ChangeTextBlockColorByCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            Canvas                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EGuiColors                     Color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcPanelBase::ChangeTextBlockColorByCanvas(class UCanvasPanel* Canvas, EGuiColors Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.ChangeTextBlockColorByCanvas");

	UAcPanelBase_ChangeTextBlockColorByCanvas_Params params;
	params.Canvas = Canvas;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.BP_MouseOver
// (Event, Public, BlueprintEvent)

void UAcPanelBase::BP_MouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.BP_MouseOver");

	UAcPanelBase_BP_MouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcPanelBase.BP_MouseLeave
// (Event, Public, BlueprintEvent)

void UAcPanelBase::BP_MouseLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPanelBase.BP_MouseLeave");

	UAcPanelBase_BP_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcParticlesManager.GetWaterParticles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWaterParticles         Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcParticlesManager::GetWaterParticles(const struct FName& RowName, struct FWaterParticles* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcParticlesManager.GetWaterParticles");

	UAcParticlesManager_GetWaterParticles_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcParticlesManager.GetWaterCurves
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWaterCurves            Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcParticlesManager::GetWaterCurves(const struct FName& RowName, struct FWaterCurves* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcParticlesManager.GetWaterCurves");

	UAcParticlesManager_GetWaterCurves_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcParticlesManager.GetSmokeDirtParticles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSmokeDirtParticles     Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcParticlesManager::GetSmokeDirtParticles(const struct FName& RowName, struct FSmokeDirtParticles* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcParticlesManager.GetSmokeDirtParticles");

	UAcParticlesManager_GetSmokeDirtParticles_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcParticlesManager.GetSmokeDirtCurves
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSmokeDirtCurves        Destination                    (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcParticlesManager::GetSmokeDirtCurves(const struct FName& RowName, struct FSmokeDirtCurves* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcParticlesManager.GetSmokeDirtCurves");

	UAcParticlesManager_GetSmokeDirtCurves_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.AcParticlesManager.GetParticleList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EParticleLod                   ParticleLod                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           List                           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcParticlesManager::GetParticleList(EParticleLod ParticleLod, TArray<struct FName>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcParticlesManager.GetParticleList");

	UAcParticlesManager_GetParticleList_Params params;
	params.ParticleLod = ParticleLod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

	return params.ReturnValue;
}


// Function AC2.ACPlayerCameraManager.ToggleFreeCameraLock
// (Final, Native, Public, BlueprintCallable)

void AACPlayerCameraManager::ToggleFreeCameraLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.ToggleFreeCameraLock");

	AACPlayerCameraManager_ToggleFreeCameraLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ACPlayerCameraManager.SetFocusOnPlayerCar
// (Final, Native, Public, BlueprintCallable)

void AACPlayerCameraManager::SetFocusOnPlayerCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.SetFocusOnPlayerCar");

	AACPlayerCameraManager_SetFocusOnPlayerCar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ACPlayerCameraManager.SetFocusedCar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACarAvatar*              newCar                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetUniqueActorsVisibility     (Parm, ZeroConstructor, IsPlainOldData)

void AACPlayerCameraManager::SetFocusedCar(class ACarAvatar* newCar, bool bSetUniqueActorsVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.SetFocusedCar");

	AACPlayerCameraManager_SetFocusedCar_Params params;
	params.newCar = newCar;
	params.bSetUniqueActorsVisibility = bSetUniqueActorsVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ACPlayerCameraManager.RefreshCamera
// (Final, Native, Public, BlueprintCallable)

void AACPlayerCameraManager::RefreshCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.RefreshCamera");

	AACPlayerCameraManager_RefreshCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ACPlayerCameraManager.GetFreeCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AACPlayerCameraManager::GetFreeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.GetFreeCamera");

	AACPlayerCameraManager_GetFreeCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ACPlayerCameraManager.GetFocusedCar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACarAvatar*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACarAvatar* AACPlayerCameraManager::GetFocusedCar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ACPlayerCameraManager.GetFocusedCar");

	AACPlayerCameraManager_GetFocusedCar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcPlayerStartManager.GetPlayerStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAcPlayerStartType             PlayerStartType                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerPosition                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AAcPlayerStart*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAcPlayerStart* AAcPlayerStartManager::GetPlayerStart(EAcPlayerStartType PlayerStartType, int PlayerPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPlayerStartManager.GetPlayerStart");

	AAcPlayerStartManager_GetPlayerStart_Params params;
	params.PlayerStartType = PlayerStartType;
	params.PlayerPosition = PlayerPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcPlayerStartManager.FindPlayerStartManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class AAcPlayerStartManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAcPlayerStartManager* AAcPlayerStartManager::STATIC_FindPlayerStartManager(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPlayerStartManager.FindPlayerStartManager");

	AAcPlayerStartManager_FindPlayerStartManager_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcPresetManager.GetSortedSpecialEventList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSpecialEventPreset> List                           (Parm, OutParm, ZeroConstructor)

void UAcPresetManager::GetSortedSpecialEventList(TArray<struct FSpecialEventPreset>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPresetManager.GetSortedSpecialEventList");

	UAcPresetManager_GetSortedSpecialEventList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function AC2.AcPresetManager.GetPresetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EPresetType                    PresetType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           List                           (Parm, OutParm, ZeroConstructor)

void UAcPresetManager::GetPresetList(EPresetType PresetType, TArray<struct FName>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcPresetManager.GetPresetList");

	UAcPresetManager_GetPresetList_Params params;
	params.PresetType = PresetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
}


// Function AC2.AcRaceGameMode.Proceed
// (Final, Native, Public, BlueprintCallable)

void AAcRaceGameMode::Proceed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.Proceed");

	AAcRaceGameMode_Proceed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameMode.getViewLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UViewOptionsLibrary*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UViewOptionsLibrary* AAcRaceGameMode::getViewLibrary()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.getViewLibrary");

	AAcRaceGameMode_getViewLibrary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameMode.GetSunPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameMode::GetSunPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.GetSunPitch");

	AAcRaceGameMode_GetSunPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameMode.GetPlayerCarAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACarAvatar*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACarAvatar* AAcRaceGameMode::GetPlayerCarAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.GetPlayerCarAvatar");

	AAcRaceGameMode_GetPlayerCarAvatar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameMode.CloseLevel
// (Event, Protected, BlueprintEvent)

void AAcRaceGameMode::CloseLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.CloseLevel");

	AAcRaceGameMode_CloseLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameMode.BPPhysicsPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameMode::BPPhysicsPause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameMode.BPPhysicsPause");

	AAcRaceGameMode_BPPhysicsPause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.SetRainGlobalLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameState::SetRainGlobalLevel(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.SetRainGlobalLevel");

	AAcRaceGameState_SetRainGlobalLevel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.SetMainVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameState::SetMainVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.SetMainVolume");

	AAcRaceGameState_SetMainVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.SetCloudGlobalLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameState::SetCloudGlobalLevel(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.SetCloudGlobalLevel");

	AAcRaceGameState_SetCloudGlobalLevel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.SetAudioVCA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAudioVCA                      Vca                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameState::SetAudioVCA(EAudioVCA Vca, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.SetAudioVCA");

	AAcRaceGameState_SetAudioVCA_Params params;
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.RestartSession
// (Final, Native, Public, BlueprintCallable)

void AAcRaceGameState::RestartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.RestartSession");

	AAcRaceGameState_RestartSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.NextSession
// (Final, Native, Public, BlueprintCallable)

void AAcRaceGameState::NextSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.NextSession");

	AAcRaceGameState_NextSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceGameState.isInReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAcRaceGameState::isInReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.isInReplay");

	AAcRaceGameState_isInReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetTimeOfDayAsSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameState::GetTimeOfDayAsSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetTimeOfDayAsSeconds");

	AAcRaceGameState_GetTimeOfDayAsSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetTimeOfDayAs1440
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameState::GetTimeOfDayAs1440()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetTimeOfDayAs1440");

	AAcRaceGameState_GetTimeOfDayAs1440_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetReplayController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* AAcRaceGameState::GetReplayController()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetReplayController");

	AAcRaceGameState_GetReplayController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetRainGlobalLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameState::GetRainGlobalLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetRainGlobalLevel");

	AAcRaceGameState_GetRainGlobalLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetCloudGlobalLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameState::GetCloudGlobalLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetCloudGlobalLevel");

	AAcRaceGameState_GetCloudGlobalLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.GetAudioVCA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAudioVCA                      Vca                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcRaceGameState::GetAudioVCA(EAudioVCA Vca)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.GetAudioVCA");

	AAcRaceGameState_GetAudioVCA_Params params;
	params.Vca = Vca;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcRaceGameState.AddSecondsToTimeOfday
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            secondsToAdd                   (Parm, ZeroConstructor, IsPlainOldData)

void AAcRaceGameState::AddSecondsToTimeOfday(int secondsToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceGameState.AddSecondsToTimeOfday");

	AAcRaceGameState_AddSecondsToTimeOfday_Params params;
	params.secondsToAdd = secondsToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRacePlayerState.SetDriverInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDriverInfo             _driverInfo                    (Parm)

void AAcRacePlayerState::SetDriverInfo(const struct FDriverInfo& _driverInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRacePlayerState.SetDriverInfo");

	AAcRacePlayerState_SetDriverInfo_Params params;
	params._driverInfo = _driverInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRacePlayerState.SetCarInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCarInfo                _carInfo                       (Parm)

void AAcRacePlayerState::SetCarInfo(const struct FCarInfo& _carInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRacePlayerState.SetCarInfo");

	AAcRacePlayerState_SetCarInfo_Params params;
	params._carInfo = _carInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceWidgetBase.OnUpdateOfficialPositionEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void UAcRaceWidgetBase::OnUpdateOfficialPositionEvent(int CarIndex, int NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceWidgetBase.OnUpdateOfficialPositionEvent");

	UAcRaceWidgetBase_OnUpdateOfficialPositionEvent_Params params;
	params.CarIndex = CarIndex;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceWidgetBase.OnHudTick
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRaceHUDState           State                          (ConstParm, Parm, OutParm, ReferenceParm)

void UAcRaceWidgetBase::OnHudTick(const struct FRaceHUDState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceWidgetBase.OnHudTick");

	UAcRaceWidgetBase_OnHudTick_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceWidgetBase.OnHudSplitEvent
// (Event, Public, BlueprintEvent)

void UAcRaceWidgetBase::OnHudSplitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceWidgetBase.OnHudSplitEvent");

	UAcRaceWidgetBase_OnHudSplitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcRaceWidgetBase.OnHudLapEvent
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            Laptime                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FHUDCarState            carState                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           isDriverFastestLap             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isSessionFastestLap            (Parm, ZeroConstructor, IsPlainOldData)

void UAcRaceWidgetBase::OnHudLapEvent(int Laptime, bool IsValid, const struct FHUDCarState& carState, bool isDriverFastestLap, bool isSessionFastestLap)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcRaceWidgetBase.OnHudLapEvent");

	UAcRaceWidgetBase_OnHudLapEvent_Params params;
	params.Laptime = Laptime;
	params.IsValid = IsValid;
	params.carState = carState;
	params.isDriverFastestLap = isDriverFastestLap;
	params.isSessionFastestLap = isSessionFastestLap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcSessionInfoPanel.OnHotlapData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDriverCarClass               (Parm, ZeroConstructor, IsPlainOldData)

void UAcSessionInfoPanel::OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSessionInfoPanel.OnHotlapData");

	UAcSessionInfoPanel_OnHotlapData_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.isDriverCarClass = isDriverCarClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcSteeringWheelAnimations.UpdateAnimation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAcSteeringWheelAnimations::UpdateAnimation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSteeringWheelAnimations.UpdateAnimation");

	UAcSteeringWheelAnimations_UpdateAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcSteeringWheelAnimations.ResetGearState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcSteeringWheelAnimations::ResetGearState(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSteeringWheelAnimations.ResetGearState");

	UAcSteeringWheelAnimations_ResetGearState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcSteeringWheelAnimations.OnNotifyReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          TimeDelay                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAcSteeringWheelAnimations::OnNotifyReceived(float TimeDelay, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSteeringWheelAnimations.OnNotifyReceived");

	UAcSteeringWheelAnimations_OnNotifyReceived_Params params;
	params.TimeDelay = TimeDelay;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcSteeringWheelAnimations.OnCarAnimationEvent
// (Final, Native, Protected)
// Parameters:
// ECarAnimation                  CarAnimation                   (Parm, ZeroConstructor, IsPlainOldData)

void UAcSteeringWheelAnimations::OnCarAnimationEvent(ECarAnimation CarAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSteeringWheelAnimations.OnCarAnimationEvent");

	UAcSteeringWheelAnimations_OnCarAnimationEvent_Params params;
	params.CarAnimation = CarAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcSteeringWheelAnimations.GetCurrentSwitchRotator
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UAcSteeringWheelAnimations::GetCurrentSwitchRotator(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcSteeringWheelAnimations.GetCurrentSwitchRotator");

	UAcSteeringWheelAnimations_GetCurrentSwitchRotator_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcTogglePanel.GetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAcTogglePanel::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTogglePanel.GetState");

	UAcTogglePanel_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcTogglePanel.BP_UpdateState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           IsElementActive                (Parm, ZeroConstructor, IsPlainOldData)

void UAcTogglePanel::BP_UpdateState(bool IsElementActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTogglePanel.BP_UpdateState");

	UAcTogglePanel_BP_UpdateState_Params params;
	params.IsElementActive = IsElementActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcTogglePanel.BP_IsUnSelected
// (Event, Protected, BlueprintEvent)

void UAcTogglePanel::BP_IsUnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTogglePanel.BP_IsUnSelected");

	UAcTogglePanel_BP_IsUnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcTogglePanel.BP_IsSelected
// (Event, Protected, BlueprintEvent)

void UAcTogglePanel::BP_IsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTogglePanel.BP_IsSelected");

	UAcTogglePanel_BP_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcTogglePanel.BP_Forward
// (Event, Protected, BlueprintEvent)

void UAcTogglePanel::BP_Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTogglePanel.BP_Forward");

	UAcTogglePanel_BP_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AcTrackSpline.GetSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USplineComponent* AAcTrackSpline::GetSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTrackSpline.GetSpline");

	AAcTrackSpline_GetSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AcTrackSpline.GetDistanceAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAcTrackSpline::GetDistanceAtLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AcTrackSpline.GetDistanceAtLocation");

	AAcTrackSpline_GetDistanceAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AdvancedScalabilityConfig.SetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGraphicsOptions               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AAdvancedScalabilityConfig::SetParameter(EGraphicsOptions Type, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AdvancedScalabilityConfig.SetParameter");

	AAdvancedScalabilityConfig_SetParameter_Params params;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AdvancedScalabilityConfig.saveConfig
// (Final, Native, Public, BlueprintCallable)

void AAdvancedScalabilityConfig::saveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AdvancedScalabilityConfig.saveConfig");

	AAdvancedScalabilityConfig_saveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.AdvancedScalabilityConfig.GetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGraphicsOptions               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAdvancedScalabilityConfig::GetParameter(EGraphicsOptions Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AdvancedScalabilityConfig.GetParameter");

	AAdvancedScalabilityConfig_GetParameter_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AdvancedScalabilityConfig.getEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// EGraphicsOptions               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGraphicsOptions AAdvancedScalabilityConfig::getEnum(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AdvancedScalabilityConfig.getEnum");

	AAdvancedScalabilityConfig_getEnum_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.AssistsPage.OpenPresetDialogBox
// (Final, Native, Protected)

void UAssistsPage::OpenPresetDialogBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.AssistsPage.OpenPresetDialogBox");

	UAssistsPage_OpenPresetDialogBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.BestLapNotificationWidget.PlayShowupAnimation
// (Event, Protected, BlueprintEvent)

void UBestLapNotificationWidget::PlayShowupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.BestLapNotificationWidget.PlayShowupAnimation");

	UBestLapNotificationWidget_PlayShowupAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAudio.StopSounds
// (Final, Native, Public, BlueprintCallable)

void UCarAudio::StopSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAudio.StopSounds");

	UCarAudio_StopSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAudio.ResumeSounds
// (Final, Native, Public, BlueprintCallable)

void UCarAudio::ResumeSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAudio.ResumeSounds");

	UCarAudio_ResumeSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.TeleportCar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAcPlayerStart*          PlayerStart                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::TeleportCar(class AAcPlayerStart* PlayerStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.TeleportCar");

	ACarAvatar_TeleportCar_Params params;
	params.PlayerStart = PlayerStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.StopSounds
// (Final, Native, Public, BlueprintCallable)

void ACarAvatar::StopSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.StopSounds");

	ACarAvatar_StopSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.StartLineRecording
// (Final, Native, Public, BlueprintCallable)

void ACarAvatar::StartLineRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.StartLineRecording");

	ACarAvatar_StartLineRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.ShowDriver
// (Final, Exec, Native, Public, BlueprintCallable)

void ACarAvatar::ShowDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.ShowDriver");

	ACarAvatar_ShowDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.SetTyreTemperature
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  tyreIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            newTemperature                 (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::SetTyreTemperature(unsigned char tyreIndex, int newTemperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.SetTyreTemperature");

	ACarAvatar_SetTyreTemperature_Params params;
	params.tyreIndex = tyreIndex;
	params.newTemperature = newTemperature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.SetForcedOnFlatPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::SetForcedOnFlatPlane(bool Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.SetForcedOnFlatPlane");

	ACarAvatar_SetForcedOnFlatPlane_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.SetControllerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EControllerType                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::SetControllerType(EControllerType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.SetControllerType");

	ACarAvatar_SetControllerType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.SetCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMainCameraMode                mainMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            subMode                        (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::SetCamera(EMainCameraMode mainMode, int subMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.SetCamera");

	ACarAvatar_SetCamera_Params params;
	params.mainMode = mainMode;
	params.subMode = subMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.SetAISteerSmoothing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::SetAISteerSmoothing(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.SetAISteerSmoothing");

	ACarAvatar_SetAISteerSmoothing_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.ServerPostNetCarState
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint16_t>               NewState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ACarAvatar::ServerPostNetCarState(TArray<uint16_t> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.ServerPostNetCarState");

	ACarAvatar_ServerPostNetCarState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.ResumeSounds
// (Final, Native, Public, BlueprintCallable)

void ACarAvatar::ResumeSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.ResumeSounds");

	ACarAvatar_ResumeSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.OnAIDataChanged
// (Final, Native, Public, BlueprintCallable)

void ACarAvatar::OnAIDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.OnAIDataChanged");

	ACarAvatar_OnAIDataChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.NetCarStateReplicated
// (Final, Native, Public)

void ACarAvatar::NetCarStateReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.NetCarStateReplicated");

	ACarAvatar_NetCarStateReplicated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.LockCarAvatarForPitstop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           updateControls                 (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::LockCarAvatarForPitstop(bool Value, bool updateControls)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.LockCarAvatarForPitstop");

	ACarAvatar_LockCarAvatarForPitstop_Params params;
	params.Value = Value;
	params.updateControls = updateControls;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.IsABS_InAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACarAvatar::IsABS_InAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.IsABS_InAction");

	ACarAvatar_IsABS_InAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.HideDriver
// (Final, Exec, Native, Public, BlueprintCallable)

void ACarAvatar::HideDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.HideDriver");

	ACarAvatar_HideDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.GetWingState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FWingState              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWingState ACarAvatar::GetWingState(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetWingState");

	ACarAvatar_GetWingState_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetWheelTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ACarAvatar::GetWheelTransform(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetWheelTransform");

	ACarAvatar_GetWheelTransform_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetTyreSuspState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTyreSuspState          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTyreSuspState ACarAvatar::GetTyreSuspState(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetTyreSuspState");

	ACarAvatar_GetTyreSuspState_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetTOE
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetTOE(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetTOE");

	ACarAvatar_GetTOE_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetSuspTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ACarAvatar::GetSuspTransform(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetSuspTransform");

	ACarAvatar_GetSuspTransform_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetSuspPos
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ACarAvatar::GetSuspPos(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetSuspPos");

	ACarAvatar_GetSuspPos_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetSteer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetSteer");

	ACarAvatar_GetSteer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetSpeedKMH
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetSpeedKMH()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetSpeedKMH");

	ACarAvatar_GetSpeedKMH_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetRPMS
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetRPMS()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetRPMS");

	ACarAvatar_GetRPMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetPitstopManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAcCarPitstopManager*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAcCarPitstopManager* ACarAvatar::GetPitstopManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetPitstopManager");

	ACarAvatar_GetPitstopManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetOutsideBoundariesValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetOutsideBoundariesValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetOutsideBoundariesValue");

	ACarAvatar_GetOutsideBoundariesValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetNormalizedSplinePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetNormalizedSplinePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetNormalizedSplinePosition");

	ACarAvatar_GetNormalizedSplinePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetMaxRPMS
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetMaxRPMS()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetMaxRPMS");

	ACarAvatar_GetMaxRPMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetGForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ACarAvatar::GetGForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetGForce");

	ACarAvatar_GetGForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetGearAsIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ACarAvatar::GetGearAsIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetGearAsIndex");

	ACarAvatar_GetGearAsIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACarAvatar::GetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetGear");

	ACarAvatar_GetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetGas
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetGas()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetGas");

	ACarAvatar_GetGas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetExternalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ACarAvatar::GetExternalMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetExternalMeshComponent");

	ACarAvatar_GetExternalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetDriverInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDriverInfo             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FDriverInfo ACarAvatar::GetDriverInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetDriverInfo");

	ACarAvatar_GetDriverInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetControlsStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FControlsStatus         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FControlsStatus ACarAvatar::GetControlsStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetControlsStatus");

	ACarAvatar_GetControlsStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetControllerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EControllerType                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerType ACarAvatar::GetControllerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetControllerType");

	ACarAvatar_GetControllerType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetClutch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetClutch");

	ACarAvatar_GetClutch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetCarEntryInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCarInfo                ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FCarInfo ACarAvatar::GetCarEntryInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetCarEntryInfo");

	ACarAvatar_GetCarEntryInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetBrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACarAvatar::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetBrake");

	ACarAvatar_GetBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.GetAIState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAIState                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIState ACarAvatar::GetAIState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.GetAIState");

	ACarAvatar_GetAIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.CarAvatar.CommitCarDataChanges
// (Final, Native, Public, BlueprintCallable)

void ACarAvatar::CommitCarDataChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.CommitCarDataChanges");

	ACarAvatar_CommitCarDataChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatar.BroadcastAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECarAnimation                  CarAnimation                   (Parm, ZeroConstructor, IsPlainOldData)

void ACarAvatar::BroadcastAnimation(ECarAnimation CarAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatar.BroadcastAnimation");

	ACarAvatar_BroadcastAnimation_Params params;
	params.CarAnimation = CarAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatarRatingCalculator.OnKsonRatingReport
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FRatingReport           ratingCurrent                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRatingReport           deltaRating                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           isSessionReference             (Parm, ZeroConstructor, IsPlainOldData)

void UCarAvatarRatingCalculator::OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatarRatingCalculator.OnKsonRatingReport");

	UCarAvatarRatingCalculator_OnKsonRatingReport_Params params;
	params.ratingCurrent = ratingCurrent;
	params.deltaRating = deltaRating;
	params.isSessionReference = isSessionReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarAvatarRatingCalculator.OnKsonLapCompletedFeedback
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesLapPerformance lapPerformance                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCarAvatarRatingCalculator::OnKsonLapCompletedFeedback(const struct FOnlineServicesLapPerformance& lapPerformance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarAvatarRatingCalculator.OnKsonLapCompletedFeedback");

	UCarAvatarRatingCalculator_OnKsonLapCompletedFeedback_Params params;
	params.lapPerformance = lapPerformance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarDriverSelectionPanel.Forward
// (Native, Public)

void UCarDriverSelectionPanel::Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarDriverSelectionPanel.Forward");

	UCarDriverSelectionPanel_Forward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarDriverSelectionPanel.Backward
// (Native, Public)

void UCarDriverSelectionPanel::Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarDriverSelectionPanel.Backward");

	UCarDriverSelectionPanel_Backward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarSelectionPage.StopSequence
// (Event, Public, BlueprintEvent)

void UCarSelectionPage::StopSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarSelectionPage.StopSequence");

	UCarSelectionPage_StopSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarSelectionPage.PlaySequence
// (Event, Public, BlueprintEvent)

void UCarSelectionPage::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarSelectionPage.PlaySequence");

	UCarSelectionPage_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.CarSelectionPage.FilterBy
// (Final, Native, Protected)

void UCarSelectionPage::FilterBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.CarSelectionPage.FilterBy");

	UCarSelectionPage_FilterBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ControllerOptionsPage.PresetsDialog
// (Final, Native, Protected)

void UControllerOptionsPage::PresetsDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ControllerOptionsPage.PresetsDialog");

	UControllerOptionsPage_PresetsDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ControllerOptionsPage.ClearInput
// (Final, Native, Public)
// Parameters:
// class UGenericInputItem*       Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControllerOptionsPage::ClearInput(class UGenericInputItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ControllerOptionsPage.ClearInput");

	UControllerOptionsPage_ClearInput_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ControllerOptionsPage.AdvancedInput
// (Final, Native, Public)
// Parameters:
// class UGenericInputItem*       Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UControllerOptionsPage::AdvancedInput(class UGenericInputItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ControllerOptionsPage.AdvancedInput");

	UControllerOptionsPage_AdvancedInput_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.DriverProfileRatingPage.SetRatingCap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 desiredCap                     (Parm, ZeroConstructor)

void UDriverProfileRatingPage::SetRatingCap(const struct FString& desiredCap)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.DriverProfileRatingPage.SetRatingCap");

	UDriverProfileRatingPage_SetRatingCap_Params params;
	params.desiredCap = desiredCap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.DriverProfileRatingPage.ResetRating
// (Final, Native, Protected, BlueprintCallable)

void UDriverProfileRatingPage::ResetRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.DriverProfileRatingPage.ResetRating");

	UDriverProfileRatingPage_ResetRating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.DriverProfileRatingPage.OnDriverSummary
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesDriverSummary summary                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDriverProfileRatingPage::OnDriverSummary(const struct FOnlineServicesDriverSummary& summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.DriverProfileRatingPage.OnDriverSummary");

	UDriverProfileRatingPage_OnDriverSummary_Params params;
	params.summary = summary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ExpoIntroPage.OnRestartSessionClicked
// (Final, Native, Protected)

void UExpoIntroPage::OnRestartSessionClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ExpoIntroPage.OnRestartSessionClicked");

	UExpoIntroPage_OnRestartSessionClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ExpoIntroPage.OnMainMenuClicked
// (Final, Native, Protected)

void UExpoIntroPage::OnMainMenuClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ExpoIntroPage.OnMainMenuClicked");

	UExpoIntroPage_OnMainMenuClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ExpoOutroPage.DoTransitionToIntroPage
// (Final, Native, Protected)

void UExpoOutroPage::DoTransitionToIntroPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ExpoOutroPage.DoTransitionToIntroPage");

	UExpoOutroPage_DoTransitionToIntroPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.FireWorksAudio.Explosion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFireWorkType>     Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AFireWorksAudio::Explosion(TEnumAsByte<EFireWorkType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.FireWorksAudio.Explosion");

	AFireWorksAudio_Explosion_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GameIntroPage.SwitchIndexChange
// (Event, Public, BlueprintEvent)

void UGameIntroPage::SwitchIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GameIntroPage.SwitchIndexChange");

	UGameIntroPage_SwitchIndexChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GameIntroPage.OnVideoEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameIntroPage::OnVideoEnd(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GameIntroPage.OnVideoEnd");

	UGameIntroPage_OnVideoEnd_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GameIntroPage.FadeIn
// (Final, Native, Public, BlueprintCallable)

void UGameIntroPage::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GameIntroPage.FadeIn");

	UGameIntroPage_FadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GameIntroPage.BP_StopVideo
// (Event, Public, BlueprintEvent)

void UGameIntroPage::BP_StopVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GameIntroPage.BP_StopVideo");

	UGameIntroPage_BP_StopVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GameIntroPage.BP_PlayVideo
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsUE4Video                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameIntroPage::BP_PlayVideo(bool IsUE4Video)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GameIntroPage.BP_PlayVideo");

	UGameIntroPage_BP_PlayVideo_Params params;
	params.IsUE4Video = IsUE4Video;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericBarItem.BP_UpdateActivity
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData)

void UGenericBarItem::BP_UpdateActivity(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericBarItem.BP_UpdateActivity");

	UGenericBarItem_BP_UpdateActivity_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericInputItem.GoCancel
// (Final, Native, Protected)

void UGenericInputItem::GoCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericInputItem.GoCancel");

	UGenericInputItem_GoCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericInputItem.GoAdvanced
// (Final, Native, Protected)

void UGenericInputItem::GoAdvanced()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericInputItem.GoAdvanced");

	UGenericInputItem_GoAdvanced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericSelectorItem.ReleasedRight
// (Final, Native, Protected)

void UGenericSelectorItem::ReleasedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericSelectorItem.ReleasedRight");

	UGenericSelectorItem_ReleasedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericSelectorItem.ReleasedLeft
// (Final, Native, Protected)

void UGenericSelectorItem::ReleasedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericSelectorItem.ReleasedLeft");

	UGenericSelectorItem_ReleasedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericSelectorItem.PressedRight
// (Final, Native, Protected)

void UGenericSelectorItem::PressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericSelectorItem.PressedRight");

	UGenericSelectorItem_PressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GenericSelectorItem.PressedLeft
// (Final, Native, Protected)

void UGenericSelectorItem::PressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GenericSelectorItem.PressedLeft");

	UGenericSelectorItem_PressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GhostCarManager.OnStartingLap
// (Final, Native, Protected)
// Parameters:
// double                         Timestamp                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGhostCarManager::OnStartingLap(double Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GhostCarManager.OnStartingLap");

	AGhostCarManager_OnStartingLap_Params params;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.GuiUtilities.PadNumberWithZeroes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InputNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            PaddingSize                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGuiUtilities::STATIC_PadNumberWithZeroes(int InputNumber, int PaddingSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GuiUtilities.PadNumberWithZeroes");

	UGuiUtilities_PadNumberWithZeroes_Params params;
	params.InputNumber = InputNumber;
	params.PaddingSize = PaddingSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.GuiUtilities.GetGameViewportSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGuiUtilities::STATIC_GetGameViewportSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GuiUtilities.GetGameViewportSize");

	UGuiUtilities_GetGameViewportSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.GuiUtilities.GetGameResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGuiUtilities::STATIC_GetGameResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GuiUtilities.GetGameResolution");

	UGuiUtilities_GetGameResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.GuiUtilities.FormatDatedLapTimeTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FLapDataDated>   InputTable                     (Parm, ZeroConstructor)
// TArray<struct FLapDataPreFormatted> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FLapDataPreFormatted> UGuiUtilities::STATIC_FormatDatedLapTimeTable(TArray<struct FLapDataDated> InputTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GuiUtilities.FormatDatedLapTimeTable");

	UGuiUtilities_FormatDatedLapTimeTable_Params params;
	params.InputTable = InputTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.GuiUtilities.ConvertInt32ToFormattedTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InputTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideMillisecs                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGuiUtilities::STATIC_ConvertInt32ToFormattedTime(int InputTime, bool HideMillisecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.GuiUtilities.ConvertInt32ToFormattedTime");

	UGuiUtilities_ConvertInt32ToFormattedTime_Params params;
	params.InputTime = InputTime;
	params.HideMillisecs = HideMillisecs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.HelpInMenu.BP_Warning
// (Event, Public, BlueprintEvent)

void UHelpInMenu::BP_Warning()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.HelpInMenu.BP_Warning");

	UHelpInMenu_BP_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.HelpInMenu.BP_PlayInitAnimation
// (Event, Public, BlueprintEvent)

void UHelpInMenu::BP_PlayInitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.HelpInMenu.BP_PlayInitAnimation");

	UHelpInMenu_BP_PlayInitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.HotlapLeaderboards.UpdateConnectionState
// (Final, Native, Protected)
// Parameters:
// EOnlineServicesConnectionState State                          (Parm, ZeroConstructor, IsPlainOldData)

void UHotlapLeaderboards::UpdateConnectionState(EOnlineServicesConnectionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.HotlapLeaderboards.UpdateConnectionState");

	UHotlapLeaderboards_UpdateConnectionState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.HotlapLeaderboards.OnHotlapData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ignoreMe                       (Parm, ZeroConstructor, IsPlainOldData)

void UHotlapLeaderboards::OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.HotlapLeaderboards.OnHotlapData");

	UHotlapLeaderboards_OnHotlapData_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.ignoreMe = ignoreMe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.HttpStatServices.GetWRTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLapDataBase            requestData                    (Parm)

void UHttpStatServices::GetWRTable(const struct FLapDataBase& requestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.HttpStatServices.GetWRTable");

	UHttpStatServices_GetWRTable_Params params;
	params.requestData = requestData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.InputPopup.UnlockNavigation
// (Final, Native, Protected)

void UInputPopup::UnlockNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.InputPopup.UnlockNavigation");

	UInputPopup_UnlockNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.InputPopup.OnButtonReleaseDetailedEvent
// (Final, Native, Protected)
// Parameters:
// unsigned char                  _deviceIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            _buttonIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            _powIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            _powValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInputPopup::OnButtonReleaseDetailedEvent(unsigned char _deviceIndex, int _buttonIndex, int _powIndex, int _powValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.InputPopup.OnButtonReleaseDetailedEvent");

	UInputPopup_OnButtonReleaseDetailedEvent_Params params;
	params._deviceIndex = _deviceIndex;
	params._buttonIndex = _buttonIndex;
	params._powIndex = _powIndex;
	params._powValue = _powValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.InputPopup.OnAxisPressDetailedEvent
// (Final, Native, Protected)
// Parameters:
// unsigned char                  _deviceIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            _axisIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          _value                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UInputPopup::OnAxisPressDetailedEvent(unsigned char _deviceIndex, int _axisIndex, float _value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.InputPopup.OnAxisPressDetailedEvent");

	UInputPopup_OnAxisPressDetailedEvent_Params params;
	params._deviceIndex = _deviceIndex;
	params._axisIndex = _axisIndex;
	params._value = _value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.InputPopup.CancelInputForward
// (Final, Native, Protected)

void UInputPopup::CancelInputForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.InputPopup.CancelInputForward");

	UInputPopup_CancelInputForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.InputPopup.BP_InputReceived
// (Event, Public, BlueprintEvent)

void UInputPopup::BP_InputReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.InputPopup.BP_InputReceived");

	UInputPopup_BP_InputReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.KeyBindingUtil.RemoveAxisBinding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAxis              BindingToRemove                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_RemoveAxisBinding(const struct FInputAxis& BindingToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.RemoveAxisBinding");

	UKeyBindingUtil_RemoveAxisBinding_Params params;
	params.BindingToRemove = BindingToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.RemoveActionBinding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAction            BindingToRemove                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_RemoveActionBinding(const struct FInputAction& BindingToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.RemoveActionBinding");

	UKeyBindingUtil_RemoveActionBinding_Params params;
	params.BindingToRemove = BindingToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.ReBindAxisKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAxis              CurrentBinding                 (Parm)
// struct FInputAxis              NewBinding                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_ReBindAxisKey(const struct FInputAxis& CurrentBinding, const struct FInputAxis& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.ReBindAxisKey");

	UKeyBindingUtil_ReBindAxisKey_Params params;
	params.CurrentBinding = CurrentBinding;
	params.NewBinding = NewBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.ReBindActionKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAction            CurrentBinding                 (Parm)
// struct FInputAction            NewBinding                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_ReBindActionKey(const struct FInputAction& CurrentBinding, const struct FInputAction& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.ReBindActionKey");

	UKeyBindingUtil_ReBindActionKey_Params params;
	params.CurrentBinding = CurrentBinding;
	params.NewBinding = NewBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetInputAxisFromMouseButtonEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputAxis              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputAxis UKeyBindingUtil::STATIC_GetInputAxisFromMouseButtonEvent(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetInputAxisFromMouseButtonEvent");

	UKeyBindingUtil_GetInputAxisFromMouseButtonEvent_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetInputAxisFromMouseAxisEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputAxis              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputAxis UKeyBindingUtil::STATIC_GetInputAxisFromMouseAxisEvent(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetInputAxisFromMouseAxisEvent");

	UKeyBindingUtil_GetInputAxisFromMouseAxisEvent_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetInputAxisFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputAxis              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputAxis UKeyBindingUtil::STATIC_GetInputAxisFromKeyEvent(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetInputAxisFromKeyEvent");

	UKeyBindingUtil_GetInputAxisFromKeyEvent_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetInputActionFromMouseButtonEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputAction            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputAction UKeyBindingUtil::STATIC_GetInputActionFromMouseButtonEvent(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetInputActionFromMouseButtonEvent");

	UKeyBindingUtil_GetInputActionFromMouseButtonEvent_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetInputActionFromKeyEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInputAction            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputAction UKeyBindingUtil::STATIC_GetInputActionFromKeyEvent(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetInputActionFromKeyEvent");

	UKeyBindingUtil_GetInputActionFromKeyEvent_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.GetAllBindedInputAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputAxis>      InputAxis                      (Parm, OutParm, ZeroConstructor)

void UKeyBindingUtil::STATIC_GetAllBindedInputAxis(TArray<struct FInputAxis>* InputAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetAllBindedInputAxis");

	UKeyBindingUtil_GetAllBindedInputAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputAxis != nullptr)
		*InputAxis = params.InputAxis;
}


// Function AC2.KeyBindingUtil.GetAllBindedInputActions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputAction>    Actions                        (Parm, OutParm, ZeroConstructor)

void UKeyBindingUtil::STATIC_GetAllBindedInputActions(TArray<struct FInputAction>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.GetAllBindedInputActions");

	UKeyBindingUtil_GetAllBindedInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function AC2.KeyBindingUtil.AddAxisBinding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAxis              NewBinding                     (Parm)
// struct FInputAxis              CurrentBinding                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_AddAxisBinding(const struct FInputAxis& NewBinding, const struct FInputAxis& CurrentBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.AddAxisBinding");

	UKeyBindingUtil_AddAxisBinding_Params params;
	params.NewBinding = NewBinding;
	params.CurrentBinding = CurrentBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.KeyBindingUtil.AddActionBinding
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputAction            NewBinding                     (Parm)
// struct FInputAction            CurrentBinding                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBindingUtil::STATIC_AddActionBinding(const struct FInputAction& NewBinding, const struct FInputAction& CurrentBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.KeyBindingUtil.AddActionBinding");

	UKeyBindingUtil_AddActionBinding_Params params;
	params.NewBinding = NewBinding;
	params.CurrentBinding = CurrentBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ListSelectionPopup.BP_InitPopup
// (Event, Public, BlueprintEvent)

void UListSelectionPopup::BP_InitPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ListSelectionPopup.BP_InitPopup");

	UListSelectionPopup_BP_InitPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.LoadingSessionsPage.UpdateLoadingInfo
// (Final, Native, Public, BlueprintCallable)

void ULoadingSessionsPage::UpdateLoadingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.LoadingSessionsPage.UpdateLoadingInfo");

	ULoadingSessionsPage_UpdateLoadingInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnSpotterAudioComStarted
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FAudioCommsData         audioEventdata                 (ConstParm, Parm, OutParm, ReferenceParm)
// int                            audioEventCounter              (Parm, ZeroConstructor, IsPlainOldData)
// float                          payload                        (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnSpotterAudioComStarted(const struct FAudioCommsData& audioEventdata, int audioEventCounter, float payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnSpotterAudioComStarted");

	AMainCarHUD_OnSpotterAudioComStarted_Params params;
	params.audioEventdata = audioEventdata;
	params.audioEventCounter = audioEventCounter;
	params.payload = payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnSpotterAudioComEnded
// (Final, Native, Protected)
// Parameters:
// int                            audioEventCounter              (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnSpotterAudioComEnded(int audioEventCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnSpotterAudioComEnded");

	AMainCarHUD_OnSpotterAudioComEnded_Params params;
	params.audioEventCounter = audioEventCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnRatingCornerSectionCompleted
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FLapCarRating           currentLap                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCornerSectionCarRating sectionCompleted               (ConstParm, Parm, OutParm, ReferenceParm)

void AMainCarHUD::OnRatingCornerSectionCompleted(const struct FLapCarRating& currentLap, const struct FCornerSectionCarRating& sectionCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnRatingCornerSectionCompleted");

	AMainCarHUD_OnRatingCornerSectionCompleted_Params params;
	params.currentLap = currentLap;
	params.sectionCompleted = sectionCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnKsonRatingReport
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FRatingReport           ratingCurrent                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRatingReport           deltaRating                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           isSessionReference             (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnKsonRatingReport");

	AMainCarHUD_OnKsonRatingReport_Params params;
	params.ratingCurrent = ratingCurrent;
	params.deltaRating = deltaRating;
	params.isSessionReference = isSessionReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnKSONLeaderboardData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDriverCarClass               (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnKSONLeaderboardData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnKSONLeaderboardData");

	AMainCarHUD_OnKSONLeaderboardData_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.isDriverCarClass = isDriverCarClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnKSONConnectionStateChanged
// (Final, Native, Protected)
// Parameters:
// EOnlineServicesConnectionState ConnectionState                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnKSONConnectionStateChanged(EOnlineServicesConnectionState ConnectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnKSONConnectionStateChanged");

	AMainCarHUD_OnKSONConnectionStateChanged_Params params;
	params.ConnectionState = ConnectionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.OnKsonAchievementEarned
// (Final, Native, Protected)
// Parameters:
// int                            achievementId                  (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::OnKsonAchievementEarned(int achievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.OnKsonAchievementEarned");

	AMainCarHUD_OnKsonAchievementEarned_Params params;
	params.achievementId = achievementId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUD.CycleNextVirtualDesktop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void AMainCarHUD::CycleNextVirtualDesktop(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUD.CycleNextVirtualDesktop");

	AMainCarHUD_CycleNextVirtualDesktop_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUDWidgetHost.OnOptionsUpdated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FUserOptions            newOptions                     (ConstParm, Parm, OutParm, ReferenceParm)

void UMainCarHUDWidgetHost::OnOptionsUpdated(const struct FUserOptions& newOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUDWidgetHost.OnOptionsUpdated");

	UMainCarHUDWidgetHost_OnOptionsUpdated_Params params;
	params.newOptions = newOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainCarHUDWidgetHost.OnAddItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAcRaceWidgetBase*       Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            row                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            column                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            rowSpan                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            columnSpan                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           scaleToFitX                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHorizontalAlignment> horizontalAlignment            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalAlignment> verticalAlignment              (Parm, ZeroConstructor, IsPlainOldData)

void UMainCarHUDWidgetHost::OnAddItem(class UAcRaceWidgetBase* Widget, int row, int column, int rowSpan, int columnSpan, bool scaleToFitX, TEnumAsByte<EHorizontalAlignment> horizontalAlignment, TEnumAsByte<EVerticalAlignment> verticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainCarHUDWidgetHost.OnAddItem");

	UMainCarHUDWidgetHost_OnAddItem_Params params;
	params.Widget = Widget;
	params.row = row;
	params.column = column;
	params.rowSpan = rowSpan;
	params.columnSpan = columnSpan;
	params.scaleToFitX = scaleToFitX;
	params.horizontalAlignment = horizontalAlignment;
	params.verticalAlignment = verticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainPage.QuitPopup
// (Final, Native, Public, BlueprintCallable)

void UMainPage::QuitPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainPage.QuitPopup");

	UMainPage_QuitPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainPage.OnMPServerTimeout
// (Final, Native, Protected)

void UMainPage::OnMPServerTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainPage.OnMPServerTimeout");

	UMainPage_OnMPServerTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainPage.OnMPServerReceived
// (Final, Native, Protected)
// Parameters:
// TArray<struct FOnlineServicesMPServerInfo> sortedServerList               (Parm, ZeroConstructor)

void UMainPage::OnMPServerReceived(TArray<struct FOnlineServicesMPServerInfo> sortedServerList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainPage.OnMPServerReceived");

	UMainPage_OnMPServerReceived_Params params;
	params.sortedServerList = sortedServerList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainSelectorItem.ReleasedRight
// (Final, Native, Protected)

void UMainSelectorItem::ReleasedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainSelectorItem.ReleasedRight");

	UMainSelectorItem_ReleasedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainSelectorItem.ReleasedLeft
// (Final, Native, Protected)

void UMainSelectorItem::ReleasedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainSelectorItem.ReleasedLeft");

	UMainSelectorItem_ReleasedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainSelectorItem.PressedRight
// (Final, Native, Protected)

void UMainSelectorItem::PressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainSelectorItem.PressedRight");

	UMainSelectorItem_PressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MainSelectorItem.PressedLeft
// (Final, Native, Protected)

void UMainSelectorItem::PressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MainSelectorItem.PressedLeft");

	UMainSelectorItem_PressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.MultiplayerPanel.SetInstantJoinInfoVisible
// (Final, Native, Public)
// Parameters:
// bool                           desiredVisibility              (Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerPanel::SetInstantJoinInfoVisible(bool desiredVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.MultiplayerPanel.SetInstantJoinInfoVisible");

	UMultiplayerPanel_SetInstantJoinInfoVisible_Params params;
	params.desiredVisibility = desiredVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.OnlineServices.UpdateDriverAccount
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGamePlatformUserAccountData account                        (ConstParm, Parm, OutParm, ReferenceParm)

void UOnlineServices::UpdateDriverAccount(const struct FGamePlatformUserAccountData& account)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.UpdateDriverAccount");

	UOnlineServices_UpdateDriverAccount_Params params;
	params.account = account;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.OnlineServices.RequestMPServerList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOnlineServicesRequestMPServerListOptions requestOptions                 (ConstParm, Parm, OutParm, ReferenceParm)

void UOnlineServices::RequestMPServerList(const struct FOnlineServicesRequestMPServerListOptions& requestOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.RequestMPServerList");

	UOnlineServices_RequestMPServerList_Params params;
	params.requestOptions = requestOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.OnlineServices.RequestHotlapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TrackName                      (Parm, ZeroConstructor)
// int                            Take                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Skip                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            eventId                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          minWetness                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           includeDriver                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           useCurrentCarModel             (Parm, ZeroConstructor, IsPlainOldData)
// ECarModelType                  CarModel                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOnlineServices::RequestHotlapData(const struct FString& TrackName, int Take, int Skip, int eventId, float minWetness, bool includeDriver, bool useCurrentCarModel, ECarModelType CarModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.RequestHotlapData");

	UOnlineServices_RequestHotlapData_Params params;
	params.TrackName = TrackName;
	params.Take = Take;
	params.Skip = Skip;
	params.eventId = eventId;
	params.minWetness = minWetness;
	params.includeDriver = includeDriver;
	params.useCurrentCarModel = useCurrentCarModel;
	params.CarModel = CarModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.OnlineServices.RequestDriverSummary
// (Final, Native, Public, BlueprintCallable)

void UOnlineServices::RequestDriverSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.RequestDriverSummary");

	UOnlineServices_RequestDriverSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.OnlineServices.RequestDriverAccountData
// (Final, Native, Public, BlueprintCallable)

void UOnlineServices::RequestDriverAccountData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.RequestDriverAccountData");

	UOnlineServices_RequestDriverAccountData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.OnlineServices.GetSteamAchievement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FFakeSteamAchievement   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFakeSteamAchievement UOnlineServices::GetSteamAchievement(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.OnlineServices.GetSteamAchievement");

	UOnlineServices_GetSteamAchievement_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.UseAutoPitstopRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCarController::UseAutoPitstopRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.UseAutoPitstopRequest");

	APlayerCarController_UseAutoPitstopRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.SetTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::SetTimeMultiplier(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.SetTimeMultiplier");

	APlayerCarController_SetTimeMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.SetCurrentReplayTimeToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::SetCurrentReplayTimeToSeconds(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.SetCurrentReplayTimeToSeconds");

	APlayerCarController_SetCurrentReplayTimeToSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.SetCurrentReplayPausedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDoPause                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCarController::SetCurrentReplayPausedState(bool bDoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.SetCurrentReplayPausedState");

	APlayerCarController_SetCurrentReplayPausedState_Params params;
	params.bDoPause = bDoPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.ReturnToPit
// (Final, Native, Public, BlueprintCallable)

void APlayerCarController::ReturnToPit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.ReturnToPit");

	APlayerCarController_ReturnToPit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.GetStartReplayTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APlayerCarController::GetStartReplayTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.GetStartReplayTimeInSeconds");

	APlayerCarController_GetStartReplayTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.GetCurrentReplayTotalTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APlayerCarController::GetCurrentReplayTotalTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.GetCurrentReplayTotalTimeInSeconds");

	APlayerCarController_GetCurrentReplayTotalTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.GetCurrentReplayCurrentTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APlayerCarController::GetCurrentReplayCurrentTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.GetCurrentReplayCurrentTimeInSeconds");

	APlayerCarController_GetCurrentReplayCurrentTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.PlayerCarController.acc_TogglePitLimiter
// (Final, Exec, Native, Public)
// Parameters:
// uint16_t                       CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_TogglePitLimiter(uint16_t CarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_TogglePitLimiter");

	APlayerCarController_acc_TogglePitLimiter_Params params;
	params.CarIndex = CarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_ToggleIdealLine
// (Final, Exec, Native, Public)

void APlayerCarController::acc_ToggleIdealLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_ToggleIdealLine");

	APlayerCarController_acc_ToggleIdealLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_TestFastLane
// (Final, Exec, Native, Public)
// Parameters:
// int                            CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_TestFastLane(int CarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_TestFastLane");

	APlayerCarController_acc_TestFastLane_Params params;
	params.CarIndex = CarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_TeleportAllToPit
// (Final, Exec, Native, Public)

void APlayerCarController::acc_TeleportAllToPit()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_TeleportAllToPit");

	APlayerCarController_acc_TeleportAllToPit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_SwapDriverInstant
// (Final, Exec, Native, Public)
// Parameters:
// uint16_t                       CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       NewDriverIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_SwapDriverInstant(uint16_t CarIndex, uint16_t NewDriverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_SwapDriverInstant");

	APlayerCarController_acc_SwapDriverInstant_Params params;
	params.CarIndex = CarIndex;
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_SwapDriverFull
// (Final, Exec, Native, Public)
// Parameters:
// uint16_t                       CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       NewDriverIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_SwapDriverFull(uint16_t CarIndex, uint16_t NewDriverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_SwapDriverFull");

	APlayerCarController_acc_SwapDriverFull_Params params;
	params.CarIndex = CarIndex;
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_StartLineRecording
// (Final, Exec, Native, Public)

void APlayerCarController::acc_StartLineRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_StartLineRecording");

	APlayerCarController_acc_StartLineRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_setTC
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  Level                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_setTC(unsigned char Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_setTC");

	APlayerCarController_acc_setTC_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_setABS
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  Level                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_setABS(unsigned char Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_setABS");

	APlayerCarController_acc_setABS_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_RequestPitstop
// (Final, Exec, Native, Public)
// Parameters:
// int                            CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_RequestPitstop(int CarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_RequestPitstop");

	APlayerCarController_acc_RequestPitstop_Params params;
	params.CarIndex = CarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_RecordSpeedAvgs
// (Final, Exec, Native, Public)

void APlayerCarController::acc_RecordSpeedAvgs()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_RecordSpeedAvgs");

	APlayerCarController_acc_RecordSpeedAvgs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_RecordMicroSectorTimes
// (Final, Exec, Native, Public)

void APlayerCarController::acc_RecordMicroSectorTimes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_RecordMicroSectorTimes");

	APlayerCarController_acc_RecordMicroSectorTimes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_DetachControllers
// (Final, Exec, Native, Public)

void APlayerCarController::acc_DetachControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_DetachControllers");

	APlayerCarController_acc_DetachControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_DecreaseLapCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_DecreaseLapCount(int CarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_DecreaseLapCount");

	APlayerCarController_acc_DecreaseLapCount_Params params;
	params.CarIndex = CarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_CancelPitstop
// (Final, Exec, Native, Public)
// Parameters:
// int                            CarIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_CancelPitstop(int CarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_CancelPitstop");

	APlayerCarController_acc_CancelPitstop_Params params;
	params.CarIndex = CarIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_BackfireFlames
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_BackfireFlames(unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_BackfireFlames");

	APlayerCarController_acc_BackfireFlames_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_AddSplit
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  IsValid                        (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_AddSplit(unsigned char IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_AddSplit");

	APlayerCarController_acc_AddSplit_Params params;
	params.IsValid = IsValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_AddPenaltyToLap
// (Final, Exec, Native, Public)
// Parameters:
// int                            lapIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerCarController::acc_AddPenaltyToLap(int lapIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_AddPenaltyToLap");

	APlayerCarController_acc_AddPenaltyToLap_Params params;
	params.lapIndex = lapIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.PlayerCarController.acc_AddCutPenalty
// (Final, Exec, Native, Public)

void APlayerCarController::acc_AddCutPenalty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.PlayerCarController.acc_AddCutPenalty");

	APlayerCarController_acc_AddCutPenalty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceEndPage.UpdateConnectionState
// (Final, Native, Protected)
// Parameters:
// EOnlineServicesConnectionState State                          (Parm, ZeroConstructor, IsPlainOldData)

void URaceEndPage::UpdateConnectionState(EOnlineServicesConnectionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceEndPage.UpdateConnectionState");

	URaceEndPage_UpdateConnectionState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceEndPage.OnHotlapData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ignoreMe                       (Parm, ZeroConstructor, IsPlainOldData)

void URaceEndPage::OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceEndPage.OnHotlapData");

	URaceEndPage_OnHotlapData_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.ignoreMe = ignoreMe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceMainGui.OnSplitEvent
// (Event, Protected, BlueprintEvent)

void URaceMainGui::OnSplitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.OnSplitEvent");

	URaceMainGui_OnSplitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceMainGui.OnLapEvent
// (Event, Protected, BlueprintEvent)

void URaceMainGui::OnLapEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.OnLapEvent");

	URaceMainGui_OnLapEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceMainGui.OnKsonRatingReport
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FRatingReport           ratingCurrent                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRatingReport           deltaRating                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           isSessionReference             (Parm, ZeroConstructor, IsPlainOldData)

void URaceMainGui::OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.OnKsonRatingReport");

	URaceMainGui_OnKsonRatingReport_Params params;
	params.ratingCurrent = ratingCurrent;
	params.deltaRating = deltaRating;
	params.isSessionReference = isSessionReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceMainGui.IsEndlessSession
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URaceMainGui::IsEndlessSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.IsEndlessSession");

	URaceMainGui_IsEndlessSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetSpeedDelta
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URaceMainGui::GetSpeedDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetSpeedDelta");

	URaceMainGui_GetSpeedDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetSessionStartTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaceMainGui::GetSessionStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetSessionStartTime");

	URaceMainGui_GetSessionStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetSessionEndTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaceMainGui::GetSessionEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetSessionEndTime");

	URaceMainGui_GetSessionEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetPhysicsLateCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URaceMainGui::GetPhysicsLateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetPhysicsLateCount");

	URaceMainGui_GetPhysicsLateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetPhysicsCPUOccupancy
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URaceMainGui::GetPhysicsCPUOccupancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetPhysicsCPUOccupancy");

	URaceMainGui_GetPhysicsCPUOccupancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetPhysicsBlendCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URaceMainGui::GetPhysicsBlendCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetPhysicsBlendCount");

	URaceMainGui_GetPhysicsBlendCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetCurrentSessionType
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESessionType                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESessionType URaceMainGui::GetCurrentSessionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetCurrentSessionType");

	URaceMainGui_GetCurrentSessionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetCurrentSessionTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float URaceMainGui::GetCurrentSessionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetCurrentSessionTime");

	URaceMainGui_GetCurrentSessionTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetCurrentSessionPhase
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ERaceSessionPhase              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERaceSessionPhase URaceMainGui::GetCurrentSessionPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetCurrentSessionPhase");

	URaceMainGui_GetCurrentSessionPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetCarCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char URaceMainGui::GetCarCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetCarCount");

	URaceMainGui_GetCarCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceMainGui.GetCarAtPosition
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// unsigned char                  Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URaceMainGui::GetCarAtPosition(unsigned char Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceMainGui.GetCarAtPosition");

	URaceMainGui_GetCarAtPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceNotificationManagerWidget.StartOutroForCurrentAnimation
// (Final, Native, Protected)

void URaceNotificationManagerWidget::StartOutroForCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceNotificationManagerWidget.StartOutroForCurrentAnimation");

	URaceNotificationManagerWidget_StartOutroForCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceNotificationManagerWidget.StartIntroForCurrentAnimation
// (Final, Native, Protected)

void URaceNotificationManagerWidget::StartIntroForCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceNotificationManagerWidget.StartIntroForCurrentAnimation");

	URaceNotificationManagerWidget_StartIntroForCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceNotificationManagerWidget.EndCurrentAnimation
// (Final, Native, Protected)

void URaceNotificationManagerWidget::EndCurrentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceNotificationManagerWidget.EndCurrentAnimation");

	URaceNotificationManagerWidget_EndCurrentAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceTransitionPage.StartFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          timeMult                       (Parm, ZeroConstructor, IsPlainOldData)

void URaceTransitionPage::StartFade(float timeMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceTransitionPage.StartFade");

	URaceTransitionPage_StartFade_Params params;
	params.timeMult = timeMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RaceTransitionPage.GetCurrentGameVersion
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString URaceTransitionPage::GetCurrentGameVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceTransitionPage.GetCurrentGameVersion");

	URaceTransitionPage_GetCurrentGameVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.RaceTransitionPage.EndFade
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          timeMult                       (Parm, ZeroConstructor, IsPlainOldData)

void URaceTransitionPage::EndFade(float timeMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RaceTransitionPage.EndFade");

	URaceTransitionPage_EndFade_Params params;
	params.timeMult = timeMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingItem.OnExpandAnimationEnded
// (Final, Native, Protected)

void URatingItem::OnExpandAnimationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingItem.OnExpandAnimationEnded");

	URatingItem_OnExpandAnimationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingItem.OnCollapseAnimationEnded
// (Final, Native, Protected)

void URatingItem::OnCollapseAnimationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingItem.OnCollapseAnimationEnded");

	URatingItem_OnCollapseAnimationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingProgressionWidget.OnShowRatingWidgetAnimated
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void URatingProgressionWidget::OnShowRatingWidgetAnimated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingProgressionWidget.OnShowRatingWidgetAnimated");

	URatingProgressionWidget_OnShowRatingWidgetAnimated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingProgressionWidget.OnKsonRatingReport
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FRatingReport           ratingCurrent                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRatingReport           deltaRating                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           isSessionReference             (Parm, ZeroConstructor, IsPlainOldData)

void URatingProgressionWidget::OnKsonRatingReport(const struct FRatingReport& ratingCurrent, const struct FRatingReport& deltaRating, bool isSessionReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingProgressionWidget.OnKsonRatingReport");

	URatingProgressionWidget_OnKsonRatingReport_Params params;
	params.ratingCurrent = ratingCurrent;
	params.deltaRating = deltaRating;
	params.isSessionReference = isSessionReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingTCTrackItem.SetTrackData
// (Final, Native, Public)
// Parameters:
// struct FString                 TrackName                      (Parm, ZeroConstructor)
// class UTexture2D*              trackImage                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FlagImage                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 starText                       (Parm, ZeroConstructor)

void URatingTCTrackItem::SetTrackData(const struct FString& TrackName, class UTexture2D* trackImage, class UTexture2D* FlagImage, const struct FString& starText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingTCTrackItem.SetTrackData");

	URatingTCTrackItem_SetTrackData_Params params;
	params.TrackName = TrackName;
	params.trackImage = trackImage;
	params.FlagImage = FlagImage;
	params.starText = starText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingWidget.UpdateUIState
// (Final, Native, Protected)
// Parameters:
// int                            recursionCounter               (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget::UpdateUIState(int recursionCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingWidget.UpdateUIState");

	URatingWidget_UpdateUIState_Params params;
	params.recursionCounter = recursionCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingWidget.SetNewTargetUIState
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<ERatingWidgetUIState> targetUIState                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            recursionCounter               (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget::SetNewTargetUIState(TEnumAsByte<ERatingWidgetUIState> targetUIState, int recursionCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingWidget.SetNewTargetUIState");

	URatingWidget_SetNewTargetUIState_Params params;
	params.targetUIState = targetUIState;
	params.recursionCounter = recursionCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingWidget.OnRatingItemExpandedAnimationEnded
// (Final, Native, Protected)
// Parameters:
// int                            ratingIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isExpanded                     (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget::OnRatingItemExpandedAnimationEnded(int ratingIndex, bool isExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingWidget.OnRatingItemExpandedAnimationEnded");

	URatingWidget_OnRatingItemExpandedAnimationEnded_Params params;
	params.ratingIndex = ratingIndex;
	params.isExpanded = isExpanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RatingWidget.OnRatingItemCollapsedAnimationEnded
// (Final, Native, Protected)
// Parameters:
// int                            ratingIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isCollapsed                    (Parm, ZeroConstructor, IsPlainOldData)

void URatingWidget::OnRatingItemCollapsedAnimationEnded(int ratingIndex, bool isCollapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RatingWidget.OnRatingItemCollapsedAnimationEnded");

	URatingWidget_OnRatingItemCollapsedAnimationEnded_Params params;
	params.ratingIndex = ratingIndex;
	params.isCollapsed = isCollapsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.RealismPage.OpenPresetDialogBox
// (Final, Native, Protected)

void URealismPage::OpenPresetDialogBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.RealismPage.OpenPresetDialogBox");

	URealismPage_OpenPresetDialogBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayController.SetTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)

void AReplayController::SetTimeMultiplier(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.SetTimeMultiplier");

	AReplayController_SetTimeMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayController.SetCurrentReplayTimeToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void AReplayController::SetCurrentReplayTimeToSeconds(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.SetCurrentReplayTimeToSeconds");

	AReplayController_SetCurrentReplayTimeToSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayController.SetCurrentReplayPausedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDoPause                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AReplayController::SetCurrentReplayPausedState(bool bDoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.SetCurrentReplayPausedState");

	AReplayController_SetCurrentReplayPausedState_Params params;
	params.bDoPause = bDoPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ReplayController.OnPossess
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AReplayController::OnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.OnPossess");

	AReplayController_OnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayController.GetStartReplayTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AReplayController::GetStartReplayTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.GetStartReplayTimeInSeconds");

	AReplayController_GetStartReplayTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ReplayController.GetCurrentReplayTotalTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AReplayController::GetCurrentReplayTotalTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.GetCurrentReplayTotalTimeInSeconds");

	AReplayController_GetCurrentReplayTotalTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ReplayController.GetCurrentReplayCurrentTimeInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AReplayController::GetCurrentReplayCurrentTimeInSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayController.GetCurrentReplayCurrentTimeInSeconds");

	AReplayController_GetCurrentReplayCurrentTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ReplayHUD.SlowMotionClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::SlowMotionClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SlowMotionClick");

	UReplayHUD_SlowMotionClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.SliderOnValueChange
// (Final, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayHUD::SliderOnValueChange(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SliderOnValueChange");

	UReplayHUD_SliderOnValueChange_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.SliderMouseEnd
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::SliderMouseEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SliderMouseEnd");

	UReplayHUD_SliderMouseEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.SliderMouseCaptureEnd
// (Final, Native, Private)

void UReplayHUD::SliderMouseCaptureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SliderMouseCaptureEnd");

	UReplayHUD_SliderMouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.SliderMouseCaptureBegin
// (Final, Native, Private)

void UReplayHUD::SliderMouseCaptureBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SliderMouseCaptureBegin");

	UReplayHUD_SliderMouseCaptureBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.SliderMouseBegin
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::SliderMouseBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.SliderMouseBegin");

	UReplayHUD_SliderMouseBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.Remove_PB
// (Event, Public, BlueprintEvent)

void UReplayHUD::Remove_PB()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.Remove_PB");

	UReplayHUD_Remove_PB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.QuitClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::QuitClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.QuitClick");

	UReplayHUD_QuitClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.PrevCarClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::PrevCarClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.PrevCarClick");

	UReplayHUD_PrevCarClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.PrevCamClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::PrevCamClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.PrevCamClick");

	UReplayHUD_PrevCamClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.PlayPauseClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::PlayPauseClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.PlayPauseClick");

	UReplayHUD_PlayPauseClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.PhotoClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::PhotoClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.PhotoClick");

	UReplayHUD_PhotoClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.NextCarClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::NextCarClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.NextCarClick");

	UReplayHUD_NextCarClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.NextCamClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::NextCamClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.NextCamClick");

	UReplayHUD_NextCamClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.IncreaseSpeedClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::IncreaseSpeedClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.IncreaseSpeedClick");

	UReplayHUD_IncreaseSpeedClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ReplayHUD.GetTimerSliderValue
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UReplayHUD::GetTimerSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.GetTimerSliderValue");

	UReplayHUD_GetTimerSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ReplayHUD.DecreaseSpeedClick
// (Final, Native, Public, BlueprintCallable)

void UReplayHUD::DecreaseSpeedClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ReplayHUD.DecreaseSpeedClick");

	UReplayHUD_DecreaseSpeedClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SetupManager.GetDamperLutList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           List                           (Parm, OutParm, ZeroConstructor)
// int                            Axle                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USetupManager::GetDamperLutList(int Axle, TArray<struct FName>* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SetupManager.GetDamperLutList");

	USetupManager_GetDamperLutList_Params params;
	params.Axle = Axle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;

	return params.ReturnValue;
}


// Function AC2.SetupManager.GetDamperLut
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   RowName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FDamperLut              Destination                    (Parm, OutParm, ReferenceParm)
// int                            Axle                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USetupManager::GetDamperLut(const struct FName& RowName, int Axle, struct FDamperLut* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SetupManager.GetDamperLut");

	USetupManager_GetDamperLut_Params params;
	params.RowName = RowName;
	params.Axle = Axle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;

	return params.ReturnValue;
}


// Function AC2.SetupPage.OpenLoadSaveDialogBox
// (Final, Native, Protected)

void USetupPage::OpenLoadSaveDialogBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SetupPage.OpenLoadSaveDialogBox");

	USetupPage_OpenLoadSaveDialogBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SimpleAreaChart.SetBackground
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USimpleAreaChart::SetBackground(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SimpleAreaChart.SetBackground");

	USimpleAreaChart_SetBackground_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SimpleAreaChart.OnCppPaint
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm)

void USimpleAreaChart::OnCppPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SimpleAreaChart.OnCppPaint");

	USimpleAreaChart_OnCppPaint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function AC2.SimpleColumnChart.ClearColumns
// (Event, Public, BlueprintEvent)

void USimpleColumnChart::ClearColumns()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SimpleColumnChart.ClearColumns");

	USimpleColumnChart_ClearColumns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SimpleColumnChart.AddColumn
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USimpleColumnChart::AddColumn(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SimpleColumnChart.AddColumn");

	USimpleColumnChart_AddColumn_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SimpleColumnChartColumn.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USimpleColumnChartColumn::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SimpleColumnChartColumn.SetValue");

	USimpleColumnChartColumn_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SinglePlayerColumnPage.UpdateLapInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           isDriverCarClass               (Parm, ZeroConstructor, IsPlainOldData)

void USinglePlayerColumnPage::UpdateLapInfo(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool isDriverCarClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SinglePlayerColumnPage.UpdateLapInfo");

	USinglePlayerColumnPage_UpdateLapInfo_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.isDriverCarClass = isDriverCarClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.Skin.SetUserOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 folder                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USkin::SetUserOverlay(const struct FString& folder)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.SetUserOverlay");

	USkin_SetUserOverlay_Params params;
	params.folder = folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.Skin.SetTertiaryColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USkin::SetTertiaryColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.SetTertiaryColor");

	USkin_SetTertiaryColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.Skin.SetSecondaryColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USkin::SetSecondaryColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.SetSecondaryColor");

	USkin_SetSecondaryColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.Skin.SetPrimaryColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USkin::SetPrimaryColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.SetPrimaryColor");

	USkin_SetPrimaryColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.Skin.LoadImageAsTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* USkin::STATIC_LoadImageAsTexture(const struct FString& FullFilePath, bool* IsValid, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.LoadImageAsTexture");

	USkin_LoadImageAsTexture_Params params;
	params.FullFilePath = FullFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function AC2.Skin.ListSkinsForCar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Car                            (Parm, ZeroConstructor)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> USkin::STATIC_ListSkinsForCar(const struct FString& Car)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.ListSkinsForCar");

	USkin_ListSkinsForCar_Params params;
	params.Car = Car;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.Skin.ListCars
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> USkin::STATIC_ListCars()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.ListCars");

	USkin_ListCars_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.Skin.ApplySkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Skin                           (Parm, ZeroConstructor)

void USkin::ApplySkin(const struct FString& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.Skin.ApplySkin");

	USkin_ApplySkin_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SpecialEventSinglePanel.OnExpandAnimationEnded
// (Final, Native, Protected)

void USpecialEventSinglePanel::OnExpandAnimationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SpecialEventSinglePanel.OnExpandAnimationEnded");

	USpecialEventSinglePanel_OnExpandAnimationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.SpecialEventsPage.OnHotlapData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FOnlineServicesHotlapUpdate rankUpdate                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FOnlineServicesHotlapEntry> entries                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ignoreMe                       (Parm, ZeroConstructor, IsPlainOldData)

void USpecialEventsPage::OnHotlapData(const struct FOnlineServicesHotlapUpdate& rankUpdate, TArray<struct FOnlineServicesHotlapEntry> entries, bool ignoreMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.SpecialEventsPage.OnHotlapData");

	USpecialEventsPage_OnHotlapData_Params params;
	params.rankUpdate = rankUpdate;
	params.entries = entries;
	params.ignoreMe = ignoreMe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.TrackAvatar.UpdateGarageLights
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsLightOn                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrackAvatar::UpdateGarageLights(bool bIsLightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackAvatar.UpdateGarageLights");

	ATrackAvatar_UpdateGarageLights_Params params;
	params.bIsLightOn = bIsLightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.TrackAvatar.OnPitLaneEntry
// (Final, Native, Protected)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrackAvatar::OnPitLaneEntry(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackAvatar.OnPitLaneEntry");

	ATrackAvatar_OnPitLaneEntry_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.TrackAvatar.GetMapCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASceneCapture2D*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASceneCapture2D* ATrackAvatar::GetMapCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackAvatar.GetMapCapture");

	ATrackAvatar_GetMapCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.TrackAvatar.GetFastLaneDistanceToPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 PointLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrackAvatar::GetFastLaneDistanceToPoint(const struct FVector& PointLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackAvatar.GetFastLaneDistanceToPoint");

	ATrackAvatar_GetFastLaneDistanceToPoint_Params params;
	params.PointLocation = PointLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.TrackAvatar.GetFastLane
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAcTrackSpline*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAcTrackSpline* ATrackAvatar::GetFastLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackAvatar.GetFastLane");

	ATrackAvatar_GetFastLane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.TrackSelectionPage.BP_PlayVideo
// (Event, Public, BlueprintEvent)

void UTrackSelectionPage::BP_PlayVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.TrackSelectionPage.BP_PlayVideo");

	UTrackSelectionPage_BP_PlayVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.VideoOptionsPage.ResolutionConfirm
// (Final, Native, Public)
// Parameters:
// class UAcPageBase*             popup                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVideoOptionsPage::ResolutionConfirm(class UAcPageBase* popup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.VideoOptionsPage.ResolutionConfirm");

	UVideoOptionsPage_ResolutionConfirm_Params params;
	params.popup = popup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.VideoOptionsPage.ResolutionCancel
// (Final, Native, Public)
// Parameters:
// class UAcPageBase*             popup                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVideoOptionsPage::ResolutionCancel(class UAcPageBase* popup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.VideoOptionsPage.ResolutionCancel");

	UVideoOptionsPage_ResolutionCancel_Params params;
	params.popup = popup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.UpdateFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::UpdateFromFile(class UWorld* World, class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.UpdateFromFile");

	UViewOptionsLibrary_UpdateFromFile_Params params;
	params.World = World;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.ToggleTemporalAA
// (Final, Native, Public, BlueprintCallable)

void UViewOptionsLibrary::ToggleTemporalAA()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.ToggleTemporalAA");

	UViewOptionsLibrary_ToggleTemporalAA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.ToggleMotionBlur
// (Final, Native, Public, BlueprintCallable)

void UViewOptionsLibrary::ToggleMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.ToggleMotionBlur");

	UViewOptionsLibrary_ToggleMotionBlur_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.TestSetScreenResolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fullscreen                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::TestSetScreenResolution(int Width, int Height, bool Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestSetScreenResolution");

	UViewOptionsLibrary_TestSetScreenResolution_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.TestSaveVideoModeAndQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::TestSaveVideoModeAndQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestSaveVideoModeAndQuality");

	UViewOptionsLibrary_TestSaveVideoModeAndQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.TestRevertVideoSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::TestRevertVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestRevertVideoSettings");

	UViewOptionsLibrary_TestRevertVideoSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.TestRequestResolutionChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWindowMode>       Window                         (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::TestRequestResolutionChange(int X, int Y, TEnumAsByte<EWindowMode> Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestRequestResolutionChange");

	UViewOptionsLibrary_TestRequestResolutionChange_Params params;
	params.X = X;
	params.Y = Y;
	params.Window = Window;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.TestConfirmResolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isConfirmed                    (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::TestConfirmResolution(bool isConfirmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestConfirmResolution");

	UViewOptionsLibrary_TestConfirmResolution_Params params;
	params.isConfirmed = isConfirmed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.TestChangeScreenResolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fullscreen                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::TestChangeScreenResolution(int Width, int Height, bool Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TestChangeScreenResolution");

	UViewOptionsLibrary_TestChangeScreenResolution_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.TempApplyAndSave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::TempApplyAndSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.TempApplyAndSave");

	UViewOptionsLibrary_TempApplyAndSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.SetTemporalAAEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::SetTemporalAAEnabled(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SetTemporalAAEnabled");

	UViewOptionsLibrary_SetTemporalAAEnabled_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.SetSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGraphicsOptions               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::SetSetting(EGraphicsOptions Type, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SetSetting");

	UViewOptionsLibrary_SetSetting_Params params;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.SetScreenResolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fullscreen                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::SetScreenResolution(int Width, int Height, bool Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SetScreenResolution");

	UViewOptionsLibrary_SetScreenResolution_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.SetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::SetMotionBlurEnabled(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SetMotionBlurEnabled");

	UViewOptionsLibrary_SetMotionBlurEnabled_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.SetHDREnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::SetHDREnabled(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SetHDREnabled");

	UViewOptionsLibrary_SetHDREnabled_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.SaveVideoSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::SaveVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SaveVideoSettings");

	UViewOptionsLibrary_SaveVideoSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.SaveToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  maxCars                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  mirrorQuality                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMBlurEnabled                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AATemporal                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ColorSaturation                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isHDR                          (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsLibrary::SaveToFile(unsigned char maxCars, unsigned char mirrorQuality, bool isMBlurEnabled, bool AATemporal, float ColorSaturation, bool isHDR)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SaveToFile");

	UViewOptionsLibrary_SaveToFile_Params params;
	params.maxCars = maxCars;
	params.mirrorQuality = mirrorQuality;
	params.isMBlurEnabled = isMBlurEnabled;
	params.AATemporal = AATemporal;
	params.ColorSaturation = ColorSaturation;
	params.isHDR = isHDR;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.SaveSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.SaveSettings");

	UViewOptionsLibrary_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.LaunchConsoleCMD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Cmd                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UViewOptionsLibrary::LaunchConsoleCMD(const struct FString& Cmd, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.LaunchConsoleCMD");

	UViewOptionsLibrary_LaunchConsoleCMD_Params params;
	params.Cmd = Cmd;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsLibrary.GetValueFromSave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ValueNames                     (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Step                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FViewGUIResult          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FViewGUIResult UViewOptionsLibrary::GetValueFromSave(TArray<struct FString> ValueNames, float Value, float MaxValue, float Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetValueFromSave");

	UViewOptionsLibrary_GetValueFromSave_Params params;
	params.ValueNames = ValueNames;
	params.Value = Value;
	params.MaxValue = MaxValue;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ValueNames                     (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Step                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FViewGUIResult          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FViewGUIResult UViewOptionsLibrary::GetValue(TArray<struct FString> ValueNames, float Value, float MaxValue, float Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetValue");

	UViewOptionsLibrary_GetValue_Params params;
	params.ValueNames = ValueNames;
	params.Value = Value;
	params.MaxValue = MaxValue;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetTemporalAAEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetTemporalAAEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetTemporalAAEnabled");

	UViewOptionsLibrary_GetTemporalAAEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetSetting
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EGraphicsOptions               Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetSetting(EGraphicsOptions Type, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetSetting");

	UViewOptionsLibrary_GetSetting_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetScreenResolution
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Fullscreen                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetScreenResolution(int* Width, int* Height, bool* Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetScreenResolution");

	UViewOptionsLibrary_GetScreenResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Fullscreen != nullptr)
		*Fullscreen = params.Fullscreen;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetProjectVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UViewOptionsLibrary::GetProjectVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetProjectVersion");

	UViewOptionsLibrary_GetProjectVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetMotionBlurEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetMotionBlurEnabled");

	UViewOptionsLibrary_GetMotionBlurEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetMirrorQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UViewOptionsLibrary::GetMirrorQualityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetMirrorQualityLevel");

	UViewOptionsLibrary_GetMirrorQualityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetMaxCarsVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UViewOptionsLibrary::GetMaxCarsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetMaxCarsVisible");

	UViewOptionsLibrary_GetMaxCarsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetHDREnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetHDREnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetHDREnabled");

	UViewOptionsLibrary_GetHDREnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetConsoleCMDValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Cmd                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, OutParm, ZeroConstructor)

void UViewOptionsLibrary::GetConsoleCMDValue(const struct FString& Cmd, struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetConsoleCMDValue");

	UViewOptionsLibrary_GetConsoleCMDValue_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function AC2.ViewOptionsLibrary.GetColorSaturation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UViewOptionsLibrary::GetColorSaturation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetColorSaturation");

	UViewOptionsLibrary_GetColorSaturation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.GetAllScreenResolutions
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         Resolutions                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::GetAllScreenResolutions(TArray<struct FString>* Resolutions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.GetAllScreenResolutions");

	UViewOptionsLibrary_GetAllScreenResolutions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resolutions != nullptr)
		*Resolutions = params.Resolutions;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.ChangeScreenResolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Fullscreen                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsLibrary::ChangeScreenResolution(int Width, int Height, bool Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.ChangeScreenResolution");

	UViewOptionsLibrary_ChangeScreenResolution_Params params;
	params.Width = Width;
	params.Height = Height;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsLibrary.ApplyVSync
// (Final, Native, Public, BlueprintCallable)

void UViewOptionsLibrary::ApplyVSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsLibrary.ApplyVSync");

	UViewOptionsLibrary_ApplyVSync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsSaves.SaveGraphicOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  MirrorLevel                    (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  maxCars                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isBlur                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isTemporal                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          colourSaturation               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHDREnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UViewOptionsSaves::SaveGraphicOptions(unsigned char MirrorLevel, unsigned char maxCars, bool isBlur, bool isTemporal, float colourSaturation, bool IsHDREnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.SaveGraphicOptions");

	UViewOptionsSaves_SaveGraphicOptions_Params params;
	params.MirrorLevel = MirrorLevel;
	params.maxCars = maxCars;
	params.isBlur = isBlur;
	params.isTemporal = isTemporal;
	params.colourSaturation = colourSaturation;
	params.IsHDREnabled = IsHDREnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.ViewOptionsSaves.GetTemporalEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsSaves::GetTemporalEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.GetTemporalEnabled");

	UViewOptionsSaves_GetTemporalEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsSaves.GetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsSaves::GetMotionBlurEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.GetMotionBlurEnabled");

	UViewOptionsSaves_GetMotionBlurEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsSaves.GetMirrorQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UViewOptionsSaves::GetMirrorQualityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.GetMirrorQualityLevel");

	UViewOptionsSaves_GetMirrorQualityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsSaves.GetMaxCarsVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UViewOptionsSaves::GetMaxCarsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.GetMaxCarsVisible");

	UViewOptionsSaves_GetMaxCarsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.ViewOptionsSaves.GetHDR
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UViewOptionsSaves::GetHDR()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.ViewOptionsSaves.GetHDR");

	UViewOptionsSaves_GetHDR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AC2.WearEditorPage.AnimDriver
// (Event, Protected, BlueprintEvent)

void UWearEditorPage::AnimDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.WearEditorPage.AnimDriver");

	UWearEditorPage_AnimDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AC2.YesNoPopup.BP_InitPopup
// (Event, Public, BlueprintEvent)

void UYesNoPopup::BP_InitPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC2.YesNoPopup.BP_InitPopup");

	UYesNoPopup_BP_InitPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
