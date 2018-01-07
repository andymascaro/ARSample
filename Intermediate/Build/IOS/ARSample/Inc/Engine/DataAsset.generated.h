// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataAsset_generated_h
#error "DataAsset.generated.h already included, missing '#pragma once' in DataAsset.h"
#endif
#define ENGINE_DataAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataAsset(); \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataAsset(); \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NativeClass() { return STRUCT_OFFSET(UDataAsset, NativeClass); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPrimaryDataAsset(); \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UPrimaryDataAsset(); \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_33_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
