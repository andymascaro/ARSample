// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodySetup_generated_h
#error "BodySetup.generated.h already included, missing '#pragma once' in BodySetup.h"
#endif
#define ENGINE_BodySetup_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBodySetup(); \
public: \
	DECLARE_CLASS(UBodySetup, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBodySetup(); \
public: \
	DECLARE_CLASS(UBodySetup, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_127_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_130_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodySetup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
