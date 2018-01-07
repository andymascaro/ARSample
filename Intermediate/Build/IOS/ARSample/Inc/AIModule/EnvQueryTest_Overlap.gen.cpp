// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Overlap() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Overlap();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvOverlapData();
// End Cross Module References
	void UEnvQueryTest_Overlap::StaticRegisterNativesUEnvQueryTest_Overlap()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Overlap_NoRegister()
	{
		return UEnvQueryTest_Overlap::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Overlap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapData_MetaData[] = {
				{ "Category", "Overlap" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Overlap.h" },
				{ "ToolTip", "Overlap data" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapData = { UE4CodeGen_Private::EPropertyClass::Struct, "OverlapData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryTest_Overlap, OverlapData), Z_Construct_UScriptStruct_FEnvOverlapData, METADATA_PARAMS(NewProp_OverlapData_MetaData, ARRAY_COUNT(NewProp_OverlapData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryTest_Overlap>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryTest_Overlap::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UEnvQueryTest_Overlap, 1492745501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Overlap(Z_Construct_UClass_UEnvQueryTest_Overlap, &UEnvQueryTest_Overlap::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest_Overlap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Overlap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
