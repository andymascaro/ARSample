// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/RVOAvoidanceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRVOAvoidanceInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URVOAvoidanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void URVOAvoidanceInterface::StaticRegisterNativesURVOAvoidanceInterface()
	{
	}
	UClass* Z_Construct_UClass_URVOAvoidanceInterface_NoRegister()
	{
		return URVOAvoidanceInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_URVOAvoidanceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Public/AI/RVOAvoidanceInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IRVOAvoidanceInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URVOAvoidanceInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
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
	IMPLEMENT_CLASS(URVOAvoidanceInterface, 657084286);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URVOAvoidanceInterface(Z_Construct_UClass_URVOAvoidanceInterface, &URVOAvoidanceInterface::StaticClass, TEXT("/Script/Engine"), TEXT("URVOAvoidanceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URVOAvoidanceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
