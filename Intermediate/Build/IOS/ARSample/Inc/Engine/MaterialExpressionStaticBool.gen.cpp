// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionStaticBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBool();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStaticBool::StaticRegisterNativesUMaterialExpressionStaticBool()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBool_NoRegister()
	{
		return UMaterialExpressionStaticBool::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBool()
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
				{ "IncludePath", "Materials/MaterialExpressionStaticBool.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "MaterialExpressionStaticBool" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBool.h" },
			};
#endif
			auto NewProp_Value_SetBit = [](void* Obj){ ((UMaterialExpressionStaticBool*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticBool), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionStaticBool>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionStaticBool::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionStaticBool, 4152750061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticBool(Z_Construct_UClass_UMaterialExpressionStaticBool, &UMaterialExpressionStaticBool::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticBool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
