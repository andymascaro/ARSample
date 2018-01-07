// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CINEMATICCAMERA_CineCameraComponent_generated_h
#error "CineCameraComponent.generated.h already included, missing '#pragma once' in CineCameraComponent.h"
#endif
#define CINEMATICCAMERA_CineCameraComponent_generated_h

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_149_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_125_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_97_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_61_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_45_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_20_GENERATED_BODY \
	friend CINEMATICCAMERA_API class UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings(); \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLensPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLensPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetLensPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmbackPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFilmbackPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmbackPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetFilmbackPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLensPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetLensPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetLensPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFilmbackPresetByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPresetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFilmbackPresetByName(Z_Param_InPresetName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilmbackPresetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetFilmbackPresetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVerticalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVerticalFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHorizontalFieldOfView(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend CINEMATICCAMERA_API class UClass* Z_Construct_UClass_UCineCameraComponent(); \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_INCLASS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend CINEMATICCAMERA_API class UClass* Z_Construct_UClass_UCineCameraComponent(); \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public:


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineCameraComponent)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FilmbackPresets() { return STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets); } \
	FORCEINLINE static uint32 __PPO__LensPresets() { return STRUCT_OFFSET(UCineCameraComponent, LensPresets); } \
	FORCEINLINE static uint32 __PPO__DefaultFilmbackPresetName() { return STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName); } \
	FORCEINLINE static uint32 __PPO__DefaultLensPresetName() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFocalLength() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFStop() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop); }


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_202_PROLOG
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_RPC_WRAPPERS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_INCLASS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h


#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::None) \
	op(ECameraFocusMethod::Manual) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
