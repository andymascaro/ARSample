// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TriggerSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerSphere::StaticRegisterNativesATriggerSphere()
	{
	}
	UClass* Z_Construct_UClass_ATriggerSphere_NoRegister()
	{
		return ATriggerSphere::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerSphere()
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
				{ "IncludePath", "Engine/TriggerSphere.h" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerSphere.h" },
				{ "ToolTip", "A sphere shaped trigger, used to generate overlap events in the level" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATriggerSphere>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATriggerSphere::StaticClass,
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
	IMPLEMENT_CLASS(ATriggerSphere, 363701858);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerSphere(Z_Construct_UClass_ATriggerSphere, &ATriggerSphere::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
