// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionArctangent2Fast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArctangent2Fast() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionArctangent2Fast::StaticRegisterNativesUMaterialExpressionArctangent2Fast()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast_NoRegister()
	{
		return UMaterialExpressionArctangent2Fast::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent2Fast()
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
				{ "IncludePath", "Materials/MaterialExpressionArctangent2Fast.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent2Fast.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent2Fast.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionArctangent2Fast, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent2Fast.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Struct, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionArctangent2Fast, Y), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionArctangent2Fast>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionArctangent2Fast::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionArctangent2Fast, 410908882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionArctangent2Fast(Z_Construct_UClass_UMaterialExpressionArctangent2Fast, &UMaterialExpressionArctangent2Fast::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionArctangent2Fast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArctangent2Fast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
