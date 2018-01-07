// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMetaData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimMetaData::StaticRegisterNativesUAnimMetaData()
	{
	}
	UClass* Z_Construct_UClass_UAnimMetaData_NoRegister()
	{
		return UAnimMetaData::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimMetaData()
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
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimMetaData.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Animation/AnimMetaData.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimMetaData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimMetaData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00113081u,
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
	IMPLEMENT_CLASS(UAnimMetaData, 2261245865);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimMetaData(Z_Construct_UClass_UAnimMetaData, &UAnimMetaData::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimMetaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMetaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
