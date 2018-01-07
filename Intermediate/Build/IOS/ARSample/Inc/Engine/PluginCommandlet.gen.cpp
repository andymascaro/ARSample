// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Commandlets/PluginCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPluginCommandlet::StaticRegisterNativesUPluginCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister()
	{
		return UPluginCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_UPluginCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCommandlet,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Commandlets/PluginCommandlet.h" },
				{ "ModuleRelativePath", "Classes/Commandlets/PluginCommandlet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPluginCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPluginCommandlet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(UPluginCommandlet, 794119799);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPluginCommandlet(Z_Construct_UClass_UPluginCommandlet, &UPluginCommandlet::StaticClass, TEXT("/Script/Engine"), TEXT("UPluginCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
