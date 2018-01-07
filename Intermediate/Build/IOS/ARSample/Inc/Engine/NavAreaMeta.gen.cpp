// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavAreas/NavAreaMeta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaMeta() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaMeta();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavAreaMeta::StaticRegisterNativesUNavAreaMeta()
	{
	}
	UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister()
	{
		return UNavAreaMeta::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavAreaMeta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavArea,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavAreas/NavAreaMeta.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreas/NavAreaMeta.h" },
				{ "ToolTip", "Class containing definition of a navigation area" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavAreaMeta>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavAreaMeta::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300085u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavAreaMeta, 1812647426);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavAreaMeta(Z_Construct_UClass_UNavAreaMeta, &UNavAreaMeta::StaticClass, TEXT("/Script/Engine"), TEXT("UNavAreaMeta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaMeta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
