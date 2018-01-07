// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionParticleSubUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleSubUV::StaticRegisterNativesUMaterialExpressionParticleSubUV()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister()
	{
		return UMaterialExpressionParticleSubUV::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionParticleSubUV.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[] = {
				{ "Category", "MaterialExpressionParticleSubUV" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
			};
#endif
			auto NewProp_bBlend_SetBit = [](void* Obj){ ((UMaterialExpressionParticleSubUV*)Obj)->bBlend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionParticleSubUV), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlend_MetaData, ARRAY_COUNT(NewProp_bBlend_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlend,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionParticleSubUV>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionParticleSubUV::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionParticleSubUV, 2964671238);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionParticleSubUV(Z_Construct_UClass_UMaterialExpressionParticleSubUV, &UMaterialExpressionParticleSubUV::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionParticleSubUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSubUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
