// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AIResources.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResources() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic();
// End Cross Module References
	void UAIResource_Movement::StaticRegisterNativesUAIResource_Movement()
	{
	}
	UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister()
	{
		return UAIResource_Movement::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIResource_Movement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "AI Movement" },
				{ "IncludePath", "AIResources.h" },
				{ "ModuleRelativePath", "Classes/AIResources.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIResource_Movement>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIResource_Movement::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
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
	IMPLEMENT_CLASS(UAIResource_Movement, 3864060664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResource_Movement(Z_Construct_UClass_UAIResource_Movement, &UAIResource_Movement::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResource_Movement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Movement);
	void UAIResource_Logic::StaticRegisterNativesUAIResource_Logic()
	{
	}
	UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister()
	{
		return UAIResource_Logic::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIResource_Logic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "AI Logic" },
				{ "IncludePath", "AIResources.h" },
				{ "ModuleRelativePath", "Classes/AIResources.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIResource_Logic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIResource_Logic::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
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
	IMPLEMENT_CLASS(UAIResource_Logic, 3120745829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResource_Logic(Z_Construct_UClass_UAIResource_Logic, &UAIResource_Logic::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResource_Logic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Logic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
