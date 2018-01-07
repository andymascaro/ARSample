// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverKillParticles() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventReceiverKillParticles::StaticRegisterNativesUParticleModuleEventReceiverKillParticles()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister()
	{
		return UParticleModuleEventReceiverKillParticles::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles()
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
				{ "DisplayName", "EventReceiver Kill All" },
				{ "HideCategories", "Object Object Object Object" },
				{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopSpawning_MetaData[] = {
				{ "Category", "ParticleModuleEventReceiverKillParticles" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
				{ "ToolTip", "If true, stop this emitter from spawning as well." },
			};
#endif
			auto NewProp_bStopSpawning_SetBit = [](void* Obj){ ((UParticleModuleEventReceiverKillParticles*)Obj)->bStopSpawning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopSpawning = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopSpawning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleEventReceiverKillParticles), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopSpawning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopSpawning_MetaData, ARRAY_COUNT(NewProp_bStopSpawning_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopSpawning,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventReceiverKillParticles>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventReceiverKillParticles::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(UParticleModuleEventReceiverKillParticles, 3662977089);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverKillParticles(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles, &UParticleModuleEventReceiverKillParticles::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverKillParticles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverKillParticles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
