// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h
#error "GameplayDebuggerConfig.generated.h already included, missing '#pragma once' in GameplayDebuggerConfig.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_80_GENERATED_BODY \
	friend GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig(); \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_48_GENERATED_BODY \
	friend GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig(); \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_24_GENERATED_BODY \
	friend GAMEPLAYDEBUGGER_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig(); \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_RPC_WRAPPERS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerConfig(); \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend GAMEPLAYDEBUGGER_API class UClass* Z_Construct_UClass_UGameplayDebuggerConfig(); \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public:


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_94_PROLOG
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_RPC_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_INCLASS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerConfig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h


#define FOREACH_ENUM_EGAMEPLAYDEBUGGEROVERRIDEMODE(op) \
	op(EGameplayDebuggerOverrideMode::Enable) \
	op(EGameplayDebuggerOverrideMode::Disable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
