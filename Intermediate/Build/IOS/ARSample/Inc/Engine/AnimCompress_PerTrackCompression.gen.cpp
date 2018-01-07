// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_PerTrackCompression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_PerTrackCompression() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveLinearKeys();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
// End Cross Module References
	void UAnimCompress_PerTrackCompression::StaticRegisterNativesUAnimCompress_PerTrackCompression()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression_NoRegister()
	{
		return UAnimCompress_PerTrackCompression::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_PerTrackCompression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompress_RemoveLinearKeys,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimCompress Object" },
				{ "IncludePath", "Animation/AnimCompress_PerTrackCompression.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerturbationProbeSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "How big of a perturbation should be made when probing error propagation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerturbationProbeSize = { UE4CodeGen_Private::EPropertyClass::Float, "PerturbationProbeSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, PerturbationProbeSize), METADATA_PARAMS(NewProp_PerturbationProbeSize_MetaData, ARRAY_COUNT(NewProp_PerturbationProbeSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxErrorPerTrackRatio_MetaData[] = {
				{ "Category", "AdaptiveError2" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "A fraction that determines how much of the total error budget can be introduced by any particular track" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxErrorPerTrackRatio = { UE4CodeGen_Private::EPropertyClass::Float, "MaxErrorPerTrackRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxErrorPerTrackRatio), METADATA_PARAMS(NewProp_MaxErrorPerTrackRatio_MetaData, ARRAY_COUNT(NewProp_MaxErrorPerTrackRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleErrorSourceRatio_MetaData[] = {
				{ "Category", "AdaptiveError2" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "This ratio determines how much error in end effector scale can come from a given track's rotation error or scale error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from scale error." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleErrorSourceRatio = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleErrorSourceRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ScaleErrorSourceRatio), METADATA_PARAMS(NewProp_ScaleErrorSourceRatio_MetaData, ARRAY_COUNT(NewProp_ScaleErrorSourceRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationErrorSourceRatio_MetaData[] = {
				{ "Category", "AdaptiveError2" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "This ratio determines how much error in end effector translation can come from a given track's rotation error or translation error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationErrorSourceRatio = { UE4CodeGen_Private::EPropertyClass::Float, "TranslationErrorSourceRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, TranslationErrorSourceRatio), METADATA_PARAMS(NewProp_TranslationErrorSourceRatio_MetaData, ARRAY_COUNT(NewProp_TranslationErrorSourceRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationErrorSourceRatio_MetaData[] = {
				{ "Category", "AdaptiveError2" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "This ratio determines how much error in end effector rotation can come from a given track's rotation error or translation error.\nIf 1, all of it must come from rotation error, if 0.5, half can come from each, and if 0.0, all must come from translation error." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationErrorSourceRatio = { UE4CodeGen_Private::EPropertyClass::Float, "RotationErrorSourceRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, RotationErrorSourceRatio), METADATA_PARAMS(NewProp_RotationErrorSourceRatio_MetaData, ARRAY_COUNT(NewProp_RotationErrorSourceRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveError2_MetaData[] = {
				{ "Category", "AdaptiveError2" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "If true, the adaptive error system will determine how much error to allow for each track, based on the\nerror introduced in end effectors due to errors in the track." },
			};
#endif
			auto NewProp_bUseAdaptiveError2_SetBit = [](void* Obj){ ((UAnimCompress_PerTrackCompression*)Obj)->bUseAdaptiveError2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveError2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAdaptiveError2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_PerTrackCompression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAdaptiveError2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAdaptiveError2_MetaData, ARRAY_COUNT(NewProp_bUseAdaptiveError2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentingDivisorExponent_MetaData[] = {
				{ "Category", "AdaptiveError" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Reduces the error tolerance the further up the tree that a key occurs\nEffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\nOnly has an effect bUseAdaptiveError is true" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParentingDivisorExponent = { UE4CodeGen_Private::EPropertyClass::Float, "ParentingDivisorExponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ParentingDivisorExponent), METADATA_PARAMS(NewProp_ParentingDivisorExponent_MetaData, ARRAY_COUNT(NewProp_ParentingDivisorExponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentingDivisor_MetaData[] = {
				{ "Category", "AdaptiveError" },
				{ "ClampMin", "1.0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Reduces the error tolerance the further up the tree that a key occurs\nEffectiveErrorTolerance = Max(BaseErrorTolerance / Power(ParentingDivisor, Max(Height+Bias,0) * ParentingDivisorExponent), ZeroingThreshold)\nOnly has an effect bUseAdaptiveError is true" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParentingDivisor = { UE4CodeGen_Private::EPropertyClass::Float, "ParentingDivisor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ParentingDivisor), METADATA_PARAMS(NewProp_ParentingDivisor_MetaData, ARRAY_COUNT(NewProp_ParentingDivisor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackHeightBias_MetaData[] = {
				{ "Category", "AdaptiveError" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "A bias added to the track height before using it to calculate the adaptive error" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackHeightBias = { UE4CodeGen_Private::EPropertyClass::Int, "TrackHeightBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, TrackHeightBias), METADATA_PARAMS(NewProp_TrackHeightBias_MetaData, ARRAY_COUNT(NewProp_TrackHeightBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideForEndEffectors_MetaData[] = {
				{ "Category", "AdaptiveError" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "If true, uses MinEffectorDiff as the threhsold for end effectors" },
			};
#endif
			auto NewProp_bUseOverrideForEndEffectors_SetBit = [](void* Obj){ ((UAnimCompress_PerTrackCompression*)Obj)->bUseOverrideForEndEffectors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideForEndEffectors = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseOverrideForEndEffectors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_PerTrackCompression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseOverrideForEndEffectors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseOverrideForEndEffectors_MetaData, ARRAY_COUNT(NewProp_bUseOverrideForEndEffectors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveError_MetaData[] = {
				{ "Category", "AdaptiveError" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "If true, adjust the error thresholds based on the 'height' within the skeleton" },
			};
#endif
			auto NewProp_bUseAdaptiveError_SetBit = [](void* Obj){ ((UAnimCompress_PerTrackCompression*)Obj)->bUseAdaptiveError = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveError = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAdaptiveError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_PerTrackCompression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAdaptiveError_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAdaptiveError_MetaData, ARRAY_COUNT(NewProp_bUseAdaptiveError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinKeysForResampling_MetaData[] = {
				{ "Category", "Resampling" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Animations with fewer keys than MinKeysForResampling will not be resampled." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinKeysForResampling = { UE4CodeGen_Private::EPropertyClass::Int, "MinKeysForResampling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MinKeysForResampling), METADATA_PARAMS(NewProp_MinKeysForResampling_MetaData, ARRAY_COUNT(NewProp_MinKeysForResampling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResampledFramerate_MetaData[] = {
				{ "Category", "Resampling" },
				{ "ClampMax", "30.0" },
				{ "ClampMin", "1.0" },
				{ "editcondition", "bResampleAnimation" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "When bResampleAnimation is true, this defines the desired framerate" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResampledFramerate = { UE4CodeGen_Private::EPropertyClass::Float, "ResampledFramerate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, ResampledFramerate), METADATA_PARAMS(NewProp_ResampledFramerate_MetaData, ARRAY_COUNT(NewProp_ResampledFramerate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResampleAnimation_MetaData[] = {
				{ "Category", "Resampling" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "If true, resample the animation to ResampleFramerate frames per second" },
			};
#endif
			auto NewProp_bResampleAnimation_SetBit = [](void* Obj){ ((UAnimCompress_PerTrackCompression*)Obj)->bResampleAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResampleAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bResampleAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_PerTrackCompression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResampleAnimation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bResampleAnimation_MetaData, ARRAY_COUNT(NewProp_bResampleAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedScaleFormats_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on scale keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedScaleFormats = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedScaleFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedScaleFormats), METADATA_PARAMS(NewProp_AllowedScaleFormats_MetaData, ARRAY_COUNT(NewProp_AllowedScaleFormats_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedScaleFormats_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "AllowedScaleFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedTranslationFormats_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on translation keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedTranslationFormats = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedTranslationFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedTranslationFormats), METADATA_PARAMS(NewProp_AllowedTranslationFormats_MetaData, ARRAY_COUNT(NewProp_AllowedTranslationFormats_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedTranslationFormats_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "AllowedTranslationFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedRotationFormats_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Which encoding formats is the per-track compressor allowed to try on rotation keys" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedRotationFormats = { UE4CodeGen_Private::EPropertyClass::Array, "AllowedRotationFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, AllowedRotationFormats), METADATA_PARAMS(NewProp_AllowedRotationFormats_MetaData, ARRAY_COUNT(NewProp_AllowedRotationFormats_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedRotationFormats_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "AllowedRotationFormats", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiffBitwise_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiffBitwise = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScaleDiffBitwise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxScaleDiffBitwise), METADATA_PARAMS(NewProp_MaxScaleDiffBitwise_MetaData, ARRAY_COUNT(NewProp_MaxScaleDiffBitwise_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiffBitwise_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Maximum angle difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiffBitwise = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngleDiffBitwise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxAngleDiffBitwise), METADATA_PARAMS(NewProp_MaxAngleDiffBitwise_MetaData, ARRAY_COUNT(NewProp_MaxAngleDiffBitwise_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiffBitwise_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Maximum position difference to use when testing if an animation key may be removed. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiffBitwise = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPosDiffBitwise", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxPosDiffBitwise), METADATA_PARAMS(NewProp_MaxPosDiffBitwise_MetaData, ARRAY_COUNT(NewProp_MaxPosDiffBitwise_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZeroingThreshold_MetaData[] = {
				{ "Category", "PerTrack" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_PerTrackCompression.h" },
				{ "ToolTip", "Maximum threshold to use when replacing a component with zero. Lower values retain more keys, but yield less compression." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZeroingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "MaxZeroingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_PerTrackCompression, MaxZeroingThreshold), METADATA_PARAMS(NewProp_MaxZeroingThreshold_MetaData, ARRAY_COUNT(NewProp_MaxZeroingThreshold_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerturbationProbeSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxErrorPerTrackRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleErrorSourceRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationErrorSourceRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationErrorSourceRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAdaptiveError2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentingDivisorExponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentingDivisor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackHeightBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseOverrideForEndEffectors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAdaptiveError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinKeysForResampling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResampledFramerate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResampleAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedScaleFormats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedScaleFormats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTranslationFormats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedTranslationFormats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRotationFormats,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRotationFormats_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScaleDiffBitwise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngleDiffBitwise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPosDiffBitwise,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxZeroingThreshold,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_PerTrackCompression>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_PerTrackCompression::StaticClass,
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
	IMPLEMENT_CLASS(UAnimCompress_PerTrackCompression, 977778093);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_PerTrackCompression(Z_Construct_UClass_UAnimCompress_PerTrackCompression, &UAnimCompress_PerTrackCompression::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_PerTrackCompression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_PerTrackCompression);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
