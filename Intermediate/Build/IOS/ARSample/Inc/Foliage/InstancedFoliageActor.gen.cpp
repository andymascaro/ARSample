// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/InstancedFoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedFoliageActor() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void AInstancedFoliageActor::StaticRegisterNativesAInstancedFoliageActor()
	{
	}
	UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister()
	{
		return AInstancedFoliageActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AInstancedFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Rendering" },
				{ "IncludePath", "InstancedFoliageActor.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Public/InstancedFoliageActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInstancedFoliageActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInstancedFoliageActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
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
	IMPLEMENT_CLASS(AInstancedFoliageActor, 3434685125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInstancedFoliageActor(Z_Construct_UClass_AInstancedFoliageActor, &AInstancedFoliageActor::StaticClass, TEXT("/Script/Foliage"), TEXT("AInstancedFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
