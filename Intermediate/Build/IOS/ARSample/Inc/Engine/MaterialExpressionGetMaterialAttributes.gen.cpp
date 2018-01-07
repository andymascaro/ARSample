// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionGetMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	void UMaterialExpressionGetMaterialAttributes::StaticRegisterNativesUMaterialExpressionGetMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionGetMaterialAttributes::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes()
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
				{ "IncludePath", "Materials/MaterialExpressionGetMaterialAttributes.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeGetTypes_MetaData[] = {
				{ "Category", "MaterialAttributes" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeGetTypes = { UE4CodeGen_Private::EPropertyClass::Array, "AttributeGetTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes), METADATA_PARAMS(NewProp_AttributeGetTypes_MetaData, ARRAY_COUNT(NewProp_AttributeGetTypes_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeGetTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributeGetTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialAttributes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_MaterialAttributes_MetaData, ARRAY_COUNT(NewProp_MaterialAttributes_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeGetTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttributeGetTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialAttributes,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionGetMaterialAttributes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionGetMaterialAttributes::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionGetMaterialAttributes, 4050862936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionGetMaterialAttributes(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes, &UMaterialExpressionGetMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionGetMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
