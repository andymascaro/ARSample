// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h
#error "MovieScene3DTransformSection.generated.h already included, missing '#pragma once' in MovieScene3DTransformSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Mask() { return STRUCT_OFFSET(FMovieSceneTransformMask, Mask); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_166_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_143_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_120_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_97_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieScene3DTransformSection(); \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieScene3DTransformSection(); \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(UMovieScene3DTransformSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const UMovieScene3DTransformSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(UMovieScene3DTransformSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const UMovieScene3DTransformSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformMask() { return STRUCT_OFFSET(UMovieScene3DTransformSection, TransformMask); } \
	FORCEINLINE static uint32 __PPO__Translation() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Translation); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Rotation); } \
	FORCEINLINE static uint32 __PPO__Scale() { return STRUCT_OFFSET(UMovieScene3DTransformSection, Scale); } \
	FORCEINLINE static uint32 __PPO__ManualWeight() { return STRUCT_OFFSET(UMovieScene3DTransformSection, ManualWeight); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_272_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_277_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DTransformSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h


#define FOREACH_ENUM_ESHOW3DTRAJECTORY(op) \
	op(EShow3DTrajectory::EST_OnlyWhenSelected) \
	op(EShow3DTrajectory::EST_Always) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
