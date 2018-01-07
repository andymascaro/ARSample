// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionCollectionParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCollectionParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	void UMaterialExpressionCollectionParameter::StaticRegisterNativesUMaterialExpressionCollectionParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister()
	{
		return UMaterialExpressionCollectionParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter()
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
				{ "HideCategories", "object Object" },
				{ "IncludePath", "Materials/MaterialExpressionCollectionParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
				{ "ToolTip", "Id that is set from the name, and used to handle renaming of collection parameters." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterId = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ParameterId_MetaData, ARRAY_COUNT(NewProp_ParameterId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "MaterialExpressionCollectionParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
				{ "ToolTip", "Name of the parameter being referenced." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
				{ "Category", "MaterialExpressionCollectionParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
				{ "ToolTip", "The Parameter Collection to use." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collection = { UE4CodeGen_Private::EPropertyClass::Object, "Collection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(NewProp_Collection_MetaData, ARRAY_COUNT(NewProp_Collection_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collection,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionCollectionParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionCollectionParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionCollectionParameter, 3861559361);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCollectionParameter(Z_Construct_UClass_UMaterialExpressionCollectionParameter, &UMaterialExpressionCollectionParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCollectionParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCollectionParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
