// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicalMaterial;
class UMaterial;
#ifdef ENGINE_MaterialInterface_generated_h
#error "MaterialInterface.generated.h already included, missing '#pragma once' in MaterialInterface.h"
#endif
#define ENGINE_MaterialInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_160_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_104_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident) \
	{ \
		P_GET_UBOOL(Z_Param_OverrideForceMiplevelsToBeResident); \
		P_GET_UBOOL(Z_Param_bForceMiplevelsToBeResidentValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForceMipLevelsToBeResident(Z_Param_OverrideForceMiplevelsToBeResident,Z_Param_bForceMiplevelsToBeResidentValue,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPhysicalMaterial**)Z_Param__Result=this->GetPhysicalMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=this->GetBaseMaterial(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForceMipLevelsToBeResident) \
	{ \
		P_GET_UBOOL(Z_Param_OverrideForceMiplevelsToBeResident); \
		P_GET_UBOOL(Z_Param_bForceMiplevelsToBeResidentValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForceDuration); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CinematicTextureGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForceMipLevelsToBeResident(Z_Param_OverrideForceMiplevelsToBeResident,Z_Param_bForceMiplevelsToBeResidentValue,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicalMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPhysicalMaterial**)Z_Param__Result=this->GetPhysicalMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=this->GetBaseMaterial(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface(); \
public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface(); \
public: \
	DECLARE_CLASS(UMaterialInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMaterialInterface*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInterface(UMaterialInterface&&); \
	ENGINE_API UMaterialInterface(const UMaterialInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInterface(UMaterialInterface&&); \
	ENGINE_API UMaterialInterface(const UMaterialInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInterface)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LightmassSettings() { return STRUCT_OFFSET(UMaterialInterface, LightmassSettings); } \
	FORCEINLINE static uint32 __PPO__TextureStreamingData() { return STRUCT_OFFSET(UMaterialInterface, TextureStreamingData); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_200_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_203_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h


#define FOREACH_ENUM_EMATERIALUSAGE(op) \
	op(MATUSAGE_SkeletalMesh) \
	op(MATUSAGE_ParticleSprites) \
	op(MATUSAGE_BeamTrails) \
	op(MATUSAGE_MeshParticles) \
	op(MATUSAGE_StaticLighting) \
	op(MATUSAGE_MorphTargets) \
	op(MATUSAGE_SplineMesh) \
	op(MATUSAGE_InstancedStaticMeshes) \
	op(MATUSAGE_Clothing) \
	op(MATUSAGE_NiagaraSprites) \
	op(MATUSAGE_NiagaraRibbons) \
	op(MATUSAGE_NiagaraMeshParticles) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS