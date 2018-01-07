// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionParticleMotionBlurFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleMotionBlurFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleMotionBlurFade::StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister()
	{
		return UMaterialExpressionParticleMotionBlurFade::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionParticleMotionBlurFade.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleMotionBlurFade.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionParticleMotionBlurFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionParticleMotionBlurFade::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionParticleMotionBlurFade, 720091331);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionParticleMotionBlurFade(Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade, &UMaterialExpressionParticleMotionBlurFade::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionParticleMotionBlurFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleMotionBlurFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
