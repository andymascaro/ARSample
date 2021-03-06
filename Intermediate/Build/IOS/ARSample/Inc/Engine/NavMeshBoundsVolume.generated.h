// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavMeshBoundsVolume_generated_h
#error "NavMeshBoundsVolume.generated.h already included, missing '#pragma once' in NavMeshBoundsVolume.h"
#endif
#define ENGINE_NavMeshBoundsVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavMeshBoundsVolume(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavMeshBoundsVolume(); \
public: \
	DECLARE_CLASS(ANavMeshBoundsVolume, AVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavMeshBoundsVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesANavMeshBoundsVolume(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ANavMeshBoundsVolume(); \
public: \
	DECLARE_CLASS(ANavMeshBoundsVolume, AVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ANavMeshBoundsVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBoundsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavMeshBoundsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBoundsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavMeshBoundsVolume(ANavMeshBoundsVolume&&); \
	ENGINE_API ANavMeshBoundsVolume(const ANavMeshBoundsVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ANavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ANavMeshBoundsVolume(ANavMeshBoundsVolume&&); \
	ENGINE_API ANavMeshBoundsVolume(const ANavMeshBoundsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ANavMeshBoundsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBoundsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBoundsVolume)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavMeshBoundsVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavMeshBoundsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
