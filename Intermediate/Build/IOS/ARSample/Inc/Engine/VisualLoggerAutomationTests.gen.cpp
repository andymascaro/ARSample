// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VisualLogger/VisualLoggerAutomationTests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerAutomationTests() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVisualLoggerAutomationTests::StaticRegisterNativesUVisualLoggerAutomationTests()
	{
	}
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister()
	{
		return UVisualLoggerAutomationTests::StaticClass();
	}
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests()
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
				{ "HideCategories", "UObject" },
				{ "IncludePath", "VisualLogger/VisualLoggerAutomationTests.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerAutomationTests.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVisualLoggerAutomationTests>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVisualLoggerAutomationTests::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000288u,
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
	IMPLEMENT_CLASS(UVisualLoggerAutomationTests, 3585201873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerAutomationTests(Z_Construct_UClass_UVisualLoggerAutomationTests, &UVisualLoggerAutomationTests::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerAutomationTests"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerAutomationTests);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
