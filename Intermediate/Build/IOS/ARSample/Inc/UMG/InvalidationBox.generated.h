// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_InvalidationBox_generated_h
#error "InvalidationBox.generated.h already included, missing '#pragma once' in InvalidationBox.h"
#endif
#define UMG_InvalidationBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCanCache) \
	{ \
		P_GET_UBOOL(Z_Param_CanCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCanCache(Z_Param_CanCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCanCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvalidateCache(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCanCache) \
	{ \
		P_GET_UBOOL(Z_Param_CanCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCanCache(Z_Param_CanCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetCanCache(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateCache) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InvalidateCache(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvalidationBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UInvalidationBox(); \
public: \
	DECLARE_CLASS(UInvalidationBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInvalidationBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInvalidationBox(); \
	friend UMG_API class UClass* Z_Construct_UClass_UInvalidationBox(); \
public: \
	DECLARE_CLASS(UInvalidationBox, UContentWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInvalidationBox) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvalidationBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvalidationBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvalidationBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvalidationBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvalidationBox(UInvalidationBox&&); \
	NO_API UInvalidationBox(const UInvalidationBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvalidationBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvalidationBox(UInvalidationBox&&); \
	NO_API UInvalidationBox(const UInvalidationBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvalidationBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvalidationBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvalidationBox)


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCanCache() { return STRUCT_OFFSET(UInvalidationBox, bCanCache); } \
	FORCEINLINE static uint32 __PPO__CacheRelativeTransforms() { return STRUCT_OFFSET(UInvalidationBox, CacheRelativeTransforms); }


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InvalidationBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
