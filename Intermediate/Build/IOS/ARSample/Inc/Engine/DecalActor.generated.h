// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef ENGINE_DecalActor_generated_h
#error "DecalActor.generated.h already included, missing '#pragma once' in DecalActor.h"
#endif
#define ENGINE_DecalActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateDynamicMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetDecalMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDecalMaterial(Z_Param_NewDecalMaterial); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=this->CreateDynamicMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecalMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetDecalMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDecalMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewDecalMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDecalMaterial(Z_Param_NewDecalMaterial); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ADecalActor(); \
public: \
	DECLARE_CLASS(ADecalActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADecalActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesADecalActor(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ADecalActor(); \
public: \
	DECLARE_CLASS(ADecalActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADecalActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecalActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecalActor(ADecalActor&&); \
	NO_API ADecalActor(const ADecalActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADecalActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADecalActor(ADecalActor&&); \
	NO_API ADecalActor(const ADecalActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADecalActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADecalActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADecalActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Decal() { return STRUCT_OFFSET(ADecalActor, Decal); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DecalActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DecalActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
