// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRootMotionSourceGroup;
struct FVector;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
class AActor;
struct FHitResult;
struct FFindFloorResult;
class ACharacter;
struct FNavAvoidanceMask;
#ifdef ENGINE_CharacterMovementComponent_generated_h
#error "CharacterMovementComponent.generated.h already included, missing '#pragma once' in CharacterMovementComponent.h"
#endif
#define ENGINE_CharacterMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_107_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_32_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_RPC_WRAPPERS \
	virtual void ClientAdjustRootMotionSourcePosition_Implementation(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustRootMotionPosition_Implementation(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientVeryShortAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAdjustPosition_Implementation(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode); \
	virtual void ClientAckGoodMove_Implementation(float TimeStamp); \
	virtual bool ServerMoveOld_Validate(float , FVector_NetQuantize10 , uint8 ); \
	virtual void ServerMoveOld_Implementation(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags); \
	virtual bool ServerMoveDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveDual_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMove_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMove_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FRootMotionSourceGroup,Z_Param_ServerRootMotion); \
		P_GET_UBOOL(Z_Param_bHasAnimRootMotion); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustRootMotionSourcePosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerRootMotion,Z_Param_bHasAnimRootMotion,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		this->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		this->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		this->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ComputeFloorDist) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepRadius); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_ComputeFloorDist(Z_Param_CapsuleLocation,Z_Param_LineDistance,Z_Param_SweepDistance,Z_Param_SweepRadius,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindFloor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_FindFloor(Z_Param_CapsuleLocation,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWalkable(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValidPerchRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPerchRadiusThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_Force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAccumulatedForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAccumulatedForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnalogInputModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCurrentAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxBrakingDeceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetModifiedMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinAnalogSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinAnalogSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeightWithJumpTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetImpartedMovementBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetMovementBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWalking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=this->GetCharacterOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionSourcePosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FRootMotionSourceGroup,Z_Param_ServerRootMotion); \
		P_GET_UBOOL(Z_Param_bHasAnimRootMotion); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustRootMotionSourcePosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerRootMotion,Z_Param_bHasAnimRootMotion,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustRootMotionPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerMontageTrackPosition); \
		P_GET_STRUCT(FVector,Z_Param_ServerLoc); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ServerRotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ServerVelZ); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ServerBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ServerBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustRootMotionPosition_Implementation(Z_Param_TimeStamp,Z_Param_ServerMontageTrackPosition,Z_Param_ServerLoc,Z_Param_ServerRotation,Z_Param_ServerVelZ,Z_Param_ServerBase,Z_Param_ServerBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientVeryShortAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAdjustPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FVector,Z_Param_NewVel); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_NewBaseBoneName); \
		P_GET_UBOOL(Z_Param_bHasBase); \
		P_GET_UBOOL(Z_Param_bBaseRelativePosition); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ServerMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientAckGoodMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientAckGoodMove_Implementation(Z_Param_TimeStamp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveOld) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OldTimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_OldAccel); \
		P_GET_PROPERTY(UByteProperty,Z_Param_OldMoveFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveOld_Validate(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveOld_Validate")); \
			return; \
		} \
		this->ServerMoveOld_Implementation(Z_Param_OldTimeStamp,Z_Param_OldAccel,Z_Param_OldMoveFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveDual_Validate")); \
			return; \
		} \
		this->ServerMoveDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMove_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMove_Validate")); \
			return; \
		} \
		this->ServerMove_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_ComputeFloorDist) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LineDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SweepRadius); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_ComputeFloorDist(Z_Param_CapsuleLocation,Z_Param_LineDistance,Z_Param_SweepDistance,Z_Param_SweepRadius,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_FindFloor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CapsuleLocation); \
		P_GET_STRUCT_REF(FFindFloorResult,Z_Param_Out_FloorResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->K2_FindFloor(Z_Param_CapsuleLocation,Z_Param_Out_FloorResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableFloorZ(Z_Param_InWalkableFloorZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWalkableFloorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWalkableFloorAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetWalkableFloorAngle(Z_Param_InWalkableFloorAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetWalkableFloorAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalkable) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWalkable(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValidPerchRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetValidPerchRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPerchRadiusThreshold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddForce) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddForce(Z_Param_Force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddImpulse) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Impulse); \
		P_GET_UBOOL(Z_Param_bVelocityChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddImpulse(Z_Param_Impulse,Z_Param_bVelocityChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAccumulatedForces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAccumulatedForces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogInputModifier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnalogInputModifier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCurrentAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxBrakingDeceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetModifiedMaxAcceleration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->K2_GetModifiedMaxAcceleration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinAnalogSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMinAnalogSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeightWithJumpTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxJumpHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMaxJumpHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalcVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Friction); \
		P_GET_UBOOL(Z_Param_bFluid); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BrakingDeceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalcVelocity(Z_Param_DeltaTime,Z_Param_Friction,Z_Param_bFluid,Z_Param_BrakingDeceleration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetImpartedMovementBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovementBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetMovementBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWalking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWalking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMovementMode) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewMovementMode); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewCustomMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMovementMode(EMovementMode(Z_Param_NewMovementMode),Z_Param_NewCustomMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterOwner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ACharacter**)Z_Param__Result=this->GetCharacterOwner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_EVENT_PARMS \
	struct CharacterMovementComponent_eventClientAckGoodMove_Parms \
	{ \
		float TimeStamp; \
	}; \
	struct CharacterMovementComponent_eventClientAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		FVector NewVel; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms \
	{ \
		float TimeStamp; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventClientAdjustRootMotionSourcePosition_Parms \
	{ \
		float TimeStamp; \
		FRootMotionSourceGroup ServerRootMotion; \
		bool bHasAnimRootMotion; \
		float ServerMontageTrackPosition; \
		FVector ServerLoc; \
		FVector_NetQuantizeNormal ServerRotation; \
		float ServerVelZ; \
		UPrimitiveComponent* ServerBase; \
		FName ServerBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms \
	{ \
		float TimeStamp; \
		FVector NewLoc; \
		UPrimitiveComponent* NewBase; \
		FName NewBaseBoneName; \
		bool bHasBase; \
		bool bBaseRelativePosition; \
		uint8 ServerMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMove_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct CharacterMovementComponent_eventServerMoveOld_Parms \
	{ \
		float OldTimeStamp; \
		FVector_NetQuantize10 OldAccel; \
		uint8 OldMoveFlags; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterOwner() { return STRUCT_OFFSET(UCharacterMovementComponent, CharacterOwner); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorAngle() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorAngle); } \
	FORCEINLINE static uint32 __PPO__WalkableFloorZ() { return STRUCT_OFFSET(UCharacterMovementComponent, WalkableFloorZ); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UCharacterMovementComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__LastUpdateLocation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateLocation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateRotation() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateRotation); } \
	FORCEINLINE static uint32 __PPO__LastUpdateVelocity() { return STRUCT_OFFSET(UCharacterMovementComponent, LastUpdateVelocity); } \
	FORCEINLINE static uint32 __PPO__ServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(UCharacterMovementComponent, ServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__PendingImpulseToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingImpulseToApply); } \
	FORCEINLINE static uint32 __PPO__PendingForceToApply() { return STRUCT_OFFSET(UCharacterMovementComponent, PendingForceToApply); } \
	FORCEINLINE static uint32 __PPO__AnalogInputModifier() { return STRUCT_OFFSET(UCharacterMovementComponent, AnalogInputModifier); } \
	FORCEINLINE static uint32 __PPO__GroundMovementMode() { return STRUCT_OFFSET(UCharacterMovementComponent, GroundMovementMode); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_152_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
