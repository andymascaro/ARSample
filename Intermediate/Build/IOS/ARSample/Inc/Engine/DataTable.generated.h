// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataTable_generated_h
#error "DataTable.generated.h already included, missing '#pragma once' in DataTable.h"
#endif
#define ENGINE_DataTable_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_339_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_272_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_34_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataTable(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataTable(); \
public: \
	DECLARE_CLASS(UDataTable, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUDataTable(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UDataTable(); \
public: \
	DECLARE_CLASS(UDataTable, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataTable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataTable(UDataTable&&); \
	ENGINE_API UDataTable(const UDataTable&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataTable(UDataTable&&); \
	ENGINE_API UDataTable(const UDataTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataTable)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_54_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
