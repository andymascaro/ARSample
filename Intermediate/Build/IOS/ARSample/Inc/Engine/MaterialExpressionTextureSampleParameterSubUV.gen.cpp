// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterSubUV::StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[] = {
				{ "Category", "MaterialExpressionTextureSampleParameterSubUV" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
			};
#endif
			auto NewProp_bBlend_SetBit = [](void* Obj){ ((UMaterialExpressionTextureSampleParameterSubUV*)Obj)->bBlend = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlend", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureSampleParameterSubUV), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBlend_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBlend_MetaData, ARRAY_COUNT(NewProp_bBlend_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBlend,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterSubUV>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureSampleParameterSubUV::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureSampleParameterSubUV, 4235333245);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSampleParameterSubUV(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV, &UMaterialExpressionTextureSampleParameterSubUV::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSampleParameterSubUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterSubUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
