// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReflectionCaptureComponent_generated_h
#error "ReflectionCaptureComponent.generated.h already included, missing '#pragma once' in ReflectionCaptureComponent.h"
#endif
#define ENGINE_ReflectionCaptureComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UReflectionCaptureComponent(); \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UReflectionCaptureComponent(); \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateId() { return STRUCT_OFFSET(UReflectionCaptureComponent, StateId); }


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_155_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_158_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReflectionCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h


#define FOREACH_ENUM_EREFLECTIONSOURCETYPE(op) \
	op(EReflectionSourceType::CapturedScene) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
