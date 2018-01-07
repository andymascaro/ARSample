// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/AbstractNavData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractNavData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAbstractNavData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAbstractNavData();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AAbstractNavData::StaticRegisterNativesAAbstractNavData()
	{
	}
	UClass* Z_Construct_UClass_AAbstractNavData_NoRegister()
	{
		return AAbstractNavData::StaticClass();
	}
	UClass* Z_Construct_UClass_AAbstractNavData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ANavigationData,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/AbstractNavData.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/AbstractNavData.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAbstractNavData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAbstractNavData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900086u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbstractNavData, 760770753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbstractNavData(Z_Construct_UClass_AAbstractNavData, &AAbstractNavData::StaticClass, TEXT("/Script/Engine"), TEXT("AAbstractNavData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractNavData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
