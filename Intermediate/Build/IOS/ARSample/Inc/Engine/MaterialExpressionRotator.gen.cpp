// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionRotator::StaticRegisterNativesUMaterialExpressionRotator()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister()
	{
		return UMaterialExpressionRotator::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionRotator()
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
				{ "IncludePath", "Materials/MaterialExpressionRotator.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
				{ "Category", "MaterialExpressionRotator" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
				{ "ToolTip", "only used if Coordinate is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstCoordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, ConstCoordinate), METADATA_PARAMS(NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "MaterialExpressionRotator" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterY_MetaData[] = {
				{ "Category", "MaterialExpressionRotator" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterY = { UE4CodeGen_Private::EPropertyClass::Float, "CenterY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, CenterY), METADATA_PARAMS(NewProp_CenterY_MetaData, ARRAY_COUNT(NewProp_CenterY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterX_MetaData[] = {
				{ "Category", "MaterialExpressionRotator" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterX = { UE4CodeGen_Private::EPropertyClass::Float, "CenterX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, CenterX), METADATA_PARAMS(NewProp_CenterX_MetaData, ARRAY_COUNT(NewProp_CenterX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to Game Time if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Struct, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinate = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotator, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Coordinate_MetaData, ARRAY_COUNT(NewProp_Coordinate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstCoordinate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionRotator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionRotator::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionRotator, 1633593128);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionRotator(Z_Construct_UClass_UMaterialExpressionRotator, &UMaterialExpressionRotator::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
