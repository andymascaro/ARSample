// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionQualitySwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionQualitySwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionQualitySwitch::StaticRegisterNativesUMaterialExpressionQualitySwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister()
	{
		return UMaterialExpressionQualitySwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch()
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
				{ "IncludePath", "Materials/MaterialExpressionQualitySwitch.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Inputs, UMaterialExpressionQualitySwitch), nullptr, STRUCT_OFFSET(UMaterialExpressionQualitySwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
				{ "ToolTip", "Default connection, used when a specific quality level input is missing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Struct, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionQualitySwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionQualitySwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionQualitySwitch::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionQualitySwitch, 708297151);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionQualitySwitch(Z_Construct_UClass_UMaterialExpressionQualitySwitch, &UMaterialExpressionQualitySwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionQualitySwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionQualitySwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
