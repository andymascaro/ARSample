// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavLinkTrivial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkTrivial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkTrivial();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial()
	{
	}
	UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister()
	{
		return UNavLinkTrivial::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavLinkTrivial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavLinkDefinition,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavLinkTrivial.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkTrivial.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavLinkTrivial>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavLinkTrivial::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UNavLinkTrivial, 2435247393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLinkTrivial(Z_Construct_UClass_UNavLinkTrivial, &UNavLinkTrivial::StaticClass, TEXT("/Script/Engine"), TEXT("UNavLinkTrivial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkTrivial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
