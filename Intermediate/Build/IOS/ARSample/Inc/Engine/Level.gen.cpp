// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Level.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevel() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelSimplificationDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSimplificationDetails, Z_Construct_UPackage__Script_Engine(), TEXT("LevelSimplificationDetails"), sizeof(FLevelSimplificationDetails), Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSimplificationDetails(FLevelSimplificationDetails::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelSimplificationDetails"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSimplificationDetails")),new UScriptStruct::TCppStructOps<FLevelSimplificationDetails>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSimplificationDetails"), sizeof(FLevelSimplificationDetails), Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSimplificationDetails>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeSpecularMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateLandscapeSpecularMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeSpecularMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeSpecularMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLandscapeSpecularMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLandscapeSpecularMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLandscapeSpecularMap_MetaData, ARRAY_COUNT(NewProp_bGenerateLandscapeSpecularMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeRoughnessMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateLandscapeRoughnessMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeRoughnessMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeRoughnessMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLandscapeRoughnessMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLandscapeRoughnessMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLandscapeRoughnessMap_MetaData, ARRAY_COUNT(NewProp_bGenerateLandscapeRoughnessMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeMetallicMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateLandscapeMetallicMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeMetallicMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeMetallicMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLandscapeMetallicMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLandscapeMetallicMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLandscapeMetallicMap_MetaData, ARRAY_COUNT(NewProp_bGenerateLandscapeMetallicMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeNormalMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateLandscapeNormalMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeNormalMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeNormalMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLandscapeNormalMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLandscapeNormalMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLandscapeNormalMap_MetaData, ARRAY_COUNT(NewProp_bGenerateLandscapeNormalMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshSpecularMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateMeshSpecularMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateMeshSpecularMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshSpecularMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshSpecularMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshSpecularMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshSpecularMap_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshSpecularMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshRoughnessMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateMeshRoughnessMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateMeshRoughnessMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshRoughnessMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshRoughnessMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshRoughnessMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshRoughnessMap_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshRoughnessMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshMetallicMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateMeshMetallicMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateMeshMetallicMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshMetallicMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshMetallicMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshMetallicMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshMetallicMap_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshMetallicMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshNormalMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bGenerateMeshNormalMap_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bGenerateMeshNormalMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshNormalMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshNormalMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshNormalMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshNormalMap_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshNormalMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeGrassToLandscape_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether to bake grass into landscape static mesh texture" },
			};
#endif
			auto NewProp_bBakeGrassToLandscape_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bBakeGrassToLandscape = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeGrassToLandscape = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakeGrassToLandscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakeGrassToLandscape_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakeGrassToLandscape_MetaData, ARRAY_COUNT(NewProp_bBakeGrassToLandscape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeFoliageToLandscape_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether to bake foliage into landscape static mesh texture" },
			};
#endif
			auto NewProp_bBakeFoliageToLandscape_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bBakeFoliageToLandscape = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeFoliageToLandscape = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakeFoliageToLandscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakeFoliageToLandscape_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakeFoliageToLandscape_MetaData, ARRAY_COUNT(NewProp_bBakeFoliageToLandscape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialSettings_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Landscape material simplification" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeMaterialSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LandscapeMaterialSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(NewProp_LandscapeMaterialSettings_MetaData, ARRAY_COUNT(NewProp_LandscapeMaterialSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportLOD_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ClampMax", "7" },
				{ "ClampMin", "0" },
				{ "editcondition", "bOverrideLandscapeExportLOD" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Landscape LOD to use for static mesh generation, when not specified 'Max LODLevel' from landscape actor will be used" },
				{ "UIMax", "7" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LandscapeExportLOD = { UE4CodeGen_Private::EPropertyClass::Int, "LandscapeExportLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeExportLOD), METADATA_PARAMS(NewProp_LandscapeExportLOD_MetaData, ARRAY_COUNT(NewProp_LandscapeExportLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLandscapeExportLOD_MetaData[] = {
				{ "Category", "Landscape" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			auto NewProp_bOverrideLandscapeExportLOD_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bOverrideLandscapeExportLOD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLandscapeExportLOD = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLandscapeExportLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLandscapeExportLOD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLandscapeExportLOD_MetaData, ARRAY_COUNT(NewProp_bOverrideLandscapeExportLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMaterialSettings_MetaData[] = {
				{ "Category", "Landscape" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Landscape material simplification" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshMaterialSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticMeshMaterialSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, StaticMeshMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(NewProp_StaticMeshMaterialSettings_MetaData, ARRAY_COUNT(NewProp_StaticMeshMaterialSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailsPercentage_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Static Mesh Details Percentage" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Percentage of details for static mesh proxy" },
				{ "UIMax", "100" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetailsPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "DetailsPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, DetailsPercentage), METADATA_PARAMS(NewProp_DetailsPercentage_MetaData, ARRAY_COUNT(NewProp_DetailsPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePackagePerAsset_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether to create separate packages for each generated asset. All in map package otherwise" },
			};
#endif
			auto NewProp_bCreatePackagePerAsset_SetBit = [](void* Obj){ ((FLevelSimplificationDetails*)Obj)->bCreatePackagePerAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePackagePerAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreatePackagePerAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelSimplificationDetails), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreatePackagePerAsset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCreatePackagePerAsset_MetaData, ARRAY_COUNT(NewProp_bCreatePackagePerAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLandscapeSpecularMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLandscapeRoughnessMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLandscapeMetallicMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLandscapeNormalMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshSpecularMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshRoughnessMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshMetallicMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshNormalMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakeGrassToLandscape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakeFoliageToLandscape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeMaterialSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeExportLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLandscapeExportLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshMaterialSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetailsPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreatePackagePerAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSimplificationDetails",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FLevelSimplificationDetails),
				alignof(FLevelSimplificationDetails),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_CRC() { return 3862541741U; }
class UScriptStruct* FDynamicTextureInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicTextureInstance, Z_Construct_UPackage__Script_Engine(), TEXT("DynamicTextureInstance"), sizeof(FDynamicTextureInstance), Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicTextureInstance(FDynamicTextureInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("DynamicTextureInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicTextureInstance")),new UScriptStruct::TCppStructOps<FDynamicTextureInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicTextureInstance"), sizeof(FDynamicTextureInstance), Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Serialized ULevel information about dynamic texture instances" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicTextureInstance>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalRadius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Original bounding sphere radius, at the time the TexelFactor was calculated originally." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalRadius = { UE4CodeGen_Private::EPropertyClass::Float, "OriginalRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDynamicTextureInstance, OriginalRadius), METADATA_PARAMS(NewProp_OriginalRadius_MetaData, ARRAY_COUNT(NewProp_OriginalRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether the primitive that uses this texture is attached to the scene or not." },
			};
#endif
			auto NewProp_bAttached_SetBit = [](void* Obj){ ((FDynamicTextureInstance*)Obj)->bAttached = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttached = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttached", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDynamicTextureInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttached_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttached_MetaData, ARRAY_COUNT(NewProp_bAttached_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Texture that is used by a dynamic UPrimitiveComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDynamicTextureInstance, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttached,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FStreamableTextureInstance,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"DynamicTextureInstance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FDynamicTextureInstance),
				alignof(FDynamicTextureInstance),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_CRC() { return 4266886247U; }
class UScriptStruct* FStreamableTextureInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTextureInstance, Z_Construct_UPackage__Script_Engine(), TEXT("StreamableTextureInstance"), sizeof(FStreamableTextureInstance), Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamableTextureInstance(FStreamableTextureInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamableTextureInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamableTextureInstance")),new UScriptStruct::TCppStructOps<FStreamableTextureInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance;
	UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamableTextureInstance"), sizeof(FStreamableTextureInstance), Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Structure containing all information needed for determining the screen space\nsize of an object/ texture instance." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamableTextureInstance>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StreamableTextureInstance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FStreamableTextureInstance),
				alignof(FStreamableTextureInstance),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_CRC() { return 2355162331U; }
	void ULevel::StaticRegisterNativesULevel()
	{
	}
	UClass* Z_Construct_UClass_ULevel_NoRegister()
	{
		return ULevel::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/Level.h" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A Level is a collection of Actors (lights, volumes, mesh instances etc.).\nMultiple Levels can be loaded and unloaded into the World to create a streaming experience.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Levels\n@see UActor" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000008, 1, nullptr, STRUCT_OFFSET(ULevel, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldSettings = { UE4CodeGen_Private::EPropertyClass::Object, "WorldSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, WorldSettings), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(NewProp_WorldSettings_MetaData, ARRAY_COUNT(NewProp_WorldSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)\nUsed only in world composition mode" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULevel, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_LevelColor_MetaData, ARRAY_COUNT(NewProp_LevelColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSimplification_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Level simplification settings for each LOD" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSimplification = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelSimplification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, CPP_ARRAY_DIM(LevelSimplification, ULevel), nullptr, STRUCT_OFFSET(ULevel, LevelSimplification), Z_Construct_UScriptStruct_FLevelSimplificationDetails, METADATA_PARAMS(NewProp_LevelSimplification_MetaData, ARRAY_COUNT(NewProp_LevelSimplification_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether this level is locked; that is, its actors are read-only\n    Used by WorldBrowser to lock a level when corresponding ULevelStreaming does not exist" },
			};
#endif
			auto NewProp_bLocked_SetBit = [](void* Obj){ ((ULevel*)Obj)->bLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLocked_MetaData, ARRAY_COUNT(NewProp_bLocked_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether the level is currently visible/ associated with the world" },
			};
#endif
			auto NewProp_bIsVisible_SetBit = [](void* Obj){ ((ULevel*)Obj)->bIsVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsVisible_MetaData, ARRAY_COUNT(NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingRotationChanged_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether a level transform rotation was applied since the texture streaming builds. Invalidates the precomputed streaming bounds." },
			};
#endif
			auto NewProp_bTextureStreamingRotationChanged_SetBit = [](void* Obj){ ((ULevel*)Obj)->bTextureStreamingRotationChanged = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingRotationChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "bTextureStreamingRotationChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTextureStreamingRotationChanged_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTextureStreamingRotationChanged_MetaData, ARRAY_COUNT(NewProp_bTextureStreamingRotationChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBuildLevelOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Level offset at time when lighting was built" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightBuildLevelOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LightBuildLevelOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, LightBuildLevelOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(NewProp_LightBuildLevelOffset_MetaData, ARRAY_COUNT(NewProp_LightBuildLevelOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Registry for data from the map build.  This is stored in a separate package from the level to speed up saving / autosaving.\nReleaseRenderingResources must be called before changing what is referenced, to update the rendering thread state." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapBuildData = { UE4CodeGen_Private::EPropertyClass::Object, "MapBuildData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, MapBuildData), Z_Construct_UClass_UMapBuildDataRegistry_NoRegister, METADATA_PARAMS(NewProp_MapBuildData_MetaData, ARRAY_COUNT(NewProp_MapBuildData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBuildDataId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Identifies map build data specific to this level, eg lighting volume samples." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelBuildDataId = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelBuildDataId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, LevelBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LevelBuildDataId_MetaData, ARRAY_COUNT(NewProp_LevelBuildDataId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLightingScenario_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Whether the level is a lighting scenario.  Lighting is built separately for each lighting scenario level with all other scenario levels hidden.\nOnly one lighting scenario level should be visible at a time for correct rendering, and lightmaps from that level will be used on the rest of the world.\nNote: When a lighting scenario level is present, lightmaps for all streaming levels are placed in the scenario's _BuildData package.\n             This means that lightmaps for those streaming levels will not be streamed with them." },
			};
#endif
			auto NewProp_bIsLightingScenario_SetBit = [](void* Obj){ ((ULevel*)Obj)->bIsLightingScenario = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLightingScenario = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLightingScenario", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLightingScenario_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLightingScenario_MetaData, ARRAY_COUNT(NewProp_bIsLightingScenario_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureGuids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "The Guid of each texture refered by FStreamingTextureBuildInfo::TextureLevelIndex" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureGuids = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, StreamingTextureGuids), METADATA_PARAMS(NewProp_StreamingTextureGuids_MetaData, ARRAY_COUNT(NewProp_StreamingTextureGuids_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureGuids_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StreamingTextureGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticNavigableGeometry_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "threes of triangle vertices - AABB filtering friendly. Stored if there's a runtime need to rebuild navigation that accepts BSPs\n    as well - it's a lot easier this way than retrieve this data at runtime" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticNavigableGeometry = { UE4CodeGen_Private::EPropertyClass::Array, "StaticNavigableGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, StaticNavigableGeometry), METADATA_PARAMS(NewProp_StaticNavigableGeometry_MetaData, ARRAY_COUNT(NewProp_StaticNavigableGeometry_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticNavigableGeometry_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticNavigableGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowmapTotalSize_MetaData[] = {
				{ "Category", "Level" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Total number of KB used for shadowmap textures in the level." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowmapTotalSize = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowmapTotalSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ULevel, ShadowmapTotalSize), METADATA_PARAMS(NewProp_ShadowmapTotalSize_MetaData, ARRAY_COUNT(NewProp_ShadowmapTotalSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapTotalSize_MetaData[] = {
				{ "Category", "Level" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Total number of KB used for lightmap textures in the level." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightmapTotalSize = { UE4CodeGen_Private::EPropertyClass::Float, "LightmapTotalSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ULevel, LightmapTotalSize), METADATA_PARAMS(NewProp_LightmapTotalSize_MetaData, ARRAY_COUNT(NewProp_LightmapTotalSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataChunks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Navigation related data that can be stored per level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataChunks = { UE4CodeGen_Private::EPropertyClass::Array, "NavDataChunks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, NavDataChunks), METADATA_PARAMS(NewProp_NavDataChunks_MetaData, ARRAY_COUNT(NewProp_NavDataChunks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataChunks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NavDataChunks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UNavigationDataChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavListEnd_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavListEnd = { UE4CodeGen_Private::EPropertyClass::Object, "NavListEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, NavListEnd), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(NewProp_NavListEnd_MetaData, ARRAY_COUNT(NewProp_NavListEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavListStart_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Start and end of the navigation list for this level, used for quickly fixing up\nwhen streaming this level in/out. @TODO DEPRECATED - DELETE" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavListStart = { UE4CodeGen_Private::EPropertyClass::Object, "NavListStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, NavListStart), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(NewProp_NavListStart_MetaData, ARRAY_COUNT(NewProp_NavListStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "The level scripting actor, created by instantiating the class from LevelScriptBlueprint.  This handles all level scripting" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelScriptActor = { UE4CodeGen_Private::EPropertyClass::Object, "LevelScriptActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(ULevel, LevelScriptActor), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(NewProp_LevelScriptActor_MetaData, ARRAY_COUNT(NewProp_LevelScriptActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingDirtyResources_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Num of resources that have changed since the last texture streaming build. Updated in map check." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingDirtyResources = { UE4CodeGen_Private::EPropertyClass::Int, "NumTextureStreamingDirtyResources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(ULevel, NumTextureStreamingDirtyResources), METADATA_PARAMS(NewProp_NumTextureStreamingDirtyResources_MetaData, ARRAY_COUNT(NewProp_NumTextureStreamingDirtyResources_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingUnbuiltComponents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Num of components missing valid texture streaming data. Updated in map check." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingUnbuiltComponents = { UE4CodeGen_Private::EPropertyClass::Int, "NumTextureStreamingUnbuiltComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400000000, 1, nullptr, STRUCT_OFFSET(ULevel, NumTextureStreamingUnbuiltComponents), METADATA_PARAMS(NewProp_NumTextureStreamingUnbuiltComponents_MetaData, ARRAY_COUNT(NewProp_NumTextureStreamingUnbuiltComponents_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingResourceGuids_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "The Guid list of all materials and meshes Guid used in the last texture streaming build. Used to know if the streaming data needs rebuild. Only used for the persistent level." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingResourceGuids = { UE4CodeGen_Private::EPropertyClass::Array, "TextureStreamingResourceGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(ULevel, TextureStreamingResourceGuids), METADATA_PARAMS(NewProp_TextureStreamingResourceGuids_MetaData, ARRAY_COUNT(NewProp_TextureStreamingResourceGuids_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingResourceGuids_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureStreamingResourceGuids", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptBlueprint_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "Reference to the blueprint for level scripting" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelScriptBlueprint = { UE4CodeGen_Private::EPropertyClass::Object, "LevelScriptBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(ULevel, LevelScriptBlueprint), Z_Construct_UClass_ULevelScriptBlueprint_NoRegister, METADATA_PARAMS(NewProp_LevelScriptBlueprint_MetaData, ARRAY_COUNT(NewProp_LevelScriptBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorCluster_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorCluster = { UE4CodeGen_Private::EPropertyClass::Object, "ActorCluster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400282008, 1, nullptr, STRUCT_OFFSET(ULevel, ActorCluster), Z_Construct_UClass_ULevelActorContainer_NoRegister, METADATA_PARAMS(NewProp_ActorCluster_MetaData, ARRAY_COUNT(NewProp_ActorCluster_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelComponents_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "BSP Model components used for rendering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModelComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ModelComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(ULevel, ModelComponents), METADATA_PARAMS(NewProp_ModelComponents_MetaData, ARRAY_COUNT(NewProp_ModelComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModelComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ModelComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UModelComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "BSP UModel." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Model = { UE4CodeGen_Private::EPropertyClass::Object, "Model", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevel, Model), Z_Construct_UClass_UModel, METADATA_PARAMS(NewProp_Model_MetaData, ARRAY_COUNT(NewProp_Model_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Level.h" },
				{ "ToolTip", "The World that has this level in its Levels array.\nThis is not the same as GetOuter(), because GetOuter() for a streaming level is a vestigial world that is not used.\nIt should not be accessed during BeginDestroy(), just like any other UObject references, since GC may occur in any order." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningWorld = { UE4CodeGen_Private::EPropertyClass::Object, "OwningWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(ULevel, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_OwningWorld_MetaData, ARRAY_COUNT(NewProp_OwningWorld_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldSettings,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSimplification,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLocked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTextureStreamingRotationChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightBuildLevelOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapBuildData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelBuildDataId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLightingScenario,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingTextureGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingTextureGuids_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticNavigableGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticNavigableGeometry_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowmapTotalSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmapTotalSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataChunks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavDataChunks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavListEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavListStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelScriptActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumTextureStreamingDirtyResources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumTextureStreamingUnbuiltComponents,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureStreamingResourceGuids,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureStreamingResourceGuids_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelScriptBlueprint,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorCluster,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModelComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModelComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Model,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningWorld,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(ULevel, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevel, 2879782146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevel(Z_Construct_UClass_ULevel, &ULevel::StaticClass, TEXT("/Script/Engine"), TEXT("ULevel"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
