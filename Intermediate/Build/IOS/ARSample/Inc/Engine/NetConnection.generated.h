// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetConnection_generated_h
#error "NetConnection.generated.h already included, missing '#pragma once' in NetConnection.h"
#endif
#define ENGINE_NetConnection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetConnection(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNetConnection(); \
public: \
	DECLARE_CLASS(UNetConnection, UPlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetConnection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_INCLASS \
private: \
	static void StaticRegisterNativesUNetConnection(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UNetConnection(); \
public: \
	DECLARE_CLASS(UNetConnection, UPlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetConnection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetConnection(UNetConnection&&); \
	ENGINE_API UNetConnection(const UNetConnection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetConnection(UNetConnection&&); \
	ENGINE_API UNetConnection(const UNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ChannelsToTick() { return STRUCT_OFFSET(UNetConnection, ChannelsToTick); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_174_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_177_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NetConnection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
