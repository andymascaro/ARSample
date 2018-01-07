// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelStreamingPersistent.h"
#include "Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingPersistent::StaticRegisterNativesULevelStreamingPersistent()
	{
	}
	UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister()
	{
		return ULevelStreamingPersistent::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelStreamingPersistent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/LevelStreamingPersistent.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingPersistent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelStreamingPersistent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelStreamingPersistent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00801088u,
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
	IMPLEMENT_CLASS(ULevelStreamingPersistent, 3440833705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingPersistent(Z_Construct_UClass_ULevelStreamingPersistent, &ULevelStreamingPersistent::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreamingPersistent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
