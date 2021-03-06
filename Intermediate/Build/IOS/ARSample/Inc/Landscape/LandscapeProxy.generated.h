// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
class ULandscapeLayerInfoObject;
#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_150_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_97_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerStruct(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_65_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_40_GENERATED_BODY \
	friend LANDSCAPE_API class UScriptStruct* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage(); \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditorApplySpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisions); \
		P_GET_UBOOL(Z_Param_bRaiseHeights); \
		P_GET_UBOOL(Z_Param_bLowerHeights); \
		P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EditorApplySpline(Z_Param_InSplineComponent,Z_Param_StartWidth,Z_Param_EndWidth,Z_Param_StartSideFalloff,Z_Param_EndSideFalloff,Z_Param_StartRoll,Z_Param_EndRoll,Z_Param_NumSubdivisions,Z_Param_bRaiseHeights,Z_Param_bLowerHeights,Z_Param_PaintLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLODDistanceFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLODDistanceFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeLODDistanceFactor(Z_Param_InLODDistanceFactor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditorApplySpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndWidth); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndSideFalloff); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisions); \
		P_GET_UBOOL(Z_Param_bRaiseHeights); \
		P_GET_UBOOL(Z_Param_bLowerHeights); \
		P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EditorApplySpline(Z_Param_InSplineComponent,Z_Param_StartWidth,Z_Param_EndWidth,Z_Param_StartSideFalloff,Z_Param_EndSideFalloff,Z_Param_StartRoll,Z_Param_EndRoll,Z_Param_NumSubdivisions,Z_Param_bRaiseHeights,Z_Param_bLowerHeights,Z_Param_PaintLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLODDistanceFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InLODDistanceFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeLODDistanceFactor(Z_Param_InLODDistanceFactor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ALandscapeProxy(); \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend LANDSCAPE_API class UClass* Z_Construct_UClass_ALandscapeProxy(); \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LandscapeGuid() { return STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_329_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_332_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h


#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) 
#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) 
#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) 
#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
