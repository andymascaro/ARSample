// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FPoseSnapshot;
class UAnimationAsset;
class UAnimInstance;
class UObject;
#ifdef ENGINE_SkeletalMeshComponent_generated_h
#error "SkeletalMeshComponent.generated.h already included, missing '#pragma once' in SkeletalMeshComponent.h"
#endif
#define ENGINE_SkeletalMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_199_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_167_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_45_DELEGATE \
static inline void FOnAnimInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnAnimInitialized) \
{ \
	OnAnimInitialized.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing1Angle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TwistAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing2Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentJointAngles(Z_Param_InBoneName,Z_Param_Out_Swing1Angle,Z_Param_Out_TwistAngle,Z_Param_Out_Swing2Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularLimits) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAngularLimits(Z_Param_InBoneName,Z_Param_Swing1LimitAngle,Z_Param_TwistLimitAngle,Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BreakConstraint(Z_Param_Impulse,Z_Param_HitLocation,Z_Param_InBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindConstraintBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConstraintIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->FindConstraintBoneName(Z_Param_ConstraintIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfileForAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintProfileForAll(Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_JointName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintProfile(Z_Param_JointName,Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAllBodiesSimulatePhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulseToAllBodiesBelow(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceToAllBodiesBelow(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSkeletalCenterOfMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bScaleMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoneMass(Z_Param_BoneName,Z_Param_bScaleMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_GetClosestPointOnPhysicsAsset(Z_Param_Out_WorldPosition,Z_Param_Out_ClosestWorldPosition,Z_Param_Out_Normal,Z_Param_Out_BoneName,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableGravityOnAllBodiesBelow(Z_Param_bEnableGravity,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyGravityEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBodyGravityEnabled(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBodyGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableBodyGravity(Z_Param_bEnableGravity,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNotifyRigidBodyCollisionBelow(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBodyNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTeleportDistanceThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTeleportDistanceThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTeleportRotationThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTeleportRotationThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_List); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowedAnimCurvesEvaluation(Z_Param_Out_List,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAllowedAnimCurveEvaluation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameOfCurve); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AllowAnimCurveEvaluation(Z_Param_NameOfCurve,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowedAnimCurveEvaluate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowAnimCurveEvaluation(Z_Param_bInAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableAnimCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDisableAnimCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableAnimCurves) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableAnimCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDisableAnimCurves(Z_Param_bInDisableAnimCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_NewUpdateState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUpdateAnimationInEditor(Z_Param_NewUpdateState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BindClothToMasterPoseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetClothTeleportMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClothingSimulationSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumeClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SuspendClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ForceClothNextUpdateTeleportAndReset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ForceClothNextUpdateTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetClothMaxDistanceScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetClothMaxDistanceScale(); \
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
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMorphTarget(Z_Param_MorphTargetName); \
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
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAnimationData) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_InAnimToPlay); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverrideAnimationData(Z_Param_InAnimToPlay,Z_Param_bIsLooping,Z_Param_bIsPlaying,Z_Param_Position,Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimation(Z_Param_NewAnimToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=this->GetAnimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=this->GetPostProcessInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=this->GetAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimInstanceClass(Z_Param_NewClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentJointAngles) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing1Angle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TwistAngle); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Swing2Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurrentJointAngles(Z_Param_InBoneName,Z_Param_Out_Swing1Angle,Z_Param_Out_TwistAngle,Z_Param_Out_Swing2Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAngularLimits) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing1LimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TwistLimitAngle); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Swing2LimitAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAngularLimits(Z_Param_InBoneName,Z_Param_Swing1LimitAngle,Z_Param_TwistLimitAngle,Z_Param_Swing2LimitAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakConstraint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_PROPERTY(UNameProperty,Z_Param_InBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BreakConstraint(Z_Param_Impulse,Z_Param_HitLocation,Z_Param_InBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindConstraintBoneName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConstraintIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->FindConstraintBoneName(Z_Param_ConstraintIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfileForAll) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintProfileForAll(Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintProfile) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_JointName); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ProfileName); \
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetConstraintProfile(Z_Param_JointName,Z_Param_ProfileName,Z_Param_bDefaultIfNotFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularDriveParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSpring); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InDamping); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InForceLimit); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularVelocityDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllMotorsAngularPositionDrive) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableSwingDrive); \
		P_GET_UBOOL(Z_Param_bEnableTwistDrive); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAccumulateAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AddPhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBodiesSimulatePhysics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAllBodiesSimulatePhysics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesBelowSimulatePhysics) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InBoneName); \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnablePhysicsBlending) \
	{ \
		P_GET_UBOOL(Z_Param_bNewBlendPhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPhysicsBlendWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PhysicsBlendWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllBodiesSimulatePhysics) \
	{ \
		P_GET_UBOOL(Z_Param_bNewSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulseToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bVelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulseToAllBodiesBelow(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForceToAllBodiesBelow) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bAccelChange); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForceToAllBodiesBelow(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkeletalCenterOfMass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSkeletalCenterOfMass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoneMass) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bScaleMass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoneMass(Z_Param_BoneName,Z_Param_bScaleMass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetClosestPointOnPhysicsAsset) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestWorldPosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->K2_GetClosestPointOnPhysicsAsset(Z_Param_Out_WorldPosition,Z_Param_Out_ClosestWorldPosition,Z_Param_Out_Normal,Z_Param_Out_BoneName,Z_Param_Out_Distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableGravityOnAllBodiesBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableGravityOnAllBodiesBelow(Z_Param_bEnableGravity,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBodyGravityEnabled) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsBodyGravityEnabled(Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBodyGravity) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableGravity); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnableBodyGravity(Z_Param_bEnableGravity,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollisionBelow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_UBOOL(Z_Param_bIncludeSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNotifyRigidBodyCollisionBelow(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName,Z_Param_bIncludeSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBodyNotifyRigidBodyCollision) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBodyNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportDistanceThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTeleportDistanceThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDistanceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTeleportDistanceThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTeleportRotationThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Threshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTeleportRotationThreshold(Z_Param_Threshold); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportRotationThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTeleportRotationThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowedAnimCurvesEvaluation) \
	{ \
		P_GET_TARRAY_REF(FName,Z_Param_Out_List); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowedAnimCurvesEvaluation(Z_Param_Out_List,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllowedAnimCurveEvaluation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAllowedAnimCurveEvaluation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowAnimCurveEvaluation) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_NameOfCurve); \
		P_GET_UBOOL(Z_Param_bAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AllowAnimCurveEvaluation(Z_Param_NameOfCurve,Z_Param_bAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllowedAnimCurveEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetAllowedAnimCurveEvaluate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowAnimCurveEvaluation) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAllowAnimCurveEvaluation(Z_Param_bInAllow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableAnimCurves) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetDisableAnimCurves(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableAnimCurves) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableAnimCurves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDisableAnimCurves(Z_Param_bInDisableAnimCurves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdateAnimationInEditor) \
	{ \
		P_GET_UBOOL(Z_Param_NewUpdateState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUpdateAnimationInEditor(Z_Param_NewUpdateState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnbindClothFromMasterPoseComponent) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnbindClothFromMasterPoseComponent(Z_Param_bRestoreSimulationSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindClothToMasterPoseComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BindClothToMasterPoseComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClothTeleportMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetClothTeleportMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClothingSimulationSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClothingSimulationSuspended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumeClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendClothingSimulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SuspendClothingSimulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleportAndReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ForceClothNextUpdateTeleportAndReset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceClothNextUpdateTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ForceClothNextUpdateTeleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClothMaxDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetClothMaxDistanceScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClothMaxDistanceScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetClothMaxDistanceScale(); \
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
	DECLARE_FUNCTION(execGetMorphTarget) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MorphTargetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMorphTarget(Z_Param_MorphTargetName); \
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
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverrideAnimationData) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_InAnimToPlay); \
		P_GET_UBOOL(Z_Param_bIsLooping); \
		P_GET_UBOOL(Z_Param_bIsPlaying); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverrideAnimationData(Z_Param_InAnimToPlay,Z_Param_bIsLooping,Z_Param_bIsPlaying,Z_Param_Position,Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayRate(Z_Param_Rate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPos); \
		P_GET_UBOOL(Z_Param_bFireNotifies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimation(Z_Param_NewAnimToPlay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay); \
		P_GET_UBOOL(Z_Param_bLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=this->GetAnimationMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimationMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InAnimationMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPostProcessInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=this->GetPostProcessInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimInstance**)Z_Param__Result=this->GetAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimInstanceClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAnimInstanceClass(Z_Param_NewClass); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent(); \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent(); \
public: \
	DECLARE_CLASS(USkeletalMeshComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_USkeletalMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkeletalMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USkeletalMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkeletalMeshComponent(USkeletalMeshComponent&&); \
	NO_API USkeletalMeshComponent(const USkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimationMode() { return STRUCT_OFFSET(USkeletalMeshComponent, AnimationMode); } \
	FORCEINLINE static uint32 __PPO__DisallowedAnimCurves() { return STRUCT_OFFSET(USkeletalMeshComponent, DisallowedAnimCurves); } \
	FORCEINLINE static uint32 __PPO__TeleportDistanceThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportDistanceThreshold); } \
	FORCEINLINE static uint32 __PPO__TeleportRotationThreshold() { return STRUCT_OFFSET(USkeletalMeshComponent, TeleportRotationThreshold); } \
	FORCEINLINE static uint32 __PPO__SequenceToPlay_DEPRECATED() { return STRUCT_OFFSET(USkeletalMeshComponent, SequenceToPlay_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__AnimToPlay_DEPRECATED() { return STRUCT_OFFSET(USkeletalMeshComponent, AnimToPlay_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DefaultPosition_DEPRECATED() { return STRUCT_OFFSET(USkeletalMeshComponent, DefaultPosition_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DefaultPlayRate_DEPRECATED() { return STRUCT_OFFSET(USkeletalMeshComponent, DefaultPlayRate_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__LastPoseTickFrame() { return STRUCT_OFFSET(USkeletalMeshComponent, LastPoseTickFrame); } \
	FORCEINLINE static uint32 __PPO__bNeedsQueuedAnimEventsDispatched() { return STRUCT_OFFSET(USkeletalMeshComponent, bNeedsQueuedAnimEventsDispatched); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_254_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_257_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h


#define FOREACH_ENUM_EPHYSICSTRANSFORMUPDATEMODE(op) \
	op(EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform) 
#define FOREACH_ENUM_EANIMATIONMODE(op) \
	op(EAnimationMode::AnimationBlueprint) \
	op(EAnimationMode::AnimationSingleNode) 
#define FOREACH_ENUM_EKINEMATICBONESUPDATETOPHYSICS(op) \
	op(EKinematicBonesUpdateToPhysics::SkipSimulatingBones) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
