// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_ConsoleSettings_generated_h
#error "ConsoleSettings.generated.h already included, missing '#pragma once' in ConsoleSettings.h"
#endif
#define ENGINESETTINGS_ConsoleSettings_generated_h

#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_17_GENERATED_BODY \
	friend ENGINESETTINGS_API class UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand(); \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS
#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleSettings(); \
	friend ENGINESETTINGS_API class UClass* Z_Construct_UClass_UConsoleSettings(); \
public: \
	DECLARE_CLASS(UConsoleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleSettings(); \
	friend ENGINESETTINGS_API class UClass* Z_Construct_UClass_UConsoleSettings(); \
public: \
	DECLARE_CLASS(UConsoleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleSettings(UConsoleSettings&&); \
	NO_API UConsoleSettings(const UConsoleSettings&); \
public:


#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleSettings(UConsoleSettings&&); \
	NO_API UConsoleSettings(const UConsoleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleSettings)


#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_63_PROLOG
#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConsoleSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EngineSettings_Classes_ConsoleSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
