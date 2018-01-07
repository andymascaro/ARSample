// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaSoundComponent_generated_h
#error "MediaSoundComponent.generated.h already included, missing '#pragma once' in MediaSoundComponent.h"
#endif
#define MEDIAASSETS_MediaSoundComponent_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_RPC_WRAPPERS
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundComponent(); \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaSoundComponent(); \
public: \
	DECLARE_CLASS(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaSoundComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaSoundComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaSoundComponent(UMediaSoundComponent&&); \
	NO_API UMediaSoundComponent(const UMediaSoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaSoundComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent)


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_44_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h


#define FOREACH_ENUM_EMEDIASOUNDCHANNELS(op) \
	op(EMediaSoundChannels::Mono) \
	op(EMediaSoundChannels::Stereo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
