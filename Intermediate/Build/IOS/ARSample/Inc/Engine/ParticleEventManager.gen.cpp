// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEventManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AParticleEventManager::StaticRegisterNativesAParticleEventManager()
	{
	}
	UClass* Z_Construct_UClass_AParticleEventManager_NoRegister()
	{
		return AParticleEventManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AParticleEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Particles/ParticleEventManager.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEventManager.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AParticleEventManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AParticleEventManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800280u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticleEventManager, 1097036042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticleEventManager(Z_Construct_UClass_AParticleEventManager, &AParticleEventManager::StaticClass, TEXT("/Script/Engine"), TEXT("AParticleEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
