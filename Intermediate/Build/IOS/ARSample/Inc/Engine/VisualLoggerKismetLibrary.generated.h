// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FBox;
struct FLinearColor;
struct FVector;
#ifdef ENGINE_VisualLoggerKismetLibrary_generated_h
#error "VisualLoggerKismetLibrary.generated.h already included, missing '#pragma once' in VisualLoggerKismetLibrary.h"
#endif
#define ENGINE_VisualLoggerKismetLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogBox) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FBox,Z_Param_BoxShape); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogText) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_PROPERTY(UNameProperty,Z_Param_LogCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary(); \
public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUVisualLoggerKismetLibrary(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary(); \
public: \
	DECLARE_CLASS(UVisualLoggerKismetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerKismetLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&); \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerKismetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary&&); \
	ENGINE_API UVisualLoggerKismetLibrary(const UVisualLoggerKismetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerKismetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerKismetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerKismetLibrary)


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VisualLoggerKismetLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
