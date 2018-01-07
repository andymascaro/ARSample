// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventSendToGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventSendToGame::StaticRegisterNativesUParticleModuleEventSendToGame()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister()
	{
		return UParticleModuleEventSendToGame::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventSendToGame()
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
				{ "IncludePath", "Particles/Event/ParticleModuleEventSendToGame.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventSendToGame.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventSendToGame>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventSendToGame::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventSendToGame, 1049168018);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventSendToGame(Z_Construct_UClass_UParticleModuleEventSendToGame, &UParticleModuleEventSendToGame::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventSendToGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventSendToGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
