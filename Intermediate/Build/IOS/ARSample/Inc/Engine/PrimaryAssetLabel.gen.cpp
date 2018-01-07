// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PrimaryAssetLabel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryAssetLabel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
// End Cross Module References
	void UPrimaryAssetLabel::StaticRegisterNativesUPrimaryAssetLabel()
	{
	}
	UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister()
	{
		return UPrimaryAssetLabel::StaticClass();
	}
	UClass* Z_Construct_UClass_UPrimaryAssetLabel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/PrimaryAssetLabel.h" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "A seed file that is created to mark referenced assets as part of this primary asset" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[] = {
				{ "Category", "PrimaryAssetLabel" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "Collection to load asset references out of" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetCollection = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetCollection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, AssetCollection), Z_Construct_UScriptStruct_FCollectionReference, METADATA_PARAMS(NewProp_AssetCollection_MetaData, ARRAY_COUNT(NewProp_AssetCollection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitBlueprints_MetaData[] = {
				{ "AssetBundles", "Explicit" },
				{ "BlueprintBaseOnly", "" },
				{ "Category", "PrimaryAssetLabel" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "List of manually specified blueprint assets to label" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplicitBlueprints = { UE4CodeGen_Private::EPropertyClass::Array, "ExplicitBlueprints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitBlueprints), METADATA_PARAMS(NewProp_ExplicitBlueprints_MetaData, ARRAY_COUNT(NewProp_ExplicitBlueprints_MetaData)) };
			static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ExplicitBlueprints_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "ExplicitBlueprints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitAssets_MetaData[] = {
				{ "AssetBundles", "Explicit" },
				{ "Category", "PrimaryAssetLabel" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "List of manually specified assets to label" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplicitAssets = { UE4CodeGen_Private::EPropertyClass::Array, "ExplicitAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitAssets), METADATA_PARAMS(NewProp_ExplicitAssets_MetaData, ARRAY_COUNT(NewProp_ExplicitAssets_MetaData)) };
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ExplicitAssets_Inner = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ExplicitAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRuntimeLabel_MetaData[] = {
				{ "Category", "PrimaryAssetLabel" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule" },
			};
#endif
			auto NewProp_bIsRuntimeLabel_SetBit = [](void* Obj){ ((UPrimaryAssetLabel*)Obj)->bIsRuntimeLabel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRuntimeLabel = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRuntimeLabel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPrimaryAssetLabel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRuntimeLabel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRuntimeLabel_MetaData, ARRAY_COUNT(NewProp_bIsRuntimeLabel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLabelAssetsInMyDirectory_MetaData[] = {
				{ "Category", "PrimaryAssetLabel" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ToolTip", "True to Label everything in this directory and sub directories" },
			};
#endif
			auto NewProp_bLabelAssetsInMyDirectory_SetBit = [](void* Obj){ ((UPrimaryAssetLabel*)Obj)->bLabelAssetsInMyDirectory = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLabelAssetsInMyDirectory = { UE4CodeGen_Private::EPropertyClass::Bool, "bLabelAssetsInMyDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPrimaryAssetLabel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLabelAssetsInMyDirectory_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLabelAssetsInMyDirectory_MetaData, ARRAY_COUNT(NewProp_bLabelAssetsInMyDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
				{ "Category", "Rules" },
				{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Management rules for this specific asset, if set it will override the type rules" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules = { UE4CodeGen_Private::EPropertyClass::Struct, "Rules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(NewProp_Rules_MetaData, ARRAY_COUNT(NewProp_Rules_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetCollection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplicitBlueprints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplicitBlueprints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplicitAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExplicitAssets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRuntimeLabel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLabelAssetsInMyDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rules,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPrimaryAssetLabel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPrimaryAssetLabel::StaticClass,
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
	IMPLEMENT_CLASS(UPrimaryAssetLabel, 3956593069);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimaryAssetLabel(Z_Construct_UClass_UPrimaryAssetLabel, &UPrimaryAssetLabel::StaticClass, TEXT("/Script/Engine"), TEXT("UPrimaryAssetLabel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryAssetLabel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
