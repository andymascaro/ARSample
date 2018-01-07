// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/PlayerStartPIE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStartPIE() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlayerStartPIE::StaticRegisterNativesAPlayerStartPIE()
	{
	}
	UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister()
	{
		return APlayerStartPIE::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerStartPIE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerStart,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Lighting LightColor Force" },
				{ "IncludePath", "Engine/PlayerStartPIE.h" },
				{ "ModuleRelativePath", "Classes/Engine/PlayerStartPIE.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerStartPIE>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerStartPIE::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880280u,
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
	IMPLEMENT_CLASS(APlayerStartPIE, 2228208425);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerStartPIE(Z_Construct_UClass_APlayerStartPIE, &APlayerStartPIE::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerStartPIE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStartPIE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
