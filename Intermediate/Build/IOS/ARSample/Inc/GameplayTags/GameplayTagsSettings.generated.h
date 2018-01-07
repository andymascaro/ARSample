// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagsSettings_generated_h
#error "GameplayTagsSettings.generated.h already included, missing '#pragma once' in GameplayTagsSettings.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsSettings_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_34_GENERATED_BODY \
	friend GAMEPLAYTAGS_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_16_GENERATED_BODY \
	friend GAMEPLAYTAGS_API class UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsList(); \
public: \
	DECLARE_CLASS(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsList(); \
public: \
	DECLARE_CLASS(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsList(UGameplayTagsList&&); \
	NO_API UGameplayTagsList(const UGameplayTagsList&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsList(UGameplayTagsList&&); \
	NO_API UGameplayTagsList(const UGameplayTagsList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_49_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsSettings(); \
public: \
	DECLARE_CLASS(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsSettings(); \
public: \
	DECLARE_CLASS(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsSettings(UGameplayTagsSettings&&); \
	NO_API UGameplayTagsSettings(const UGameplayTagsSettings&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsSettings(UGameplayTagsSettings&&); \
	NO_API UGameplayTagsSettings(const UGameplayTagsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_80_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings(); \
public: \
	DECLARE_CLASS(UGameplayTagsDeveloperSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend GAMEPLAYTAGS_API class UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings(); \
public: \
	DECLARE_CLASS(UGameplayTagsDeveloperSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&); \
	NO_API UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&); \
	NO_API UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsDeveloperSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_126_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsDeveloperSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
