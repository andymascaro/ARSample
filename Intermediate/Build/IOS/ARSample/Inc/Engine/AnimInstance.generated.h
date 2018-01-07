// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
struct FMarkerSyncAnimPosition;
struct FVector;
struct FRotator;
enum class EMontagePlayReturnType : uint8;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class AActor;
struct FPoseSnapshot;
class APawn;
#ifdef ENGINE_AnimInstance_generated_h
#error "AnimInstance.generated.h already included, missing '#pragma once' in AnimInstance.h"
#endif
#define ENGINE_AnimInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_166_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSlotEvaluationPose(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_106_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FA2CSPose(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ComponentSpaceFlags() { return STRUCT_OFFSET(FA2CSPose, ComponentSpaceFlags); } \
	typedef FA2Pose Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_94_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FA2Pose(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_88_DELEGATE \
struct _Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms \
{ \
	FName NotifyName; \
	FBranchingPointNotifyPayload BranchingPointPayload; \
}; \
static inline void FPlayMontageAnimNotifyDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAnimNotifyDelegate, FName NotifyName, FBranchingPointNotifyPayload const& BranchingPointPayload) \
{ \
	_Script_Engine_eventPlayMontageAnimNotifyDelegate_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	Parms.BranchingPointPayload=BranchingPointPayload; \
	PlayMontageAnimNotifyDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_76_DELEGATE \
struct _Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageBlendingOutStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBlendingOutStartedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageBlendingOutStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageBlendingOutStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_68_DELEGATE \
static inline void FOnAllMontageInstancesEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAllMontageInstancesEndedMCDelegate) \
{ \
	OnAllMontageInstancesEndedMCDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_65_DELEGATE \
struct _Script_Engine_eventOnMontageEndedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
	bool bInterrupted; \
}; \
static inline void FOnMontageEndedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageEndedMCDelegate, UAnimMontage* Montage, bool bInterrupted) \
{ \
	_Script_Engine_eventOnMontageEndedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	Parms.bInterrupted=bInterrupted ? true : false; \
	OnMontageEndedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_57_DELEGATE \
struct _Script_Engine_eventOnMontageStartedMCDelegate_Parms \
{ \
	UAnimMontage* Montage; \
}; \
static inline void FOnMontageStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontageStartedMCDelegate, UAnimMontage* Montage) \
{ \
	_Script_Engine_eventOnMontageStartedMCDelegate_Parms Parms; \
	Parms.Montage=Montage; \
	OnMontageStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSyncGroupPosition) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMarkerSyncAnimPosition*)Z_Param__Result=this->GetSyncGroupPosition(Z_Param_InSyncGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PreviousMarker); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextMarker); \
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToClosestMarker) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutMarkerTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMorphTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStateName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetCurrentStateName(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurveValue(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceStateWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceMachineWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceMachineWeight(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActiveMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->GetCurrentActiveMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyMontagePlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyMontagePlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetPlayRate(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetBlendTime) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetBlendTime(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetIsStopped) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_GetIsStopped(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetPosition(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetCurrentSection) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->Montage_GetCurrentSection(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsPlaying) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_IsPlaying(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_IsActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetNextSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameToChange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextSection); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Resume) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Resume(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Pause) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Pause(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Stop) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Play) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSlotAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PlaySlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=this->GetOwningComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetOwningActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapshotPose) \
	{ \
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SnapshotPose(Z_Param_Out_Snapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePoseSnapshot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SnapshotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SavePoseSnapshot(Z_Param_SnapshotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->TryGetPawnOwner(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSyncGroupPosition) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMarkerSyncAnimPosition*)Z_Param__Result=this->GetSyncGroupPosition(Z_Param_InSyncGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSyncGroupBetweenMarkers) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSyncGroupName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PreviousMarker); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextMarker); \
		P_GET_UBOOL(Z_Param_bRespectMarkerOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSyncGroupBetweenMarkers(Z_Param_InSyncGroupName,Z_Param_PreviousMarker,Z_Param_NextMarker,Z_Param_bRespectMarkerOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMarkerBeenHitThisFrame) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasMarkerBeenHitThisFrame(Z_Param_SyncGroup,Z_Param_MarkerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToClosestMarker) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SyncGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MarkerName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutMarkerTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTimeToClosestMarker(Z_Param_SyncGroup,Z_Param_MarkerName,Z_Param_Out_OutMarkerTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bUnlockMovement); \
		P_GET_UBOOL(Z_Param_UnlockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnlockAIResources(Z_Param_bUnlockMovement,Z_Param_UnlockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockAIResources) \
	{ \
		P_GET_UBOOL(Z_Param_bLockMovement); \
		P_GET_UBOOL(Z_Param_LockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LockAIResources(Z_Param_bLockMovement,Z_Param_LockAILogic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDirection) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMorphTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearMorphTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentStateName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetCurrentStateName(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurveValue(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTime(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimLength(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemainingFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeRemainingFraction(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelevantAnimTimeRemaining) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRelevantAnimTimeRemaining(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsedFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionTimeElapsedFraction(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionTimeElapsed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionTimeElapsed(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransitionCrossfadeDuration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransitionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceTransitionCrossfadeDuration(Z_Param_MachineIndex,Z_Param_TransitionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCurrentStateElapsedTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceCurrentStateElapsedTime(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceStateWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StateIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceStateWeight(Z_Param_MachineIndex,Z_Param_StateIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceMachineWeight) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MachineIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceMachineWeight(Z_Param_MachineIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEndFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFromEndFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFromEnd) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFromEnd(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTimeFraction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTimeFraction(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerTime) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerTime(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceAssetPlayerLength) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AssetPlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetInstanceAssetPlayerLength(Z_Param_AssetPlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRootMotionMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRootMotionMode(ERootMotionMode::Type(Z_Param_Value)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentActiveMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->GetCurrentActiveMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnyMontagePlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnyMontagePlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetPlayRate(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetBlendTime) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetBlendTime(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetIsStopped) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_GetIsStopped(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetPosition(Z_Param_Montage,Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetPosition) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_GetPosition(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_GetCurrentSection) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->Montage_GetCurrentSection(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsPlaying) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_IsPlaying(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_IsActive) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Montage_IsActive(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetPlayRate) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetPlayRate(Z_Param_Montage,Z_Param_NewPlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_SetNextSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionNameToChange); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NextSection); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_SetNextSection(Z_Param_SectionNameToChange,Z_Param_NextSection,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSectionsEnd) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_JumpToSectionsEnd(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_JumpToSection) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SectionName); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_JumpToSection(Z_Param_SectionName,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Resume) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Resume(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Pause) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Pause(Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Stop) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Montage_Stop(Z_Param_InBlendOutTime,Z_Param_Montage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMontage_Play) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_ENUM(EMontagePlayReturnType,Z_Param_ReturnValueType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->Montage_Play(Z_Param_MontageToPlay,Z_Param_InPlayRate,EMontagePlayReturnType(Z_Param_ReturnValueType),Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingSlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingSlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSlotAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendOutTime); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSlotAnimation(Z_Param_InBlendOutTime,Z_Param_SlotNodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimationAsDynamicMontage) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTriggerTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTimeToStartMontageAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->PlaySlotAnimationAsDynamicMontage(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_BlendOutTriggerTime,Z_Param_InTimeToStartMontageAt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaySlotAnimation) \
	{ \
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotNodeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendInTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BlendOutTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LoopCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PlaySlotAnimation(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_InPlayRate,Z_Param_LoopCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=this->GetOwningComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetOwningActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapshotPose) \
	{ \
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SnapshotPose(Z_Param_Out_Snapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePoseSnapshot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SnapshotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SavePoseSnapshot(Z_Param_SnapshotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetPawnOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->TryGetPawnOwner(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_EVENT_PARMS \
	struct AnimInstance_eventBlueprintUpdateAnimation_Parms \
	{ \
		float DeltaTimeX; \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance(); \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_INCLASS \
private: \
	static void StaticRegisterNativesUAnimInstance(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance(); \
public: \
	DECLARE_CLASS(UAnimInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimInstance(UAnimInstance&&); \
	NO_API UAnimInstance(const UAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bQueueMontageEvents() { return STRUCT_OFFSET(UAnimInstance, bQueueMontageEvents); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_343_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h_346_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimInstance_h


#define FOREACH_ENUM_EMONTAGEPLAYRETURNTYPE(op) \
	op(EMontagePlayReturnType::MontageLength) 
#define FOREACH_ENUM_EANIMCURVETYPE(op) \
	op(EAnimCurveType::AttributeCurve) \
	op(EAnimCurveType::MaterialCurve) \
	op(EAnimCurveType::MorphTargetCurve) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
