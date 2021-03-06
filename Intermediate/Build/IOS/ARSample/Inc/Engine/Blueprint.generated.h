// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Blueprint_generated_h
#error "Blueprint.generated.h already included, missing '#pragma once' in Blueprint.h"
#endif
#define ENGINE_Blueprint_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_297_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_277_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceDescription(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_214_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_189_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_123_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_91_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompilerNativizationOptions(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprint(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlueprint(); \
public: \
	DECLARE_CLASS(UBlueprint, UBlueprintCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UBlueprint, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprint(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UBlueprint(); \
public: \
	DECLARE_CLASS(UBlueprint, UBlueprintCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UBlueprint, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprint(UBlueprint&&); \
	NO_API UBlueprint(const UBlueprint&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprint(UBlueprint&&); \
	NO_API UBlueprint(const UBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bNativize_DEPRECATED() { return STRUCT_OFFSET(UBlueprint, bNativize_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_348_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Blueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h


#define FOREACH_ENUM_EBLUEPRINTNATIVIZATIONFLAG(op) \
	op(EBlueprintNativizationFlag::Disabled) \
	op(EBlueprintNativizationFlag::Dependency) 
#define FOREACH_ENUM_EBLUEPRINTCOMPILEMODE(op) \
	op(EBlueprintCompileMode::Default) \
	op(EBlueprintCompileMode::Development) 
#define FOREACH_ENUM_EBLUEPRINTTYPE(op) \
	op(BPTYPE_Normal) \
	op(BPTYPE_Const) \
	op(BPTYPE_MacroLibrary) \
	op(BPTYPE_Interface) \
	op(BPTYPE_LevelScript) \
	op(BPTYPE_FunctionLibrary) 
#define FOREACH_ENUM_EBLUEPRINTSTATUS(op) \
	op(BS_Unknown) \
	op(BS_Dirty) \
	op(BS_Error) \
	op(BS_UpToDate) \
	op(BS_BeingCreated) \
	op(BS_UpToDateWithWarnings) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
