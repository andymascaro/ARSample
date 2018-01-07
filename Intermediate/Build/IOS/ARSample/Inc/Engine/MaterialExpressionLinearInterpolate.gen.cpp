// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLinearInterpolate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLinearInterpolate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLinearInterpolate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLinearInterpolate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLinearInterpolate::StaticRegisterNativesUMaterialExpressionLinearInterpolate()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLinearInterpolate_NoRegister()
	{
		return UMaterialExpressionLinearInterpolate::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLinearInterpolate()
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
				{ "IncludePath", "Materials/MaterialExpressionLinearInterpolate.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstAlpha_MetaData[] = {
				{ "Category", "MaterialExpressionLinearInterpolate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "OverridingInputProperty", "Alpha" },
				{ "ToolTip", "only used if Alpha is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ConstAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, ConstAlpha), METADATA_PARAMS(NewProp_ConstAlpha_MetaData, ARRAY_COUNT(NewProp_ConstAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[] = {
				{ "Category", "MaterialExpressionLinearInterpolate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "OverridingInputProperty", "B" },
				{ "ToolTip", "only used if B is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB = { UE4CodeGen_Private::EPropertyClass::Float, "ConstB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, ConstB), METADATA_PARAMS(NewProp_ConstB_MetaData, ARRAY_COUNT(NewProp_ConstB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[] = {
				{ "Category", "MaterialExpressionLinearInterpolate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "OverridingInputProperty", "A" },
				{ "ToolTip", "only used if A is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstA = { UE4CodeGen_Private::EPropertyClass::Float, "ConstA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, ConstA), METADATA_PARAMS(NewProp_ConstA_MetaData, ARRAY_COUNT(NewProp_ConstA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstAlpha' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Struct, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Alpha_MetaData, ARRAY_COUNT(NewProp_Alpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstB' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLinearInterpolate.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstA' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLinearInterpolate, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLinearInterpolate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLinearInterpolate::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionLinearInterpolate, 1388700769);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLinearInterpolate(Z_Construct_UClass_UMaterialExpressionLinearInterpolate, &UMaterialExpressionLinearInterpolate::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionLinearInterpolate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLinearInterpolate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
