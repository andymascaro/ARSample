// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeMature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeMature() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeMature::StaticRegisterNativesUSoundNodeMature()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeMature_NoRegister()
	{
		return USoundNodeMature::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeMature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Mature" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeMature.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeMature.h" },
				{ "ToolTip", "This SoundNode uses UEngine::bAllowMatureLanguage to determine whether child nodes\nthat have USoundWave::bMature=true should be played." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeMature>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeMature::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(USoundNodeMature, 47156057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeMature(Z_Construct_UClass_USoundNodeMature, &USoundNodeMature::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeMature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeMature);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
