// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/AssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UAssetManager::StaticRegisterNativesUAssetManager()
	{
	}
	UClass* Z_Construct_UClass_UAssetManager_NoRegister()
	{
		return UAssetManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetManager()
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
				{ "IncludePath", "Engine/AssetManager.h" },
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\nGames should override this class and change the class reference" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSpawnedNotifications_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "Number of notifications seen in this update" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfSpawnedNotifications = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfSpawnedNotifications", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAssetManager, NumberOfSpawnedNotifications), METADATA_PARAMS(NewProp_NumberOfSpawnedNotifications_MetaData, ARRAY_COUNT(NewProp_NumberOfSpawnedNotifications_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if only on-disk assets should be searched by the asset registry" },
			};
#endif
			auto NewProp_bIncludeOnlyOnDiskAssets_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bIncludeOnlyOnDiskAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bIncludeOnlyOnDiskAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIncludeOnlyOnDiskAssets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIncludeOnlyOnDiskAssets_MetaData, ARRAY_COUNT(NewProp_bIncludeOnlyOnDiskAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateManagementDatabaseAfterScan_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if the asset management database should be updated after scan completes" },
			};
#endif
			auto NewProp_bUpdateManagementDatabaseAfterScan_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bUpdateManagementDatabaseAfterScan = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateManagementDatabaseAfterScan = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateManagementDatabaseAfterScan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateManagementDatabaseAfterScan_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdateManagementDatabaseAfterScan_MetaData, ARRAY_COUNT(NewProp_bUpdateManagementDatabaseAfterScan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsManagementDatabaseCurrent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if the asset management database is up to date" },
			};
#endif
			auto NewProp_bIsManagementDatabaseCurrent_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bIsManagementDatabaseCurrent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsManagementDatabaseCurrent = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsManagementDatabaseCurrent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsManagementDatabaseCurrent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsManagementDatabaseCurrent_MetaData, ARRAY_COUNT(NewProp_bIsManagementDatabaseCurrent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBulkScanning_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if we are currently in bulk scanning mode" },
			};
#endif
			auto NewProp_bIsBulkScanning_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bIsBulkScanning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBulkScanning = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBulkScanning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsBulkScanning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsBulkScanning_MetaData, ARRAY_COUNT(NewProp_bIsBulkScanning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked" },
			};
#endif
			auto NewProp_bOnlyCookProductionAssets_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bOnlyCookProductionAssets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyCookProductionAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyCookProductionAssets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyCookProductionAssets_MetaData, ARRAY_COUNT(NewProp_bOnlyCookProductionAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if the chunk install interface should be queries before loading assets" },
			};
#endif
			auto NewProp_bShouldAcquireMissingChunksOnLoad_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bShouldAcquireMissingChunksOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldAcquireMissingChunksOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldAcquireMissingChunksOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldAcquireMissingChunksOnLoad_MetaData, ARRAY_COUNT(NewProp_bShouldAcquireMissingChunksOnLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingFromPakFiles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if we are loading from pak files" },
			};
#endif
			auto NewProp_bIsLoadingFromPakFiles_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bIsLoadingFromPakFiles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingFromPakFiles = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLoadingFromPakFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLoadingFromPakFiles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLoadingFromPakFiles_MetaData, ARRAY_COUNT(NewProp_bIsLoadingFromPakFiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSynchronousLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if we should always use synchronous loads, this speeds up cooking" },
			};
#endif
			auto NewProp_bShouldUseSynchronousLoad_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bShouldUseSynchronousLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSynchronousLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldUseSynchronousLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldUseSynchronousLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldUseSynchronousLoad_MetaData, ARRAY_COUNT(NewProp_bShouldUseSynchronousLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects" },
			};
#endif
			auto NewProp_bShouldGuessTypeAndName_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bShouldGuessTypeAndName = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndName = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldGuessTypeAndName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldGuessTypeAndName_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldGuessTypeAndName_MetaData, ARRAY_COUNT(NewProp_bShouldGuessTypeAndName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalAsyncScanEnvironment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously" },
			};
#endif
			auto NewProp_bIsGlobalAsyncScanEnvironment_SetBit = [](void* Obj){ ((UAssetManager*)Obj)->bIsGlobalAsyncScanEnvironment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalAsyncScanEnvironment = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGlobalAsyncScanEnvironment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsGlobalAsyncScanEnvironment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsGlobalAsyncScanEnvironment_MetaData, ARRAY_COUNT(NewProp_bIsGlobalAsyncScanEnvironment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferenceList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
				{ "ToolTip", "List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectReferenceList = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectReferenceList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAssetManager, ObjectReferenceList), METADATA_PARAMS(NewProp_ObjectReferenceList_MetaData, ARRAY_COUNT(NewProp_ObjectReferenceList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectReferenceList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectReferenceList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfSpawnedNotifications,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIncludeOnlyOnDiskAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateManagementDatabaseAfterScan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsManagementDatabaseCurrent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsBulkScanning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyCookProductionAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldAcquireMissingChunksOnLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLoadingFromPakFiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldUseSynchronousLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldGuessTypeAndName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsGlobalAsyncScanEnvironment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectReferenceList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectReferenceList_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssetManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetManager, 643766753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetManager(Z_Construct_UClass_UAssetManager, &UAssetManager::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
