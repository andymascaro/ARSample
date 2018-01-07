// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_Actor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_Actor();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryItemType_Actor::StaticRegisterNativesUEnvQueryItemType_Actor()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryItemType_Actor_NoRegister()
	{
		return UEnvQueryItemType_Actor::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryItemType_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_ActorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_Actor.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryItemType_Actor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryItemType_Actor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UEnvQueryItemType_Actor, 2021418971);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryItemType_Actor(Z_Construct_UClass_UEnvQueryItemType_Actor, &UEnvQueryItemType_Actor::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryItemType_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
