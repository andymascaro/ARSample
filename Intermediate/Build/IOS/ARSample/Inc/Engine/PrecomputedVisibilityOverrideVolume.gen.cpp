// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecomputedVisibilityOverrideVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APrecomputedVisibilityOverrideVolume::StaticRegisterNativesAPrecomputedVisibilityOverrideVolume()
	{
	}
	UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume_NoRegister()
	{
		return APrecomputedVisibilityOverrideVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_APrecomputedVisibilityOverrideVolume()
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
				{ "IncludePath", "Lightmass/PrecomputedVisibilityOverrideVolume.h" },
				{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleLevels_MetaData[] = {
				{ "Category", "PrecomputedVisibilityOverrideVolume" },
				{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
				{ "ToolTip", "Array of level names whose actors will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleLevels = { UE4CodeGen_Private::EPropertyClass::Array, "OverrideInvisibleLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleLevels), METADATA_PARAMS(NewProp_OverrideInvisibleLevels_MetaData, ARRAY_COUNT(NewProp_OverrideInvisibleLevels_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideInvisibleLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "OverrideInvisibleLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideInvisibleActors_MetaData[] = {
				{ "Category", "PrecomputedVisibilityOverrideVolume" },
				{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
				{ "ToolTip", "Array of actors that will always be considered invisible by Precomputed Visibility when viewed from inside this volume." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideInvisibleActors = { UE4CodeGen_Private::EPropertyClass::Array, "OverrideInvisibleActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideInvisibleActors), METADATA_PARAMS(NewProp_OverrideInvisibleActors_MetaData, ARRAY_COUNT(NewProp_OverrideInvisibleActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideInvisibleActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideInvisibleActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideVisibleActors_MetaData[] = {
				{ "Category", "PrecomputedVisibilityOverrideVolume" },
				{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h" },
				{ "ToolTip", "Array of actors that will always be considered visible by Precomputed Visibility when viewed from inside this volume." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideVisibleActors = { UE4CodeGen_Private::EPropertyClass::Array, "OverrideVisibleActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APrecomputedVisibilityOverrideVolume, OverrideVisibleActors), METADATA_PARAMS(NewProp_OverrideVisibleActors_MetaData, ARRAY_COUNT(NewProp_OverrideVisibleActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideVisibleActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideVisibleActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideInvisibleLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideInvisibleLevels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideInvisibleActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideInvisibleActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideVisibleActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideVisibleActors_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APrecomputedVisibilityOverrideVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APrecomputedVisibilityOverrideVolume::StaticClass,
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
	IMPLEMENT_CLASS(APrecomputedVisibilityOverrideVolume, 2853166120);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrecomputedVisibilityOverrideVolume(Z_Construct_UClass_APrecomputedVisibilityOverrideVolume, &APrecomputedVisibilityOverrideVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APrecomputedVisibilityOverrideVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrecomputedVisibilityOverrideVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
