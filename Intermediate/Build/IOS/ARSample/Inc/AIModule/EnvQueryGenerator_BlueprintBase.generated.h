// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
#ifdef AIMODULE_EnvQueryGenerator_BlueprintBase_generated_h
#error "EnvQueryGenerator_BlueprintBase.generated.h already included, missing '#pragma once' in EnvQueryGenerator_BlueprintBase.h"
#endif
#define AIMODULE_EnvQueryGenerator_BlueprintBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuerier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=this->GetQuerier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeneratedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GeneratedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddGeneratedActor(Z_Param_GeneratedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeneratedVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GeneratedVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddGeneratedVector(Z_Param_GeneratedVector); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuerier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=this->GetQuerier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeneratedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GeneratedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddGeneratedActor(Z_Param_GeneratedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeneratedVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_GeneratedVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddGeneratedVector(Z_Param_GeneratedVector); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_EVENT_PARMS \
	struct EnvQueryGenerator_BlueprintBase_eventDoItemGeneration_Parms \
	{ \
		TArray<FVector> ContextLocations; \
	};


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_BlueprintBase(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase(); \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_BlueprintBase, UEnvQueryGenerator, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_BlueprintBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_BlueprintBase(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UEnvQueryGenerator_BlueprintBase(); \
public: \
	DECLARE_CLASS(UEnvQueryGenerator_BlueprintBase, UEnvQueryGenerator, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_BlueprintBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator_BlueprintBase(UEnvQueryGenerator_BlueprintBase&&); \
	NO_API UEnvQueryGenerator_BlueprintBase(const UEnvQueryGenerator_BlueprintBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvQueryGenerator_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvQueryGenerator_BlueprintBase(UEnvQueryGenerator_BlueprintBase&&); \
	NO_API UEnvQueryGenerator_BlueprintBase(const UEnvQueryGenerator_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvQueryGenerator_BlueprintBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_BlueprintBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_BlueprintBase)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_16_PROLOG \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_EVENT_PARMS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryGenerator_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
