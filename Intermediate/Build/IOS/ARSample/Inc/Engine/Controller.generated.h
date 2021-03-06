// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AActor;
class APawn;
struct FRotator;
struct FVector;
class APlayerController;
#ifdef ENGINE_Controller_generated_h
#error "Controller.generated.h already included, missing '#pragma once' in Controller.h"
#endif
#define ENGINE_Controller_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_19_DELEGATE \
struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms \
{ \
	float Damage; \
	const UDamageType* DamageType; \
	AActor* DamagedActor; \
	AActor* DamageCauser; \
}; \
static inline void FInstigatedAnyDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstigatedAnyDamageSignature, float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser) \
{ \
	_Script_Engine_eventInstigatedAnyDamageSignature_Parms Parms; \
	Parms.Damage=Damage; \
	Parms.DamageType=DamageType; \
	Parms.DamagedActor=DamagedActor; \
	Parms.DamageCauser=DamageCauser; \
	InstigatedAnyDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_RPC_WRAPPERS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreInputFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLookInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLookInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreLookInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLookInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIgnoreLookInput(Z_Param_bNewLookInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMoveInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreMoveInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMoveInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIgnoreMoveInput(Z_Param_bNewMoveInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnPossess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Possess(Z_Param_InPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocalController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocalPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetDesiredRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->K2_GetPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=this->CastToPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Pawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetControlRotation(Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetControlRotation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientSetRotation_Implementation(FRotator NewRotation, bool bResetCamera); \
	virtual void ClientSetLocation_Implementation(FVector NewLocation, FRotator NewRotation); \
 \
	DECLARE_FUNCTION(execResetIgnoreInputFlags) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreInputFlags(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLookInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLookInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreLookInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreLookInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLookInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIgnoreLookInput(Z_Param_bNewLookInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMoveInputIgnored(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetIgnoreMoveInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIgnoreMoveInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMoveInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIgnoreMoveInput(Z_Param_bNewMoveInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UnPossess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Possess(Z_Param_InPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocalController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLocalPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetDesiredRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->GetViewTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APawn**)Z_Param__Result=this->K2_GetPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_UBOOL(Z_Param_bResetCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetRotation_Implementation(Z_Param_NewRotation,Z_Param_bResetCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientSetLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClientSetLocation_Implementation(Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastToPlayerController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=this->CastToPlayerController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PlayerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_PlayerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Pawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_Pawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLineOfSightTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_STRUCT(FVector,Z_Param_ViewPoint); \
		P_GET_UBOOL(Z_Param_bAlternateChecks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LineOfSightTo(Z_Param_Other,Z_Param_ViewPoint,Z_Param_bAlternateChecks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInitialLocationAndRotation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetInitialLocationAndRotation(Z_Param_Out_NewLocation,Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetControlRotation) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetControlRotation(Z_Param_Out_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetControlRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetControlRotation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_EVENT_PARMS \
	struct Controller_eventClientSetLocation_Parms \
	{ \
		FVector NewLocation; \
		FRotator NewRotation; \
	}; \
	struct Controller_eventClientSetRotation_Parms \
	{ \
		FRotator NewRotation; \
		bool bResetCamera; \
	}; \
	struct Controller_eventReceiveInstigatedAnyDamage_Parms \
	{ \
		float Damage; \
		const UDamageType* DamageType; \
		AActor* DamagedActor; \
		AActor* DamageCauser; \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AController(); \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAController(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AController(); \
public: \
	DECLARE_CLASS(AController, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AController*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AController(AController&&); \
	NO_API AController(const AController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawn() { return STRUCT_OFFSET(AController, Pawn); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(AController, Character); } \
	FORCEINLINE static uint32 __PPO__TransformComponent() { return STRUCT_OFFSET(AController, TransformComponent); } \
	FORCEINLINE static uint32 __PPO__ControlRotation() { return STRUCT_OFFSET(AController, ControlRotation); } \
	FORCEINLINE static uint32 __PPO__OnInstigatedAnyDamage() { return STRUCT_OFFSET(AController, OnInstigatedAnyDamage); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_40_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Controller."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
