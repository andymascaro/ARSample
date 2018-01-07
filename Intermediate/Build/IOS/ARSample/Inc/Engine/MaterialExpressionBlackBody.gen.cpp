// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionBlackBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlackBody() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionBlackBody::StaticRegisterNativesUMaterialExpressionBlackBody()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister()
	{
		return UMaterialExpressionBlackBody::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlackBody()
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
				{ "IncludePath", "Materials/MaterialExpressionBlackBody.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
				{ "ToolTip", "Temperature" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Temp = { UE4CodeGen_Private::EPropertyClass::Struct, "Temp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionBlackBody, Temp), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Temp_MetaData, ARRAY_COUNT(NewProp_Temp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Temp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionBlackBody>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionBlackBody::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionBlackBody, 3866717199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBlackBody(Z_Construct_UClass_UMaterialExpressionBlackBody, &UMaterialExpressionBlackBody::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBlackBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlackBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
