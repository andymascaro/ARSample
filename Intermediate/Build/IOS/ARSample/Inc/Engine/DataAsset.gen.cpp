// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
// End Cross Module References
	void UDataAsset::StaticRegisterNativesUDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UDataAsset_NoRegister()
	{
		return UDataAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UDataAsset()
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
				{ "IncludePath", "Engine/DataAsset.h" },
				{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
				{ "ToolTip", "Base class for a simple asset containing data. The editor will list this in the content browser if you inherit from this class" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NativeClass = { UE4CodeGen_Private::EPropertyClass::Class, "NativeClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044010000000000, 1, nullptr, STRUCT_OFFSET(UDataAsset, NativeClass), Z_Construct_UClass_UDataAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NativeClass_MetaData, ARRAY_COUNT(NewProp_NativeClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NativeClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDataAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDataAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080081u,
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
	IMPLEMENT_CLASS(UDataAsset, 319382939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataAsset(Z_Construct_UClass_UDataAsset, &UDataAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset);
	void UPrimaryDataAsset::StaticRegisterNativesUPrimaryDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister()
	{
		return UPrimaryDataAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UPrimaryDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/DataAsset.h" },
				{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
				{ "ToolTip", "A DataAsset that implements GetPrimaryAssetId and has asset bundle support, which makes it something that can be manually loaded/unloaded from the AssetManager" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBundleData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
				{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetBundleData = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetBundleData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080800000000, 1, nullptr, STRUCT_OFFSET(UPrimaryDataAsset, AssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(NewProp_AssetBundleData_MetaData, ARRAY_COUNT(NewProp_AssetBundleData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetBundleData,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPrimaryDataAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPrimaryDataAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080081u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimaryDataAsset, 2060293152);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimaryDataAsset(Z_Construct_UClass_UPrimaryDataAsset, &UPrimaryDataAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPrimaryDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
