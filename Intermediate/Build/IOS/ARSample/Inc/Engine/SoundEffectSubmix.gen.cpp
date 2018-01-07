// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundEffectSubmix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSubmix() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundEffectSubmixPreset::StaticRegisterNativesUSoundEffectSubmixPreset()
	{
	}
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister()
	{
		return USoundEffectSubmixPreset::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Sound/SoundEffectSubmix.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundEffectSubmix.h" },
				{ "ToolTip", "This is here to make sure users don't mix up source and submix effects in the editor. Asset sorting, drag-n-drop, etc." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundEffectSubmixPreset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundEffectSubmixPreset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
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
	IMPLEMENT_CLASS(USoundEffectSubmixPreset, 2873680667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundEffectSubmixPreset(Z_Construct_UClass_USoundEffectSubmixPreset, &USoundEffectSubmixPreset::StaticClass, TEXT("/Script/Engine"), TEXT("USoundEffectSubmixPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSubmixPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
