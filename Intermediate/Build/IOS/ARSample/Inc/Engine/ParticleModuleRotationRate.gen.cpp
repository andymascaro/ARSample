// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/RotationRate/ParticleModuleRotationRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleRotationRate::StaticRegisterNativesUParticleModuleRotationRate()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationRate_NoRegister()
	{
		return UParticleModuleRotationRate::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleRotationRate()
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
				{ "DisplayName", "Initial Rotation Rate" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/RotationRate/ParticleModuleRotationRate.h" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleRotationRate.h" },
				{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRotationRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_StartRotationRate_MetaData, ARRAY_COUNT(NewProp_StartRotationRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRotationRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleRotationRate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleRotationRate::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleRotationRate, 673353692);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRotationRate(Z_Construct_UClass_UParticleModuleRotationRate, &UParticleModuleRotationRate::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRotationRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRotationRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
