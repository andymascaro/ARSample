// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneSubSection_generated_h
#error "MovieSceneSubSection.generated.h already included, missing '#pragma once' in MovieSceneSubSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSubSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneSubSection(); \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneSubSection(); \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSubSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneSubSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartOffset_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TimeScale_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PrerollTime_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SubSequence() { return STRUCT_OFFSET(UMovieSceneSubSection, SubSequence); } \
	FORCEINLINE static uint32 __PPO__ActorToRecord() { return STRUCT_OFFSET(UMovieSceneSubSection, ActorToRecord); } \
	FORCEINLINE static uint32 __PPO__TargetSequenceName() { return STRUCT_OFFSET(UMovieSceneSubSection, TargetSequenceName); } \
	FORCEINLINE static uint32 __PPO__TargetPathToRecordTo() { return STRUCT_OFFSET(UMovieSceneSubSection, TargetPathToRecordTo); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_26_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSubSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
