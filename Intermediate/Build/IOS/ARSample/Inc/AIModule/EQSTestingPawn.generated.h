// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EQSTestingPawn_generated_h
#error "EQSTestingPawn.generated.h already included, missing '#pragma once' in EQSTestingPawn.h"
#endif
#define AIMODULE_EQSTestingPawn_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEQSTestingPawn(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_AEQSTestingPawn(); \
public: \
	DECLARE_CLASS(AEQSTestingPawn, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AEQSTestingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEQSTestingPawn*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAEQSTestingPawn(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_AEQSTestingPawn(); \
public: \
	DECLARE_CLASS(AEQSTestingPawn, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AEQSTestingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AEQSTestingPawn*>(this); }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEQSTestingPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEQSTestingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEQSTestingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEQSTestingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEQSTestingPawn(AEQSTestingPawn&&); \
	NO_API AEQSTestingPawn(const AEQSTestingPawn&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEQSTestingPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEQSTestingPawn(AEQSTestingPawn&&); \
	NO_API AEQSTestingPawn(const AEQSTestingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEQSTestingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEQSTestingPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEQSTestingPawn)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_26_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EQSTestingPawn."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h


#define FOREACH_ENUM_EENVQUERYHIGHTLIGHTMODE(op) \
	op(EEnvQueryHightlightMode::All) \
	op(EEnvQueryHightlightMode::Best5Pct) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
