// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionIf.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIf() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionIf::StaticRegisterNativesUMaterialExpressionIf()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister()
	{
		return UMaterialExpressionIf::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionIf()
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
				{ "IncludePath", "Materials/MaterialExpressionIf.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstAEqualsB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstAEqualsB = { UE4CodeGen_Private::EPropertyClass::Float, "ConstAEqualsB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ConstAEqualsB_DEPRECATED), METADATA_PARAMS(NewProp_ConstAEqualsB_MetaData, ARRAY_COUNT(NewProp_ConstAEqualsB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[] = {
				{ "Category", "MaterialExpressionIf" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
				{ "ToolTip", "only used if B is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB = { UE4CodeGen_Private::EPropertyClass::Float, "ConstB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ConstB), METADATA_PARAMS(NewProp_ConstB_MetaData, ARRAY_COUNT(NewProp_ConstB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EqualsThreshold_MetaData[] = {
				{ "Category", "MaterialExpressionIf" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EqualsThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "EqualsThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, EqualsThreshold), METADATA_PARAMS(NewProp_EqualsThreshold_MetaData, ARRAY_COUNT(NewProp_EqualsThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALessThanB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ALessThanB = { UE4CodeGen_Private::EPropertyClass::Struct, "ALessThanB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ALessThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_ALessThanB_MetaData, ARRAY_COUNT(NewProp_ALessThanB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEqualsB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'A > B' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AEqualsB = { UE4CodeGen_Private::EPropertyClass::Struct, "AEqualsB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, AEqualsB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_AEqualsB_MetaData, ARRAY_COUNT(NewProp_AEqualsB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGreaterThanB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AGreaterThanB = { UE4CodeGen_Private::EPropertyClass::Struct, "AGreaterThanB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, AGreaterThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_AGreaterThanB_MetaData, ARRAY_COUNT(NewProp_AGreaterThanB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstB' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstAEqualsB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EqualsThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ALessThanB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AEqualsB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AGreaterThanB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionIf>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionIf::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionIf, 96649258);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionIf(Z_Construct_UClass_UMaterialExpressionIf, &UMaterialExpressionIf::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionIf"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIf);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
