// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFresnel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFresnel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionFresnel::StaticRegisterNativesUMaterialExpressionFresnel()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister()
	{
		return UMaterialExpressionFresnel::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel()
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
				{ "IncludePath", "Materials/MaterialExpressionFresnel.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to Pixel World Normal if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFraction_MetaData[] = {
				{ "Category", "MaterialExpressionFresnel" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
				{ "OverridingInputProperty", "BaseReflectFractionIn" },
				{ "ToolTip", "Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\nA value of 1 effectively disables Fresnel." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseReflectFraction = { UE4CodeGen_Private::EPropertyClass::Float, "BaseReflectFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFraction), METADATA_PARAMS(NewProp_BaseReflectFraction_MetaData, ARRAY_COUNT(NewProp_BaseReflectFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFractionIn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'BaseReflectFraction' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseReflectFractionIn = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseReflectFractionIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFractionIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_BaseReflectFractionIn_MetaData, ARRAY_COUNT(NewProp_BaseReflectFractionIn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[] = {
				{ "Category", "MaterialExpressionFresnel" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
				{ "OverridingInputProperty", "ExponentIn" },
				{ "ToolTip", "The exponent to pass into the pow() function" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exponent = { UE4CodeGen_Private::EPropertyClass::Float, "Exponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, Exponent), METADATA_PARAMS(NewProp_Exponent_MetaData, ARRAY_COUNT(NewProp_Exponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExponentIn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'Exponent' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExponentIn = { UE4CodeGen_Private::EPropertyClass::Struct, "ExponentIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, ExponentIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_ExponentIn_MetaData, ARRAY_COUNT(NewProp_ExponentIn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseReflectFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseReflectFractionIn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExponentIn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFresnel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFresnel::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionFresnel, 4028478693);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFresnel(Z_Construct_UClass_UMaterialExpressionFresnel, &UMaterialExpressionFresnel::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFresnel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFresnel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif