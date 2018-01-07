// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphPin_generated_h
#error "EdGraphPin.generated.h already included, missing '#pragma once' in EdGraphPin.h"
#endif
#define ENGINE_EdGraphPin_generated_h

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_250_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__OwningNode() { return STRUCT_OFFSET(FEdGraphPinReference, OwningNode); } \
	FORCEINLINE static uint32 __PPO__PinId() { return STRUCT_OFFSET(FEdGraphPinReference, PinId); }


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_85_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_21_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEdGraphPin_Deprecated(); \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEdGraphPin_Deprecated(); \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_560_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_563_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphPin_Deprecated."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h


#define FOREACH_ENUM_EBLUEPRINTPINSTYLETYPE(op) \
	op(BPST_Original) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
