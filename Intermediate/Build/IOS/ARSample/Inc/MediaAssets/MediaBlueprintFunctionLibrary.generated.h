// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaCaptureDevice;
#ifdef MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h
#error "MediaBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MediaBlueprintFunctionLibrary.h"
#endif
#define MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h

#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_84_GENERATED_BODY \
	friend MEDIAASSETS_API class UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice(); \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnumerateWebcamCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateVideoCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateAudioCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnumerateWebcamCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateVideoCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnumerateAudioCaptureDevices) \
	{ \
		P_GET_TARRAY_REF(FMediaCaptureDevice,Z_Param_Out_OutDevices); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Filter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(Z_Param_Out_OutDevices,Z_Param_Filter); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaBlueprintFunctionLibrary(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMediaBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUMediaBlueprintFunctionLibrary(); \
	friend MEDIAASSETS_API class UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMediaBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBlueprintFunctionLibrary(UMediaBlueprintFunctionLibrary&&); \
	NO_API UMediaBlueprintFunctionLibrary(const UMediaBlueprintFunctionLibrary&); \
public:


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBlueprintFunctionLibrary(UMediaBlueprintFunctionLibrary&&); \
	NO_API UMediaBlueprintFunctionLibrary(const UMediaBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBlueprintFunctionLibrary)


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_108_PROLOG
#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_INCLASS \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Private_Misc_MediaBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EMEDIAWEBCAMCAPTUREDEVICEFILTER(op) \
	op(EMediaWebcamCaptureDeviceFilter::DepthSensor) \
	op(EMediaWebcamCaptureDeviceFilter::Front) \
	op(EMediaWebcamCaptureDeviceFilter::Rear) 
#define FOREACH_ENUM_EMEDIAVIDEOCAPTUREDEVICEFILTER(op) \
	op(EMediaVideoCaptureDeviceFilter::Card) \
	op(EMediaVideoCaptureDeviceFilter::Software) \
	op(EMediaVideoCaptureDeviceFilter::Unknown) 
#define FOREACH_ENUM_EMEDIAAUDIOCAPTUREDEVICEFILTER(op) \
	op(EMediaAudioCaptureDeviceFilter::Card) \
	op(EMediaAudioCaptureDeviceFilter::Microphone) \
	op(EMediaAudioCaptureDeviceFilter::Software) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
