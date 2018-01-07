// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDeriveNormalZ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDeriveNormalZ() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDeriveNormalZ::StaticRegisterNativesUMaterialExpressionDeriveNormalZ()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ_NoRegister()
	{
		return UMaterialExpressionDeriveNormalZ::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDeriveNormalZ()
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
				{ "IncludePath", "Materials/MaterialExpressionDeriveNormalZ.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDeriveNormalZ.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InXY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDeriveNormalZ.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InXY = { UE4CodeGen_Private::EPropertyClass::Struct, "InXY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDeriveNormalZ, InXY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_InXY_MetaData, ARRAY_COUNT(NewProp_InXY_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InXY,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDeriveNormalZ>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDeriveNormalZ::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionDeriveNormalZ, 1909698380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDeriveNormalZ(Z_Construct_UClass_UMaterialExpressionDeriveNormalZ, &UMaterialExpressionDeriveNormalZ::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDeriveNormalZ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDeriveNormalZ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
