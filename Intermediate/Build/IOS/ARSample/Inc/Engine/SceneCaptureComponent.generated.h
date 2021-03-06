// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
#ifdef ENGINE_SceneCaptureComponent_generated_h
#error "SceneCaptureComponent.generated.h already included, missing '#pragma once' in SceneCaptureComponent.h"
#endif
#define ENGINE_SceneCaptureComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_31_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCaptureSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCaptureSortPriority(Z_Param_NewCaptureSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHiddenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHiddenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearShowOnlyComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearShowOnlyComponents(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCaptureSortPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCaptureSortPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCaptureSortPriority(Z_Param_NewCaptureSortPriority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearHiddenComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearHiddenComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearShowOnlyComponents) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearShowOnlyComponents(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowOnlyActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOnlyComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ShowOnlyComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideActorComponents) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideActorComponents(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HideComponent(Z_Param_InComponent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneCaptureComponent(); \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USceneCaptureComponent(); \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent(USceneCaptureComponent&&); \
	NO_API USceneCaptureComponent(const USceneCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h


#define FOREACH_ENUM_ESCENECAPTUREPRIMITIVERENDERMODE(op) \
	op(ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture) \
	op(ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
