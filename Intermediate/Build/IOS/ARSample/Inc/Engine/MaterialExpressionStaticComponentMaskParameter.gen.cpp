// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticComponentMaskParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionStaticComponentMaskParameter::StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister()
	{
		return UMaterialExpressionStaticComponentMaskParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionStaticComponentMaskParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultA_MetaData[] = {
				{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
			auto NewProp_DefaultA_SetBit = [](void* Obj){ ((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultA = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultA = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticComponentMaskParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultA_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultA_MetaData, ARRAY_COUNT(NewProp_DefaultA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultB_MetaData[] = {
				{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
			auto NewProp_DefaultB_SetBit = [](void* Obj){ ((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultB = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticComponentMaskParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultB_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultB_MetaData, ARRAY_COUNT(NewProp_DefaultB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultG_MetaData[] = {
				{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
			auto NewProp_DefaultG_SetBit = [](void* Obj){ ((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultG = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultG = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticComponentMaskParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultG_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultG_MetaData, ARRAY_COUNT(NewProp_DefaultG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultR_MetaData[] = {
				{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
			auto NewProp_DefaultR_SetBit = [](void* Obj){ ((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultR = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticComponentMaskParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultR_MetaData, ARRAY_COUNT(NewProp_DefaultR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticComponentMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionStaticComponentMaskParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionStaticComponentMaskParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionStaticComponentMaskParameter, 2142386117);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticComponentMaskParameter(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter, &UMaterialExpressionStaticComponentMaskParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticComponentMaskParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticComponentMaskParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
