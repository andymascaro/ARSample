// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnPerUnit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleSpawnPerUnit::StaticRegisterNativesUParticleModuleSpawnPerUnit()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister()
	{
		return UParticleModuleSpawnPerUnit::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit()
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
				{ "DisplayName", "Spawn PerUnit" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongZ_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "If true, ignore the Z-component of the movement" },
			};
#endif
			auto NewProp_bIgnoreMovementAlongZ_SetBit = [](void* Obj){ ((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreMovementAlongZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnPerUnit), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreMovementAlongZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreMovementAlongZ_MetaData, ARRAY_COUNT(NewProp_bIgnoreMovementAlongZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongY_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "If true, ignore the Y-component of the movement" },
			};
#endif
			auto NewProp_bIgnoreMovementAlongY_SetBit = [](void* Obj){ ((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongY = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreMovementAlongY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnPerUnit), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreMovementAlongY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreMovementAlongY_MetaData, ARRAY_COUNT(NewProp_bIgnoreMovementAlongY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongX_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "If true, ignore the X-component of the movement" },
			};
#endif
			auto NewProp_bIgnoreMovementAlongX_SetBit = [](void* Obj){ ((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongX = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreMovementAlongX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnPerUnit), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreMovementAlongX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreMovementAlongX_MetaData, ARRAY_COUNT(NewProp_bIgnoreMovementAlongX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDistance_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "The maximum valid movement for a single frame.\nIf 0.0, then the check is not performed.\nCurrently, if the distance moved between frames is greater than this\nthen NO particles will be spawned.\nThis is primiarily intended to cover cases where the PSystem is\nattached to teleporting objects." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFrameDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFrameDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MaxFrameDistance), METADATA_PARAMS(NewProp_MaxFrameDistance_MetaData, ARRAY_COUNT(NewProp_MaxFrameDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTolerance_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag.\nIe, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "MovementTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MovementTolerance), METADATA_PARAMS(NewProp_MovementTolerance_MetaData, ARRAY_COUNT(NewProp_MovementTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSpawnRateWhenMoving_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "If true, process the default spawn rate when not moving...\nWhen not moving, skip the default spawn rate.\nIf false, return the bProcessSpawnRate setting." },
			};
#endif
			auto NewProp_bIgnoreSpawnRateWhenMoving_SetBit = [](void* Obj){ ((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreSpawnRateWhenMoving = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSpawnRateWhenMoving = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSpawnRateWhenMoving", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnPerUnit), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreSpawnRateWhenMoving_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreSpawnRateWhenMoving_MetaData, ARRAY_COUNT(NewProp_bIgnoreSpawnRateWhenMoving_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnit_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "The amount to spawn per meter distribution.\nThe value is retrieved using the EmitterTime." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPerUnit = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnPerUnit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, SpawnPerUnit), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SpawnPerUnit_MetaData, ARRAY_COUNT(NewProp_SpawnPerUnit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitScalar_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
				{ "ToolTip", "The scalar to apply to the distance traveled.\nThe value from SpawnPerUnit is divided by this value to give the actual\nnumber of particles per unit." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnitScalar = { UE4CodeGen_Private::EPropertyClass::Float, "UnitScalar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, UnitScalar), METADATA_PARAMS(NewProp_UnitScalar_MetaData, ARRAY_COUNT(NewProp_UnitScalar_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreMovementAlongZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreMovementAlongY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreMovementAlongX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFrameDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreSpawnRateWhenMoving,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnPerUnit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnitScalar,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSpawnPerUnit>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSpawnPerUnit::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleSpawnPerUnit, 436410586);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawnPerUnit(Z_Construct_UClass_UParticleModuleSpawnPerUnit, &UParticleModuleSpawnPerUnit::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawnPerUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnPerUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
