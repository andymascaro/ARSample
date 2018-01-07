// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionAtmosphericLightColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericLightColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionAtmosphericLightColor::StaticRegisterNativesUMaterialExpressionAtmosphericLightColor()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister()
	{
		return UMaterialExpressionAtmosphericLightColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpressionAtmosphericLightColor.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericLightColor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionAtmosphericLightColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionAtmosphericLightColor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionAtmosphericLightColor, 3008720818);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAtmosphericLightColor(Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor, &UMaterialExpressionAtmosphericLightColor::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAtmosphericLightColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericLightColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
