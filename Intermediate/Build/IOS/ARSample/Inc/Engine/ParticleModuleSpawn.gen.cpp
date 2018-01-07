// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Spawn/ParticleModuleSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
// End Cross Module References
	void UParticleModuleSpawn::StaticRegisterNativesUParticleModuleSpawn()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister()
	{
		return UParticleModuleSpawn::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Spawn" },
				{ "HideCategories", "Object ParticleModuleSpawnBase Object Object" },
				{ "IncludePath", "Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyGlobalSpawnRateScale_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale" },
			};
#endif
			auto NewProp_bApplyGlobalSpawnRateScale_SetBit = [](void* Obj){ ((UParticleModuleSpawn*)Obj)->bApplyGlobalSpawnRateScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyGlobalSpawnRateScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyGlobalSpawnRateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bApplyGlobalSpawnRateScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bApplyGlobalSpawnRateScale_MetaData, ARRAY_COUNT(NewProp_bApplyGlobalSpawnRateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstScale_MetaData[] = {
				{ "Category", "Burst" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "Scale all burst entries by this amount." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstScale = { UE4CodeGen_Private::EPropertyClass::Struct, "BurstScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawn, BurstScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_BurstScale_MetaData, ARRAY_COUNT(NewProp_BurstScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[] = {
				{ "Category", "Burst" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "The array of burst entries." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BurstList = { UE4CodeGen_Private::EPropertyClass::Array, "BurstList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002000009, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawn, BurstList), METADATA_PARAMS(NewProp_BurstList_MetaData, ARRAY_COUNT(NewProp_BurstList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BurstList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[] = {
				{ "Category", "Burst" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "The method to utilize when burst-emitting particles." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ParticleBurstMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawn, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(NewProp_ParticleBurstMethod_MetaData, ARRAY_COUNT(NewProp_ParticleBurstMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "The scalar to apply to the rate." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateScale = { UE4CodeGen_Private::EPropertyClass::Struct, "RateScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawn, RateScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_RateScale_MetaData, ARRAY_COUNT(NewProp_RateScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
				{ "ToolTip", "The rate at which to spawn particles." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rate = { UE4CodeGen_Private::EPropertyClass::Struct, "Rate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawn, Rate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Rate_MetaData, ARRAY_COUNT(NewProp_Rate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bApplyGlobalSpawnRateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleBurstMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RateScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSpawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSpawn::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSpawn, 943844627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawn(Z_Construct_UClass_UParticleModuleSpawn, &UParticleModuleSpawn::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
