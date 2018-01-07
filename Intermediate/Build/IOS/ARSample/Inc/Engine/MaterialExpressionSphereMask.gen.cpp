// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSphereMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphereMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSphereMask::StaticRegisterNativesUMaterialExpressionSphereMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister()
	{
		return UMaterialExpressionSphereMask::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpressionSphereMask.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardnessPercent_MetaData[] = {
				{ "Category", "MaterialExpressionSphereMask" },
				{ "ClampMax", "100.0" },
				{ "ClampMin", "0.0" },
				{ "DisplayName", "Hardness" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "OverridingInputProperty", "Hardness" },
				{ "ToolTip", "in percent 0%=soft .. 100%=hard" },
				{ "UIMax", "100.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardnessPercent = { UE4CodeGen_Private::EPropertyClass::Float, "HardnessPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, HardnessPercent), METADATA_PARAMS(NewProp_HardnessPercent_MetaData, ARRAY_COUNT(NewProp_HardnessPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
				{ "Category", "MaterialExpressionSphereMask" },
				{ "DisplayName", "Radius" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "OverridingInputProperty", "Radius" },
				{ "ToolTip", "in the unit that A and B are measured" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, AttenuationRadius), METADATA_PARAMS(NewProp_AttenuationRadius_MetaData, ARRAY_COUNT(NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'HardnessPercent' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hardness = { UE4CodeGen_Private::EPropertyClass::Struct, "Hardness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Hardness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Hardness_MetaData, ARRAY_COUNT(NewProp_Hardness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'AttenuationRadius' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Struct, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Radius), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "ToolTip", "1 to 4 dimensional vector, should be the same type as A" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
				{ "ToolTip", "1 to 4 dimensional vector, should be the same type as B" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HardnessPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hardness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSphereMask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSphereMask::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionSphereMask, 4264711680);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSphereMask(Z_Construct_UClass_UMaterialExpressionSphereMask, &UMaterialExpressionSphereMask::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSphereMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphereMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
