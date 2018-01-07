// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSection_generated_h
#error "MovieSceneSection.generated.h already included, missing '#pragma once' in MovieSceneSection.h"
#endif
#define MOVIESCENE_MovieSceneSection_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_57_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_33_GENERATED_BODY \
	friend MOVIESCENE_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions(); \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSection(); \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend MOVIESCENE_API class UClass* Z_Construct_UClass_UMovieSceneSection(); \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UMovieSceneSection, StartTime); } \
	FORCEINLINE static uint32 __PPO__EndTime() { return STRUCT_OFFSET(UMovieSceneSection, EndTime); } \
	FORCEINLINE static uint32 __PPO__RowIndex() { return STRUCT_OFFSET(UMovieSceneSection, RowIndex); } \
	FORCEINLINE static uint32 __PPO__OverlapPriority() { return STRUCT_OFFSET(UMovieSceneSection, OverlapPriority); } \
	FORCEINLINE static uint32 __PPO__PreRollTime() { return STRUCT_OFFSET(UMovieSceneSection, PreRollTime); } \
	FORCEINLINE static uint32 __PPO__PostRollTime() { return STRUCT_OFFSET(UMovieSceneSection, PostRollTime); } \
	FORCEINLINE static uint32 __PPO__BlendType() { return STRUCT_OFFSET(UMovieSceneSection, BlendType); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_113_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_117_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h


#define FOREACH_ENUM_EMOVIESCENECOMPLETIONMODE(op) \
	op(EMovieSceneCompletionMode::KeepState) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
