// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshReductionSettings_generated_h
#error "SkeletalMeshReductionSettings.generated.h already included, missing '#pragma once' in SkeletalMeshReductionSettings.h"
#endif
#define ENGINE_SkeletalMeshReductionSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_15_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ScreenSize() { return STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ScreenSize); } \
	FORCEINLINE static uint32 __PPO__OptimizationSettings() { return STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, OptimizationSettings); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshReductionSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshReductionSettings(); \
public: \
	DECLARE_CLASS(USkeletalMeshReductionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshReductionSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshReductionSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshReductionSettings(); \
public: \
	DECLARE_CLASS(USkeletalMeshReductionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshReductionSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshReductionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshReductionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshReductionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshReductionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshReductionSettings(USkeletalMeshReductionSettings&&); \
	ENGINE_API USkeletalMeshReductionSettings(const USkeletalMeshReductionSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshReductionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshReductionSettings(USkeletalMeshReductionSettings&&); \
	ENGINE_API USkeletalMeshReductionSettings(const USkeletalMeshReductionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshReductionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshReductionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshReductionSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(USkeletalMeshReductionSettings, Settings); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_37_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshReductionSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshReductionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
