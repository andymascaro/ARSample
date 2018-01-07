// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMakeMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionMakeMaterialAttributes::StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionMakeMaterialAttributes::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes()
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
				{ "IncludePath", "Materials/MaterialExpressionMakeMaterialAttributes.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelDepthOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelDepthOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelDepthOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, PixelDepthOffset), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_PixelDepthOffset_MetaData, ARRAY_COUNT(NewProp_PixelDepthOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizedUVs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizedUVs = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomizedUVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, CPP_ARRAY_DIM(CustomizedUVs, UMaterialExpressionMakeMaterialAttributes), nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, CustomizedUVs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_CustomizedUVs_MetaData, ARRAY_COUNT(NewProp_CustomizedUVs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Refraction = { UE4CodeGen_Private::EPropertyClass::Struct, "Refraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Refraction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Refraction_MetaData, ARRAY_COUNT(NewProp_Refraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbientOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, AmbientOcclusion), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_AmbientOcclusion_MetaData, ARRAY_COUNT(NewProp_AmbientOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearCoatRoughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, ClearCoatRoughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_ClearCoatRoughness_MetaData, ARRAY_COUNT(NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearCoat = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearCoat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, ClearCoat), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_ClearCoat_MetaData, ARRAY_COUNT(NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SubsurfaceColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, SubsurfaceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_SubsurfaceColor_MetaData, ARRAY_COUNT(NewProp_SubsurfaceColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationMultiplier_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TessellationMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "TessellationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, TessellationMultiplier), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_TessellationMultiplier_MetaData, ARRAY_COUNT(NewProp_TessellationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDisplacement_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDisplacement = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, WorldDisplacement), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_WorldDisplacement_MetaData, ARRAY_COUNT(NewProp_WorldDisplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldPositionOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, WorldPositionOffset), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_WorldPositionOffset_MetaData, ARRAY_COUNT(NewProp_WorldPositionOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityMask = { UE4CodeGen_Private::EPropertyClass::Struct, "OpacityMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, OpacityMask), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_OpacityMask_MetaData, ARRAY_COUNT(NewProp_OpacityMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Opacity = { UE4CodeGen_Private::EPropertyClass::Struct, "Opacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Opacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Opacity_MetaData, ARRAY_COUNT(NewProp_Opacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EmissiveColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_EmissiveColor_MetaData, ARRAY_COUNT(NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roughness = { UE4CodeGen_Private::EPropertyClass::Struct, "Roughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Roughness_MetaData, ARRAY_COUNT(NewProp_Roughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Specular = { UE4CodeGen_Private::EPropertyClass::Struct, "Specular", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Specular_MetaData, ARRAY_COUNT(NewProp_Specular_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metallic = { UE4CodeGen_Private::EPropertyClass::Struct, "Metallic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, Metallic), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Metallic_MetaData, ARRAY_COUNT(NewProp_Metallic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMakeMaterialAttributes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BaseColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMakeMaterialAttributes, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_BaseColor_MetaData, ARRAY_COUNT(NewProp_BaseColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PixelDepthOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomizedUVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Refraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmbientOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearCoatRoughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearCoat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsurfaceColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TessellationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldDisplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPositionOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Opacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmissiveColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Roughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Specular,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metallic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionMakeMaterialAttributes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionMakeMaterialAttributes::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionMakeMaterialAttributes, 39550230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMakeMaterialAttributes(Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes, &UMaterialExpressionMakeMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMakeMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMakeMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
