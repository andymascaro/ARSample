// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionAtmosphericFogColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericFogColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionAtmosphericFogColor::StaticRegisterNativesUMaterialExpressionAtmosphericFogColor()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister()
	{
		return UMaterialExpressionAtmosphericFogColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor()
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
				{ "IncludePath", "Materials/MaterialExpressionAtmosphericFogColor.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAtmosphericFogColor, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_WorldPosition_MetaData, ARRAY_COUNT(NewProp_WorldPosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionAtmosphericFogColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionAtmosphericFogColor::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionAtmosphericFogColor, 957498290);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAtmosphericFogColor(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor, &UMaterialExpressionAtmosphericFogColor::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAtmosphericFogColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericFogColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif