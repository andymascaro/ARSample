// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISenseConfig_Blueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
// End Cross Module References
	void UAISenseConfig_Blueprint::StaticRegisterNativesUAISenseConfig_Blueprint()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Blueprint_NoRegister()
	{
		return UAISenseConfig_Blueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Blueprint()
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "Perception/AISenseConfig_Blueprint.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Blueprint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation = { UE4CodeGen_Private::EPropertyClass::Class, "Implementation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Blueprint, Implementation), Z_Construct_UClass_UAISense_Blueprint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_Implementation_MetaData, ARRAY_COUNT(NewProp_Implementation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Implementation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISenseConfig_Blueprint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISenseConfig_Blueprint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101085u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Blueprint, 3990770422);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Blueprint(Z_Construct_UClass_UAISenseConfig_Blueprint, &UAISenseConfig_Blueprint::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Blueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Blueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
