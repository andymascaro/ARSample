// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerWeight() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerWeight::StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerWeight::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerWeight.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstBase_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerWeight" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
				{ "ToolTip", "only used if Base is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstBase = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ConstBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ConstBase_MetaData, ARRAY_COUNT(NewProp_ConstBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerWeight" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PreviewWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, PreviewWeight), METADATA_PARAMS(NewProp_PreviewWeight_MetaData, ARRAY_COUNT(NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerWeight" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Ignored if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Struct, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Layer), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Layer_MetaData, ARRAY_COUNT(NewProp_Layer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstBase' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base = { UE4CodeGen_Private::EPropertyClass::Struct, "Base", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Base_MetaData, ARRAY_COUNT(NewProp_Base_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Base,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLandscapeLayerWeight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLandscapeLayerWeight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerWeight, 1105231659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerWeight(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight, &UMaterialExpressionLandscapeLayerWeight::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerWeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerWeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
