// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneVectorSection_generated_h
#error "MovieSceneVectorSection.generated.h already included, missing '#pragma once' in MovieSceneVectorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVectorSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_116_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_95_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_74_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_45_GENERATED_BODY \
	friend MOVIESCENETRACKS_API class UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase(); \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneVectorSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneVectorSection(); \
public: \
	DECLARE_CLASS(UMovieSceneVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneVectorSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneVectorSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneVectorSection(); \
public: \
	DECLARE_CLASS(UMovieSceneVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneVectorSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVectorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVectorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVectorSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(UMovieSceneVectorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const UMovieSceneVectorSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(UMovieSceneVectorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const UMovieSceneVectorSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVectorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVectorSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVectorSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Curves() { return STRUCT_OFFSET(UMovieSceneVectorSection, Curves); } \
	FORCEINLINE static uint32 __PPO__ChannelsUsed() { return STRUCT_OFFSET(UMovieSceneVectorSection, ChannelsUsed); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_133_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_138_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneVectorSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
