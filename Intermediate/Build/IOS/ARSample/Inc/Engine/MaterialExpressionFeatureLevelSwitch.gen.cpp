// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFeatureLevelSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFeatureLevelSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionFeatureLevelSwitch::StaticRegisterNativesUMaterialExpressionFeatureLevelSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch_NoRegister()
	{
		return UMaterialExpressionFeatureLevelSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch()
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
				{ "IncludePath", "Materials/MaterialExpressionFeatureLevelSwitch.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFeatureLevelSwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFeatureLevelSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Struct, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(Inputs, UMaterialExpressionFeatureLevelSwitch), nullptr, STRUCT_OFFSET(UMaterialExpressionFeatureLevelSwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFeatureLevelSwitch.h" },
				{ "ToolTip", "Default connection, used when a certain feature level doesn't have an override." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Struct, "Default", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFeatureLevelSwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Default_MetaData, ARRAY_COUNT(NewProp_Default_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Default,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFeatureLevelSwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFeatureLevelSwitch::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionFeatureLevelSwitch, 3034526662);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFeatureLevelSwitch(Z_Construct_UClass_UMaterialExpressionFeatureLevelSwitch, &UMaterialExpressionFeatureLevelSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFeatureLevelSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFeatureLevelSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
