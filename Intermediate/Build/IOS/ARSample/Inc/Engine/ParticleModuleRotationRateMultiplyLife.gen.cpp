// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRateMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleRotationRateMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife_NoRegister()
	{
		return UParticleModuleRotationRateMultiplyLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationRateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Rotation Rate * Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h" },
				{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "LifeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(NewProp_LifeMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LifeMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleRotationRateMultiplyLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleRotationRateMultiplyLife::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleRotationRateMultiplyLife, 3877458405);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotationRateMultiplyLife(Z_Construct_UClass_UParticleModuleRotationRateMultiplyLife, &UParticleModuleRotationRateMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotationRateMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRateMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
