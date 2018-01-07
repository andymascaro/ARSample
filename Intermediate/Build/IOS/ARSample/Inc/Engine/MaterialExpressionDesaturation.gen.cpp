// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDesaturation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDesaturation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDesaturation::StaticRegisterNativesUMaterialExpressionDesaturation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister()
	{
		return UMaterialExpressionDesaturation::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation()
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
				{ "IncludePath", "Materials/MaterialExpressionDesaturation.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[] = {
				{ "Category", "MaterialExpressionDesaturation" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors = { UE4CodeGen_Private::EPropertyClass::Struct, "LuminanceFactors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_LuminanceFactors_MetaData, ARRAY_COUNT(NewProp_LuminanceFactors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fraction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fraction = { UE4CodeGen_Private::EPropertyClass::Struct, "Fraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Fraction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Fraction_MetaData, ARRAY_COUNT(NewProp_Fraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
				{ "ToolTip", "Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LuminanceFactors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDesaturation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDesaturation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionDesaturation, 91933283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDesaturation(Z_Construct_UClass_UMaterialExpressionDesaturation, &UMaterialExpressionDesaturation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDesaturation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDesaturation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
