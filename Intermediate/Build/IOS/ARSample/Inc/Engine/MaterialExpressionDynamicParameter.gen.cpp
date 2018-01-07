// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDynamicParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDynamicParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionDynamicParameter::StaticRegisterNativesUMaterialExpressionDynamicParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister()
	{
		return UMaterialExpressionDynamicParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter()
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
				{ "IncludePath", "Materials/MaterialExpressionDynamicParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "MaterialExpressionDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamNames_MetaData[] = {
				{ "Category", "MaterialExpressionDynamicParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
				{ "ToolTip", "The names of the parameters.\nThese will show up in Cascade when editing a particle system\nthat uses the material it is in..." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamNames = { UE4CodeGen_Private::EPropertyClass::Array, "ParamNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, ParamNames), METADATA_PARAMS(NewProp_ParamNames_MetaData, ARRAY_COUNT(NewProp_ParamNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ParamNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamNames_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDynamicParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDynamicParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionDynamicParameter, 1840523936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDynamicParameter(Z_Construct_UClass_UMaterialExpressionDynamicParameter, &UMaterialExpressionDynamicParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDynamicParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDynamicParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
