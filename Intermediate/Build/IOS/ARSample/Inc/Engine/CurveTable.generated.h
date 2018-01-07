// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveTable_generated_h
#error "CurveTable.generated.h already included, missing '#pragma once' in CurveTable.h"
#endif
#define ENGINE_CurveTable_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_141_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveTable(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCurveTable(); \
public: \
	DECLARE_CLASS(UCurveTable, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCurveTable(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCurveTable(); \
public: \
	DECLARE_CLASS(UCurveTable, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveTable(UCurveTable&&); \
	ENGINE_API UCurveTable(const UCurveTable&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveTable(UCurveTable&&); \
	ENGINE_API UCurveTable(const UCurveTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTable)


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS