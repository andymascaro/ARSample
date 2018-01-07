// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetClothingSimulation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_ResetClothingSimulation::StaticRegisterNativesUAnimNotify_ResetClothingSimulation()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister()
	{
		return UAnimNotify_ResetClothingSimulation::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotify,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Reset Clothing Simulation" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify_ResetClothingSimulation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify_ResetClothingSimulation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00112080u,
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
	IMPLEMENT_CLASS(UAnimNotify_ResetClothingSimulation, 1293467378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_ResetClothingSimulation(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation, &UAnimNotify_ResetClothingSimulation::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_ResetClothingSimulation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResetClothingSimulation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
