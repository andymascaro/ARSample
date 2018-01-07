// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeModulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister()
	{
		return USoundNodeModulator::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeModulator()
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
				{ "DisplayName", "Modulator" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeModulator.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
				{ "ToolTip", "Defines a random volume and pitch modification when a sound starts" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
				{ "ToolTip", "The upper bound of volume (1.0 is no change)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMax = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMax), METADATA_PARAMS(NewProp_VolumeMax_MetaData, ARRAY_COUNT(NewProp_VolumeMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
				{ "ToolTip", "The lower bound of volume (1.0 is no change)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMin = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMin), METADATA_PARAMS(NewProp_VolumeMin_MetaData, ARRAY_COUNT(NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
				{ "ToolTip", "The upper bound of pitch (1.0 is no change)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMax), METADATA_PARAMS(NewProp_PitchMax_MetaData, ARRAY_COUNT(NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
				{ "ToolTip", "The lower bound of pitch (1.0 is no change)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMin), METADATA_PARAMS(NewProp_PitchMin_MetaData, ARRAY_COUNT(NewProp_PitchMin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMin,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeModulator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeModulator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeModulator, 753981456);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeModulator(Z_Construct_UClass_USoundNodeModulator, &USoundNodeModulator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeModulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
