// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPower_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPower();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPower::StaticRegisterNativesUMaterialExpressionPower()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPower_NoRegister()
	{
		return UMaterialExpressionPower::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPower()
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
				{ "IncludePath", "Materials/MaterialExpressionPower.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstExponent_MetaData[] = {
				{ "Category", "MaterialExpressionPower" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
				{ "OverridingInputProperty", "Exponent" },
				{ "ToolTip", "only used if Exponent is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstExponent = { UE4CodeGen_Private::EPropertyClass::Float, "ConstExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, ConstExponent), METADATA_PARAMS(NewProp_ConstExponent_MetaData, ARRAY_COUNT(NewProp_ConstExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstExponent' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Exponent = { UE4CodeGen_Private::EPropertyClass::Struct, "Exponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, Exponent), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Exponent_MetaData, ARRAY_COUNT(NewProp_Exponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base = { UE4CodeGen_Private::EPropertyClass::Struct, "Base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Base_MetaData, ARRAY_COUNT(NewProp_Base_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Exponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Base,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionPower>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionPower::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionPower, 757937724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPower(Z_Construct_UClass_UMaterialExpressionPower, &UMaterialExpressionPower::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
