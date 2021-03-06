// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParticleSection_generated_h
#error "MovieSceneParticleSection.generated.h already included, missing '#pragma once' in MovieSceneParticleSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneParticleSection(); \
public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend MOVIESCENETRACKS_API class UClass* Z_Construct_UClass_UMovieSceneParticleSection(); \
public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(UMovieSceneParticleSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(UMovieSceneParticleSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParticleKeys() { return STRUCT_OFFSET(UMovieSceneParticleSection, ParticleKeys); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_31_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneParticleSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h


#define FOREACH_ENUM_EPARTICLEKEY(op) \
	op(EParticleKey::Activate) \
	op(EParticleKey::Deactivate) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
