// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionMaterialProxyReplace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialProxyReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialProxyReplace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialProxyReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionMaterialProxyReplace::StaticRegisterNativesUMaterialExpressionMaterialProxyReplace()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialProxyReplace_NoRegister()
	{
		return UMaterialExpressionMaterialProxyReplace::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialProxyReplace()
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
				{ "IncludePath", "Materials/MaterialExpressionMaterialProxyReplace.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialProxyReplace.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialProxy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialProxyReplace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialProxy = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialProxy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialProxyReplace, MaterialProxy), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_MaterialProxy_MetaData, ARRAY_COUNT(NewProp_MaterialProxy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Realtime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialProxyReplace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Realtime = { UE4CodeGen_Private::EPropertyClass::Struct, "Realtime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialProxyReplace, Realtime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Realtime_MetaData, ARRAY_COUNT(NewProp_Realtime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialProxy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Realtime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionMaterialProxyReplace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionMaterialProxyReplace::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionMaterialProxyReplace, 1238104960);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialProxyReplace(Z_Construct_UClass_UMaterialExpressionMaterialProxyReplace, &UMaterialExpressionMaterialProxyReplace::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialProxyReplace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialProxyReplace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
