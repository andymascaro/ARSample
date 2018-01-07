// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Commandlets/SmokeTestCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmokeTestCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USmokeTestCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USmokeTestCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USmokeTestCommandlet::StaticRegisterNativesUSmokeTestCommandlet()
	{
	}
	UClass* Z_Construct_UClass_USmokeTestCommandlet_NoRegister()
	{
		return USmokeTestCommandlet::StaticClass();
	}
	UClass* Z_Construct_UClass_USmokeTestCommandlet()
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
				{ "IncludePath", "Commandlets/SmokeTestCommandlet.h" },
				{ "ModuleRelativePath", "Classes/Commandlets/SmokeTestCommandlet.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USmokeTestCommandlet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USmokeTestCommandlet::StaticClass,
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
	IMPLEMENT_CLASS(USmokeTestCommandlet, 3251692436);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USmokeTestCommandlet(Z_Construct_UClass_USmokeTestCommandlet, &USmokeTestCommandlet::StaticClass, TEXT("/Script/Engine"), TEXT("USmokeTestCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmokeTestCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
