// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionArctangent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArctangent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArctangent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionArctangent::StaticRegisterNativesUMaterialExpressionArctangent()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent_NoRegister()
	{
		return UMaterialExpressionArctangent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArctangent()
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
				{ "IncludePath", "Materials/MaterialExpressionArctangent.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArctangent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionArctangent, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionArctangent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionArctangent::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionArctangent, 3758942940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionArctangent(Z_Construct_UClass_UMaterialExpressionArctangent, &UMaterialExpressionArctangent::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionArctangent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArctangent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
