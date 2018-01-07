// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureCoordinate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureCoordinate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureCoordinate::StaticRegisterNativesUMaterialExpressionTextureCoordinate()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister()
	{
		return UMaterialExpressionTextureCoordinate::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate()
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
				{ "IncludePath", "Materials/MaterialExpressionTextureCoordinate.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnMirrorV_MetaData[] = {
				{ "Category", "MaterialExpressionTextureCoordinate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
			};
#endif
			auto NewProp_UnMirrorV_SetBit = [](void* Obj){ ((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnMirrorV = { UE4CodeGen_Private::EPropertyClass::Bool, "UnMirrorV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureCoordinate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UnMirrorV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UnMirrorV_MetaData, ARRAY_COUNT(NewProp_UnMirrorV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnMirrorU_MetaData[] = {
				{ "Category", "MaterialExpressionTextureCoordinate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
				{ "ToolTip", "Would like to unmirror U or V\n- if the texture is mirrored and if you would like to undo mirroring for this texture sample, use this to unmirror" },
			};
#endif
			auto NewProp_UnMirrorU_SetBit = [](void* Obj){ ((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorU = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnMirrorU = { UE4CodeGen_Private::EPropertyClass::Bool, "UnMirrorU", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureCoordinate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UnMirrorU_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UnMirrorU_MetaData, ARRAY_COUNT(NewProp_UnMirrorU_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VTiling_MetaData[] = {
				{ "Category", "MaterialExpressionTextureCoordinate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
				{ "ToolTip", "Controls how much the texture tiles vertically, by scaling the V component of the vertex UVs by the specified amount." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VTiling = { UE4CodeGen_Private::EPropertyClass::Float, "VTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, VTiling), METADATA_PARAMS(NewProp_VTiling_MetaData, ARRAY_COUNT(NewProp_VTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UTiling_MetaData[] = {
				{ "Category", "MaterialExpressionTextureCoordinate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
				{ "ToolTip", "Controls how much the texture tiles horizontally, by scaling the U component of the vertex UVs by the specified amount." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UTiling = { UE4CodeGen_Private::EPropertyClass::Float, "UTiling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, UTiling), METADATA_PARAMS(NewProp_UTiling_MetaData, ARRAY_COUNT(NewProp_UTiling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinateIndex_MetaData[] = {
				{ "Category", "MaterialExpressionTextureCoordinate" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
				{ "ToolTip", "Texture coordinate index" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoordinateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CoordinateIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, CoordinateIndex), METADATA_PARAMS(NewProp_CoordinateIndex_MetaData, ARRAY_COUNT(NewProp_CoordinateIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnMirrorV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnMirrorU,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UTiling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CoordinateIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureCoordinate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureCoordinate::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureCoordinate, 889855789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureCoordinate(Z_Construct_UClass_UMaterialExpressionTextureCoordinate, &UMaterialExpressionTextureCoordinate::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureCoordinate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureCoordinate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
