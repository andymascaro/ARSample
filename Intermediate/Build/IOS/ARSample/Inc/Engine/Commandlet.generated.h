// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Commandlet_generated_h
#error "Commandlet.generated.h already included, missing '#pragma once' in Commandlet.h"
#endif
#define ENGINE_Commandlet_generated_h

#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommandlet(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCommandlet(); \
public: \
	DECLARE_CLASS(UCommandlet, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCommandlet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUCommandlet(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCommandlet(); \
public: \
	DECLARE_CLASS(UCommandlet, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCommandlet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCommandlet(UCommandlet&&); \
	ENGINE_API UCommandlet(const UCommandlet&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCommandlet(UCommandlet&&); \
	ENGINE_API UCommandlet(const UCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommandlet)


#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Commandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Commandlets_Commandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
