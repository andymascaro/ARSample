// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFontSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFontSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void UMaterialExpressionFontSample::StaticRegisterNativesUMaterialExpressionFontSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister()
	{
		return UMaterialExpressionFontSample::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample()
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
				{ "IncludePath", "Materials/MaterialExpressionFontSample.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontTexturePage_MetaData[] = {
				{ "Category", "MaterialExpressionFontSample" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
				{ "ToolTip", "allow access to the various font pages" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontTexturePage = { UE4CodeGen_Private::EPropertyClass::Int, "FontTexturePage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSample, FontTexturePage), METADATA_PARAMS(NewProp_FontTexturePage_MetaData, ARRAY_COUNT(NewProp_FontTexturePage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "MaterialExpressionFontSample" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
				{ "ToolTip", "font resource that will be sampled" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Object, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSample, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontTexturePage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFontSample>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFontSample::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionFontSample, 4064216382);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFontSample(Z_Construct_UClass_UMaterialExpressionFontSample, &UMaterialExpressionFontSample::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFontSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFontSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
