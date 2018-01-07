// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhysicsVolume;
struct FVector;
struct FRotator;
struct FHitResult;
struct FQuat;
struct FTransform;
enum class EDetachmentRule : uint8;
class USceneComponent;
enum class EAttachmentRule : uint8;
#ifdef ENGINE_SceneComponent_generated_h
#error "SceneComponent.generated.h already included, missing '#pragma once' in SceneComponent.h"
#endif
#define ENGINE_SceneComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_DELEGATE \
struct _Script_Engine_eventPhysicsVolumeChanged_Parms \
{ \
	APhysicsVolume* NewVolume; \
}; \
static inline void FPhysicsVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& PhysicsVolumeChanged, APhysicsVolume* NewVolume) \
{ \
	_Script_Engine_eventPhysicsVolumeChanged_Parms Parms; \
	Parms.NewVolume=NewVolume; \
	PhysicsVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAbsolute) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAbsoluteLocation); \
		P_GET_UBOOL(Z_Param_bNewAbsoluteRotation); \
		P_GET_UBOOL(Z_Param_bNewAbsoluteScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAbsolute(Z_Param_bNewAbsoluteLocation,Z_Param_bNewAbsoluteRotation,Z_Param_bNewAbsoluteScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APhysicsVolume**)Z_Param__Result=this->GetPhysicsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHiddenInGame) \
	{ \
		P_GET_UBOOL(Z_Param_NewHidden); \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHiddenInGame(Z_Param_NewHidden,Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleVisibility(Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVisibility(Z_Param_bNewVisibility,Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetComponentVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSocketExist) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DoesSocketExist(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketQuaternion) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=this->GetSocketQuaternion(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRotation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetSocketRotation(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketLocation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSocketLocation(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketTransform) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TransformSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetSocketTransform(Z_Param_InSocketName,ERelativeTransformSpace(Z_Param_TransformSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSocketNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=this->GetAllSocketNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DetachFromComponent) \
	{ \
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bCallModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_DetachFromComponent(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule),Z_Param_bCallModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromParent) \
	{ \
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition); \
		P_GET_UBOOL(Z_Param_bCallModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DetachFromParent(Z_Param_bMaintainWorldPosition,Z_Param_bCallModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SnapTo(Z_Param_InParent,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_AttachTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildrenComponents) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeAllDescendants); \
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Children); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetChildrenComponents(Z_Param_bIncludeAllDescendants,Z_Param_Out_Children); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildComponent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChildIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=this->GetChildComponent(Z_Param_ChildIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumChildrenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumChildrenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentComponents) \
	{ \
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Parents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetParentComponents(Z_Param_Out_Parents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetAttachSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=this->GetAttachParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnySimulatingPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSimulatingPhysics) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSimulatingPhysics(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentToWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->K2_GetComponentToWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->K2_GetComponentScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->K2_GetComponentRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->K2_GetComponentLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWorldScale3D(Z_Param_NewScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddRelativeRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddRelativeLocation(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRelativeScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRelativeScale3D(Z_Param_NewScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Visibility) \
	{ \
		P_GET_UBOOL(Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Visibility(Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Transform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Transform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAbsolute) \
	{ \
		P_GET_UBOOL(Z_Param_bNewAbsoluteLocation); \
		P_GET_UBOOL(Z_Param_bNewAbsoluteRotation); \
		P_GET_UBOOL(Z_Param_bNewAbsoluteScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAbsolute(Z_Param_bNewAbsoluteLocation,Z_Param_bNewAbsoluteRotation,Z_Param_bNewAbsoluteScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APhysicsVolume**)Z_Param__Result=this->GetPhysicsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHiddenInGame) \
	{ \
		P_GET_UBOOL(Z_Param_NewHidden); \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHiddenInGame(Z_Param_NewHidden,Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleVisibility(Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_GET_UBOOL(Z_Param_bPropagateToChildren); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVisibility(Z_Param_bNewVisibility,Z_Param_bPropagateToChildren); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetComponentVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSocketExist) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DoesSocketExist(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketQuaternion) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQuat*)Z_Param__Result=this->GetSocketQuaternion(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketRotation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetSocketRotation(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketLocation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSocketLocation(Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketTransform) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TransformSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetSocketTransform(Z_Param_InSocketName,ERelativeTransformSpace(Z_Param_TransformSpace)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSocketNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FName>*)Z_Param__Result=this->GetAllSocketNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_DetachFromComponent) \
	{ \
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bCallModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_DetachFromComponent(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule),Z_Param_bCallModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachFromParent) \
	{ \
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition); \
		P_GET_UBOOL(Z_Param_bCallModify); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DetachFromParent(Z_Param_bMaintainWorldPosition,Z_Param_bCallModify); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SnapTo(Z_Param_InParent,Z_Param_InSocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Parent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule); \
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AttachTo) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InParent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AttachType); \
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_AttachTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachType),Z_Param_bWeldSimulatedBodies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildrenComponents) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeAllDescendants); \
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Children); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetChildrenComponents(Z_Param_bIncludeAllDescendants,Z_Param_Out_Children); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildComponent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ChildIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=this->GetChildComponent(Z_Param_ChildIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumChildrenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumChildrenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentComponents) \
	{ \
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Parents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetParentComponents(Z_Param_Out_Parents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetAttachSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=this->GetAttachParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAnySimulatingPhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSimulatingPhysics) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSimulatingPhysics(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentToWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->K2_GetComponentToWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->K2_GetComponentScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->K2_GetComponentRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetComponentLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->K2_GetComponentLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddWorldOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWorldScale3D(Z_Param_NewScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetWorldLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetWorldLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddLocalOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddRelativeRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_AddRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_AddRelativeLocation(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRelativeScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRelativeScale3D(Z_Param_NewScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativeTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->GetRelativeTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_SetRelativeLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_SetRelativeLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Visibility) \
	{ \
		P_GET_UBOOL(Z_Param_OldValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Visibility(Z_Param_OldValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachSocketName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachSocketName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttachParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_AttachParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Transform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Transform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneComponent(); \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneComponent(); \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PhysicsVolume() { return STRUCT_OFFSET(USceneComponent, PhysicsVolume); } \
	FORCEINLINE static uint32 __PPO__AttachParent() { return STRUCT_OFFSET(USceneComponent, AttachParent); } \
	FORCEINLINE static uint32 __PPO__AttachSocketName() { return STRUCT_OFFSET(USceneComponent, AttachSocketName); } \
	FORCEINLINE static uint32 __PPO__AttachChildren() { return STRUCT_OFFSET(USceneComponent, AttachChildren); } \
	FORCEINLINE static uint32 __PPO__ClientAttachedChildren() { return STRUCT_OFFSET(USceneComponent, ClientAttachedChildren); }


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_102_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h


#define FOREACH_ENUM_ERELATIVETRANSFORMSPACE(op) \
	op(RTS_World) \
	op(RTS_Actor) \
	op(RTS_Component) 
#define FOREACH_ENUM_EDETAILMODE(op) \
	op(DM_Low) \
	op(DM_Medium) \
	op(DM_High) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
