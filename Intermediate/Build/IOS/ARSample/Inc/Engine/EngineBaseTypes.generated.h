// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineBaseTypes_generated_h
#error "EngineBaseTypes.generated.h already included, missing '#pragma once' in EngineBaseTypes.h"
#endif
#define ENGINE_EngineBaseTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_961_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_745_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FURL(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_504_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_455_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_423_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction(); \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_168_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTickFunction(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_112_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineBaseTypes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEngineBaseTypes(); \
public: \
	DECLARE_CLASS(UEngineBaseTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineBaseTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_INCLASS \
private: \
	static void StaticRegisterNativesUEngineBaseTypes(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UEngineBaseTypes(); \
public: \
	DECLARE_CLASS(UEngineBaseTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineBaseTypes) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineBaseTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineBaseTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineBaseTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineBaseTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineBaseTypes(UEngineBaseTypes&&); \
	NO_API UEngineBaseTypes(const UEngineBaseTypes&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineBaseTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineBaseTypes(UEngineBaseTypes&&); \
	NO_API UEngineBaseTypes(const UEngineBaseTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineBaseTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineBaseTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineBaseTypes)


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_999_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h_1002_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EngineBaseTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_EngineBaseTypes_h


#define FOREACH_ENUM_EVIEWMODEINDEX(op) \
	op(VMI_BrushWireframe) \
	op(VMI_Wireframe) \
	op(VMI_Unlit) \
	op(VMI_Lit) \
	op(VMI_Lit_DetailLighting) \
	op(VMI_LightingOnly) \
	op(VMI_LightComplexity) \
	op(VMI_ShaderComplexity) \
	op(VMI_LightmapDensity) \
	op(VMI_LitLightmapDensity) \
	op(VMI_ReflectionOverride) \
	op(VMI_VisualizeBuffer) \
	op(VMI_StationaryLightOverlap) \
	op(VMI_CollisionPawn) \
	op(VMI_CollisionVisibility) \
	op(VMI_LODColoration) \
	op(VMI_QuadOverdraw) \
	op(VMI_PrimitiveDistanceAccuracy) \
	op(VMI_MeshUVDensityAccuracy) \
	op(VMI_ShaderComplexityWithQuadOverdraw) \
	op(VMI_HLODColoration) \
	op(VMI_GroupLODColoration) \
	op(VMI_MaterialTextureScaleAccuracy) \
	op(VMI_RequiredTextureResolution) \
	op(VMI_Max) 
#define FOREACH_ENUM_EDEMOPLAYFAILURE(op) \
	op(EDemoPlayFailure::Generic) \
	op(EDemoPlayFailure::DemoNotFound) \
	op(EDemoPlayFailure::Corrupt) 
#define FOREACH_ENUM_ETRAVELTYPE(op) \
	op(TRAVEL_Absolute) \
	op(TRAVEL_Partial) \
	op(TRAVEL_Relative) 
#define FOREACH_ENUM_ETRAVELFAILURE(op) \
	op(ETravelFailure::NoLevel) \
	op(ETravelFailure::LoadMapFailure) \
	op(ETravelFailure::InvalidURL) \
	op(ETravelFailure::PackageMissing) \
	op(ETravelFailure::PackageVersion) \
	op(ETravelFailure::NoDownload) \
	op(ETravelFailure::TravelFailure) \
	op(ETravelFailure::CheatCommands) \
	op(ETravelFailure::PendingNetGameCreateFailure) \
	op(ETravelFailure::CloudSaveFailure) \
	op(ETravelFailure::ServerTravelFailure) 
#define FOREACH_ENUM_ENETWORKLAGSTATE(op) \
	op(ENetworkLagState::NotLagging) 
#define FOREACH_ENUM_ENETWORKFAILURE(op) \
	op(ENetworkFailure::NetDriverAlreadyExists) \
	op(ENetworkFailure::NetDriverCreateFailure) \
	op(ENetworkFailure::NetDriverListenFailure) \
	op(ENetworkFailure::ConnectionLost) \
	op(ENetworkFailure::ConnectionTimeout) \
	op(ENetworkFailure::FailureReceived) \
	op(ENetworkFailure::OutdatedClient) \
	op(ENetworkFailure::OutdatedServer) \
	op(ENetworkFailure::PendingConnectionFailure) \
	op(ENetworkFailure::NetGuidMismatch) 
#define FOREACH_ENUM_ETICKINGGROUP(op) \
	op(TG_PrePhysics) \
	op(TG_StartPhysics) \
	op(TG_DuringPhysics) \
	op(TG_EndPhysics) \
	op(TG_PostPhysics) \
	op(TG_PostUpdateWork) \
	op(TG_LastDemotable) \
	op(TG_NewlySpawned) 
#define FOREACH_ENUM_EMOUSELOCKMODE(op) \
	op(EMouseLockMode::DoNotLock) \
	op(EMouseLockMode::LockOnCapture) 
#define FOREACH_ENUM_EMOUSECAPTUREMODE(op) \
	op(EMouseCaptureMode::NoCapture) \
	op(EMouseCaptureMode::CapturePermanently) \
	op(EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown) \
	op(EMouseCaptureMode::CaptureDuringMouseDown) 
#define FOREACH_ENUM_EINPUTEVENT(op) \
	op(IE_Pressed) \
	op(IE_Released) \
	op(IE_Repeat) \
	op(IE_DoubleClick) \
	op(IE_Axis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
