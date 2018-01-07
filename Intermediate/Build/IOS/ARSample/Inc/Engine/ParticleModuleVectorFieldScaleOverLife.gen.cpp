// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldScaleOverLife::StaticRegisterNativesUParticleModuleVectorFieldScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife_NoRegister()
	{
		return UParticleModuleVectorFieldScaleOverLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "VF Scale/Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLifeRaw_MetaData[] = {
				{ "Category", "VectorField" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
				{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleOverLifeRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorFieldScaleOverLifeRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_VectorFieldScaleOverLifeRaw_MetaData, ARRAY_COUNT(NewProp_VectorFieldScaleOverLifeRaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleOverLife_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h" },
				{ "ToolTip", "Per-particle vector field scale. Evaluated using particle relative time." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldScaleOverLife = { UE4CodeGen_Private::EPropertyClass::Object, "VectorFieldScaleOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(NewProp_VectorFieldScaleOverLife_MetaData, ARRAY_COUNT(NewProp_VectorFieldScaleOverLife_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldScaleOverLifeRaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorFieldScaleOverLife,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleVectorFieldScaleOverLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleVectorFieldScaleOverLife::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleVectorFieldScaleOverLife, 208230428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldScaleOverLife(Z_Construct_UClass_UParticleModuleVectorFieldScaleOverLife, &UParticleModuleVectorFieldScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
