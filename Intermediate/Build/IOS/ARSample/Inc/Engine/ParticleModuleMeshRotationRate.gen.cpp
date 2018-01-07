// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationRateBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotationRate::StaticRegisterNativesUParticleModuleMeshRotationRate()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate_NoRegister()
	{
		return UParticleModuleMeshRotationRate::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotationRate()
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
				{ "DisplayName", "Init Mesh Rotation Rate" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationRate_MetaData[] = {
				{ "Category", "Rotation" },
				{ "ModuleRelativePath", "Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h" },
				{ "ToolTip", "Initial rotation rate, in rotations per second.\nThe value is retrieved using the EmitterTime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRotationRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotationRate, StartRotationRate), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_StartRotationRate_MetaData, ARRAY_COUNT(NewProp_StartRotationRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartRotationRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleMeshRotationRate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleMeshRotationRate::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleMeshRotationRate, 847388001);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotationRate(Z_Construct_UClass_UParticleModuleMeshRotationRate, &UParticleModuleMeshRotationRate::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotationRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotationRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
