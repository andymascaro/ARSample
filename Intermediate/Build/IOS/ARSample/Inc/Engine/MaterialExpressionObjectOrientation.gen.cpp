// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionObjectOrientation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectOrientation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectOrientation::StaticRegisterNativesUMaterialExpressionObjectOrientation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister()
	{
		return UMaterialExpressionObjectOrientation::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation()
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
				{ "IncludePath", "Materials/MaterialExpressionObjectOrientation.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectOrientation.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionObjectOrientation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionObjectOrientation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionObjectOrientation, 2466595226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionObjectOrientation(Z_Construct_UClass_UMaterialExpressionObjectOrientation, &UMaterialExpressionObjectOrientation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionObjectOrientation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectOrientation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
