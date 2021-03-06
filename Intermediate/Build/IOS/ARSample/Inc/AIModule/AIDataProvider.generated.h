// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIDataProvider_generated_h
#error "AIDataProvider.generated.h already included, missing '#pragma once' in AIDataProvider.h"
#endif
#define AIMODULE_AIDataProvider_generated_h

#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_124_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_111_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_98_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_87_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_74_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_27_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CachedProperty() { return STRUCT_OFFSET(FAIDataProviderValue, CachedProperty); }


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAIDataProvider(); \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UAIDataProvider(); \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider)


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_134_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_137_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIDataProvider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
