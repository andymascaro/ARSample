// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseConfig_Prediction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Prediction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Prediction();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Prediction::StaticRegisterNativesUAISenseConfig_Prediction()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Prediction_NoRegister()
	{
		return UAISenseConfig_Prediction::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Prediction()
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
				{ "DisplayName", "AI Prediction sense config" },
				{ "IncludePath", "Perception/AISenseConfig_Prediction.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Prediction.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseConfig_Prediction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseConfig_Prediction::StaticClass,
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
	IMPLEMENT_CLASS(UAISenseConfig_Prediction, 2303914322);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Prediction(Z_Construct_UClass_UAISenseConfig_Prediction, &UAISenseConfig_Prediction::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Prediction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Prediction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
