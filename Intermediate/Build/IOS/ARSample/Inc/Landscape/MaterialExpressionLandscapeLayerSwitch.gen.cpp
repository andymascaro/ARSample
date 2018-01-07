// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSwitch() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerSwitch::StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch()
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
				{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerSwitch.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
				{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewUsed_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
			};
#endif
			auto NewProp_PreviewUsed_SetBit = [](void* Obj){ ((UMaterialExpressionLandscapeLayerSwitch*)Obj)->PreviewUsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviewUsed = { UE4CodeGen_Private::EPropertyClass::Bool, "PreviewUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionLandscapeLayerSwitch), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PreviewUsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PreviewUsed_MetaData, ARRAY_COUNT(NewProp_PreviewUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerNotUsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerNotUsed = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerNotUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_LayerNotUsed_MetaData, ARRAY_COUNT(NewProp_LayerNotUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerUsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerUsed = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_LayerUsed_MetaData, ARRAY_COUNT(NewProp_LayerUsed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionGUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerNotUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerUsed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLandscapeLayerSwitch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLandscapeLayerSwitch::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerSwitch, 2763546058);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerSwitch(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch, &UMaterialExpressionLandscapeLayerSwitch::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
