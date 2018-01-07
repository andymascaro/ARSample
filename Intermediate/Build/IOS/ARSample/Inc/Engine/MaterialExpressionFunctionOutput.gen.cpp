// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFunctionOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionFunctionOutput::StaticRegisterNativesUMaterialExpressionFunctionOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister()
	{
		return UMaterialExpressionFunctionOutput::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput()
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
				{ "HideCategories", "object Object" },
				{ "IncludePath", "Materials/MaterialExpressionFunctionOutput.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "ToolTip", "Id of this input, used to maintain references through name changes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Id_MetaData, ARRAY_COUNT(NewProp_Id_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastPreviewed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "ToolTip", "Whether this output was previewed the last time this function was edited." },
			};
#endif
			auto NewProp_bLastPreviewed_SetBit = [](void* Obj){ ((UMaterialExpressionFunctionOutput*)Obj)->bLastPreviewed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastPreviewed = { UE4CodeGen_Private::EPropertyClass::Bool, "bLastPreviewed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionFunctionOutput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLastPreviewed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLastPreviewed_MetaData, ARRAY_COUNT(NewProp_bLastPreviewed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "ToolTip", "Stores the expression in the material function connected to this output." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionOutput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "ToolTip", "Controls where the output is displayed relative to the other outputs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "SortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, SortPriority), METADATA_PARAMS(NewProp_SortPriority_MetaData, ARRAY_COUNT(NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionOutput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "MultiLine", "TRUE" },
				{ "ToolTip", "The output's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionOutput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
				{ "ToolTip", "The output's name, which will be drawn on the connector in function call expressions that use this function." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputName = { UE4CodeGen_Private::EPropertyClass::Str, "OutputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, OutputName), METADATA_PARAMS(NewProp_OutputName_MetaData, ARRAY_COUNT(NewProp_OutputName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLastPreviewed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFunctionOutput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFunctionOutput::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionFunctionOutput, 2609532320);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFunctionOutput(Z_Construct_UClass_UMaterialExpressionFunctionOutput, &UMaterialExpressionFunctionOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFunctionOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
