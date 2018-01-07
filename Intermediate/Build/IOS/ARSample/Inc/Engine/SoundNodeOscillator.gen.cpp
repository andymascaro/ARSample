// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeOscillator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeOscillator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeOscillator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeOscillator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeOscillator::StaticRegisterNativesUSoundNodeOscillator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeOscillator_NoRegister()
	{
		return USoundNodeOscillator::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeOscillator()
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
				{ "DisplayName", "Oscillator" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeOscillator.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "Defines how a sound oscillates" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMax_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "A center of 0.5 would oscillate around 0.5." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMax = { UE4CodeGen_Private::EPropertyClass::Float, "CenterMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, CenterMax), METADATA_PARAMS(NewProp_CenterMax_MetaData, ARRAY_COUNT(NewProp_CenterMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMin_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "A center of 0.5 would oscillate around 0.5." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMin = { UE4CodeGen_Private::EPropertyClass::Float, "CenterMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, CenterMin), METADATA_PARAMS(NewProp_CenterMin_MetaData, ARRAY_COUNT(NewProp_CenterMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetMax_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "Offset into the sine wave. Value modded by 2 * PI." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetMax = { UE4CodeGen_Private::EPropertyClass::Float, "OffsetMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, OffsetMax), METADATA_PARAMS(NewProp_OffsetMax_MetaData, ARRAY_COUNT(NewProp_OffsetMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetMin_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "Offset into the sine wave. Value modded by 2 * PI." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetMin = { UE4CodeGen_Private::EPropertyClass::Float, "OffsetMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, OffsetMin), METADATA_PARAMS(NewProp_OffsetMin_MetaData, ARRAY_COUNT(NewProp_OffsetMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyMax_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "A frequency of 20 would oscillate at 10Hz." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyMax = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, FrequencyMax), METADATA_PARAMS(NewProp_FrequencyMax_MetaData, ARRAY_COUNT(NewProp_FrequencyMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyMin_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "A frequency of 20 would oscillate at 10Hz." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyMin = { UE4CodeGen_Private::EPropertyClass::Float, "FrequencyMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, FrequencyMin), METADATA_PARAMS(NewProp_FrequencyMin_MetaData, ARRAY_COUNT(NewProp_FrequencyMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmplitudeMax_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "An amplitude of 0.25 would oscillate between 0.75 and 1.25." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmplitudeMax = { UE4CodeGen_Private::EPropertyClass::Float, "AmplitudeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, AmplitudeMax), METADATA_PARAMS(NewProp_AmplitudeMax_MetaData, ARRAY_COUNT(NewProp_AmplitudeMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmplitudeMin_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "An amplitude of 0.25 would oscillate between 0.75 and 1.25." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmplitudeMin = { UE4CodeGen_Private::EPropertyClass::Float, "AmplitudeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeOscillator, AmplitudeMin), METADATA_PARAMS(NewProp_AmplitudeMin_MetaData, ARRAY_COUNT(NewProp_AmplitudeMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModulatePitch_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "Whether to oscillate pitch." },
			};
#endif
			auto NewProp_bModulatePitch_SetBit = [](void* Obj){ ((USoundNodeOscillator*)Obj)->bModulatePitch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModulatePitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bModulatePitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeOscillator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bModulatePitch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bModulatePitch_MetaData, ARRAY_COUNT(NewProp_bModulatePitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModulateVolume_MetaData[] = {
				{ "Category", "Oscillator" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
				{ "ToolTip", "Whether to oscillate volume." },
			};
#endif
			auto NewProp_bModulateVolume_SetBit = [](void* Obj){ ((USoundNodeOscillator*)Obj)->bModulateVolume = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModulateVolume = { UE4CodeGen_Private::EPropertyClass::Bool, "bModulateVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeOscillator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bModulateVolume_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bModulateVolume_MetaData, ARRAY_COUNT(NewProp_bModulateVolume_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrequencyMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmplitudeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AmplitudeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bModulatePitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bModulateVolume,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeOscillator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeOscillator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(USoundNodeOscillator, 1061429286);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeOscillator(Z_Construct_UClass_USoundNodeOscillator, &USoundNodeOscillator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeOscillator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeOscillator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
