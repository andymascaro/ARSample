// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TouchInterface_generated_h
#error "TouchInterface.generated.h already included, missing '#pragma once' in TouchInterface.h"
#endif
#define ENGINE_TouchInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_17_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTouchInterface(); \
public: \
	DECLARE_CLASS(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTouchInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UTouchInterface(); \
public: \
	DECLARE_CLASS(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTouchInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchInterface(UTouchInterface&&); \
	NO_API UTouchInterface(const UTouchInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchInterface(UTouchInterface&&); \
	NO_API UTouchInterface(const UTouchInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_49_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TouchInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
