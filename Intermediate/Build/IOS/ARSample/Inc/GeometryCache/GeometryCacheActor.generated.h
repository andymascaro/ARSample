// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCacheComponent;
#ifdef GEOMETRYCACHE_GeometryCacheActor_generated_h
#error "GeometryCacheActor.generated.h already included, missing '#pragma once' in GeometryCacheActor.h"
#endif
#define GEOMETRYCACHE_GeometryCacheActor_generated_h

#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeometryCacheComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGeometryCacheComponent**)Z_Param__Result=this->GetGeometryCacheComponent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeometryCacheComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGeometryCacheComponent**)Z_Param__Result=this->GetGeometryCacheComponent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryCacheActor(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_AGeometryCacheActor(); \
public: \
	DECLARE_CLASS(AGeometryCacheActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCacheActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryCacheActor(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_AGeometryCacheActor(); \
public: \
	DECLARE_CLASS(AGeometryCacheActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(AGeometryCacheActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCacheActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCacheActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCacheActor(AGeometryCacheActor&&); \
	NO_API AGeometryCacheActor(const AGeometryCacheActor&); \
public:


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryCacheActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryCacheActor(AGeometryCacheActor&&); \
	NO_API AGeometryCacheActor(const AGeometryCacheActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryCacheActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryCacheActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryCacheActor)


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryCacheComponent() { return STRUCT_OFFSET(AGeometryCacheActor, GeometryCacheComponent); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_13_PROLOG
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
