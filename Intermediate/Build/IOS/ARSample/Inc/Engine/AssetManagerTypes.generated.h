// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManagerTypes_generated_h
#error "AssetManagerTypes.generated.h already included, missing '#pragma once' in AssetManagerTypes.h"
#endif
#define ENGINE_AssetManagerTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_78_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AssetBaseClass() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass); } \
	FORCEINLINE static uint32 __PPO__Directories() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories); } \
	FORCEINLINE static uint32 __PPO__SpecificAssets() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets); }


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_33_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h


#define FOREACH_ENUM_EPRIMARYASSETCOOKRULE(op) \
	op(EPrimaryAssetCookRule::Unknown) \
	op(EPrimaryAssetCookRule::NeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentCook) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
