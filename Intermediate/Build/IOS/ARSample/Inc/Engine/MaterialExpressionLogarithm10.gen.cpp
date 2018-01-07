// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLogarithm10.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLogarithm10() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLogarithm10::StaticRegisterNativesUMaterialExpressionLogarithm10()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10_NoRegister()
	{
		return UMaterialExpressionLogarithm10::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10()
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
				{ "IncludePath", "Materials/MaterialExpressionLogarithm10.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm10.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm10.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLogarithm10, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLogarithm10>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLogarithm10::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionLogarithm10, 136346658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLogarithm10(Z_Construct_UClass_UMaterialExpressionLogarithm10, &UMaterialExpressionLogarithm10::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionLogarithm10"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLogarithm10);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
