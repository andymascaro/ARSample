// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class ACharacter;
class UAnimMontage;
struct FRotator;
#ifdef ENGINE_Character_generated_h
#error "Character.generated.h already included, missing '#pragma once' in Character.h"
#endif
#define ENGINE_Character_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_158_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBasedMovementInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_114_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_46_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRepRootMotionMontage(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_33_DELEGATE \
struct _Script_Engine_eventLandedSignature_Parms \
{ \
	FHitResult Hit; \
}; \
static inline void FLandedSignature_DelegateWrapper(const FMulticastScriptDelegate& LandedSignature, FHitResult const& Hit) \
{ \
	_Script_Engine_eventLandedSignature_Parms Parms; \
	Parms.Hit=Hit; \
	LandedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_32_DELEGATE \
static inline void FCharacterReachedApexSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterReachedApexSignature) \
{ \
	CharacterReachedApexSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_31_DELEGATE \
struct _Script_Engine_eventCharacterMovementUpdatedSignature_Parms \
{ \
	float DeltaSeconds; \
	FVector OldLocation; \
	FVector OldVelocity; \
}; \
static inline void FCharacterMovementUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharacterMovementUpdatedSignature, float DeltaSeconds, FVector OldLocation, FVector OldVelocity) \
{ \
	_Script_Engine_eventCharacterMovementUpdatedSignature_Parms Parms; \
	Parms.DeltaSeconds=DeltaSeconds; \
	Parms.OldLocation=OldLocation; \
	Parms.OldVelocity=OldVelocity; \
	CharacterMovementUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_30_DELEGATE \
struct _Script_Engine_eventMovementModeChangedSignature_Parms \
{ \
	ACharacter* Character; \
	TEnumAsByte<EMovementMode> PrevMovementMode; \
	uint8 PreviousCustomMode; \
}; \
static inline void FMovementModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MovementModeChangedSignature, ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode) \
{ \
	_Script_Engine_eventMovementModeChangedSignature_Parms Parms; \
	Parms.Character=Character; \
	Parms.PrevMovementMode=PrevMovementMode; \
	Parms.PreviousCustomMode=PreviousCustomMode; \
	MovementModeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_RPC_WRAPPERS \
	virtual void RootMotionDebugClientPrintOnScreen_Implementation(const FString& InString); \
	virtual void ClientCheatGhost_Implementation(); \
	virtual void ClientCheatFly_Implementation(); \
	virtual void ClientCheatWalk_Implementation(); \
	virtual void OnWalkingOffLedge_Implementation(FVector const& PreviousFloorImpactNormal, FVector const& PreviousFloorContactNormal, FVector const& PreviousLocation, float TimeDelta); \
	virtual void OnJumped_Implementation(); \
	virtual bool CanJumpInternal_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimRootMotionTranslationScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingNetworkedRootMotionMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_RootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RootMotionDebugClientPrintOnScreen_Implementation(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatGhost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatFly_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnCrouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Crouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWalkingOffLedge) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorImpactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorContactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnWalkingOffLedge_Implementation(Z_Param_Out_PreviousFloorImpactNormal,Z_Param_Out_PreviousFloorContactNormal,Z_Param_Out_PreviousLocation,Z_Param_TimeDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnJumped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnJumped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LaunchCharacter(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->GetCurrentMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PlayAnimMontage(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpProvidingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsJumpProvidingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJumpInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanJumpInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsCrouched) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsCrouched(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetBaseRotationOffsetRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseTranslationOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetBaseTranslationOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicateMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicateMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetReplicateMovement(Z_Param_bInReplicateMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedBasedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCacheInitialMeshOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MeshRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_MeshRelativeRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CacheInitialMeshOffset(Z_Param_MeshRelativeLocation,Z_Param_MeshRelativeRotation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAnimRootMotionTranslationScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingNetworkedRootMotionMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingNetworkedRootMotionMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingRootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingRootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_RootMotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_RootMotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootMotionDebugClientPrintOnScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RootMotionDebugClientPrintOnScreen_Implementation(Z_Param_InString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatGhost_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatFly_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientCheatWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientCheatWalk_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnCrouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCrouch) \
	{ \
		P_GET_UBOOL(Z_Param_bClientSimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Crouch(Z_Param_bClientSimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWalkingOffLedge) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorImpactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousFloorContactNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PreviousLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnWalkingOffLedge_Implementation(Z_Param_Out_PreviousFloorImpactNormal,Z_Param_Out_PreviousFloorContactNormal,Z_Param_Out_PreviousLocation,Z_Param_TimeDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnJumped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnJumped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LaunchVelocity); \
		P_GET_UBOOL(Z_Param_bXYOverride); \
		P_GET_UBOOL(Z_Param_bZOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LaunchCharacter(Z_Param_LaunchVelocity,Z_Param_bXYOverride,Z_Param_bZOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMontage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimMontage**)Z_Param__Result=this->GetCurrentMontage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimMontage(Z_Param_AnimMontage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimMontage) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InPlayRate); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartSectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->PlayAnimMontage(Z_Param_AnimMontage,Z_Param_InPlayRate,Z_Param_StartSectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpProvidingForce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsJumpProvidingForce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJumpInternal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanJumpInternal_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJumping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJumping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsCrouched) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsCrouched(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationOffsetRotator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetBaseRotationOffsetRotator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseTranslationOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetBaseTranslationOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReplicateMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bInReplicateMovement); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetReplicateMovement(Z_Param_bInReplicateMovement); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedBasedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedBasedMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCacheInitialMeshOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MeshRelativeLocation); \
		P_GET_STRUCT(FRotator,Z_Param_MeshRelativeRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CacheInitialMeshOffset(Z_Param_MeshRelativeLocation,Z_Param_MeshRelativeRotation); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_EVENT_PARMS \
	struct Character_eventCanJumpInternal_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Character_eventCanJumpInternal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Character_eventK2_OnEndCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_OnMovementModeChanged_Parms \
	{ \
		TEnumAsByte<EMovementMode> PrevMovementMode; \
		TEnumAsByte<EMovementMode> NewMovementMode; \
		uint8 PrevCustomMode; \
		uint8 NewCustomMode; \
	}; \
	struct Character_eventK2_OnStartCrouch_Parms \
	{ \
		float HalfHeightAdjust; \
		float ScaledHalfHeightAdjust; \
	}; \
	struct Character_eventK2_UpdateCustomMovement_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct Character_eventOnLanded_Parms \
	{ \
		FHitResult Hit; \
	}; \
	struct Character_eventOnLaunched_Parms \
	{ \
		FVector LaunchVelocity; \
		bool bXYOverride; \
		bool bZOverride; \
	}; \
	struct Character_eventOnWalkingOffLedge_Parms \
	{ \
		FVector PreviousFloorImpactNormal; \
		FVector PreviousFloorContactNormal; \
		FVector PreviousLocation; \
		float TimeDelta; \
	}; \
	struct Character_eventRootMotionDebugClientPrintOnScreen_Parms \
	{ \
		FString InString; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ACharacter(); \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_INCLASS \
private: \
	static void StaticRegisterNativesACharacter(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ACharacter(); \
public: \
	DECLARE_CLASS(ACharacter, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ACharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacter(ACharacter&&); \
	NO_API ACharacter(const ACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacter)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACharacter, Mesh); } \
	FORCEINLINE static uint32 __PPO__CharacterMovement() { return STRUCT_OFFSET(ACharacter, CharacterMovement); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ACharacter, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__BasedMovement() { return STRUCT_OFFSET(ACharacter, BasedMovement); } \
	FORCEINLINE static uint32 __PPO__ReplicatedBasedMovement() { return STRUCT_OFFSET(ACharacter, ReplicatedBasedMovement); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(ACharacter, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__BaseTranslationOffset() { return STRUCT_OFFSET(ACharacter, BaseTranslationOffset); } \
	FORCEINLINE static uint32 __PPO__BaseRotationOffset() { return STRUCT_OFFSET(ACharacter, BaseRotationOffset); } \
	FORCEINLINE static uint32 __PPO__ReplicatedServerLastTransformUpdateTimeStamp() { return STRUCT_OFFSET(ACharacter, ReplicatedServerLastTransformUpdateTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReplicatedMovementMode() { return STRUCT_OFFSET(ACharacter, ReplicatedMovementMode); } \
	FORCEINLINE static uint32 __PPO__bInBaseReplication() { return STRUCT_OFFSET(ACharacter, bInBaseReplication); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_217_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
