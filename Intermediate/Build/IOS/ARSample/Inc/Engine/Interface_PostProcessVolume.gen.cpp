// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Interfaces/Interface_PostProcessVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PostProcessVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_PostProcessVolume::StaticRegisterNativesUInterface_PostProcessVolume()
	{
	}
	UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister()
	{
		return UInterface_PostProcessVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterface_PostProcessVolume()
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
				{ "ModuleRelativePath", "Classes/Interfaces/Interface_PostProcessVolume.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IInterface_PostProcessVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterface_PostProcessVolume::StaticClass,
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
	IMPLEMENT_CLASS(UInterface_PostProcessVolume, 1343874410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterface_PostProcessVolume(Z_Construct_UClass_UInterface_PostProcessVolume, &UInterface_PostProcessVolume::StaticClass, TEXT("/Script/Engine"), TEXT("UInterface_PostProcessVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PostProcessVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
