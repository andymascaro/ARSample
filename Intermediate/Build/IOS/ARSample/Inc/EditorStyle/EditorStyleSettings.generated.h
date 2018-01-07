// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSTYLE_EditorStyleSettings_generated_h
#error "EditorStyleSettings.generated.h already included, missing '#pragma once' in EditorStyleSettings.h"
#endif
#define EDITORSTYLE_EditorStyleSettings_generated_h

#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_RPC_WRAPPERS
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStyleSettings(); \
	friend EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings(); \
public: \
	DECLARE_CLASS(UEditorStyleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/EditorStyle"), NO_API) \
	DECLARE_SERIALIZER(UEditorStyleSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUEditorStyleSettings(); \
	friend EDITORSTYLE_API class UClass* Z_Construct_UClass_UEditorStyleSettings(); \
public: \
	DECLARE_CLASS(UEditorStyleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/EditorStyle"), NO_API) \
	DECLARE_SERIALIZER(UEditorStyleSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStyleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStyleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStyleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStyleSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStyleSettings(UEditorStyleSettings&&); \
	NO_API UEditorStyleSettings(const UEditorStyleSettings&); \
public:


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStyleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStyleSettings(UEditorStyleSettings&&); \
	NO_API UEditorStyleSettings(const UEditorStyleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStyleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStyleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStyleSettings)


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_51_PROLOG
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_RPC_WRAPPERS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_INCLASS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorStyleSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h


#define FOREACH_ENUM_EASSETEDITOROPENLOCATION(op) \
	op(EAssetEditorOpenLocation::Default) \
	op(EAssetEditorOpenLocation::NewWindow) \
	op(EAssetEditorOpenLocation::MainWindow) \
	op(EAssetEditorOpenLocation::ContentBrowser) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrNewWindow) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrMainWindow) 
#define FOREACH_ENUM_ECOLORVISIONDEFICIENCY(op) \
	op(CVD_NormalVision) \
	op(CVD_Deuteranomly) \
	op(CVD_Deuteranopia) \
	op(CVD_Protanomly) \
	op(CVD_Protanopia) \
	op(CVD_Tritanomaly) \
	op(CVD_Tritanopia) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
