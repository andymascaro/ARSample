// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionDecalMipmapLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalMipmapLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDecalMipmapLevel::StaticRegisterNativesUMaterialExpressionDecalMipmapLevel()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister()
	{
		return UMaterialExpressionDecalMipmapLevel::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel()
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
				{ "IncludePath", "Materials/MaterialExpressionDecalMipmapLevel.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstHeight_MetaData[] = {
				{ "Category", "MaterialExpressionDecalMipmapLevel" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
				{ "OverridingInputProperty", "TextureSize" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ConstHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstHeight), METADATA_PARAMS(NewProp_ConstHeight_MetaData, ARRAY_COUNT(NewProp_ConstHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstWidth_MetaData[] = {
				{ "Category", "MaterialExpressionDecalMipmapLevel" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
				{ "OverridingInputProperty", "TextureSize" },
				{ "ToolTip", "only used if TextureSize is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstWidth = { UE4CodeGen_Private::EPropertyClass::Float, "ConstWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstWidth), METADATA_PARAMS(NewProp_ConstWidth_MetaData, ARRAY_COUNT(NewProp_ConstWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to '(Const Width, Const Height)' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, TextureSize), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_TextureSize_MetaData, ARRAY_COUNT(NewProp_TextureSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionDecalMipmapLevel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionDecalMipmapLevel::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionDecalMipmapLevel, 637343156);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDecalMipmapLevel(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel, &UMaterialExpressionDecalMipmapLevel::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDecalMipmapLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalMipmapLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
