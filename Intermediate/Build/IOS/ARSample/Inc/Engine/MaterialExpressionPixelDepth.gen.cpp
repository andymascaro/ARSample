// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPixelDepth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPixelDepth() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPixelDepth::StaticRegisterNativesUMaterialExpressionPixelDepth()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister()
	{
		return UMaterialExpressionPixelDepth::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth()
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
				{ "IncludePath", "Materials/MaterialExpressionPixelDepth.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPixelDepth.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPixelDepth>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPixelDepth::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionPixelDepth, 1922306591);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPixelDepth(Z_Construct_UClass_UMaterialExpressionPixelDepth, &UMaterialExpressionPixelDepth::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPixelDepth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPixelDepth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
