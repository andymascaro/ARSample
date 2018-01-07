// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSobol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSobol() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSobol_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSobol();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSobol::StaticRegisterNativesUMaterialExpressionSobol()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSobol_NoRegister()
	{
		return UMaterialExpressionSobol::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSobol()
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
				{ "IncludePath", "Materials/MaterialExpressionSobol.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstSeed_MetaData[] = {
				{ "Category", "MaterialExpressionSobol" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
				{ "OverridingInputProperty", "Seed" },
				{ "Tooltip", "2D Seed for sequence randomization. Only used if Seed is not connected." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstSeed = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, ConstSeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ConstSeed_MetaData, ARRAY_COUNT(NewProp_ConstSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstIndex_MetaData[] = {
				{ "Category", "MaterialExpressionSobol" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
				{ "OverridingInputProperty", "Index" },
				{ "Tooltip", "Sobol point number. Only used if Index is not connected." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "ConstIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, ConstIndex), METADATA_PARAMS(NewProp_ConstIndex_MetaData, ARRAY_COUNT(NewProp_ConstIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
				{ "RequiredInput", "false" },
				{ "Tooltip", "2D Seed for sequence randomization (0,0)-(1,1). Use Const Seed if not connected." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed = { UE4CodeGen_Private::EPropertyClass::Struct, "Seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Seed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Seed_MetaData, ARRAY_COUNT(NewProp_Seed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
				{ "RequiredInput", "false" },
				{ "Tooltip", "Sobol point number. Use Const Index if not connected." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Struct, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Index), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
				{ "ToolTip", "2D integer cell in 256x256 grid.\nUses cell (0,0) if not connected" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cell = { UE4CodeGen_Private::EPropertyClass::Struct, "Cell", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Cell), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Cell_MetaData, ARRAY_COUNT(NewProp_Cell_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Cell,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSobol>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSobol::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionSobol, 1923357965);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSobol(Z_Construct_UClass_UMaterialExpressionSobol, &UMaterialExpressionSobol::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSobol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSobol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
