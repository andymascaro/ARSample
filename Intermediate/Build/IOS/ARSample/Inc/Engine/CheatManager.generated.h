// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class APawn;
#ifdef ENGINE_CheatManager_generated_h
#error "CheatManager.generated.h already included, missing '#pragma once' in CheatManager.h"
#endif
#define ENGINE_CheatManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheatScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScriptName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheatScript(Z_Param_ScriptName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertMouse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseSensitivityToDefault(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWorldOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LogLoc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FlushLog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugIt(Z_Param_ScreenShotDescription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpVoiceMutingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpChatState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpChatState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpOnlineSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavDrawDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNavDrawDistance(Z_Param_DrawDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildNavigation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RebuildNavigation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TestCollisionDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepClear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleAILogging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StreamLevelOut(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnlyLoadLevel(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StreamLevelIn(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewClass(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewActor(Z_Param_ActorName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewPlayer(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayersOnly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Summon(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyPawns(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyAllPawnsExceptTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyAll(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DamageTarget(Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Slomo(Z_Param_NewTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->God(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Ghost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Walk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeSize(Z_Param_F); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Teleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FreezeFrame(Z_Param_Delay); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheatScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScriptName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheatScript(Z_Param_ScriptName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvertMouse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMouseSensitivityToDefault(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWorldOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LogLoc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FlushLog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugIt(Z_Param_ScreenShotDescription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpVoiceMutingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpChatState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpChatState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DumpOnlineSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavDrawDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DrawDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNavDrawDistance(Z_Param_DrawDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildNavigation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RebuildNavigation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TestCollisionDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepClear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DebugCapsuleSweep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		this->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleAILogging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StreamLevelOut(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnlyLoadLevel(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StreamLevelIn(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewClass(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewActor(Z_Param_ActorName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewPlayer(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ViewSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayersOnly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Summon(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyPawns(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyAllPawnsExceptTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyAll(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DestroyTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DamageTarget(Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Slomo(Z_Param_NewTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->God(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Ghost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Walk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeSize(Z_Param_F); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Teleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FreezeFrame(Z_Param_Delay); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCheatManager(); \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCheatManager(); \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_68_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheatManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
