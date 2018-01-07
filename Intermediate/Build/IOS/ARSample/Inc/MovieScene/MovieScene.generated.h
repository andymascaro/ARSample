// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieScene_generated_h
#error "MovieScene.generated.h already included, missing '#pragma once' in MovieScene.h"
#endif
#define MOVIESCENE_MovieScene_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_64_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_42_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_27_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieScene(); \
public: \
	DECLARE_CLASS(UMovieScene, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScene) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieScene(); \
public: \
	DECLARE_CLASS(UMovieScene, UMovieSceneSignedObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScene) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScene(UMovieScene&&); \
	NO_API UMovieScene(const UMovieScene&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScene(UMovieScene&&); \
	NO_API UMovieScene(const UMovieScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScene); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene)


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spawnables() { return STRUCT_OFFSET(UMovieScene, Spawnables); } \
	FORCEINLINE static uint32 __PPO__Possessables() { return STRUCT_OFFSET(UMovieScene, Possessables); } \
	FORCEINLINE static uint32 __PPO__ObjectBindings() { return STRUCT_OFFSET(UMovieScene, ObjectBindings); } \
	FORCEINLINE static uint32 __PPO__MasterTracks() { return STRUCT_OFFSET(UMovieScene, MasterTracks); } \
	FORCEINLINE static uint32 __PPO__CameraCutTrack() { return STRUCT_OFFSET(UMovieScene, CameraCutTrack); } \
	FORCEINLINE static uint32 __PPO__SelectionRange() { return STRUCT_OFFSET(UMovieScene, SelectionRange); } \
	FORCEINLINE static uint32 __PPO__PlaybackRange() { return STRUCT_OFFSET(UMovieScene, PlaybackRange); } \
	FORCEINLINE static uint32 __PPO__bForceFixedFrameIntervalPlayback() { return STRUCT_OFFSET(UMovieScene, bForceFixedFrameIntervalPlayback); } \
	FORCEINLINE static uint32 __PPO__FixedFrameInterval() { return STRUCT_OFFSET(UMovieScene, FixedFrameInterval); } \
	FORCEINLINE static uint32 __PPO__InTime_DEPRECATED() { return STRUCT_OFFSET(UMovieScene, InTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__OutTime_DEPRECATED() { return STRUCT_OFFSET(UMovieScene, OutTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__StartTime_DEPRECATED() { return STRUCT_OFFSET(UMovieScene, StartTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__EndTime_DEPRECATED() { return STRUCT_OFFSET(UMovieScene, EndTime_DEPRECATED); }


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_84_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieScene_h_88_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
