// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDistanceCullFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceCullFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDistanceCullFade::StaticRegisterNativesUMaterialExpressionDistanceCullFade()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade_NoRegister()
	{
		return UMaterialExpressionDistanceCullFade::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceCullFade()
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
				{ "IncludePath", "Materials/MaterialExpressionDistanceCullFade.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceCullFade.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDistanceCullFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDistanceCullFade::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionDistanceCullFade, 2963967111);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDistanceCullFade(Z_Construct_UClass_UMaterialExpressionDistanceCullFade, &UMaterialExpressionDistanceCullFade::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDistanceCullFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceCullFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
