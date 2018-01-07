// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFontSampleParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFontSampleParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSampleParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionFontSampleParameter::StaticRegisterNativesUMaterialExpressionFontSampleParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFontSampleParameter_NoRegister()
	{
		return UMaterialExpressionFontSampleParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFontSampleParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionFontSample,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionFontSampleParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSampleParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "Category", "MaterialExpressionFontSampleParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSampleParameter.h" },
				{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Name, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSampleParameter, Group), METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSampleParameter.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSampleParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "MaterialExpressionFontSampleParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSampleParameter.h" },
				{ "ToolTip", "name to be referenced when we want to find and set thsi parameter" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSampleParameter, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFontSampleParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFontSampleParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionFontSampleParameter, 3750576027);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFontSampleParameter(Z_Construct_UClass_UMaterialExpressionFontSampleParameter, &UMaterialExpressionFontSampleParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFontSampleParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFontSampleParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
