// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/HotSpots/AIHotSpotManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHotSpotManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIHotSpotManager::StaticRegisterNativesUAIHotSpotManager()
	{
	}
	UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister()
	{
		return UAIHotSpotManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIHotSpotManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HotSpots/AIHotSpotManager.h" },
				{ "ModuleRelativePath", "Classes/HotSpots/AIHotSpotManager.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIHotSpotManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIHotSpotManager::StaticClass,
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
	IMPLEMENT_CLASS(UAIHotSpotManager, 697867184);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIHotSpotManager(Z_Construct_UClass_UAIHotSpotManager, &UAIHotSpotManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIHotSpotManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIHotSpotManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
