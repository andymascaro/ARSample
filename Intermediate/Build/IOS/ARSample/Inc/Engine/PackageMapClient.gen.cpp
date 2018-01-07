// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PackageMapClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageMapClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPackageMapClient::StaticRegisterNativesUPackageMapClient()
	{
	}
	UClass* Z_Construct_UClass_UPackageMapClient_NoRegister()
	{
		return UPackageMapClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UPackageMapClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPackageMap,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/PackageMapClient.h" },
				{ "ModuleRelativePath", "Classes/Engine/PackageMapClient.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPackageMapClient>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPackageMapClient::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackageMapClient, 661767372);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackageMapClient(Z_Construct_UClass_UPackageMapClient, &UPackageMapClient::StaticClass, TEXT("/Script/Engine"), TEXT("UPackageMapClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageMapClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
