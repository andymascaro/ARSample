// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleLODLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleLODLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
// End Cross Module References
	void UParticleLODLevel::StaticRegisterNativesUParticleLODLevel()
	{
	}
	UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister()
	{
		return UParticleLODLevel::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleLODLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Particles/ParticleLODLevel.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles = { UE4CodeGen_Private::EPropertyClass::Int, "PeakActiveParticles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, PeakActiveParticles), METADATA_PARAMS(NewProp_PeakActiveParticles_MetaData, ARRAY_COUNT(NewProp_PeakActiveParticles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
			};
#endif
			auto NewProp_ConvertedModules_SetBit = [](void* Obj){ ((UParticleLODLevel*)Obj)->ConvertedModules = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules = { UE4CodeGen_Private::EPropertyClass::Bool, "ConvertedModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleLODLevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ConvertedModules_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ConvertedModules_MetaData, ARRAY_COUNT(NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceiverModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "Event receiver modules only!" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceiverModules = { UE4CodeGen_Private::EPropertyClass::Array, "EventReceiverModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, EventReceiverModules), METADATA_PARAMS(NewProp_EventReceiverModules_MetaData, ARRAY_COUNT(NewProp_EventReceiverModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventReceiverModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EventReceiverModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "OrbitModules\n    These are used to do offsets of the sprite from the particle location." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrbitModules = { UE4CodeGen_Private::EPropertyClass::Array, "OrbitModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, OrbitModules), METADATA_PARAMS(NewProp_OrbitModules_MetaData, ARRAY_COUNT(NewProp_OrbitModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrbitModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OrbitModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModuleOrbit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "UpdateModules - These are called when particles are updated." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdateModules = { UE4CodeGen_Private::EPropertyClass::Array, "UpdateModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, UpdateModules), METADATA_PARAMS(NewProp_UpdateModules_MetaData, ARRAY_COUNT(NewProp_UpdateModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UpdateModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "SpawnModules - These are called when particles are spawned." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnModules = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawnModules), METADATA_PARAMS(NewProp_SpawnModules_MetaData, ARRAY_COUNT(NewProp_SpawnModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningModules_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "SpawningModules - These are called to determine how many particles to spawn." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawningModules = { UE4CodeGen_Private::EPropertyClass::Array, "SpawningModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000202000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawningModules), METADATA_PARAMS(NewProp_SpawningModules_MetaData, ARRAY_COUNT(NewProp_SpawningModules_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningModules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawningModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGenerator_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "The optional EventGenerator module." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventGenerator = { UE4CodeGen_Private::EPropertyClass::Object, "EventGenerator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000008, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, EventGenerator), Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister, METADATA_PARAMS(NewProp_EventGenerator_MetaData, ARRAY_COUNT(NewProp_EventGenerator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "The SpawnRate/Burst module - required by all emitters." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnModule = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000008, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(NewProp_SpawnModule_MetaData, ARRAY_COUNT(NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeDataModule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "Module<SINGULAR> used for emitter type \"extension\"." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TypeDataModule = { UE4CodeGen_Private::EPropertyClass::Object, "TypeDataModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000008, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, TypeDataModule), Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister, METADATA_PARAMS(NewProp_TypeDataModule_MetaData, ARRAY_COUNT(NewProp_TypeDataModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modules = { UE4CodeGen_Private::EPropertyClass::Array, "Modules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, Modules), METADATA_PARAMS(NewProp_Modules_MetaData, ARRAY_COUNT(NewProp_Modules_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modules_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modules_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Modules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(NewProp_Modules_Inner_MetaData, ARRAY_COUNT(NewProp_Modules_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "The required module for this LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredModule = { UE4CodeGen_Private::EPropertyClass::Object, "RequiredModule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0012000000080008, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(NewProp_RequiredModule_MetaData, ARRAY_COUNT(NewProp_RequiredModule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "True if the LOD level is enabled, meaning it should be updated and rendered." },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((UParticleLODLevel*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleLODLevel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
				{ "ToolTip", "The index value of the LOD level" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Int, "Level", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleLODLevel, Level), METADATA_PARAMS(NewProp_Level_MetaData, ARRAY_COUNT(NewProp_Level_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeakActiveParticles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConvertedModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceiverModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceiverModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrbitModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawningModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawningModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventGenerator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TypeDataModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Modules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Modules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredModule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Level,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleLODLevel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleLODLevel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00883080u,
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
	IMPLEMENT_CLASS(UParticleLODLevel, 882325393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleLODLevel(Z_Construct_UClass_UParticleLODLevel, &UParticleLODLevel::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleLODLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleLODLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
