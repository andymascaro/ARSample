// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSetMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSetMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSetMaterialAttributes::StaticRegisterNativesUMaterialExpressionSetMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionSetMaterialAttributes::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes()
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
				{ "IncludePath", "Materials/MaterialExpressionSetMaterialAttributes.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetTypes_MetaData[] = {
				{ "Category", "MaterialAttributes" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeSetTypes = { UE4CodeGen_Private::EPropertyClass::Array, "AttributeSetTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSetMaterialAttributes, AttributeSetTypes), METADATA_PARAMS(NewProp_AttributeSetTypes_MetaData, ARRAY_COUNT(NewProp_AttributeSetTypes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeSetTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributeSetTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSetMaterialAttributes, Inputs), METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeSetTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeSetTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSetMaterialAttributes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSetMaterialAttributes::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionSetMaterialAttributes, 2816277171);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSetMaterialAttributes(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes, &UMaterialExpressionSetMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSetMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSetMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
