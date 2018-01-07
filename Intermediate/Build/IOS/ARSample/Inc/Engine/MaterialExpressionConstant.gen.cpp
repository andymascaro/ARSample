// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionConstant::StaticRegisterNativesUMaterialExpressionConstant()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant_NoRegister()
	{
		return UMaterialExpressionConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant()
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
				{ "IncludePath", "Materials/MaterialExpressionConstant.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[] = {
				{ "Category", "MaterialExpressionConstant" },
				{ "DisplayName", "Value" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_R = { UE4CodeGen_Private::EPropertyClass::Float, "R", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionConstant, R), METADATA_PARAMS(NewProp_R_MetaData, ARRAY_COUNT(NewProp_R_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_R,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionConstant::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionConstant, 896243869);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionConstant(Z_Construct_UClass_UMaterialExpressionConstant, &UMaterialExpressionConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
