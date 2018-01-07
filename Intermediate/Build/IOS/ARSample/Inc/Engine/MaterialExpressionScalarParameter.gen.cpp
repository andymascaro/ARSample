// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionScalarParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScalarParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionScalarParameter::StaticRegisterNativesUMaterialExpressionScalarParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister()
	{
		return UMaterialExpressionScalarParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionScalarParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMax_MetaData[] = {
				{ "Category", "MaterialExpressionScalarParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
				{ "ToolTip", "Sets the upper bound for the slider on this parameter in the material instance editor.\nThe slider will be disabled if SliderMax <= SliderMin." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMax = { UE4CodeGen_Private::EPropertyClass::Float, "SliderMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMax), METADATA_PARAMS(NewProp_SliderMax_MetaData, ARRAY_COUNT(NewProp_SliderMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderMin_MetaData[] = {
				{ "Category", "MaterialExpressionScalarParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
				{ "ToolTip", "Sets the lower bound for the slider on this parameter in the material instance editor." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliderMin = { UE4CodeGen_Private::EPropertyClass::Float, "SliderMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMin), METADATA_PARAMS(NewProp_SliderMin_MetaData, ARRAY_COUNT(NewProp_SliderMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "MaterialExpressionScalarParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionScalarParameter, DefaultValue), METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SliderMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionScalarParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionScalarParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionScalarParameter, 3372530342);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionScalarParameter(Z_Construct_UClass_UMaterialExpressionScalarParameter, &UMaterialExpressionScalarParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionScalarParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScalarParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
