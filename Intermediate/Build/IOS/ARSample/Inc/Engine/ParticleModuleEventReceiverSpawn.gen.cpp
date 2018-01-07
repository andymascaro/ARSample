// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleEventReceiverSpawn::StaticRegisterNativesUParticleModuleEventReceiverSpawn()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister()
	{
		return UParticleModuleEventReceiverSpawn::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "EventReceiver Spawn" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBanPhysicalMaterials_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\nWhen false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others." },
			};
#endif
			auto NewProp_bBanPhysicalMaterials_SetBit = [](void* Obj){ ((UParticleModuleEventReceiverSpawn*)Obj)->bBanPhysicalMaterials = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanPhysicalMaterials = { UE4CodeGen_Private::EPropertyClass::Bool, "bBanPhysicalMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleEventReceiverSpawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBanPhysicalMaterials_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBanPhysicalMaterials_MetaData, ARRAY_COUNT(NewProp_bBanPhysicalMaterials_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[] = {
				{ "Category", "Collision" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, PhysicalMaterials), METADATA_PARAMS(NewProp_PhysicalMaterials_MetaData, ARRAY_COUNT(NewProp_PhysicalMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicalMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "If bInheritVelocity is true, scale the velocity with this." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InheritVelocityScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InheritVelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, InheritVelocityScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritVelocity_MetaData[] = {
				{ "Category", "Velocity" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "If true, use the velocity of the dying particle as the start velocity of\nthe spawned particle." },
			};
#endif
			auto NewProp_bInheritVelocity_SetBit = [](void* Obj){ ((UParticleModuleEventReceiverSpawn*)Obj)->bInheritVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleEventReceiverSpawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritVelocity_MetaData, ARRAY_COUNT(NewProp_bInheritVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePSysLocation_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "If true, use the location of the particle system component for spawning.\nif false (default), use the location of the particle event." },
			};
#endif
			auto NewProp_bUsePSysLocation_SetBit = [](void* Obj){ ((UParticleModuleEventReceiverSpawn*)Obj)->bUsePSysLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePSysLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePSysLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleEventReceiverSpawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePSysLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePSysLocation_MetaData, ARRAY_COUNT(NewProp_bUsePSysLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseParticleTime_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "For Death-based event receiving, if this is true, it indicates that the\nParticleTime of the event should be used to look-up the SpawnCount.\nOtherwise (and in all other events received), use the emitter time of\nthe event." },
			};
#endif
			auto NewProp_bUseParticleTime_SetBit = [](void* Obj){ ((UParticleModuleEventReceiverSpawn*)Obj)->bUseParticleTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseParticleTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseParticleTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleEventReceiverSpawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseParticleTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseParticleTime_MetaData, ARRAY_COUNT(NewProp_bUseParticleTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
				{ "ToolTip", "The number of particles to spawn." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnCount = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, SpawnCount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SpawnCount_MetaData, ARRAY_COUNT(NewProp_SpawnCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBanPhysicalMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalMaterials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritVelocityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePSysLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseParticleTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnCount,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventReceiverSpawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventReceiverSpawn::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleEventReceiverSpawn, 1431979357);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverSpawn(Z_Construct_UClass_UParticleModuleEventReceiverSpawn, &UParticleModuleEventReceiverSpawn::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
