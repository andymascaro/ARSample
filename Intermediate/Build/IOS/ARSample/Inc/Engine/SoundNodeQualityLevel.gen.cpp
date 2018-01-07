// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeQualityLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeQualityLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeQualityLevel();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeQualityLevel::StaticRegisterNativesUSoundNodeQualityLevel()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeQualityLevel_NoRegister()
	{
		return USoundNodeQualityLevel::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeQualityLevel()
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
				{ "DisplayName", "Quality Level" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeQualityLevel.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeQualityLevel.h" },
				{ "ToolTip", "This SoundNode uses GameUserSettings AudioQualityLevel (or the editor override) to choose which branch to play\nand at runtime will only load in to memory sound waves connected to the branch that will be selected" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeQualityLevel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeQualityLevel::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeQualityLevel, 4006193814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeQualityLevel(Z_Construct_UClass_USoundNodeQualityLevel, &USoundNodeQualityLevel::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeQualityLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeQualityLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
