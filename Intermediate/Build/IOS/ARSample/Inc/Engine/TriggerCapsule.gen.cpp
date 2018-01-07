// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TriggerCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCapsule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerCapsule::StaticRegisterNativesATriggerCapsule()
	{
	}
	UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister()
	{
		return ATriggerCapsule::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATriggerBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/TriggerCapsule.h" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerCapsule.h" },
				{ "ToolTip", "A capsule shaped trigger, used to generate overlap events in the level" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATriggerCapsule>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATriggerCapsule::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ATriggerCapsule, 3334129033);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerCapsule(Z_Construct_UClass_ATriggerCapsule, &ATriggerCapsule::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
