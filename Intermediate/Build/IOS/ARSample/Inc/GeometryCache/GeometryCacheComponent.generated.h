// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
#ifdef GEOMETRYCACHE_GeometryCacheComponent_generated_h
#error "GeometryCacheComponent.generated.h already included, missing '#pragma once' in GeometryCacheComponent.h"
#endif
#define GEOMETRYCACHE_GeometryCacheComponent_generated_h

#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_19_GENERATED_BODY \
	friend GEOMETRYCACHE_API class UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData(); \
	GEOMETRYCACHE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStartTimeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTimeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartTimeOffset(Z_Param_NewStartTimeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTimeOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetStartTimeOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryCache) \
	{ \
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetGeometryCache(Z_Param_NewGeomCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversedFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReversedFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStartTimeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTimeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartTimeOffset(Z_Param_NewStartTimeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTimeOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetStartTimeOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryCache) \
	{ \
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SetGeometryCache(Z_Param_NewGeomCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPlaybackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlayingReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversedFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReversedFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheComponent(); \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend GEOMETRYCACHE_API class UClass* Z_Construct_UClass_UGeometryCacheComponent(); \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public:


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent)


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRunning() { return STRUCT_OFFSET(UGeometryCacheComponent, bRunning); } \
	FORCEINLINE static uint32 __PPO__bLooping() { return STRUCT_OFFSET(UGeometryCacheComponent, bLooping); } \
	FORCEINLINE static uint32 __PPO__StartTimeOffset() { return STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset); } \
	FORCEINLINE static uint32 __PPO__PlaybackSpeed() { return STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed); } \
	FORCEINLINE static uint32 __PPO__NumTracks() { return STRUCT_OFFSET(UGeometryCacheComponent, NumTracks); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime); }


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_38_PROLOG
#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_INCLASS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GeometryCache_Classes_GeometryCacheComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
