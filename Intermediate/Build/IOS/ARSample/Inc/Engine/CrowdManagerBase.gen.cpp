// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/CrowdManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManagerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCrowdManagerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCrowdManagerBase::StaticRegisterNativesUCrowdManagerBase()
	{
	}
	UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister()
	{
		return UCrowdManagerBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UCrowdManagerBase()
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
				{ "IncludePath", "AI/Navigation/CrowdManagerBase.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/CrowdManagerBase.h" },
				{ "ToolTip", "Base class for Crowd Managers. If you want to create a custom crowd manager\n   implement a class extending this one and set UNavigationSystem::CrowdManagerClass\n   to point at your class" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCrowdManagerBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCrowdManagerBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100089u,
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
	IMPLEMENT_CLASS(UCrowdManagerBase, 3176157185);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdManagerBase(Z_Construct_UClass_UCrowdManagerBase, &UCrowdManagerBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCrowdManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
