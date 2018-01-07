// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCACHE_GeometryCache_generated_h
#error "GeometryCache.generated.h already included, missing '#pragma once' in GeometryCache.h"
#endif
#define GEOMETRYCACHE_GeometryCache_generated_h

#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCache(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCache(); \
public: \
	DECLARE_CLASS(UGeometryCache, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCache) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCache*>(this); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCache(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCache(); \
public: \
	DECLARE_CLASS(UGeometryCache, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCache) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCache*>(this); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCache(UGeometryCache&&); \
	NO_API UGeometryCache(const UGeometryCache&); \
public:


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCache(UGeometryCache&&); \
	NO_API UGeometryCache(const UGeometryCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCache); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCache)


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_19_PROLOG
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_INCLASS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCache."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Classes_GeometryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
