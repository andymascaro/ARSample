// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionLightmassReplace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLightmassReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLightmassReplace::StaticRegisterNativesUMaterialExpressionLightmassReplace()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister()
	{
		return UMaterialExpressionLightmassReplace::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace()
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
				{ "IncludePath", "Materials/MaterialExpressionLightmassReplace.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lightmass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lightmass = { UE4CodeGen_Private::EPropertyClass::Struct, "Lightmass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Lightmass), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Lightmass_MetaData, ARRAY_COUNT(NewProp_Lightmass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Realtime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Realtime = { UE4CodeGen_Private::EPropertyClass::Struct, "Realtime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Realtime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Realtime_MetaData, ARRAY_COUNT(NewProp_Realtime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lightmass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Realtime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionLightmassReplace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionLightmassReplace::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionLightmassReplace, 623378306);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLightmassReplace(Z_Construct_UClass_UMaterialExpressionLightmassReplace, &UMaterialExpressionLightmassReplace::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionLightmassReplace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLightmassReplace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
