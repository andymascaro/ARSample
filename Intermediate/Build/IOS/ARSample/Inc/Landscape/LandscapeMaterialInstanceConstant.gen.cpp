// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeMaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMaterialInstanceConstant() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInstanceConstant,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "LandscapeMaterialInstanceConstant.h" },
				{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTessellation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
			};
#endif
			auto NewProp_bDisableTessellation_SetBit = [](void* Obj){ ((ULandscapeMaterialInstanceConstant*)Obj)->bDisableTessellation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTessellation = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeMaterialInstanceConstant), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDisableTessellation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDisableTessellation_MetaData, ARRAY_COUNT(NewProp_bDisableTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLayerThumbnail_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
			};
#endif
			auto NewProp_bIsLayerThumbnail_SetBit = [](void* Obj){ ((ULandscapeMaterialInstanceConstant*)Obj)->bIsLayerThumbnail = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLayerThumbnail = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLayerThumbnail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeMaterialInstanceConstant), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsLayerThumbnail_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsLayerThumbnail_MetaData, ARRAY_COUNT(NewProp_bIsLayerThumbnail_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDisableTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsLayerThumbnail,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeMaterialInstanceConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeMaterialInstanceConstant::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00882080u,
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
	IMPLEMENT_CLASS(ULandscapeMaterialInstanceConstant, 1670530079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMaterialInstanceConstant(Z_Construct_UClass_ULandscapeMaterialInstanceConstant, &ULandscapeMaterialInstanceConstant::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
