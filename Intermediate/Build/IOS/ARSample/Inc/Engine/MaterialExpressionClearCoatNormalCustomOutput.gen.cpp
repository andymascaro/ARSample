// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClearCoatNormalCustomOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionClearCoatNormalCustomOutput::StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister()
	{
		return UMaterialExpressionClearCoatNormalCustomOutput::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
				{ "RequiredInput", "true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionClearCoatNormalCustomOutput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionClearCoatNormalCustomOutput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionClearCoatNormalCustomOutput::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionClearCoatNormalCustomOutput, 2423258278);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionClearCoatNormalCustomOutput(Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput, &UMaterialExpressionClearCoatNormalCustomOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionClearCoatNormalCustomOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClearCoatNormalCustomOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
