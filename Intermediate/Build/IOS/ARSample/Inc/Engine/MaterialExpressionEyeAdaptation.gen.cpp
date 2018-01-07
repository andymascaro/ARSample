// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionEyeAdaptation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionEyeAdaptation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionEyeAdaptation::StaticRegisterNativesUMaterialExpressionEyeAdaptation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister()
	{
		return UMaterialExpressionEyeAdaptation::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation()
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
				{ "IncludePath", "Materials/MaterialExpressionEyeAdaptation.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptation.h" },
				{ "ToolTip", "Provides access to the EyeAdaptation render target." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionEyeAdaptation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionEyeAdaptation::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionEyeAdaptation, 126822464);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionEyeAdaptation(Z_Construct_UClass_UMaterialExpressionEyeAdaptation, &UMaterialExpressionEyeAdaptation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionEyeAdaptation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionEyeAdaptation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
