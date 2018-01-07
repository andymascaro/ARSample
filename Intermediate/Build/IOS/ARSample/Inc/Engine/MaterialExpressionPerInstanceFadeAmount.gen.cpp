// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPerInstanceFadeAmount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPerInstanceFadeAmount() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPerInstanceFadeAmount::StaticRegisterNativesUMaterialExpressionPerInstanceFadeAmount()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount_NoRegister()
	{
		return UMaterialExpressionPerInstanceFadeAmount::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount()
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
				{ "IncludePath", "Materials/MaterialExpressionPerInstanceFadeAmount.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceFadeAmount.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPerInstanceFadeAmount>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPerInstanceFadeAmount::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionPerInstanceFadeAmount, 749443396);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPerInstanceFadeAmount(Z_Construct_UClass_UMaterialExpressionPerInstanceFadeAmount, &UMaterialExpressionPerInstanceFadeAmount::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPerInstanceFadeAmount"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceFadeAmount);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
