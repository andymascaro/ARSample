// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphericalParticleOpacity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSphericalParticleOpacity::StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister()
	{
		return UMaterialExpressionSphericalParticleOpacity::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity()
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
				{ "IncludePath", "Materials/MaterialExpressionSphericalParticleOpacity.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantDensity_MetaData[] = {
				{ "Category", "MaterialExpressionSphericalParticleOpacity" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
				{ "OverridingInputProperty", "Density" },
				{ "ToolTip", "Constant density of the particle sphere.  Will be overridden if Density is connected." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantDensity = { UE4CodeGen_Private::EPropertyClass::Float, "ConstantDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, ConstantDensity), METADATA_PARAMS(NewProp_ConstantDensity_MetaData, ARRAY_COUNT(NewProp_ConstantDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstantDensity' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Struct, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, Density), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstantDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Density,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSphericalParticleOpacity>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSphericalParticleOpacity::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionSphericalParticleOpacity, 3151612336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSphericalParticleOpacity(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity, &UMaterialExpressionSphericalParticleOpacity::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSphericalParticleOpacity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphericalParticleOpacity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
