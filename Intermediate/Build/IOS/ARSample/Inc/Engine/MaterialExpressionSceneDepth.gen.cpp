// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSceneDepth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneDepth() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
// End Cross Module References
	void UMaterialExpressionSceneDepth::StaticRegisterNativesUMaterialExpressionSceneDepth()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister()
	{
		return UMaterialExpressionSceneDepth::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth()
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
				{ "IncludePath", "Materials/MaterialExpressionSceneDepth.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[] = {
				{ "Category", "MaterialExpressionSceneDepth" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
				{ "ToolTip", "only used if Input is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstInput = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ConstInput_MetaData, ARRAY_COUNT(NewProp_ConstInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, Coordinates_DEPRECATED), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
				{ "Category", "MaterialExpressionSceneDepth" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
				{ "ToolTip", "Coordinates - UV coordinates to apply to the scene depth lookup.\nOffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InputMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(NewProp_InputMode_MetaData, ARRAY_COUNT(NewProp_InputMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSceneDepth>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSceneDepth::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionSceneDepth, 433685069);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSceneDepth(Z_Construct_UClass_UMaterialExpressionSceneDepth, &UMaterialExpressionSceneDepth::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSceneDepth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneDepth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
