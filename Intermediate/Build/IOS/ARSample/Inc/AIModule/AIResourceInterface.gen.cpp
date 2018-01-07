// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AIResourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResourceInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIResourceInterface::StaticRegisterNativesUAIResourceInterface()
	{
	}
	UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister()
	{
		return UAIResourceInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIResourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Classes/AIResourceInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IAIResourceInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIResourceInterface::StaticClass,
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
	IMPLEMENT_CLASS(UAIResourceInterface, 4142380817);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResourceInterface(Z_Construct_UClass_UAIResourceInterface, &UAIResourceInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResourceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
