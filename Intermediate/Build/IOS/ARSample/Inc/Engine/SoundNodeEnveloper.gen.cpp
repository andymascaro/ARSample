// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeEnveloper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
// End Cross Module References
	void USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister()
	{
		return USoundNodeEnveloper::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeEnveloper()
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
				{ "DisplayName", "Enveloper" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeEnveloper.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "Allows manipulation of volume and pitch over a set time period" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The upper bound of volume (1.0 is no change)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMax = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMax), METADATA_PARAMS(NewProp_VolumeMax_MetaData, ARRAY_COUNT(NewProp_VolumeMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The lower bound of volume (1.0 is no change)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMin = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMin), METADATA_PARAMS(NewProp_VolumeMin_MetaData, ARRAY_COUNT(NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The upper bound of pitch (1.0 is no change)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchMax), METADATA_PARAMS(NewProp_PitchMax_MetaData, ARRAY_COUNT(NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[] = {
				{ "Category", "Modulation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The lower bound of pitch (1.0 is no change)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchMin), METADATA_PARAMS(NewProp_PitchMin_MetaData, ARRAY_COUNT(NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchCurve_MetaData[] = {
				{ "Category", "Envelope" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The distribution defining the pitch envelope." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_PitchCurve_MetaData, ARRAY_COUNT(NewProp_PitchCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeCurve_MetaData[] = {
				{ "Category", "Envelope" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The distribution defining the volume envelope." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_VolumeCurve_MetaData, ARRAY_COUNT(NewProp_VolumeCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchInterpCurve_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PitchInterpCurve = { UE4CodeGen_Private::EPropertyClass::Object, "PitchInterpCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, PitchInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(NewProp_PitchInterpCurve_MetaData, ARRAY_COUNT(NewProp_PitchInterpCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeInterpCurve_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeInterpCurve = { UE4CodeGen_Private::EPropertyClass::Object, "VolumeInterpCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020080008, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, VolumeInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(NewProp_VolumeInterpCurve_MetaData, ARRAY_COUNT(NewProp_VolumeInterpCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "If enabled, the envelope will loop using the loop settings." },
			};
#endif
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((USoundNodeEnveloper*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeEnveloper), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoop_MetaData, ARRAY_COUNT(NewProp_bLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value." },
			};
#endif
			auto NewProp_bLoopIndefinitely_SetBit = [](void* Obj){ ((USoundNodeEnveloper*)Obj)->bLoopIndefinitely = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoopIndefinitely", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeEnveloper), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoopIndefinitely_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoopIndefinitely_MetaData, ARRAY_COUNT(NewProp_bLoopIndefinitely_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopCount), METADATA_PARAMS(NewProp_LoopCount_MetaData, ARRAY_COUNT(NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationAfterLoop_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The time in seconds it takes the evelope to fade out after the last loop is completed." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationAfterLoop = { UE4CodeGen_Private::EPropertyClass::Float, "DurationAfterLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, DurationAfterLoop), METADATA_PARAMS(NewProp_DurationAfterLoop_MetaData, ARRAY_COUNT(NewProp_DurationAfterLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopEnd_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The time in seconds where the envelope's loop ends." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopEnd = { UE4CodeGen_Private::EPropertyClass::Float, "LoopEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopEnd), METADATA_PARAMS(NewProp_LoopEnd_MetaData, ARRAY_COUNT(NewProp_LoopEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopStart_MetaData[] = {
				{ "Category", "Looping" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
				{ "ToolTip", "The time in seconds where the envelope's loop begins." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopStart = { UE4CodeGen_Private::EPropertyClass::Float, "LoopStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeEnveloper, LoopStart), METADATA_PARAMS(NewProp_LoopStart_MetaData, ARRAY_COUNT(NewProp_LoopStart_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchInterpCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeInterpCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoopIndefinitely,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DurationAfterLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoopStart,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeEnveloper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeEnveloper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(USoundNodeEnveloper, 2375781699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeEnveloper(Z_Construct_UClass_USoundNodeEnveloper, &USoundNodeEnveloper::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeEnveloper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeEnveloper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
