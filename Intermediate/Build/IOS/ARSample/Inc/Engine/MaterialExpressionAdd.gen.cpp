// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAdd() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAdd_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAdd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionAdd::StaticRegisterNativesUMaterialExpressionAdd()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAdd_NoRegister()
	{
		return UMaterialExpressionAdd::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAdd()
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
				{ "IncludePath", "Materials/MaterialExpressionAdd.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[] = {
				{ "Category", "MaterialExpressionAdd" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
				{ "OverridingInputProperty", "B" },
				{ "ToolTip", "only used if B is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB = { UE4CodeGen_Private::EPropertyClass::Float, "ConstB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, ConstB), METADATA_PARAMS(NewProp_ConstB_MetaData, ARRAY_COUNT(NewProp_ConstB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[] = {
				{ "Category", "MaterialExpressionAdd" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
				{ "OverridingInputProperty", "A" },
				{ "ToolTip", "only used if A is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstA = { UE4CodeGen_Private::EPropertyClass::Float, "ConstA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, ConstA), METADATA_PARAMS(NewProp_ConstA_MetaData, ARRAY_COUNT(NewProp_ConstA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstB' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstA' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionAdd>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionAdd::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionAdd, 2931644509);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAdd(Z_Construct_UClass_UMaterialExpressionAdd, &UMaterialExpressionAdd::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
