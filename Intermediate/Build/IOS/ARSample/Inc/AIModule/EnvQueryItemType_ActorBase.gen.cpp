// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryItemType_ActorBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryItemType_ActorBase::StaticRegisterNativesUEnvQueryItemType_ActorBase()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase_NoRegister()
	{
		return UEnvQueryItemType_ActorBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryItemType_ActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Items/EnvQueryItemType_ActorBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryItemType_ActorBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryItemType_ActorBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UEnvQueryItemType_ActorBase, 3177310596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryItemType_ActorBase(Z_Construct_UClass_UEnvQueryItemType_ActorBase, &UEnvQueryItemType_ActorBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryItemType_ActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryItemType_ActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
