// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationOverLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleAccelerationOverLifetime::StaticRegisterNativesUParticleModuleAccelerationOverLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime_NoRegister()
	{
		return UParticleModuleAccelerationOverLifetime::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationOverLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Acceleration/Life" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelOverLife_MetaData[] = {
				{ "Category", "Acceleration" },
				{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h" },
				{ "ToolTip", "The acceleration of the particle over its lifetime.\nValue is obtained using the RelativeTime of the partice.\nThe current and base velocity values of the particle\nare then updated using the formula\n        velocity += acceleration* DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "AccelOverLife", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationOverLifetime, AccelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_AccelOverLife_MetaData, ARRAY_COUNT(NewProp_AccelOverLife_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AccelOverLife,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleAccelerationOverLifetime>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleAccelerationOverLifetime::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleAccelerationOverLifetime, 4013124913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationOverLifetime(Z_Construct_UClass_UParticleModuleAccelerationOverLifetime, &UParticleModuleAccelerationOverLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationOverLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationOverLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
