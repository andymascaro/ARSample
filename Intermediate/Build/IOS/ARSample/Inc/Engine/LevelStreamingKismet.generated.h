// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
struct FRotator;
class ULevelStreamingKismet;
#ifdef ENGINE_LevelStreamingKismet_generated_h
#error "LevelStreamingKismet.generated.h already included, missing '#pragma once' in LevelStreamingKismet.h"
#endif
#define ENGINE_LevelStreamingKismet_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadLevelInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreamingKismet**)Z_Param__Result=ULevelStreamingKismet::LoadLevelInstance(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_bOutSuccess); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadLevelInstance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreamingKismet**)Z_Param__Result=ULevelStreamingKismet::LoadLevelInstance(Z_Param_WorldContextObject,Z_Param_LevelName,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_bOutSuccess); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingKismet(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelStreamingKismet(); \
public: \
	DECLARE_CLASS(ULevelStreamingKismet, ULevelStreaming, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreamingKismet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingKismet(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelStreamingKismet(); \
public: \
	DECLARE_CLASS(ULevelStreamingKismet, ULevelStreaming, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreamingKismet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingKismet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingKismet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingKismet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingKismet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelStreamingKismet(ULevelStreamingKismet&&); \
	ENGINE_API ULevelStreamingKismet(const ULevelStreamingKismet&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingKismet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelStreamingKismet(ULevelStreamingKismet&&); \
	ENGINE_API ULevelStreamingKismet(const ULevelStreamingKismet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingKismet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingKismet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingKismet)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreamingKismet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingKismet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
