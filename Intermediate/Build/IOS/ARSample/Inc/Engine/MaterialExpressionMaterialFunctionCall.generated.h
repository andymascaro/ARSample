// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialFunction;
#ifdef ENGINE_MaterialExpressionMaterialFunctionCall_generated_h
#error "MaterialExpressionMaterialFunctionCall.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialFunctionCall.h"
#endif
#define ENGINE_MaterialExpressionMaterialFunctionCall_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_52_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_23_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_NewMaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetMaterialFunction(Z_Param_NewMaterialFunction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_NewMaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetMaterialFunction(Z_Param_NewMaterialFunction); \
		P_NATIVE_END; \
	}


#else
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialFunctionCall(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall(); \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialFunctionCall, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialFunctionCall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialFunctionCall(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall(); \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialFunctionCall, UMaterialExpression, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialFunctionCall) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialFunctionCall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialFunctionCall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialFunctionCall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(UMaterialExpressionMaterialFunctionCall&&); \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const UMaterialExpressionMaterialFunctionCall&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(UMaterialExpressionMaterialFunctionCall&&); \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const UMaterialExpressionMaterialFunctionCall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialFunctionCall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialFunctionCall); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialFunctionCall)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_77_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionMaterialFunctionCall."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
