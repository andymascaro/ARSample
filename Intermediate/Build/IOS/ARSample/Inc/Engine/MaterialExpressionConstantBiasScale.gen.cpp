// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionConstantBiasScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstantBiasScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionConstantBiasScale::StaticRegisterNativesUMaterialExpressionConstantBiasScale()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale_NoRegister()
	{
		return UMaterialExpressionConstantBiasScale::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale()
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
				{ "IncludePath", "Materials/MaterialExpressionConstantBiasScale.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
				{ "Category", "MaterialExpressionConstantBiasScale" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Scale), METADATA_PARAMS(NewProp_Scale_MetaData, ARRAY_COUNT(NewProp_Scale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
				{ "Category", "MaterialExpressionConstantBiasScale" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias = { UE4CodeGen_Private::EPropertyClass::Float, "Bias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Bias), METADATA_PARAMS(NewProp_Bias_MetaData, ARRAY_COUNT(NewProp_Bias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Bias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionConstantBiasScale>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionConstantBiasScale::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionConstantBiasScale, 2723114328);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionConstantBiasScale(Z_Construct_UClass_UMaterialExpressionConstantBiasScale, &UMaterialExpressionConstantBiasScale::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionConstantBiasScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstantBiasScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
