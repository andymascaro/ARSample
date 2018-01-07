// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IOSRUNTIMESETTINGS_IOSRuntimeSettings_generated_h
#error "IOSRuntimeSettings.generated.h already included, missing '#pragma once' in IOSRuntimeSettings.h"
#endif
#define IOSRUNTIMESETTINGS_IOSRuntimeSettings_generated_h

#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_126_GENERATED_BODY \
	friend IOSRUNTIMESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory(); \
	IOSRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_73_GENERATED_BODY \
	friend IOSRUNTIMESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath(); \
	IOSRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_RPC_WRAPPERS
#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOSRuntimeSettings(); \
	friend IOSRUNTIMESETTINGS_API class UClass* Z_Construct_UClass_UIOSRuntimeSettings(); \
public: \
	DECLARE_CLASS(UIOSRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/IOSRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(UIOSRuntimeSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUIOSRuntimeSettings(); \
	friend IOSRUNTIMESETTINGS_API class UClass* Z_Construct_UClass_UIOSRuntimeSettings(); \
public: \
	DECLARE_CLASS(UIOSRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/IOSRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(UIOSRuntimeSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOSRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOSRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOSRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOSRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOSRuntimeSettings(UIOSRuntimeSettings&&); \
	NO_API UIOSRuntimeSettings(const UIOSRuntimeSettings&); \
public:


#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOSRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOSRuntimeSettings(UIOSRuntimeSettings&&); \
	NO_API UIOSRuntimeSettings(const UIOSRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOSRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOSRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOSRuntimeSettings)


#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_176_PROLOG
#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_RPC_WRAPPERS \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h_180_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class IOSRuntimeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_IOS_IOSRuntimeSettings_Classes_IOSRuntimeSettings_h


#define FOREACH_ENUM_EIOSMETALSHADERSTANDARD(op) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_1_0) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_1_1) \
	op(EIOSMetalShaderStandard::IOSMetalSLStandard_1_2) 
#define FOREACH_ENUM_EIOSVERSION(op) \
	op(EIOSVersion::IOS_61) \
	op(EIOSVersion::IOS_7) \
	op(EIOSVersion::IOS_8) \
	op(EIOSVersion::IOS_9) \
	op(EIOSVersion::IOS_10) 
#define FOREACH_ENUM_EPOWERUSAGEFRAMERATELOCK(op) \
	op(EPowerUsageFrameRateLock::PUFRL_None) \
	op(EPowerUsageFrameRateLock::PUFRL_20) \
	op(EPowerUsageFrameRateLock::PUFRL_30) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
