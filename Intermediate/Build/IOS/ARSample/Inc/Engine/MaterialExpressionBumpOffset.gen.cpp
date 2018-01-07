// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionBumpOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBumpOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionBumpOffset::StaticRegisterNativesUMaterialExpressionBumpOffset()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister()
	{
		return UMaterialExpressionBumpOffset::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset()
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
				{ "IncludePath", "Materials/MaterialExpressionBumpOffset.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
				{ "Category", "MaterialExpressionBumpOffset" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
				{ "ToolTip", "only used if Coordinate is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ConstCoordinate), METADATA_PARAMS(NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePlane_MetaData[] = {
				{ "Category", "MaterialExpressionBumpOffset" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
				{ "ToolTip", "Perceived height as a fraction of width." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReferencePlane = { UE4CodeGen_Private::EPropertyClass::Float, "ReferencePlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ReferencePlane), METADATA_PARAMS(NewProp_ReferencePlane_MetaData, ARRAY_COUNT(NewProp_ReferencePlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRatio_MetaData[] = {
				{ "Category", "MaterialExpressionBumpOffset" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
				{ "OverridingInputProperty", "HeightRatioInput" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightRatio = { UE4CodeGen_Private::EPropertyClass::Float, "HeightRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatio), METADATA_PARAMS(NewProp_HeightRatio_MetaData, ARRAY_COUNT(NewProp_HeightRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRatioInput_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
				{ "RequiredInput", "false" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRatioInput = { UE4CodeGen_Private::EPropertyClass::Struct, "HeightRatioInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatioInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_HeightRatioInput_MetaData, ARRAY_COUNT(NewProp_HeightRatioInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Struct, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Height), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinate_MetaData, ARRAY_COUNT(NewProp_Coordinate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReferencePlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightRatioInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionBumpOffset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionBumpOffset::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionBumpOffset, 1768728275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBumpOffset(Z_Construct_UClass_UMaterialExpressionBumpOffset, &UMaterialExpressionBumpOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBumpOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBumpOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
