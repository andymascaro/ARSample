// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/PrecomputedVisibilityVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecomputedVisibilityVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APrecomputedVisibilityVolume::StaticRegisterNativesAPrecomputedVisibilityVolume()
	{
	}
	UClass* Z_Construct_UClass_APrecomputedVisibilityVolume_NoRegister()
	{
		return APrecomputedVisibilityVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_APrecomputedVisibilityVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "Lightmass/PrecomputedVisibilityVolume.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APrecomputedVisibilityVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APrecomputedVisibilityVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(APrecomputedVisibilityVolume, 2254185862);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrecomputedVisibilityVolume(Z_Construct_UClass_APrecomputedVisibilityVolume, &APrecomputedVisibilityVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APrecomputedVisibilityVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrecomputedVisibilityVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
