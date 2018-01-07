// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRateMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRateMultiplyLife::StaticRegisterNativesUParticleModuleMeshRotationRateMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife_NoRegister()
	{
		return UParticleModuleMeshRotationRateMultiplyLife::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife()
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
				{ "DisplayName", "Mesh Rotation Rate * Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRateMultiplyLife.h" },
				{ "ToolTip", "The scale factor that should be applied to the rotation rate.\nThe value is retrieved using the RelativeTime of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier = { UE4CodeGen_Private::EPropertyClass::Struct, "LifeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(NewProp_LifeMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LifeMultiplier,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleMeshRotationRateMultiplyLife>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleMeshRotationRateMultiplyLife::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801080u,
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
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRateMultiplyLife, 4103343126);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRateMultiplyLife(Z_Construct_UClass_UParticleModuleMeshRotationRateMultiplyLife, &UParticleModuleMeshRotationRateMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRateMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRateMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
