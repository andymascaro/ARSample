// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Level_generated_h
#error "Level.generated.h already included, missing '#pragma once' in Level.h"
#endif
#define ENGINE_Level_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_270_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_70_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance(); \
	static class UScriptStruct* StaticStruct(); \
	typedef FStreamableTextureInstance Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_41_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevel(); \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_INCLASS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevel(); \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel)


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldSettings() { return STRUCT_OFFSET(ULevel, WorldSettings); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(ULevel, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_348_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_351_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Level_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
