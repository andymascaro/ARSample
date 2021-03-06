// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsSerializer_generated_h
#error "PhysicsSerializer.generated.h already included, missing '#pragma once' in PhysicsSerializer.h"
#endif
#define ENGINE_PhysicsSerializer_generated_h

#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSerializer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPhysicsSerializer(); \
public: \
	DECLARE_CLASS(UPhysicsSerializer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSerializer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSerializer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPhysicsSerializer(); \
public: \
	DECLARE_CLASS(UPhysicsSerializer, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSerializer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSerializer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSerializer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSerializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSerializer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsSerializer(UPhysicsSerializer&&); \
	ENGINE_API UPhysicsSerializer(const UPhysicsSerializer&); \
public:


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSerializer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsSerializer(UPhysicsSerializer&&); \
	ENGINE_API UPhysicsSerializer(const UPhysicsSerializer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSerializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSerializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSerializer)


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_30_PROLOG
#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_INCLASS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSerializer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_PhysicsSerializer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
