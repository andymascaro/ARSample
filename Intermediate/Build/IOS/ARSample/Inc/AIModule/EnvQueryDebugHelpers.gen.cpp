// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryDebugHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryDebugHelpers() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryDebugHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryDebugHelpers::StaticRegisterNativesUEnvQueryDebugHelpers()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryDebugHelpers_NoRegister()
	{
		return UEnvQueryDebugHelpers::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryDebugHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/EnvQueryDebugHelpers.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryDebugHelpers.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryDebugHelpers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryDebugHelpers::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UEnvQueryDebugHelpers, 3382864801);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryDebugHelpers(Z_Construct_UClass_UEnvQueryDebugHelpers, &UEnvQueryDebugHelpers::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryDebugHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryDebugHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
