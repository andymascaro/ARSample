// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SkeletalMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleSortSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETriangleSortAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETriangleSortOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocket();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_GetBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_GetImportedBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMesh_NumSockets();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* SkeletalMeshOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationType(SkeletalMeshOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_CRC() { return 3661466381U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOT_NumOfTriangles", (int64)SMOT_NumOfTriangles },
				{ "SMOT_MaxDeviation", (int64)SMOT_MaxDeviation },
				{ "SMOT_MAX", (int64)SMOT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SkeletalMeshOptimizationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"SkeletalMeshOptimizationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SkeletalMeshOptimizationImportance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationImportance"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationImportance(SkeletalMeshOptimizationImportance_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationImportance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_CRC() { return 3700871354U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationImportance"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOI_Off", (int64)SMOI_Off },
				{ "SMOI_Lowest", (int64)SMOI_Lowest },
				{ "SMOI_Low", (int64)SMOI_Low },
				{ "SMOI_Normal", (int64)SMOI_Normal },
				{ "SMOI_High", (int64)SMOI_High },
				{ "SMOI_Highest", (int64)SMOI_Highest },
				{ "SMOI_MAX", (int64)SMOI_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Enum specifying the importance of properties when simplifying skeletal meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SkeletalMeshOptimizationImportance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"SkeletalMeshOptimizationImportance",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkeletalMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMaterial"), sizeof(FSkeletalMaterial), Get_Z_Construct_UScriptStruct_FSkeletalMaterial_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMaterial(FSkeletalMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMaterial")),new UScriptStruct::TCppStructOps<FSkeletalMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMaterial"), sizeof(FSkeletalMaterial), Get_Z_Construct_UScriptStruct_FSkeletalMaterial_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMaterial>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVChannelData = { UE4CodeGen_Private::EPropertyClass::Struct, "UVChannelData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FSkeletalMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(NewProp_UVChannelData_MetaData, ARRAY_COUNT(NewProp_UVChannelData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "ImportedMaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800020001, 1, nullptr, STRUCT_OFFSET(FSkeletalMaterial, ImportedMaterialSlotName), METADATA_PARAMS(NewProp_ImportedMaterialSlotName_MetaData, ARRAY_COUNT(NewProp_ImportedMaterialSlotName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSkeletalMaterial, MaterialSlotName), METADATA_PARAMS(NewProp_MaterialSlotName_MetaData, ARRAY_COUNT(NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewProp_bRecomputeTangent_SetBit = [](void* Obj){ ((FSkeletalMaterial*)Obj)->bRecomputeTangent_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecomputeTangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkeletalMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecomputeTangent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecomputeTangent_MetaData, ARRAY_COUNT(NewProp_bRecomputeTangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewProp_bEnableShadowCasting_SetBit = [](void* Obj){ ((FSkeletalMaterial*)Obj)->bEnableShadowCasting_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableShadowCasting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkeletalMaterial), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableShadowCasting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableShadowCasting_MetaData, ARRAY_COUNT(NewProp_bEnableShadowCasting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInterface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSkeletalMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MaterialInterface_MetaData, ARRAY_COUNT(NewProp_MaterialInterface_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVChannelData,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedMaterialSlotName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSlotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecomputeTangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableShadowCasting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInterface,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMaterial",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMaterial),
				alignof(FSkeletalMaterial),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_CRC() { return 2012112524U; }
class UScriptStruct* FClothingAssetData_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothingAssetData_Legacy, Z_Construct_UPackage__Script_Engine(), TEXT("ClothingAssetData_Legacy"), sizeof(FClothingAssetData_Legacy), Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothingAssetData_Legacy(FClothingAssetData_Legacy::StaticStruct, TEXT("/Script/Engine"), TEXT("ClothingAssetData_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy
{
	FScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothingAssetData_Legacy")),new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy;
	UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothingAssetData_Legacy"), sizeof(FClothingAssetData_Legacy), Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Legacy struct for handling back compat serialization" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsProperties_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsProperties = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicsProperties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, PhysicsProperties), Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, METADATA_PARAMS(NewProp_PhysicsProperties_MetaData, ARRAY_COUNT(NewProp_PhysicsProperties_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClothPropertiesChanged_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewProp_bClothPropertiesChanged_SetBit = [](void* Obj){ ((FClothingAssetData_Legacy*)Obj)->bClothPropertiesChanged = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClothPropertiesChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "bClothPropertiesChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FClothingAssetData_Legacy), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClothPropertiesChanged_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClothPropertiesChanged_MetaData, ARRAY_COUNT(NewProp_bClothPropertiesChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApexFileName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApexFileName = { UE4CodeGen_Private::EPropertyClass::Str, "ApexFileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, ApexFileName), METADATA_PARAMS(NewProp_ApexFileName_MetaData, ARRAY_COUNT(NewProp_ApexFileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName = { UE4CodeGen_Private::EPropertyClass::Name, "AssetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, AssetName), METADATA_PARAMS(NewProp_AssetName_MetaData, ARRAY_COUNT(NewProp_AssetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsProperties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClothPropertiesChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApexFileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothingAssetData_Legacy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothingAssetData_Legacy),
				alignof(FClothingAssetData_Legacy),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_CRC() { return 598450176U; }
class UScriptStruct* FClothPhysicsProperties_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, Z_Construct_UPackage__Script_Engine(), TEXT("ClothPhysicsProperties_Legacy"), sizeof(FClothPhysicsProperties_Legacy), Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicsProperties_Legacy(FClothPhysicsProperties_Legacy::StaticStruct, TEXT("/Script/Engine"), TEXT("ClothPhysicsProperties_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy
{
	FScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicsProperties_Legacy")),new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy;
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicsProperties_Legacy"), sizeof(FClothPhysicsProperties_Legacy), Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Legacy object for back-compat loading, no longer used by clothing system" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberResistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberResistance = { UE4CodeGen_Private::EPropertyClass::Float, "FiberResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberResistance), METADATA_PARAMS(NewProp_FiberResistance_MetaData, ARRAY_COUNT(NewProp_FiberResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberExpansion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberExpansion = { UE4CodeGen_Private::EPropertyClass::Float, "FiberExpansion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberExpansion), METADATA_PARAMS(NewProp_FiberExpansion_MetaData, ARRAY_COUNT(NewProp_FiberExpansion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberCompression_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberCompression = { UE4CodeGen_Private::EPropertyClass::Float, "FiberCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberCompression), METADATA_PARAMS(NewProp_FiberCompression_MetaData, ARRAY_COUNT(NewProp_FiberCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "SolverFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SolverFrequency), METADATA_PARAMS(NewProp_SolverFrequency_MetaData, ARRAY_COUNT(NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionStiffness), METADATA_PARAMS(NewProp_SelfCollisionStiffness_MetaData, ARRAY_COUNT(NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionSquashScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionSquashScale = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionSquashScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionSquashScale), METADATA_PARAMS(NewProp_SelfCollisionSquashScale_MetaData, ARRAY_COUNT(NewProp_SelfCollisionSquashScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness = { UE4CodeGen_Private::EPropertyClass::Float, "SelfCollisionThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionThickness), METADATA_PARAMS(NewProp_SelfCollisionThickness_MetaData, ARRAY_COUNT(NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaBlend_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InertiaBlend = { UE4CodeGen_Private::EPropertyClass::Float, "InertiaBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, InertiaBlend), METADATA_PARAMS(NewProp_InertiaBlend_MetaData, ARRAY_COUNT(NewProp_InertiaBlend_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale = { UE4CodeGen_Private::EPropertyClass::Float, "MassScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, MassScale), METADATA_PARAMS(NewProp_MassScale_MetaData, ARRAY_COUNT(NewProp_MassScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale = { UE4CodeGen_Private::EPropertyClass::Float, "GravityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, GravityScale), METADATA_PARAMS(NewProp_GravityScale_MetaData, ARRAY_COUNT(NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "StiffnessFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, StiffnessFrequency), METADATA_PARAMS(NewProp_StiffnessFrequency_MetaData, ARRAY_COUNT(NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag = { UE4CodeGen_Private::EPropertyClass::Float, "Drag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Drag), METADATA_PARAMS(NewProp_Drag_MetaData, ARRAY_COUNT(NewProp_Drag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherLimit = { UE4CodeGen_Private::EPropertyClass::Float, "TetherLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherLimit), METADATA_PARAMS(NewProp_TetherLimit_MetaData, ARRAY_COUNT(NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "TetherStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherStiffness), METADATA_PARAMS(NewProp_TetherStiffness_MetaData, ARRAY_COUNT(NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping = { UE4CodeGen_Private::EPropertyClass::Float, "Damping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Damping), METADATA_PARAMS(NewProp_Damping_MetaData, ARRAY_COUNT(NewProp_Damping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction = { UE4CodeGen_Private::EPropertyClass::Float, "Friction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Friction), METADATA_PARAMS(NewProp_Friction_MetaData, ARRAY_COUNT(NewProp_Friction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearResistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShearResistance = { UE4CodeGen_Private::EPropertyClass::Float, "ShearResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, ShearResistance), METADATA_PARAMS(NewProp_ShearResistance_MetaData, ARRAY_COUNT(NewProp_ShearResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendResistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BendResistance = { UE4CodeGen_Private::EPropertyClass::Float, "BendResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, BendResistance), METADATA_PARAMS(NewProp_BendResistance_MetaData, ARRAY_COUNT(NewProp_BendResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalResistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalResistance = { UE4CodeGen_Private::EPropertyClass::Float, "HorizontalResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, HorizontalResistance), METADATA_PARAMS(NewProp_HorizontalResistance_MetaData, ARRAY_COUNT(NewProp_HorizontalResistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalResistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalResistance = { UE4CodeGen_Private::EPropertyClass::Float, "VerticalResistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, VerticalResistance), METADATA_PARAMS(NewProp_VerticalResistance_MetaData, ARRAY_COUNT(NewProp_VerticalResistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiberResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiberExpansion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiberCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolverFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionSquashScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfCollisionThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InertiaBlend,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MassScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GravityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StiffnessFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Drag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TetherLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TetherStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Friction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShearResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BendResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HorizontalResistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticalResistance,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ClothPhysicsProperties_Legacy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FClothPhysicsProperties_Legacy),
				alignof(FClothPhysicsProperties_Legacy),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_CRC() { return 3136832373U; }
class UScriptStruct* FSkeletalMeshLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODInfo"), sizeof(FSkeletalMeshLODInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshLODInfo(FSkeletalMeshLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshLODInfo")),new UScriptStruct::TCppStructOps<FSkeletalMeshLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshLODInfo"), sizeof(FSkeletalMeshLODInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Struct containing information for a particular LOD level, such as materials and info for when to use it." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPerLODVertexColors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewProp_bHasPerLODVertexColors_SetBit = [](void* Obj){ ((FSkeletalMeshLODInfo*)Obj)->bHasPerLODVertexColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPerLODVertexColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasPerLODVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshLODInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasPerLODVertexColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasPerLODVertexColors_MetaData, ARRAY_COUNT(NewProp_bHasPerLODVertexColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[] = {
				{ "Category", "SkeletalMeshLODInfo" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The filename of the file tha was used to import this LOD if it was not auto generated." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename = { UE4CodeGen_Private::EPropertyClass::Str, "SourceImportFilename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, SourceImportFilename), METADATA_PARAMS(NewProp_SourceImportFilename_MetaData, ARRAY_COUNT(NewProp_SourceImportFilename_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose = { UE4CodeGen_Private::EPropertyClass::Object, "BakePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_BakePose_MetaData, ARRAY_COUNT(NewProp_BakePose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, BonesToRemove), METADATA_PARAMS(NewProp_BonesToRemove_MetaData, ARRAY_COUNT(NewProp_BonesToRemove_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedBones_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "This has been removed in editor. We could re-apply this in import time or by mesh reduction utilities" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedBones = { UE4CodeGen_Private::EPropertyClass::Array, "RemovedBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, RemovedBones_DEPRECATED), METADATA_PARAMS(NewProp_RemovedBones_MetaData, ARRAY_COUNT(NewProp_RemovedBones_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RemovedBones_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "RemovedBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
				{ "Category", "ReductionSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Reduction settings to apply when building render data." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "ReductionSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(NewProp_ReductionSettings_MetaData, ARRAY_COUNT(NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Whether to disable morph targets for this LOD." },
			};
#endif
			auto NewProp_bHasBeenSimplified_SetBit = [](void* Obj){ ((FSkeletalMeshLODInfo*)Obj)->bHasBeenSimplified = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBeenSimplified", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshLODInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBeenSimplified_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBeenSimplified_MetaData, ARRAY_COUNT(NewProp_bHasBeenSimplified_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleSortSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriangleSortSettings = { UE4CodeGen_Private::EPropertyClass::Array, "TriangleSortSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, TriangleSortSettings), METADATA_PARAMS(NewProp_TriangleSortSettings_MetaData, ARRAY_COUNT(NewProp_TriangleSortSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriangleSortSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TriangleSortSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTriangleSortSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Per-section control over whether to enable shadow casting." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bEnableShadowCasting = { UE4CodeGen_Private::EPropertyClass::Array, "bEnableShadowCasting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, bEnableShadowCasting_DEPRECATED), METADATA_PARAMS(NewProp_bEnableShadowCasting_MetaData, ARRAY_COUNT(NewProp_bEnableShadowCasting_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableShadowCasting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMaterialMap_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Mapping table from this LOD's materials to the USkeletalMesh materials array." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODMaterialMap = { UE4CodeGen_Private::EPropertyClass::Array, "LODMaterialMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODMaterialMap), METADATA_PARAMS(NewProp_LODMaterialMap_MetaData, ARRAY_COUNT(NewProp_LODMaterialMap_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODMaterialMap_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "LODMaterialMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[] = {
				{ "Category", "SkeletalMeshLODInfo" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis = { UE4CodeGen_Private::EPropertyClass::Float, "LODHysteresis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODHysteresis), METADATA_PARAMS(NewProp_LODHysteresis_MetaData, ARRAY_COUNT(NewProp_LODHysteresis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
				{ "Category", "SkeletalMeshLODInfo" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshLODInfo, ScreenSize), METADATA_PARAMS(NewProp_ScreenSize_MetaData, ARRAY_COUNT(NewProp_ScreenSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasPerLODVertexColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceImportFilename,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemovedBones,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemovedBones_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReductionSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBeenSimplified,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriangleSortSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriangleSortSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableShadowCasting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableShadowCasting_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODMaterialMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODMaterialMap_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODHysteresis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshLODInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMeshLODInfo),
				alignof(FSkeletalMeshLODInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_CRC() { return 3310683002U; }
class UScriptStruct* FSkeletalMeshClothBuildParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshClothBuildParams"), sizeof(FSkeletalMeshClothBuildParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshClothBuildParams(FSkeletalMeshClothBuildParams::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshClothBuildParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshClothBuildParams")),new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshClothBuildParams"), sizeof(FSkeletalMeshClothBuildParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Struct holding parameters needed when creating a new clothing asset or sub asset (LOD)" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports." },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_PhysicsAsset_MetaData, ARRAY_COUNT(NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveFromMesh_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly" },
			};
#endif
			auto NewProp_bRemoveFromMesh_SetBit = [](void* Obj){ ((FSkeletalMeshClothBuildParams*)Obj)->bRemoveFromMesh = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveFromMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkeletalMeshClothBuildParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveFromMesh_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveFromMesh_MetaData, ARRAY_COUNT(NewProp_bRemoveFromMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSection_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Section within the specified LOD to extract" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceSection = { UE4CodeGen_Private::EPropertyClass::Int, "SourceSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, SourceSection), METADATA_PARAMS(NewProp_SourceSection_MetaData, ARRAY_COUNT(NewProp_SourceSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "LOD to extract the section from" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LodIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, LodIndex), METADATA_PARAMS(NewProp_LodIndex_MetaData, ARRAY_COUNT(NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
				{ "Category", "Basic" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Name of the clothing asset" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName = { UE4CodeGen_Private::EPropertyClass::Str, "AssetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, AssetName), METADATA_PARAMS(NewProp_AssetName_MetaData, ARRAY_COUNT(NewProp_AssetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemapParameters_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "If reimporting, this will map the old LOD parameters to the new LOD mesh.\nIf adding a new LOD this will map the parameters from the preceeding LOD." },
			};
#endif
			auto NewProp_bRemapParameters_SetBit = [](void* Obj){ ((FSkeletalMeshClothBuildParams*)Obj)->bRemapParameters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapParameters = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemapParameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkeletalMeshClothBuildParams), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemapParameters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemapParameters_MetaData, ARRAY_COUNT(NewProp_bRemapParameters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLod_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Target LOD to import to when importing LODs" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLod = { UE4CodeGen_Private::EPropertyClass::Int, "TargetLod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetLod), METADATA_PARAMS(NewProp_TargetLod_MetaData, ARRAY_COUNT(NewProp_TargetLod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Target asset when importing LODs" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAsset = { UE4CodeGen_Private::EPropertyClass::WeakObject, "TargetAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(NewProp_TargetAsset_MetaData, ARRAY_COUNT(NewProp_TargetAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveFromMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LodIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemapParameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SkeletalMeshClothBuildParams",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSkeletalMeshClothBuildParams),
				alignof(FSkeletalMeshClothBuildParams),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_CRC() { return 323517508U; }
class UScriptStruct* FSkeletalMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshOptimizationSettings(FSkeletalMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshOptimizationSettings")),new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose = { UE4CodeGen_Private::EPropertyClass::Object, "BakePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BakePose_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_BakePose_MetaData, ARRAY_COUNT(NewProp_BakePose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLOD_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Maximum number of bones that can be assigned to each vertex." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseLOD = { UE4CodeGen_Private::EPropertyClass::Int, "BaseLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BaseLOD), METADATA_PARAMS(NewProp_BaseLOD_MetaData, ARRAY_COUNT(NewProp_BaseLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BonesToRemove_DEPRECATED), METADATA_PARAMS(NewProp_BonesToRemove_MetaData, ARRAY_COUNT(NewProp_BonesToRemove_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBonesPerVertex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Maximum number of bones that can be assigned to each vertex." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBonesPerVertex = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBonesPerVertex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxBonesPerVertex), METADATA_PARAMS(NewProp_MaxBonesPerVertex_MetaData, ARRAY_COUNT(NewProp_MaxBonesPerVertex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReductionRatio_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The ratio of bones that will be removed from the mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneReductionRatio = { UE4CodeGen_Private::EPropertyClass::Float, "BoneReductionRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BoneReductionRatio), METADATA_PARAMS(NewProp_BoneReductionRatio_MetaData, ARRAY_COUNT(NewProp_BoneReductionRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinningImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "How important skinning quality is." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinningImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SkinningImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SkinningImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(NewProp_SkinningImportance_MetaData, ARRAY_COUNT(NewProp_SkinningImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "How important shading quality is." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ShadingImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(NewProp_ShadingImportance_MetaData, ARRAY_COUNT(NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "How important texture density is." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TextureImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(NewProp_TextureImportance_MetaData, ARRAY_COUNT(NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "How important the shape of the geometry is." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SilhouetteImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "NormalsThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(NewProp_NormalsThreshold_MetaData, ARRAY_COUNT(NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used *" },
			};
#endif
			auto NewProp_bRecalcNormals_SetBit = [](void* Obj){ ((FSkeletalMeshOptimizationSettings*)Obj)->bRecalcNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecalcNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSkeletalMeshOptimizationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecalcNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecalcNormals_MetaData, ARRAY_COUNT(NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WeldingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeviationPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(NewProp_MaxDeviationPercentage_MetaData, ARRAY_COUNT(NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "NumOfTrianglesPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(NewProp_NumOfTrianglesPercentage_MetaData, ARRAY_COUNT(NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ReductionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, METADATA_PARAMS(NewProp_ReductionMethod_MetaData, ARRAY_COUNT(NewProp_ReductionMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BakePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BonesToRemove_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBonesPerVertex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneReductionRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkinningImportance,
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
				"SkeletalMeshOptimizationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSkeletalMeshOptimizationSettings),
				alignof(FSkeletalMeshOptimizationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC() { return 411085330U; }
class UScriptStruct* FTriangleSortSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTriangleSortSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangleSortSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TriangleSortSettings"), sizeof(FTriangleSortSettings), Get_Z_Construct_UScriptStruct_FTriangleSortSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriangleSortSettings(FTriangleSortSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("TriangleSortSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTriangleSortSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFTriangleSortSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TriangleSortSettings")),new UScriptStruct::TCppStructOps<FTriangleSortSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTriangleSortSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FTriangleSortSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriangleSortSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriangleSortSettings"), sizeof(FTriangleSortSettings), Get_Z_Construct_UScriptStruct_FTriangleSortSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Struct containing triangle sort settings for a particular section" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangleSortSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLeftRightBoneName_MetaData[] = {
				{ "Category", "TriangleSortSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomLeftRightBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "CustomLeftRightBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTriangleSortSettings, CustomLeftRightBoneName), METADATA_PARAMS(NewProp_CustomLeftRightBoneName_MetaData, ARRAY_COUNT(NewProp_CustomLeftRightBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLeftRightAxis_MetaData[] = {
				{ "Category", "TriangleSortSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomLeftRightAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomLeftRightAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTriangleSortSettings, CustomLeftRightAxis), Z_Construct_UEnum_Engine_ETriangleSortAxis, METADATA_PARAMS(NewProp_CustomLeftRightAxis_MetaData, ARRAY_COUNT(NewProp_CustomLeftRightAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleSorting_MetaData[] = {
				{ "Category", "TriangleSortSettings" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriangleSorting = { UE4CodeGen_Private::EPropertyClass::Byte, "TriangleSorting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FTriangleSortSettings, TriangleSorting), Z_Construct_UEnum_Engine_ETriangleSortOption, METADATA_PARAMS(NewProp_TriangleSorting_MetaData, ARRAY_COUNT(NewProp_TriangleSorting_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomLeftRightBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomLeftRightAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriangleSorting,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TriangleSortSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTriangleSortSettings),
				alignof(FTriangleSortSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriangleSortSettings_CRC() { return 1774482093U; }
class UScriptStruct* FBoneMirrorExport::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorExport, Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorExport"), sizeof(FBoneMirrorExport), Get_Z_Construct_UScriptStruct_FBoneMirrorExport_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMirrorExport(FBoneMirrorExport::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneMirrorExport"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMirrorExport")),new UScriptStruct::TCppStructOps<FBoneMirrorExport>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMirrorExport"), sizeof(FBoneMirrorExport), Get_Z_Construct_UScriptStruct_FBoneMirrorExport_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Structure to export/import bone mirroring information" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorExport>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[] = {
				{ "Category", "BoneMirrorExport" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneFlipAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneMirrorExport, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_BoneFlipAxis_MetaData, ARRAY_COUNT(NewProp_BoneFlipAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[] = {
				{ "Category", "BoneMirrorExport" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "SourceBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneMirrorExport, SourceBoneName), METADATA_PARAMS(NewProp_SourceBoneName_MetaData, ARRAY_COUNT(NewProp_SourceBoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "BoneMirrorExport" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneMirrorExport, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneFlipAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneMirrorExport",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneMirrorExport),
				alignof(FBoneMirrorExport),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_CRC() { return 178446892U; }
class UScriptStruct* FBoneMirrorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorInfo"), sizeof(FBoneMirrorInfo), Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMirrorInfo(FBoneMirrorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneMirrorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMirrorInfo")),new UScriptStruct::TCppStructOps<FBoneMirrorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMirrorInfo"), sizeof(FBoneMirrorInfo), Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[] = {
				{ "Category", "BoneMirrorInfo" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Axis the bone is mirrored across." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "BoneFlipAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneMirrorInfo, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_BoneFlipAxis_MetaData, ARRAY_COUNT(NewProp_BoneFlipAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[] = {
				{ "ArrayClamp", "RefSkeleton" },
				{ "Category", "BoneMirrorInfo" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The bone to mirror." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SourceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBoneMirrorInfo, SourceIndex), METADATA_PARAMS(NewProp_SourceIndex_MetaData, ARRAY_COUNT(NewProp_SourceIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneFlipAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BoneMirrorInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBoneMirrorInfo),
				alignof(FBoneMirrorInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_CRC() { return 2575116900U; }
	void USkeletalMesh::StaticRegisterNativesUSkeletalMesh()
	{
		UClass* Class = USkeletalMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSocket", (Native)&USkeletalMesh::execFindSocket },
			{ "FindSocketAndIndex", (Native)&USkeletalMesh::execFindSocketAndIndex },
			{ "GetBounds", (Native)&USkeletalMesh::execGetBounds },
			{ "GetImportedBounds", (Native)&USkeletalMesh::execGetImportedBounds },
			{ "GetNodeMappingContainer", (Native)&USkeletalMesh::execGetNodeMappingContainer },
			{ "GetSocketByIndex", (Native)&USkeletalMesh::execGetSocketByIndex },
			{ "IsSectionUsingCloth", (Native)&USkeletalMesh::execIsSectionUsingCloth },
			{ "NumSockets", (Native)&USkeletalMesh::execNumSockets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocket()
	{
		struct SkeletalMesh_eventFindSocket_Parms
		{
			FName InSocketName;
			USkeletalMeshSocket* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSocketName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "FindSocket", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkeletalMesh_eventFindSocket_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex()
	{
		struct SkeletalMesh_eventFindSocketAndIndex_Parms
		{
			FName InSocketName;
			int32 OutIndex;
			USkeletalMeshSocket* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "InSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSocketName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "FindSocketAndIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(SkeletalMesh_eventFindSocketAndIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetBounds()
	{
		struct SkeletalMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Get the extended bounds of this mesh (imported bounds plus bounds extension)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "GetBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SkeletalMesh_eventGetBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetImportedBounds()
	{
		struct SkeletalMesh_eventGetImportedBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetImportedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Get the original imported bounds of the skel mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "GetImportedBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(SkeletalMesh_eventGetImportedBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer()
	{
		struct SkeletalMesh_eventGetNodeMappingContainer_Parms
		{
			UBlueprint* SourceAsset;
			UNodeMappingContainer* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, ReturnValue), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, SourceAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "GetNodeMappingContainer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkeletalMesh_eventGetNodeMappingContainer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex()
	{
		struct SkeletalMesh_eventGetSocketByIndex_Parms
		{
			int32 Index;
			USkeletalMeshSocket* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "GetSocketByIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkeletalMesh_eventGetSocketByIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth()
	{
		struct SkeletalMesh_eventIsSectionUsingCloth_Parms
		{
			int32 InSectionIndex;
			bool bCheckCorrespondingSections;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCheckCorrespondingSections_SetBit = [](void* Obj){ ((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->bCheckCorrespondingSections = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckCorrespondingSections = { UE4CodeGen_Private::EPropertyClass::Bool, "bCheckCorrespondingSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCheckCorrespondingSections_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InSectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventIsSectionUsingCloth_Parms, InSectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCheckCorrespondingSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSectionIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Cloth" },
				{ "CPP_Default_bCheckCorrespondingSections", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\ndisabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\nare disabled and another section added when cloth is enabled, using this flag allows for a check\non the original section to succeed)\n@param InSectionIndex Index to check\n@param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "IsSectionUsingCloth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMesh_NumSockets()
	{
		struct SkeletalMesh_eventNumSockets_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMesh_eventNumSockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Returns the number of sockets available. Both on this mesh and it's skeleton." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, "NumSockets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SkeletalMesh_eventNumSockets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMesh_NoRegister()
	{
		return USkeletalMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkeletalMesh_FindSocket, "FindSocket" }, // 2776650442
				{ &Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex, "FindSocketAndIndex" }, // 2506603220
				{ &Z_Construct_UFunction_USkeletalMesh_GetBounds, "GetBounds" }, // 3229787312
				{ &Z_Construct_UFunction_USkeletalMesh_GetImportedBounds, "GetImportedBounds" }, // 3116143497
				{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer, "GetNodeMappingContainer" }, // 1692404919
				{ &Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex, "GetSocketByIndex" }, // 4182604651
				{ &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth, "IsSectionUsingCloth" }, // 181111306
				{ &Z_Construct_UFunction_USkeletalMesh_NumSockets, "NumSockets" }, // 2994222349
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/SkeletalMesh.h" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\nSkeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\nThe 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets = { UE4CodeGen_Private::EPropertyClass::Array, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, Sockets), METADATA_PARAMS(NewProp_Sockets_MetaData, ARRAY_COUNT(NewProp_Sockets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sockets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c8000000009, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, AssetUserData), METADATA_PARAMS(NewProp_AssetUserData_MetaData, ARRAY_COUNT(NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Array of user data stored with the asset" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshClothingAssets_MetaData[] = {
				{ "Category", "Clothing" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Clothing assets imported to this mesh. May or may not be in use currently on the mesh.\nOrdering not guaranteed, use the provided getters to access elements in this array\nwhenever possible" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshClothingAssets = { UE4CodeGen_Private::EPropertyClass::Array, "MeshClothingAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000055, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, MeshClothingAssets), METADATA_PARAMS(NewProp_MeshClothingAssets_MetaData, ARRAY_COUNT(NewProp_MeshClothingAssets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshClothingAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MeshClothingAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBlueprint_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Animation Blueprint class to run as a post process for this mesh.\nThis blueprint will be ran before physics, but after the main\nanim instance for any skeletal mesh component using this mesh." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PostProcessAnimBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "PostProcessAnimBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, PostProcessAnimBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PostProcessAnimBlueprint_MetaData, ARRAY_COUNT(NewProp_PostProcessAnimBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Legacy clothing asset data, will be converted to new assets after loading" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets = { UE4CodeGen_Private::EPropertyClass::Array, "ClothingAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, ClothingAssets_DEPRECATED), METADATA_PARAMS(NewProp_ClothingAssets_MetaData, ARRAY_COUNT(NewProp_ClothingAssets_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothingAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ClothingAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000020000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothingAssetData_Legacy, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetBasePose_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "This is buffer that saves pose that is used by retargeting" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RetargetBasePose = { UE4CodeGen_Private::EPropertyClass::Array, "RetargetBasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, RetargetBasePose), METADATA_PARAMS(NewProp_RetargetBasePose_MetaData, ARRAY_COUNT(NewProp_RetargetBasePose_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RetargetBasePose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RetargetBasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Height offset for the floor mesh in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorOffset = { UE4CodeGen_Private::EPropertyClass::Float, "FloorOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, FloorOffset), METADATA_PARAMS(NewProp_FloorOffset_MetaData, ARRAY_COUNT(NewProp_FloorOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedClothingSection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The section currently selected for clothing. need to remember this index for reimporting cloth" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedClothingSection = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedClothingSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SelectedClothingSection), METADATA_PARAMS(NewProp_SelectedClothingSection_MetaData, ARRAY_COUNT(NewProp_SelectedClothingSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The Material currently selected. need to remember this index for reimporting cloth" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorMaterial = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SelectedEditorMaterial), METADATA_PARAMS(NewProp_SelectedEditorMaterial_MetaData, ARRAY_COUNT(NewProp_SelectedEditorMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorSection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "The section currently selected in the Editor. Used for highlighting" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedEditorSection = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedEditorSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SelectedEditorSection), METADATA_PARAMS(NewProp_SelectedEditorSection_MetaData, ARRAY_COUNT(NewProp_SelectedEditorSection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MorphTargets = { UE4CodeGen_Private::EPropertyClass::Array, "MorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, MorphTargets), METADATA_PARAMS(NewProp_MorphTargets_MetaData, ARRAY_COUNT(NewProp_MorphTargets_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MorphTargets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Attached assets component for this mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviewAttachedAssetContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(NewProp_PreviewAttachedAssetContainer_MetaData, ARRAY_COUNT(NewProp_PreviewAttachedAssetContainer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationSettings_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Optimization settings used to simplify LODs of this mesh." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptimizationSettings = { UE4CodeGen_Private::EPropertyClass::Array, "OptimizationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, OptimizationSettings), METADATA_PARAMS(NewProp_OptimizationSettings_MetaData, ARRAY_COUNT(NewProp_OptimizationSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptimizationSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OptimizationSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraOrthoZoom_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Default camera ortho zoom" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultEditorCameraOrthoZoom = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultEditorCameraOrthoZoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraOrthoZoom), METADATA_PARAMS(NewProp_DefaultEditorCameraOrthoZoom_MetaData, ARRAY_COUNT(NewProp_DefaultEditorCameraOrthoZoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLookAt_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Default camera look at" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLookAt = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultEditorCameraLookAt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DefaultEditorCameraLookAt_MetaData, ARRAY_COUNT(NewProp_DefaultEditorCameraLookAt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Default camera rotation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultEditorCameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_DefaultEditorCameraRotation_MetaData, ARRAY_COUNT(NewProp_DefaultEditorCameraRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLocation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Default camera location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultEditorCameraLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DefaultEditorCameraLocation_MetaData, ARRAY_COUNT(NewProp_DefaultEditorCameraLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCustomDefaultEditorCamera_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Should we use a custom camera transform when viewing this mesh in the tools" },
			};
#endif
			auto NewProp_bHasCustomDefaultEditorCamera_SetBit = [](void* Obj){ ((USkeletalMesh*)Obj)->bHasCustomDefaultEditorCamera = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCustomDefaultEditorCamera = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasCustomDefaultEditorCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkeletalMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasCustomDefaultEditorCamera_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasCustomDefaultEditorCamera_MetaData, ARRAY_COUNT(NewProp_bHasCustomDefaultEditorCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120408000a0009, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Date/Time-stamp of the file from the last import" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Importing data and options used for this mesh" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000800080009, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeMappingData_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Mapping data that is saved" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeMappingData = { UE4CodeGen_Private::EPropertyClass::Array, "NodeMappingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000055, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, NodeMappingData), METADATA_PARAMS(NewProp_NodeMappingData_MetaData, ARRAY_COUNT(NewProp_NodeMappingData_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeMappingData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeMappingData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled.\nOnly spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "ShadowPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_ShadowPhysicsAsset_MetaData, ARRAY_COUNT(NewProp_ShadowPhysicsAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Physics and collision information used for this USkeletalMesh, set up in Physics Asset Editor.\nThis is used for per-bone hit detection, accurate bounding box calculation and ragdoll physics for example." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_PhysicsAsset_MetaData, ARRAY_COUNT(NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Physics data for the per poly collision case. In 99% of cases you will not need this and are better off using simple ragdoll collision (physics asset)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Uses skinned data for collision data. Per poly collision cannot be used for simulation, in most cases you are better off using the physics asset" },
			};
#endif
			auto NewProp_bEnablePerPolyCollision_SetBit = [](void* Obj){ ((USkeletalMesh*)Obj)->bEnablePerPolyCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePerPolyCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePerPolyCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePerPolyCollision_MetaData, ARRAY_COUNT(NewProp_bEnablePerPolyCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVertexColors_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Whether or not the mesh has vertex colors" },
			};
#endif
			auto NewProp_bHasVertexColors_SetBit = [](void* Obj){ ((USkeletalMesh*)Obj)->bHasVertexColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVertexColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasVertexColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasVertexColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasVertexColors_MetaData, ARRAY_COUNT(NewProp_bHasVertexColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "true if this mesh has ever been simplified with Simplygon." },
			};
#endif
			auto NewProp_bHasBeenSimplified_SetBit = [](void* Obj){ ((USkeletalMesh*)Obj)->bHasBeenSimplified = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBeenSimplified", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBeenSimplified_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBeenSimplified_MetaData, ARRAY_COUNT(NewProp_bHasBeenSimplified_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "If true, use 32 bit UVs. If false, use 16 bit UVs to save memory" },
			};
#endif
			auto NewProp_bUseFullPrecisionUVs_SetBit = [](void* Obj){ ((USkeletalMesh*)Obj)->bUseFullPrecisionUVs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFullPrecisionUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USkeletalMesh), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFullPrecisionUVs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFullPrecisionUVs_MetaData, ARRAY_COUNT(NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Struct containing information for each LOD level, such as materials to use, and when use the LOD." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODInfo = { UE4CodeGen_Private::EPropertyClass::Array, "LODInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, LODInfo), METADATA_PARAMS(NewProp_LODInfo_MetaData, ARRAY_COUNT(NewProp_LODInfo_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LODInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorFlipAxis_MetaData[] = {
				{ "Category", "Mirroring" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkelMirrorFlipAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "SkelMirrorFlipAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_SkelMirrorFlipAxis_MetaData, ARRAY_COUNT(NewProp_SkelMirrorFlipAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorAxis_MetaData[] = {
				{ "Category", "Mirroring" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkelMirrorAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "SkelMirrorAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(NewProp_SkelMirrorAxis_MetaData, ARRAY_COUNT(NewProp_SkelMirrorAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorTable_MetaData[] = {
				{ "Category", "Mirroring" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "List of bones that should be mirrored." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkelMirrorTable = { UE4CodeGen_Private::EPropertyClass::Array, "SkelMirrorTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorTable), METADATA_PARAMS(NewProp_SkelMirrorTable_MetaData, ARRAY_COUNT(NewProp_SkelMirrorTable_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkelMirrorTable_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SkelMirrorTable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneMirrorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
				{ "Category", "SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "List of materials applied to this mesh." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, Materials), METADATA_PARAMS(NewProp_Materials_MetaData, ARRAY_COUNT(NewProp_Materials_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Bound extension values in addition to imported bound in the negative direction of XYZ,\n    positive value increases bound size and negative value decreases bound size.\n    The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Struct, "NegativeBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NegativeBoundsExtension_MetaData, ARRAY_COUNT(NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Bound extension values in addition to imported bound in the positive direction of XYZ,\n    positive value increases bound size and negative value decreases bound size.\n    The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension = { UE4CodeGen_Private::EPropertyClass::Struct, "PositiveBoundsExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_PositiveBoundsExtension_MetaData, ARRAY_COUNT(NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Bounds extended by user values below" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "ExtendedBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000202000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_ExtendedBounds_MetaData, ARRAY_COUNT(NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedBounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Original imported mesh bounds" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportedBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportedBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000202000, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, ImportedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_ImportedBounds_MetaData, ARRAY_COUNT(NewProp_ImportedBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
				{ "Category", "Mesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
				{ "ToolTip", "Skeleton of this skeletal mesh *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020015, 1, nullptr, STRUCT_OFFSET(USkeletalMesh, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(NewProp_Skeleton_MetaData, ARRAY_COUNT(NewProp_Skeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sockets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetUserData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshClothingAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshClothingAssets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessAnimBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClothingAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClothingAssets_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetargetBasePose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RetargetBasePose_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloorOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedClothingSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedEditorMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedEditorSection,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MorphTargets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MorphTargets_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewAttachedAssetContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptimizationSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptimizationSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultEditorCameraOrthoZoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultEditorCameraLookAt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultEditorCameraRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultEditorCameraLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasCustomDefaultEditorCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeMappingData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeMappingData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowPhysicsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicsAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePerPolyCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasVertexColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBeenSimplified,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFullPrecisionUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODInfo_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMirrorFlipAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMirrorAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMirrorTable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMirrorTable_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NegativeBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PositiveBoundsExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtendedBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Skeleton,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_CollisionDataProvider), false },
				{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_AssetUserData), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeletalMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeletalMesh::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USkeletalMesh, 3151363480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMesh(Z_Construct_UClass_USkeletalMesh, &USkeletalMesh::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
