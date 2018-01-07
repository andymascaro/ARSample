// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/StaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOptimizationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENormalMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollision_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("EOptimizationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOptimizationType(EOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOptimizationType_CRC() { return 4146301064U; }
	UEnum* Z_Construct_UEnum_Engine_EOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_EOptimizationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OT_NumOfTriangles", (int64)OT_NumOfTriangles },
				{ "OT_MaxDeviation", (int64)OT_MaxDeviation },
				{ "OT_MAX", (int64)OT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOptimizationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EOptimizationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EImportanceLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel, Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceLevel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportanceLevel(EImportanceLevel_StaticEnum, TEXT("/Script/Engine"), TEXT("EImportanceLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EImportanceLevel_CRC() { return 4088364994U; }
	UEnum* Z_Construct_UEnum_Engine_EImportanceLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportanceLevel"), 0, Get_Z_Construct_UEnum_Engine_EImportanceLevel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IL_Off", (int64)IL_Off },
				{ "IL_Lowest", (int64)IL_Lowest },
				{ "IL_Low", (int64)IL_Low },
				{ "IL_Normal", (int64)IL_Normal },
				{ "IL_High", (int64)IL_High },
				{ "IL_Highest", (int64)IL_Highest },
				{ "TEMP_BROKEN2", (int64)TEMP_BROKEN2 },
				{ "EImportanceLevel_MAX", (int64)EImportanceLevel_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EImportanceLevel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EImportanceLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENormalMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENormalMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENormalMode(ENormalMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENormalMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENormalMode_CRC() { return 330656146U; }
	UEnum* Z_Construct_UEnum_Engine_ENormalMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENormalMode"), 0, Get_Z_Construct_UEnum_Engine_ENormalMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NM_PreserveSmoothingGroups", (int64)NM_PreserveSmoothingGroups },
				{ "NM_RecalculateNormals", (int64)NM_RecalculateNormals },
				{ "NM_RecalculateNormalsSmooth", (int64)NM_RecalculateNormalsSmooth },
				{ "NM_RecalculateNormalsHard", (int64)NM_RecalculateNormalsHard },
				{ "TEMP_BROKEN", (int64)TEMP_BROKEN },
				{ "ENormalMode_MAX", (int64)ENormalMode_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Optimization settings used to simplify mesh LODs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENormalMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ENormalMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMaterialRemapIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialRemapIndex, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialRemapIndex(FMaterialRemapIndex::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialRemapIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialRemapIndex")),new UScriptStruct::TCppStructOps<FMaterialRemapIndex>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialRemapIndex>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemap = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialRemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialRemapIndex, MaterialRemap), METADATA_PARAMS(NewProp_MaterialRemap_MetaData, ARRAY_COUNT(NewProp_MaterialRemap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialRemap_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialRemap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersionKey_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImportVersionKey = { UE4CodeGen_Private::EPropertyClass::UInt32, "ImportVersionKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialRemapIndex, ImportVersionKey), METADATA_PARAMS(NewProp_ImportVersionKey_MetaData, ARRAY_COUNT(NewProp_ImportVersionKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialRemap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialRemap_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportVersionKey,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialRemapIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialRemapIndex),
				alignof(FMaterialRemapIndex),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC() { return 2130470544U; }
class UScriptStruct* FStaticMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMaterial(FStaticMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMaterial")),new UScriptStruct::TCppStructOps<FStaticMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMaterial;
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterial>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVChannelData = { UE4CodeGen_Private::EPropertyClass::Struct, "UVChannelData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FStaticMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(NewProp_UVChannelData_MetaData, ARRAY_COUNT(NewProp_UVChannelData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "ImportedMaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(FStaticMaterial, ImportedMaterialSlotName), METADATA_PARAMS(NewProp_ImportedMaterialSlotName_MetaData, ARRAY_COUNT(NewProp_ImportedMaterialSlotName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStaticMaterial, MaterialSlotName), METADATA_PARAMS(NewProp_MaterialSlotName_MetaData, ARRAY_COUNT(NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FStaticMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MaterialInterface_MetaData, ARRAY_COUNT(NewProp_MaterialInterface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVChannelData,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedMaterialSlotName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInterface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StaticMaterial",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStaticMaterial),
				alignof(FStaticMaterial),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC() { return 716515105U; }
class UScriptStruct* FAssetEditorOrbitCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, Z_Construct_UPackage__Script_Engine(), TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorOrbitCameraPosition(FAssetEditorOrbitCameraPosition::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetEditorOrbitCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorOrbitCameraPosition")),new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition;
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The rotation to apply around the orbit point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "CamOrbitRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_CamOrbitRotation_MetaData, ARRAY_COUNT(NewProp_CamOrbitRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitZoom_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The distance of the camera from the orbit point" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitZoom = { UE4CodeGen_Private::EPropertyClass::Struct, "CamOrbitZoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitZoom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CamOrbitZoom_MetaData, ARRAY_COUNT(NewProp_CamOrbitZoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitPoint_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The position to orbit the camera around" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "CamOrbitPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CamOrbitPoint_MetaData, ARRAY_COUNT(NewProp_CamOrbitPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Whether or not this has been set to a valid value" },
			};
#endif
			auto NewProp_bIsSet_SetBit = [](void* Obj){ ((FAssetEditorOrbitCameraPosition*)Obj)->bIsSet = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSet = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAssetEditorOrbitCameraPosition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSet_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsSet_MetaData, ARRAY_COUNT(NewProp_bIsSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamOrbitRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamOrbitZoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CamOrbitPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSet,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AssetEditorOrbitCameraPosition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAssetEditorOrbitCameraPosition),
				alignof(FAssetEditorOrbitCameraPosition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC() { return 2578516706U; }
class UScriptStruct* FMeshSectionInfoMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfoMap, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfoMap(FMeshSectionInfoMap::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfoMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSectionInfoMap")),new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Map containing per-section settings for each section of each LOD." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Maps an LOD+Section to the material it should render with." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map = { UE4CodeGen_Private::EPropertyClass::Map, "Map", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMeshSectionInfoMap, Map), METADATA_PARAMS(NewProp_Map_MetaData, ARRAY_COUNT(NewProp_Map_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::UInt32, "Map_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Map", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMeshSectionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Map,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Map_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Map_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshSectionInfoMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshSectionInfoMap),
				alignof(FMeshSectionInfoMap),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC() { return 3562381063U; }
class UScriptStruct* FMeshSectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfo(FMeshSectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSectionInfo")),new UScriptStruct::TCppStructOps<FMeshSectionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Per-section settings." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, this section will cast shadows." },
			};
#endif
			auto NewProp_bCastShadow_SetBit = [](void* Obj){ ((FMeshSectionInfo*)Obj)->bCastShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshSectionInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadow_MetaData, ARRAY_COUNT(NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, collision is enabled for this section." },
			};
#endif
			auto NewProp_bEnableCollision_SetBit = [](void* Obj){ ((FMeshSectionInfo*)Obj)->bEnableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMeshSectionInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCollision_MetaData, ARRAY_COUNT(NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Index in to the Materials array on UStaticMesh." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMeshSectionInfo, MaterialIndex), METADATA_PARAMS(NewProp_MaterialIndex_MetaData, ARRAY_COUNT(NewProp_MaterialIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshSectionInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshSectionInfo),
				alignof(FMeshSectionInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC() { return 1911040687U; }
class UScriptStruct* FStaticMeshSourceModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshSourceModel, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshSourceModel(FStaticMeshSourceModel::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshSourceModel"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshSourceModel")),new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel;
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Source model from which a renderable static mesh is built." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStaticMeshSourceModel, ScreenSize), METADATA_PARAMS(NewProp_ScreenSize_MetaData, ARRAY_COUNT(NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistance = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshSourceModel, LODDistance_DEPRECATED), METADATA_PARAMS(NewProp_LODDistance_MetaData, ARRAY_COUNT(NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Reduction settings to apply when building render data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "ReductionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStaticMeshSourceModel, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(NewProp_ReductionSettings_MetaData, ARRAY_COUNT(NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[] = {
				{ "Category", "BuildSettings" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Settings applied when building the mesh." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FStaticMeshSourceModel, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(NewProp_BuildSettings_MetaData, ARRAY_COUNT(NewProp_BuildSettings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReductionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildSettings,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StaticMeshSourceModel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStaticMeshSourceModel),
				alignof(FStaticMeshSourceModel),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_CRC() { return 1054390398U; }
class UScriptStruct* FStaticMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshOptimizationSettings(FStaticMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshOptimizationSettings")),new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Old optimization settings." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "How important shading quality is." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ShadingImportance), nullptr, METADATA_PARAMS(NewProp_ShadingImportance_MetaData, ARRAY_COUNT(NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "How important texture density is (EImportanceLevel)." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, TextureImportance), nullptr, METADATA_PARAMS(NewProp_TextureImportance_MetaData, ARRAY_COUNT(NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "How important the shape of the geometry is (EImportanceLevel)." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SilhouetteImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, SilhouetteImportance), nullptr, METADATA_PARAMS(NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "NormalsThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(NewProp_NormalsThreshold_MetaData, ARRAY_COUNT(NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used *" },
			};
#endif
			auto NewProp_bRecalcNormals_SetBit = [](void* Obj){ ((FStaticMeshOptimizationSettings*)Obj)->bRecalcNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecalcNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticMeshOptimizationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecalcNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecalcNormals_MetaData, ARRAY_COUNT(NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WeldingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeviationPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(NewProp_MaxDeviationPercentage_MetaData, ARRAY_COUNT(NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "NumOfTrianglesPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(NewProp_NumOfTrianglesPercentage_MetaData, ARRAY_COUNT(NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ReductionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_EOptimizationType, METADATA_PARAMS(NewProp_ReductionMethod_MetaData, ARRAY_COUNT(NewProp_ReductionMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadingImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SilhouetteImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalsThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecalcNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeldingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDeviationPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumOfTrianglesPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReductionMethod,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StaticMeshOptimizationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStaticMeshOptimizationSettings),
				alignof(FStaticMeshOptimizationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC() { return 370558592U; }
	void UStaticMesh::StaticRegisterNativesUStaticMesh()
	{
		UClass* Class = UStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundingBox", (Native)&UStaticMesh::execGetBoundingBox },
			{ "GetBounds", (Native)&UStaticMesh::execGetBounds },
			{ "GetMaterial", (Native)&UStaticMesh::execGetMaterial },
			{ "GetMaterialIndex", (Native)&UStaticMesh::execGetMaterialIndex },
			{ "GetNumLODs", (Native)&UStaticMesh::execGetNumLODs },
			{ "GetNumSections", (Native)&UStaticMesh::execGetNumSections },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox()
	{
		struct StaticMesh_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetBoundingBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820403, sizeof(StaticMesh_eventGetBoundingBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds()
	{
		struct StaticMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Returns the number of bounds of the mesh.\n\n@return      The bounding box represented as box origin with extents and also a sphere that encapsulates that box" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820403, sizeof(StaticMesh_eventGetBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial()
	{
		struct StaticMesh_eventGetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Gets a Material given a Material Index and an LOD number\n\n@return Requested material" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(StaticMesh_eventGetMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex()
	{
		struct StaticMesh_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSlotName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Gets a Material index given a slot name\n\n@return Requested material" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetMaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(StaticMesh_eventGetMaterialIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs()
	{
		struct StaticMesh_eventGetNumLODs_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Returns the number of LODs used by the mesh." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetNumLODs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(StaticMesh_eventGetNumLODs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections()
	{
		struct StaticMesh_eventGetNumSections_Parms
		{
			int32 InLOD;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLOD = { UE4CodeGen_Private::EPropertyClass::Int, "InLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, InLOD), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLOD,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, "GetNumSections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(StaticMesh_eventGetNumSections_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStaticMesh_NoRegister()
	{
		return UStaticMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_UStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UStaticMesh_GetBoundingBox, "GetBoundingBox" }, // 3612557988
				{ &Z_Construct_UFunction_UStaticMesh_GetBounds, "GetBounds" }, // 366746440
				{ &Z_Construct_UFunction_UStaticMesh_GetMaterial, "GetMaterial" }, // 3225516246
				{ &Z_Construct_UFunction_UStaticMesh_GetMaterialIndex, "GetMaterialIndex" }, // 1517784775
				{ &Z_Construct_UFunction_UStaticMesh_GetNumLODs, "GetNumLODs" }, // 3529701551
				{ &Z_Construct_UFunction_UStaticMesh_GetNumSections, "GetNumSections" }, // 17353232
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/StaticMesh.h" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A StaticMesh is a piece of geometry that consists of a static set of polygons.\nStatic Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\nto render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see AStaticMeshActor, UStaticMeshComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavCollision_MetaData[] = {
				{ "Category", "Navigation" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Pre-build navigation collision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavCollision = { UE4CodeGen_Private::EPropertyClass::Object, "NavCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120000002a2009, 1, nullptr, STRUCT_OFFSET(UStaticMesh, NavCollision), Z_Construct_UClass_UNavCollision_NoRegister, METADATA_PARAMS(NewProp_NavCollision_MetaData, ARRAY_COUNT(NewProp_NavCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c8000000009, 1, nullptr, STRUCT_OFFSET(UStaticMesh, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementToIgnoreForTexFactor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Index of an element to ignore while gathering streaming texture factors.\nThis is useful to disregard automatically generated vertex data which breaks texture factor heuristics." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementToIgnoreForTexFactor = { UE4CodeGen_Private::EPropertyClass::Int, "ElementToIgnoreForTexFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor), METADATA_PARAMS(NewProp_ElementToIgnoreForTexFactor_MetaData, ARRAY_COUNT(NewProp_ElementToIgnoreForTexFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Original mesh bounds extended with Positive/NegativeBoundsExtension" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtendedBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_ExtendedBounds_MetaData, ARRAY_COUNT(NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Bound extension values in the negative direction of XYZ, positive value increases bound size" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Struct, "NegativeBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NegativeBoundsExtension_MetaData, ARRAY_COUNT(NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Bound extension values in the positive direction of XYZ, positive value increases bound size" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Struct, "PositiveBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000010001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PositiveBoundsExtension_MetaData, ARRAY_COUNT(NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets = { UE4CodeGen_Private::EPropertyClass::Array, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, Sockets), METADATA_PARAMS(NewProp_Sockets_MetaData, ARRAY_COUNT(NewProp_Sockets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomizedCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import" },
			};
#endif
			auto NewProp_bCustomizedCollision_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bCustomizedCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomizedCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomizedCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomizedCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomizedCollision_MetaData, ARRAY_COUNT(NewProp_bCustomizedCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCameraPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The stored camera position to use as a default for the static mesh editor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCameraPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorCameraPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, EditorCameraPosition), Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, METADATA_PARAMS(NewProp_EditorCameraPosition_MetaData, ARRAY_COUNT(NewProp_EditorCameraPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120408000a0009, 1, nullptr, STRUCT_OFFSET(UStaticMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Date/Time-stamp of the file from the last import" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Path to the resource used to construct this static mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Importing data and options used for this mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000800080009, 1, nullptr, STRUCT_OFFSET(UStaticMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\nThis is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)" },
			};
#endif
			auto NewProp_bAllowCPUAccess_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bAllowCPUAccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowCPUAccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowCPUAccess_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowCPUAccess_MetaData, ARRAY_COUNT(NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting" },
				{ "UIMax", "3.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "LpvBiasMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LpvBiasMultiplier), METADATA_PARAMS(NewProp_LpvBiasMultiplier_MetaData, ARRAY_COUNT(NewProp_LpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
			};
#endif
			auto NewProp_bSupportUniformlyDistributedSampling_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bSupportUniformlyDistributedSampling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportUniformlyDistributedSampling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportUniformlyDistributedSampling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportUniformlyDistributedSampling_MetaData, ARRAY_COUNT(NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNavigationData_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n          Set to false for distant meshes (always outside navigation bounds) to save memory on collision data." },
			};
#endif
			auto NewProp_bHasNavigationData_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bHasNavigationData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNavigationData = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasNavigationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasNavigationData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasNavigationData_MetaData, ARRAY_COUNT(NewProp_bHasNavigationData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripComplexCollisionForConsole_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n              On the Playstation 3 data of this mesh will be stored in video memory." },
			};
#endif
			auto NewProp_bStripComplexCollisionForConsole_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bStripComplexCollisionForConsole_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripComplexCollisionForConsole = { UE4CodeGen_Private::EPropertyClass::Bool, "bStripComplexCollisionForConsole", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStripComplexCollisionForConsole_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStripComplexCollisionForConsole_MetaData, ARRAY_COUNT(NewProp_bStripComplexCollisionForConsole_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODForCollision_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "DisplayName", "LOD For Collision" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Specifies which mesh LOD to use for complex (per-poly) collision.\nSometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\nCollision representation does not change based on distance to camera." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODForCollision = { UE4CodeGen_Private::EPropertyClass::Int, "LODForCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LODForCollision), METADATA_PARAMS(NewProp_LODForCollision_MetaData, ARRAY_COUNT(NewProp_LODForCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Physics data." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000282009, 1, nullptr, STRUCT_OFFSET(UStaticMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceField_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\nThis is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled." },
			};
#endif
			auto NewProp_bGenerateMeshDistanceField_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bGenerateMeshDistanceField = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceField = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshDistanceField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshDistanceField_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshDistanceField_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshDistanceField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceFieldSelfShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, DistanceFieldSelfShadowBias), METADATA_PARAMS(NewProp_DistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The light map coordinate index" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LightMapCoordinateIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LightMapCoordinateIndex), METADATA_PARAMS(NewProp_LightMapCoordinateIndex_MetaData, ARRAY_COUNT(NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[] = {
				{ "Category", "StaticMesh" },
				{ "ClampMax", "4096" },
				{ "FixedIncrement", "4.0" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The light map resolution" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution = { UE4CodeGen_Private::EPropertyClass::Int, "LightMapResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LightMapResolution), METADATA_PARAMS(NewProp_LightMapResolution_MetaData, ARRAY_COUNT(NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVDensity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightmapUVDensity = { UE4CodeGen_Private::EPropertyClass::Float, "LightmapUVDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LightmapUVDensity), METADATA_PARAMS(NewProp_LightmapUVDensity_MetaData, ARRAY_COUNT(NewProp_LightmapUVDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "StaticMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, StaticMaterials), METADATA_PARAMS(NewProp_StaticMaterials_MetaData, ARRAY_COUNT(NewProp_StaticMaterials_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Materials used by this static mesh. Individual sections index in to this array." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, Materials_DEPRECATED), METADATA_PARAMS(NewProp_Materials_MetaData, ARRAY_COUNT(NewProp_Materials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Minimum LOD to use for rendering.  This is the default setting for the mesh and can be overridden by component settings." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "MinLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, MinLOD), METADATA_PARAMS(NewProp_MinLOD_MetaData, ARRAY_COUNT(NewProp_MinLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The lightmap UV generation version used during the last derived data build" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightmapUVVersion = { UE4CodeGen_Private::EPropertyClass::Int, "LightmapUVVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LightmapUVVersion), METADATA_PARAMS(NewProp_LightmapUVVersion_MetaData, ARRAY_COUNT(NewProp_LightmapUVVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemapIndexPerImportVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemapIndexPerImportVersion = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialRemapIndexPerImportVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, MaterialRemapIndexPerImportVersion), METADATA_PARAMS(NewProp_MaterialRemapIndexPerImportVersion_MetaData, ARRAY_COUNT(NewProp_MaterialRemapIndexPerImportVersion_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRemapIndexPerImportVersion_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialRemapIndexPerImportVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialRemapIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The last import version" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportVersion = { UE4CodeGen_Private::EPropertyClass::Int, "ImportVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, ImportVersion), METADATA_PARAMS(NewProp_ImportVersion_MetaData, ARRAY_COUNT(NewProp_ImportVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "If true, the screen sizees at which LODs swap are computed automatically." },
			};
#endif
			auto NewProp_bAutoComputeLODScreenSize_SetBit = [](void* Obj){ ((UStaticMesh*)Obj)->bAutoComputeLODScreenSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoComputeLODScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStaticMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoComputeLODScreenSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoComputeLODScreenSize_MetaData, ARRAY_COUNT(NewProp_bAutoComputeLODScreenSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[] = {
				{ "Category", "LodSettings" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "The LOD group to which this mesh belongs." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LODGroup = { UE4CodeGen_Private::EPropertyClass::Name, "LODGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010800000001, 1, nullptr, STRUCT_OFFSET(UStaticMesh, LODGroup), METADATA_PARAMS(NewProp_LODGroup_MetaData, ARRAY_COUNT(NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSectionInfoMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "We need the OriginalSectionInfoMap to be able to build mesh in a non destructive way. Reduce has to play with SectionInfoMap in case some sections disappear.\nThis member will be update in the following situation\n1. After a static mesh import/reimport\n2. Postload, if the OriginalSectionInfoMap is empty, we will fill it with the current SectionInfoMap\n\nWe do not update it when the user shuffle section in the staticmesh editor because the OriginalSectionInfoMap must always be in sync with the saved rawMesh bulk data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalSectionInfoMap = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalSectionInfoMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, OriginalSectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(NewProp_OriginalSectionInfoMap_MetaData, ARRAY_COUNT(NewProp_OriginalSectionInfoMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Map of LOD+Section index to per-section info." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap = { UE4CodeGen_Private::EPropertyClass::Struct, "SectionInfoMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, SectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(NewProp_SectionInfoMap_MetaData, ARRAY_COUNT(NewProp_SectionInfoMap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Imported raw mesh bulk data." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceModels = { UE4CodeGen_Private::EPropertyClass::Array, "SourceModels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UStaticMesh, SourceModels), METADATA_PARAMS(NewProp_SourceModels_MetaData, ARRAY_COUNT(NewProp_SourceModels_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceModels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticMeshSourceModel, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElementToIgnoreForTexFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendedBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NegativeBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositiveBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomizedCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorCameraPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowCPUAccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LpvBiasMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportUniformlyDistributedSampling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasNavigationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStripComplexCollisionForConsole,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODForCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshDistanceField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceFieldSelfShadowBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightMapCoordinateIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightMapResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmapUVDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMaterials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLOD,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightmapUVVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialRemapIndexPerImportVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialRemapIndexPerImportVersion_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoComputeLODScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalSectionInfoMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionInfoMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceModels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceModels_Inner,
#endif // WITH_EDITORONLY_DATA
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_CollisionDataProvider), false },
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStaticMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStaticMesh::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMesh, 1099853502);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMesh(Z_Construct_UClass_UStaticMesh, &UStaticMesh::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
