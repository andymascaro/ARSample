// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionGIReplace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGIReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGIReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionGIReplace::StaticRegisterNativesUMaterialExpressionGIReplace()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister()
	{
		return UMaterialExpressionGIReplace::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionGIReplace()
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
				{ "IncludePath", "Materials/MaterialExpressionGIReplace.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicIndirect_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
				{ "ToolTip", "Used for dynamic indirect lighting e.g. Light Propagation Volumes" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicIndirect = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicIndirect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, DynamicIndirect), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_DynamicIndirect_MetaData, ARRAY_COUNT(NewProp_DynamicIndirect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticIndirect_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
				{ "ToolTip", "Used for baked indirect lighting e.g. Lightmass" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticIndirect = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticIndirect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, StaticIndirect), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_StaticIndirect_MetaData, ARRAY_COUNT(NewProp_StaticIndirect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
				{ "ToolTip", "Used for direct lighting computations e.g. real-time shaders" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Struct, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicIndirect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticIndirect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionGIReplace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionGIReplace::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionGIReplace, 936999132);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionGIReplace(Z_Construct_UClass_UMaterialExpressionGIReplace, &UMaterialExpressionGIReplace::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionGIReplace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGIReplace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
