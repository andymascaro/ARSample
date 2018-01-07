// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ClothingAssetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetInterface() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UClothingAssetBase::StaticRegisterNativesUClothingAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister()
	{
		return UClothingAssetBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UClothingAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ClothingAssetInterface.h" },
				{ "ModuleRelativePath", "Public/ClothingAssetInterface.h" },
				{ "ToolTip", "An interface object for any clothing asset the engine can use. Any\nclothing asset concrete object should derive from this." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/ClothingAssetInterface.h" },
				{ "ToolTip", "Guid to identify this asset. Will be embedded into chunks that are created using this asset" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UClothingAssetBase, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_AssetGuid_MetaData, ARRAY_COUNT(NewProp_AssetGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedFilePath_MetaData[] = {
				{ "Category", "Import" },
				{ "ModuleRelativePath", "Public/ClothingAssetInterface.h" },
				{ "ToolTip", "If this asset was imported from a file, this will be the original path" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportedFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImportedFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UClothingAssetBase, ImportedFilePath), METADATA_PARAMS(NewProp_ImportedFilePath_MetaData, ARRAY_COUNT(NewProp_ImportedFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedFilePath,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UClothingAssetBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UClothingAssetBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UClothingAssetBase, 1945671290);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetBase(Z_Construct_UClass_UClothingAssetBase, &UClothingAssetBase::StaticClass, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("UClothingAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
