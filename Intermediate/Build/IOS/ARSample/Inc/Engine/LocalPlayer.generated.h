// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayer_generated_h
#error "LocalPlayer.generated.h already included, missing '#pragma once' in LocalPlayer.h"
#endif
#define ENGINE_LocalPlayer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULocalPlayer(); \
public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULocalPlayer(); \
public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayer(ULocalPlayer&&); \
	NO_API ULocalPlayer(const ULocalPlayer&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayer(ULocalPlayer&&); \
	NO_API ULocalPlayer(const ULocalPlayer&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer)


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ControllerId() { return STRUCT_OFFSET(ULocalPlayer, ControllerId); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_157_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_160_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocalPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
