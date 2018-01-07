// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseConfig_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Team() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Team_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Team::StaticRegisterNativesUAISenseConfig_Team()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Team_NoRegister()
	{
		return UAISenseConfig_Team::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "AI Team sense config" },
				{ "IncludePath", "Perception/AISenseConfig_Team.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Team.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseConfig_Team>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseConfig_Team::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UAISenseConfig_Team, 3766357599);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Team(Z_Construct_UClass_UAISenseConfig_Team, &UAISenseConfig_Team::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
