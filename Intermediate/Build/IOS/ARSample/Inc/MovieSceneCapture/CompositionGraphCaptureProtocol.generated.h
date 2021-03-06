// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h
#error "CompositionGraphCaptureProtocol.generated.h already included, missing '#pragma once' in CompositionGraphCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_31_GENERATED_BODY \
	friend MOVIESCENECAPTURE_API class UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureSettings(); \
	friend MOVIESCENECAPTURE_API class UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings(); \
public: \
	DECLARE_CLASS(UCompositionGraphCaptureSettings, UMovieSceneCaptureProtocolSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureSettings(); \
	friend MOVIESCENECAPTURE_API class UClass* Z_Construct_UClass_UCompositionGraphCaptureSettings(); \
public: \
	DECLARE_CLASS(UCompositionGraphCaptureSettings, UMovieSceneCaptureProtocolSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositionGraphCaptureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositionGraphCaptureSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositionGraphCaptureSettings(UCompositionGraphCaptureSettings&&); \
	NO_API UCompositionGraphCaptureSettings(const UCompositionGraphCaptureSettings&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositionGraphCaptureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositionGraphCaptureSettings(UCompositionGraphCaptureSettings&&); \
	NO_API UCompositionGraphCaptureSettings(const UCompositionGraphCaptureSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositionGraphCaptureSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureSettings)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_37_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h


#define FOREACH_ENUM_EHDRCAPTUREGAMUT(op) \
	op(HCGM_Rec709) \
	op(HCGM_P3DCI) \
	op(HCGM_Rec2020) \
	op(HCGM_ACES) \
	op(HCGM_ACEScg) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
