// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionStaticBoolParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBoolParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStaticBoolParameter::StaticRegisterNativesUMaterialExpressionStaticBoolParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister()
	{
		return UMaterialExpressionStaticBoolParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter()
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
				{ "IncludePath", "Materials/MaterialExpressionStaticBoolParameter.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
				{ "Category", "MaterialExpressionStaticBoolParameter" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
			};
#endif
			auto NewProp_DefaultValue_SetBit = [](void* Obj){ ((UMaterialExpressionStaticBoolParameter*)Obj)->DefaultValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionStaticBoolParameter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DefaultValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DefaultValue_MetaData, ARRAY_COUNT(NewProp_DefaultValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionStaticBoolParameter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionStaticBoolParameter::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionStaticBoolParameter, 2986869258);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticBoolParameter(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter, &UMaterialExpressionStaticBoolParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticBoolParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBoolParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
