// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionNormalize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNormalize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionNormalize::StaticRegisterNativesUMaterialExpressionNormalize()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister()
	{
		return UMaterialExpressionNormalize::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize()
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
				{ "IncludePath", "Materials/MaterialExpressionNormalize.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorInput = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNormalize, VectorInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_VectorInput_MetaData, ARRAY_COUNT(NewProp_VectorInput_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorInput,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionNormalize>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionNormalize::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionNormalize, 720527291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNormalize(Z_Construct_UClass_UMaterialExpressionNormalize, &UMaterialExpressionNormalize::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNormalize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNormalize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
