// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionVectorParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionVectorParameter::StaticRegisterNativesUMaterialExpressionVectorParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister()
	{
		return UMaterialExpressionVectorParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter()
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
				{ "IncludePath", "Materials/MaterialExpressionVectorParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "MaterialExpressionVectorParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionVectorParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionVectorParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionVectorParameter, 786714017);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionVectorParameter(Z_Construct_UClass_UMaterialExpressionVectorParameter, &UMaterialExpressionVectorParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionVectorParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
