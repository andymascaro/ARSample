// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/MeshMerging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMerging() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshMergeType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
// End Cross Module References
	static UEnum* EMeshMergeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshMergeType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshMergeType(EMeshMergeType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshMergeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshMergeType_CRC() { return 2129280411U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshMergeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshMergeType"), 0, Get_Z_Construct_UEnum_Engine_EMeshMergeType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshMergeType::MeshMergeType_Default", (int64)EMeshMergeType::MeshMergeType_Default },
				{ "EMeshMergeType::MeshMergeType_MergeActor", (int64)EMeshMergeType::MeshMergeType_MergeActor },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshMergeType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMeshMergeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshLODSelectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshLODSelectionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshLODSelectionType(EMeshLODSelectionType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshLODSelectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshLODSelectionType_CRC() { return 3375334473U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshLODSelectionType"), 0, Get_Z_Construct_UEnum_Engine_EMeshLODSelectionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshLODSelectionType::AllLODs", (int64)EMeshLODSelectionType::AllLODs },
				{ "EMeshLODSelectionType::SpecificLOD", (int64)EMeshLODSelectionType::SpecificLOD },
				{ "EMeshLODSelectionType::CalculateLOD", (int64)EMeshLODSelectionType::CalculateLOD },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllLODs.DisplayName", "Use all LOD levels" },
				{ "AllLODs.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
				{ "CalculateLOD.DisplayName", "Calculate correct LOD level" },
				{ "CalculateLOD.ToolTip", "Whether or not to calculate the appropriate LOD model for the given screen size" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "SpecificLOD.DisplayName", "Use specific LOD level" },
				{ "SpecificLOD.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshLODSelectionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMeshLODSelectionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeCullingPrecision_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, Z_Construct_UPackage__Script_Engine(), TEXT("ELandscapeCullingPrecision"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeCullingPrecision(ELandscapeCullingPrecision_StaticEnum, TEXT("/Script/Engine"), TEXT("ELandscapeCullingPrecision"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_CRC() { return 660101163U; }
	UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeCullingPrecision"), 0, Get_Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeCullingPrecision::High", (int64)ELandscapeCullingPrecision::High },
				{ "ELandscapeCullingPrecision::Medium", (int64)ELandscapeCullingPrecision::Medium },
				{ "ELandscapeCullingPrecision::Low", (int64)ELandscapeCullingPrecision::Low },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.DisplayName", "High memory intensity and computation time" },
				{ "Low.DisplayName", "Low memory intensity and computation time" },
				{ "Medium.DisplayName", "Medium memory intensity and computation time" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELandscapeCullingPrecision",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ELandscapeCullingPrecision::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshFeatureImportance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshFeatureImportance"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshFeatureImportance(EMeshFeatureImportance_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshFeatureImportance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshFeatureImportance_CRC() { return 1193884586U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshFeatureImportance"), 0, Get_Z_Construct_UEnum_Engine_EMeshFeatureImportance_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshFeatureImportance::Off", (int64)EMeshFeatureImportance::Off },
				{ "EMeshFeatureImportance::Lowest", (int64)EMeshFeatureImportance::Lowest },
				{ "EMeshFeatureImportance::Low", (int64)EMeshFeatureImportance::Low },
				{ "EMeshFeatureImportance::Normal", (int64)EMeshFeatureImportance::Normal },
				{ "EMeshFeatureImportance::High", (int64)EMeshFeatureImportance::High },
				{ "EMeshFeatureImportance::Highest", (int64)EMeshFeatureImportance::Highest },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "The importance of a mesh feature when automatically generating mesh LODs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMeshFeatureImportance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMeshFeatureImportance::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMeshMergingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshMergingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshMergingSettings"), sizeof(FMeshMergingSettings), Get_Z_Construct_UScriptStruct_FMeshMergingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshMergingSettings(FMeshMergingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshMergingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshMergingSettings")),new UScriptStruct::TCppStructOps<FMeshMergingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshMergingSettings"), sizeof(FMeshMergingSettings), Get_Z_Construct_UScriptStruct_FMeshMergingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Mesh merging settings" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshMergingSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergedMaterialAtlasResolution_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Merged material texture atlas resolution" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MergedMaterialAtlasResolution = { UE4CodeGen_Private::EPropertyClass::Int, "MergedMaterialAtlasResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, MergedMaterialAtlasResolution_DEPRECATED), METADATA_PARAMS(NewProp_MergedMaterialAtlasResolution_MetaData, ARRAY_COUNT(NewProp_MergedMaterialAtlasResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to export specular maps for material merging" },
			};
#endif
			auto NewProp_bExportSpecularMap_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bExportSpecularMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportSpecularMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportSpecularMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportSpecularMap_MetaData, ARRAY_COUNT(NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to export roughness maps for material merging" },
			};
#endif
			auto NewProp_bExportRoughnessMap_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportRoughnessMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportRoughnessMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportRoughnessMap_MetaData, ARRAY_COUNT(NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to export metallic maps for material merging" },
			};
#endif
			auto NewProp_bExportMetallicMap_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bExportMetallicMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportMetallicMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportMetallicMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportMetallicMap_MetaData, ARRAY_COUNT(NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to export normal maps for material merging" },
			};
#endif
			auto NewProp_bExportNormalMap_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bExportNormalMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportNormalMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportNormalMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportNormalMap_MetaData, ARRAY_COUNT(NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[] = {
				{ "Category", "LandscapeCulling" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
			};
#endif
			auto NewProp_bUseLandscapeCulling_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bUseLandscapeCulling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLandscapeCulling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLandscapeCulling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLandscapeCulling_MetaData, ARRAY_COUNT(NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificLOD_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ClampMax", "7" },
				{ "ClampMin", "0" },
				{ "EnumCondition", "1" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "A given LOD level to export from the source meshes" },
				{ "UIMax", "7" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecificLOD = { UE4CodeGen_Private::EPropertyClass::Int, "SpecificLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, SpecificLOD), METADATA_PARAMS(NewProp_SpecificLOD_MetaData, ARRAY_COUNT(NewProp_SpecificLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportSpecificLOD_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExportSpecificLOD = { UE4CodeGen_Private::EPropertyClass::Int, "ExportSpecificLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, ExportSpecificLOD_DEPRECATED), METADATA_PARAMS(NewProp_ExportSpecificLOD_MetaData, ARRAY_COUNT(NewProp_ExportSpecificLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSelectionType_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LODSelectionType = { UE4CodeGen_Private::EPropertyClass::Enum, "LODSelectionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, LODSelectionType), Z_Construct_UEnum_Engine_EMeshLODSelectionType, METADATA_PARAMS(NewProp_LODSelectionType_MetaData, ARRAY_COUNT(NewProp_LODSelectionType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODSelectionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bCalculateCorrectLODModel_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bCalculateCorrectLODModel_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculateCorrectLODModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculateCorrectLODModel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCalculateCorrectLODModel_MetaData, ARRAY_COUNT(NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTextureBinning_MetaData[] = {
				{ "Category", "MaterialSettings" },
				{ "editcondition", "bMergeMaterials" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture" },
			};
#endif
			auto NewProp_bUseTextureBinning_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bUseTextureBinning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTextureBinning = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTextureBinning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseTextureBinning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseTextureBinning_MetaData, ARRAY_COUNT(NewProp_bUseTextureBinning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVertexDataForBakingMaterial_MetaData[] = {
				{ "Category", "MaterialSettings" },
				{ "editcondition", "bMergeMaterials" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not vertex data such as vertex colours should be used when baking out materials" },
			};
#endif
			auto NewProp_bUseVertexDataForBakingMaterial_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bUseVertexDataForBakingMaterial = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVertexDataForBakingMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVertexDataForBakingMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVertexDataForBakingMaterial_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVertexDataForBakingMaterial_MetaData, ARRAY_COUNT(NewProp_bUseVertexDataForBakingMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexDataToMesh_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not vertex data such as vertex colours should be baked into the resulting mesh" },
			};
#endif
			auto NewProp_bBakeVertexDataToMesh_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bBakeVertexDataToMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexDataToMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakeVertexDataToMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakeVertexDataToMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakeVertexDataToMesh_MetaData, ARRAY_COUNT(NewProp_bBakeVertexDataToMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
				{ "Category", "MaterialSettings" },
				{ "editcondition", "bMergeMaterials" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Material simplification" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(NewProp_MaterialSettings_MetaData, ARRAY_COUNT(NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterials_MetaData[] = {
				{ "Category", "MaterialSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to merge source materials into one flat material, ONLY available when merging a single LOD level, see LODSelectionType" },
			};
#endif
			auto NewProp_bMergeMaterials_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bMergeMaterials = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterials = { UE4CodeGen_Private::EPropertyClass::Bool, "bMergeMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMergeMaterials_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMergeMaterials_MetaData, ARRAY_COUNT(NewProp_bMergeMaterials_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergePhysicsData_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to merge physics data (collision primitives)" },
			};
#endif
			auto NewProp_bMergePhysicsData_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bMergePhysicsData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergePhysicsData = { UE4CodeGen_Private::EPropertyClass::Bool, "bMergePhysicsData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMergePhysicsData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMergePhysicsData_MetaData, ARRAY_COUNT(NewProp_bMergePhysicsData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPivotPointAtZero_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether merged mesh should have pivot at world origin, or at first merged component otherwise" },
			};
#endif
			auto NewProp_bPivotPointAtZero_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bPivotPointAtZero = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPivotPointAtZero = { UE4CodeGen_Private::EPropertyClass::Bool, "bPivotPointAtZero", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPivotPointAtZero_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPivotPointAtZero_MetaData, ARRAY_COUNT(NewProp_bPivotPointAtZero_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportVertexColors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether we should import vertex colors into merged mesh" },
			};
#endif
			auto NewProp_bImportVertexColors_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bImportVertexColors_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportVertexColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bImportVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImportVertexColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bImportVertexColors_MetaData, ARRAY_COUNT(NewProp_bImportVertexColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputedLightMapResolution_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components" },
			};
#endif
			auto NewProp_bComputedLightMapResolution_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bComputedLightMapResolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputedLightMapResolution = { UE4CodeGen_Private::EPropertyClass::Bool, "bComputedLightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bComputedLightMapResolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bComputedLightMapResolution_MetaData, ARRAY_COUNT(NewProp_bComputedLightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLightMapResolution_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ClampMax", "4096" },
				{ "editcondition", "!bComputedLightMapResolution" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Target lightmap resolution" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLightMapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "TargetLightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMeshMergingSettings, TargetLightMapResolution), METADATA_PARAMS(NewProp_TargetLightMapResolution_MetaData, ARRAY_COUNT(NewProp_TargetLightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightMapUV_MetaData[] = {
				{ "Category", "MeshSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether to generate lightmap UVs for a merged mesh" },
			};
#endif
			auto NewProp_bGenerateLightMapUV_SetBit = [](void* Obj){ ((FMeshMergingSettings*)Obj)->bGenerateLightMapUV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightMapUV = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLightMapUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshMergingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLightMapUV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLightMapUV_MetaData, ARRAY_COUNT(NewProp_bGenerateLightMapUV_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergedMaterialAtlasResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportSpecularMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportRoughnessMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportMetallicMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportNormalMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLandscapeCulling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecificLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportSpecificLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODSelectionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODSelectionType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculateCorrectLODModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseTextureBinning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVertexDataForBakingMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakeVertexDataToMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMergeMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMergePhysicsData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPivotPointAtZero,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImportVertexColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bComputedLightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLightMapUV,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshMergingSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshMergingSettings),
				alignof(FMeshMergingSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_CRC() { return 1253441521U; }
class UScriptStruct* FMeshProxySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshProxySettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshProxySettings"), sizeof(FMeshProxySettings), Get_Z_Construct_UScriptStruct_FMeshProxySettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshProxySettings(FMeshProxySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshProxySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshProxySettings")),new UScriptStruct::TCppStructOps<FMeshProxySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshProxySettings"), sizeof(FMeshProxySettings), Get_Z_Construct_UScriptStruct_FMeshProxySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshProxySettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeCullingPrecision_MetaData[] = {
				{ "Category", "LandscapeCulling" },
				{ "EditCondition", "bUseLandscapeCulling" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Level of detail of the landscape that should be used for the culling" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandscapeCullingPrecision = { UE4CodeGen_Private::EPropertyClass::Byte, "LandscapeCullingPrecision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, LandscapeCullingPrecision), Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, METADATA_PARAMS(NewProp_LandscapeCullingPrecision_MetaData, ARRAY_COUNT(NewProp_LandscapeCullingPrecision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[] = {
				{ "Category", "LandscapeCulling" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
			};
#endif
			auto NewProp_bUseLandscapeCulling_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bUseLandscapeCulling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLandscapeCulling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLandscapeCulling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLandscapeCulling_MetaData, ARRAY_COUNT(NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bBakeVertexData_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bBakeVertexData_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexData = { UE4CodeGen_Private::EPropertyClass::Bool, "bBakeVertexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBakeVertexData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBakeVertexData_MetaData, ARRAY_COUNT(NewProp_bBakeVertexData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh" },
			};
#endif
			auto NewProp_bRecalculateNormals_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bRecalculateNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecalculateNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecalculateNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecalculateNormals_MetaData, ARRAY_COUNT(NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeLightMapResolution_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging" },
			};
#endif
			auto NewProp_bComputeLightMapResolution_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bComputeLightMapResolution = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeLightMapResolution = { UE4CodeGen_Private::EPropertyClass::Bool, "bComputeLightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bComputeLightMapResolution_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bComputeLightMapResolution_MetaData, ARRAY_COUNT(NewProp_bComputeLightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "EditCondition", "!bComputeLightMapResolution" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Lightmap resolution" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "LightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, LightMapResolution), METADATA_PARAMS(NewProp_LightMapResolution_MetaData, ARRAY_COUNT(NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "DisplayName", "Hard Edge Angle" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Angle at which a hard edge is introduced between faces" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "HardAngleThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, HardAngleThreshold), METADATA_PARAMS(NewProp_HardAngleThreshold_MetaData, ARRAY_COUNT(NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeDistance_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Distance at which meshes should be merged together" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MergeDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, MergeDistance), METADATA_PARAMS(NewProp_MergeDistance_MetaData, ARRAY_COUNT(NewProp_MergeDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Determines whether or not the correct LOD models should be calculated given the source meshes and transition size" },
			};
#endif
			auto NewProp_bCalculateCorrectLODModel_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bCalculateCorrectLODModel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculateCorrectLODModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculateCorrectLODModel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCalculateCorrectLODModel_MetaData, ARRAY_COUNT(NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bExportSpecularMap_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bExportSpecularMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportSpecularMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportSpecularMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportSpecularMap_MetaData, ARRAY_COUNT(NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bExportRoughnessMap_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportRoughnessMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportRoughnessMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportRoughnessMap_MetaData, ARRAY_COUNT(NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bExportMetallicMap_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bExportMetallicMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportMetallicMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportMetallicMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportMetallicMap_MetaData, ARRAY_COUNT(NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bExportNormalMap_SetBit = [](void* Obj){ ((FMeshProxySettings*)Obj)->bExportNormalMap_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bExportNormalMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshProxySettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExportNormalMap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExportNormalMap_MetaData, ARRAY_COUNT(NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureHeight = { UE4CodeGen_Private::EPropertyClass::Int, "TextureHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, TextureHeight_DEPRECATED), METADATA_PARAMS(NewProp_TextureHeight_MetaData, ARRAY_COUNT(NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureWidth = { UE4CodeGen_Private::EPropertyClass::Int, "TextureWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, TextureWidth_DEPRECATED), METADATA_PARAMS(NewProp_TextureWidth_MetaData, ARRAY_COUNT(NewProp_TextureWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Material simplification" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(NewProp_MaterialSettings_MetaData, ARRAY_COUNT(NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
				{ "Category", "ProxySettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Screen size of the resulting proxy mesh in pixel size" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Int, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshProxySettings, ScreenSize), METADATA_PARAMS(NewProp_ScreenSize_MetaData, ARRAY_COUNT(NewProp_ScreenSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeCullingPrecision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLandscapeCulling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBakeVertexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecalculateNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bComputeLightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HardAngleThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergeDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculateCorrectLODModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportSpecularMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportRoughnessMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportMetallicMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExportNormalMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshProxySettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshProxySettings),
				alignof(FMeshProxySettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_CRC() { return 1296131923U; }
class UScriptStruct* FMeshReductionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshReductionSettings"), sizeof(FMeshReductionSettings), Get_Z_Construct_UScriptStruct_FMeshReductionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshReductionSettings(FMeshReductionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshReductionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshReductionSettings")),new UScriptStruct::TCppStructOps<FMeshReductionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshReductionSettings"), sizeof(FMeshReductionSettings), Get_Z_Construct_UScriptStruct_FMeshReductionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Settings used to reduce a mesh." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportance_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Higher values minimize change to vertex color data." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "VertexColorImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, VertexColorImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(NewProp_VertexColorImportance_MetaData, ARRAY_COUNT(NewProp_VertexColorImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Higher values generates fewer samples" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness = { UE4CodeGen_Private::EPropertyClass::Byte, "VisibilityAggressiveness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(NewProp_VisibilityAggressiveness_MetaData, ARRAY_COUNT(NewProp_VisibilityAggressiveness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullOccluded_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bCullOccluded_SetBit = [](void* Obj){ ((FMeshReductionSettings*)Obj)->bCullOccluded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullOccluded = { UE4CodeGen_Private::EPropertyClass::Bool, "bCullOccluded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshReductionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCullOccluded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCullOccluded_MetaData, ARRAY_COUNT(NewProp_bCullOccluded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibilityAided_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bVisibilityAided_SetBit = [](void* Obj){ ((FMeshReductionSettings*)Obj)->bVisibilityAided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibilityAided = { UE4CodeGen_Private::EPropertyClass::Bool, "bVisibilityAided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshReductionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVisibilityAided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVisibilityAided_MetaData, ARRAY_COUNT(NewProp_bVisibilityAided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepSymmetry_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bKeepSymmetry_SetBit = [](void* Obj){ ((FMeshReductionSettings*)Obj)->bKeepSymmetry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepSymmetry = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepSymmetry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshReductionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKeepSymmetry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKeepSymmetry_MetaData, ARRAY_COUNT(NewProp_bKeepSymmetry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueLightmapUVs_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bGenerateUniqueLightmapUVs_SetBit = [](void* Obj){ ((FMeshReductionSettings*)Obj)->bGenerateUniqueLightmapUVs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueLightmapUVs = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateUniqueLightmapUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshReductionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateUniqueLightmapUVs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateUniqueLightmapUVs_MetaData, ARRAY_COUNT(NewProp_bGenerateUniqueLightmapUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLODModel_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseLODModel = { UE4CodeGen_Private::EPropertyClass::Int, "BaseLODModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, BaseLODModel), METADATA_PARAMS(NewProp_BaseLODModel_MetaData, ARRAY_COUNT(NewProp_BaseLODModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			auto NewProp_bRecalculateNormals_SetBit = [](void* Obj){ ((FMeshReductionSettings*)Obj)->bRecalculateNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecalculateNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshReductionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecalculateNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecalculateNormals_MetaData, ARRAY_COUNT(NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Higher values try to preserve normals better." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, ShadingImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(NewProp_ShadingImportance_MetaData, ARRAY_COUNT(NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Higher values reduce texture stretching." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, TextureImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(NewProp_TextureImportance_MetaData, ARRAY_COUNT(NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Higher values minimize change to border edges." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SilhouetteImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Angle at which a hard edge is introduced between faces." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "HardAngleThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, HardAngleThreshold), METADATA_PARAMS(NewProp_HardAngleThreshold_MetaData, ARRAY_COUNT(NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Threshold in object space at which vertices are welded together." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WeldingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, WeldingThreshold), METADATA_PARAMS(NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelError_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "The amount of error in pixels allowed for this LOD." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelError = { UE4CodeGen_Private::EPropertyClass::Float, "PixelError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, PixelError), METADATA_PARAMS(NewProp_PixelError_MetaData, ARRAY_COUNT(NewProp_PixelError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviation_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "The maximum distance in object space by which the reduced mesh may deviate from the original mesh." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeviation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, MaxDeviation), METADATA_PARAMS(NewProp_MaxDeviation_MetaData, ARRAY_COUNT(NewProp_MaxDeviation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles = { UE4CodeGen_Private::EPropertyClass::Float, "PercentTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMeshReductionSettings, PercentTriangles), METADATA_PARAMS(NewProp_PercentTriangles_MetaData, ARRAY_COUNT(NewProp_PercentTriangles_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColorImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VisibilityAggressiveness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCullOccluded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVisibilityAided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKeepSymmetry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateUniqueLightmapUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLODModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecalculateNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadingImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SilhouetteImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HardAngleThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeldingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDeviation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentTriangles,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshReductionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshReductionSettings),
				alignof(FMeshReductionSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_CRC() { return 1220997667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
