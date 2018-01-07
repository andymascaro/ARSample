// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSpawnBase::StaticRegisterNativesUParticleModuleSpawnBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister()
	{
		return UParticleModuleSpawnBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModule,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Spawn" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnBase.h" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessBurstList_MetaData[] = {
				{ "Category", "Burst" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
				{ "ToolTip", "If true, the BurstList of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule BurstList." },
			};
#endif
			auto NewProp_bProcessBurstList_SetBit = [](void* Obj){ ((UParticleModuleSpawnBase*)Obj)->bProcessBurstList = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessBurstList = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessBurstList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProcessBurstList_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProcessBurstList_MetaData, ARRAY_COUNT(NewProp_bProcessBurstList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessSpawnRate_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
				{ "ToolTip", "If true, the SpawnRate of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule SpawnRate." },
			};
#endif
			auto NewProp_bProcessSpawnRate_SetBit = [](void* Obj){ ((UParticleModuleSpawnBase*)Obj)->bProcessSpawnRate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessSpawnRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessSpawnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProcessSpawnRate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bProcessSpawnRate_MetaData, ARRAY_COUNT(NewProp_bProcessSpawnRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProcessBurstList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProcessSpawnRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleSpawnBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleSpawnBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001081u,
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
	IMPLEMENT_CLASS(UParticleModuleSpawnBase, 1542422469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawnBase(Z_Construct_UClass_UParticleModuleSpawnBase, &UParticleModuleSpawnBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
