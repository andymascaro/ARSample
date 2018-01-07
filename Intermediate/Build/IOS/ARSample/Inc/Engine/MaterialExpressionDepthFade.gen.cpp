// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDepthFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDepthFade::StaticRegisterNativesUMaterialExpressionDepthFade()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister()
	{
		return UMaterialExpressionDepthFade::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade()
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
				{ "IncludePath", "Materials/MaterialExpressionDepthFade.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDistanceDefault_MetaData[] = {
				{ "Category", "MaterialExpressionDepthFade" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
				{ "OverridingInputProperty", "FadeDistance" },
				{ "ToolTip", "World space distance over which the fade should take place.  This is used when FadeDistance is unconnected." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeDistanceDefault = { UE4CodeGen_Private::EPropertyClass::Float, "FadeDistanceDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistanceDefault), METADATA_PARAMS(NewProp_FadeDistanceDefault_MetaData, ARRAY_COUNT(NewProp_FadeDistanceDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityDefault_MetaData[] = {
				{ "Category", "MaterialExpressionDepthFade" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
				{ "OverridingInputProperty", "InOpacity" },
				{ "ToolTip", "Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityDefault = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, OpacityDefault), METADATA_PARAMS(NewProp_OpacityDefault_MetaData, ARRAY_COUNT(NewProp_OpacityDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'FadeDistanceDefault' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistance), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_FadeDistance_MetaData, ARRAY_COUNT(NewProp_FadeDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOpacity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'OpacityDefault' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, InOpacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_InOpacity_MetaData, ARRAY_COUNT(NewProp_InOpacity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeDistanceDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOpacity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDepthFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDepthFade::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionDepthFade, 739481120);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDepthFade(Z_Construct_UClass_UMaterialExpressionDepthFade, &UMaterialExpressionDepthFade::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDepthFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
