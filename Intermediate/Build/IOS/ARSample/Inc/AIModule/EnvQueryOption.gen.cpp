// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryOption() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
// End Cross Module References
	void UEnvQueryOption::StaticRegisterNativesUEnvQueryOption()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister()
	{
		return UEnvQueryOption::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryOption()
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
				{ "IncludePath", "EnvironmentQuery/EnvQueryOption.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests = { UE4CodeGen_Private::EPropertyClass::Array, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryOption, Tests), METADATA_PARAMS(NewProp_Tests_MetaData, ARRAY_COUNT(NewProp_Tests_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tests_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator = { UE4CodeGen_Private::EPropertyClass::Object, "Generator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryOption, Generator), Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(NewProp_Generator_MetaData, ARRAY_COUNT(NewProp_Generator_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Generator,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryOption>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryOption::StaticClass,
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
	IMPLEMENT_CLASS(UEnvQueryOption, 3268425312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryOption(Z_Construct_UClass_UEnvQueryOption, &UEnvQueryOption::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
