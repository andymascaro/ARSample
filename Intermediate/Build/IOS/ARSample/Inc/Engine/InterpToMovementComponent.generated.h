// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef ENGINE_InterpToMovementComponent_generated_h
#error "InterpToMovementComponent.generated.h already included, missing '#pragma once' in InterpToMovementComponent.h"
#endif
#define ENGINE_InterpToMovementComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_29_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToResetDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToResetDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToResetDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToResetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_67_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToWaitEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitEndDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToWaitEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_66_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToWaitBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitBeginDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToWaitBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToStopDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToStopDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToStopDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToStopDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_64_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToReverseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToReverseDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToReverseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinaliseControlPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinaliseControlPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitialDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartMovement(Z_Param_InitialDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSimulating) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSimulating(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinaliseControlPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinaliseControlPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InitialDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RestartMovement(Z_Param_InitialDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSimulating) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopSimulating(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpToMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpToMovementComponent(); \
public: \
	DECLARE_CLASS(UInterpToMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpToMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUInterpToMovementComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UInterpToMovementComponent(); \
public: \
	DECLARE_CLASS(UInterpToMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpToMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpToMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpToMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpToMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpToMovementComponent(UInterpToMovementComponent&&); \
	NO_API UInterpToMovementComponent(const UInterpToMovementComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpToMovementComponent(UInterpToMovementComponent&&); \
	NO_API UInterpToMovementComponent(const UInterpToMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpToMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpToMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpToMovementComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_59_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpToMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h


#define FOREACH_ENUM_EINTERPTOBEHAVIOURTYPE(op) \
	op(EInterpToBehaviourType::OneShot) \
	op(EInterpToBehaviourType::OneShot_Reverse) \
	op(EInterpToBehaviourType::Loop_Reset) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
