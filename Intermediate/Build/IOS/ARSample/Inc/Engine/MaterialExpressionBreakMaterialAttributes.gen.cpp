// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBreakMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	void UMaterialExpressionBreakMaterialAttributes::StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionBreakMaterialAttributes::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes()
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
				{ "IncludePath", "Materials/MaterialExpressionBreakMaterialAttributes.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialAttributes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBreakMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(NewProp_MaterialAttributes_MetaData, ARRAY_COUNT(NewProp_MaterialAttributes_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialAttributes,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionBreakMaterialAttributes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionBreakMaterialAttributes::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionBreakMaterialAttributes, 2345790945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBreakMaterialAttributes(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes, &UMaterialExpressionBreakMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBreakMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBreakMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
