// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveFloat_generated_h
#error "CurveFloat.generated.h already included, missing '#pragma once' in CurveFloat.h"
#endif
#define ENGINE_CurveFloat_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_14_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFloatValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloatValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFloatValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetFloatValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveFloat(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCurveFloat(); \
public: \
	DECLARE_CLASS(UCurveFloat, UCurveBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveFloat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveFloat(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCurveFloat(); \
public: \
	DECLARE_CLASS(UCurveFloat, UCurveBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveFloat) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveFloat(UCurveFloat&&); \
	NO_API UCurveFloat(const UCurveFloat&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveFloat(UCurveFloat&&); \
	NO_API UCurveFloat(const UCurveFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloat)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveFloat."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
