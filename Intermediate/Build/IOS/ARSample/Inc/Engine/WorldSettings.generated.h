// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldSettings_generated_h
#error "WorldSettings.generated.h already included, missing '#pragma once' in WorldSettings.h"
#endif
#define ENGINE_WorldSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_257_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_219_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNetViewer(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_50_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WorldGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_WorldGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WorldGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_WorldGravityZ(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AWorldSettings(); \
public: \
	DECLARE_CLASS(AWorldSettings, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AWorldSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_INCLASS \
private: \
	static void StaticRegisterNativesAWorldSettings(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_AWorldSettings(); \
public: \
	DECLARE_CLASS(AWorldSettings, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldSettings) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AWorldSettings*>(this); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldSettings(AWorldSettings&&); \
	NO_API AWorldSettings(const AWorldSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldSettings(AWorldSettings&&); \
	NO_API AWorldSettings(const AWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldSettings)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(AWorldSettings, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_325_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_328_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h


#define FOREACH_ENUM_EVOLUMELIGHTINGMETHOD(op) \
	op(VLM_VolumetricLightmap) 
#define FOREACH_ENUM_EVISIBILITYAGGRESSIVENESS(op) \
	op(VIS_LeastAggressive) \
	op(VIS_ModeratelyAggressive) \
	op(VIS_MostAggressive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
