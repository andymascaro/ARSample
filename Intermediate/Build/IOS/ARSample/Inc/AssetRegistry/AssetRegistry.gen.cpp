// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AssetRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
// End Cross Module References
	void UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl()
	{
	}
	UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister()
	{
		return UAssetRegistryImpl::StaticClass();
	}
	UClass* Z_Construct_UClass_UAssetRegistryImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AssetRegistry.h" },
				{ "ModuleRelativePath", "Private/AssetRegistry.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UAssetRegistry_NoRegister, (int32)VTABLE_OFFSET(UAssetRegistryImpl, IAssetRegistry), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAssetRegistryImpl>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAssetRegistryImpl::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistryImpl, 3793456378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistryImpl(Z_Construct_UClass_UAssetRegistryImpl, &UAssetRegistryImpl::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistryImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryImpl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
