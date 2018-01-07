// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionStaticSwitchParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticSwitchParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionStaticSwitchParameter::StaticRegisterNativesUMaterialExpressionStaticSwitchParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister()
	{
		return UMaterialExpressionStaticSwitchParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStaticBoolParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionStaticSwitchParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitchParameter, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitchParameter, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionStaticSwitchParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionStaticSwitchParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionStaticSwitchParameter, 1207712653);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticSwitchParameter(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter, &UMaterialExpressionStaticSwitchParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticSwitchParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticSwitchParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
