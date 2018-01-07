// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundWaveProcedural.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural()
	{
	}
	UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister()
	{
		return USoundWaveProcedural::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundWaveProcedural()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundWave,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundWaveProcedural.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWaveProcedural.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundWaveProcedural>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundWaveProcedural::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(USoundWaveProcedural, 767344604);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWaveProcedural(Z_Construct_UClass_USoundWaveProcedural, &USoundWaveProcedural::StaticClass, TEXT("/Script/Engine"), TEXT("USoundWaveProcedural"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveProcedural);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
