// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FBox;
struct FBoxSphereBounds;
#ifdef ENGINE_StaticMesh_generated_h
#error "StaticMesh.generated.h already included, missing '#pragma once' in StaticMesh.h"
#endif
#define ENGINE_StaticMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_382_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_316_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_273_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_236_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_195_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_151_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_70_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterialIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetMaterialIndex(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterial(Z_Param_MaterialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSections(Z_Param_InLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=this->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLODs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumLODs(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterialIndex) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_MaterialSlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetMaterialIndex(Z_Param_MaterialSlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaterialIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=this->GetMaterial(Z_Param_MaterialIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLOD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumSections(Z_Param_InLOD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=this->GetBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=this->GetBounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumLODs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumLODs(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh(); \
public: \
	DECLARE_CLASS(UStaticMesh, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh(); \
public: \
	DECLARE_CLASS(UStaticMesh, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ElementToIgnoreForTexFactor() { return STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UStaticMesh, AssetUserData); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_411_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_414_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h


#define FOREACH_ENUM_EOPTIMIZATIONTYPE(op) \
	op(OT_NumOfTriangles) \
	op(OT_MaxDeviation) 
#define FOREACH_ENUM_EIMPORTANCELEVEL(op) \
	op(IL_Off) \
	op(IL_Lowest) \
	op(IL_Low) \
	op(IL_Normal) \
	op(IL_High) \
	op(IL_Highest) \
	op(TEMP_BROKEN2) 
#define FOREACH_ENUM_ENORMALMODE(op) \
	op(NM_PreserveSmoothingGroups) \
	op(NM_RecalculateNormals) \
	op(NM_RecalculateNormalsSmooth) \
	op(NM_RecalculateNormalsHard) \
	op(TEMP_BROKEN) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
