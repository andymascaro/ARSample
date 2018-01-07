// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ProceduralFoliageVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageVolume() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
// End Cross Module References
	void AProceduralFoliageVolume::StaticRegisterNativesAProceduralFoliageVolume()
	{
	}
	UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister()
	{
		return AProceduralFoliageVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AProceduralFoliageVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "ProceduralFoliageVolume.h" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralComponent_MetaData[] = {
				{ "Category", "ProceduralFoliage" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ProceduralComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AProceduralFoliageVolume, ProceduralComponent), Z_Construct_UClass_UProceduralFoliageComponent_NoRegister, METADATA_PARAMS(NewProp_ProceduralComponent_MetaData, ARRAY_COUNT(NewProp_ProceduralComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProceduralComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProceduralFoliageVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProceduralFoliageVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AProceduralFoliageVolume, 2277105690);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralFoliageVolume(Z_Construct_UClass_AProceduralFoliageVolume, &AProceduralFoliageVolume::StaticClass, TEXT("/Script/Foliage"), TEXT("AProceduralFoliageVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
