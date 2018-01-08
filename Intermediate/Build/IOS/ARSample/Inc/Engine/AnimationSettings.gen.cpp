// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
// End Cross Module References
	void UAnimationSettings::StaticRegisterNativesUAnimationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAnimationSettings_NoRegister()
	{
		return UAnimationSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Animation" },
				{ "IncludePath", "Animation/AnimationSettings.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "Default animation settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripAnimationDataOnDedicatedServer_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, animation track data will be stripped from dedicated server cooked data" },
			};
#endif
			auto NewProp_bStripAnimationDataOnDedicatedServer_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bStripAnimationDataOnDedicatedServer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripAnimationDataOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bStripAnimationDataOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStripAnimationDataOnDedicatedServer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStripAnimationDataOnDedicatedServer_MetaData, ARRAY_COUNT(NewProp_bStripAnimationDataOnDedicatedServer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceLog_MetaData[] = {
				{ "Category", "Performance" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			auto NewProp_bEnablePerformanceLog_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bEnablePerformanceLog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePerformanceLog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnablePerformanceLog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnablePerformanceLog_MetaData, ARRAY_COUNT(NewProp_bEnablePerformanceLog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryIntervalKeyRemoval_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, the resampling techniques will be tried" },
			};
#endif
			auto NewProp_bTryIntervalKeyRemoval_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bTryIntervalKeyRemoval = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryIntervalKeyRemoval = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryIntervalKeyRemoval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryIntervalKeyRemoval_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryIntervalKeyRemoval_MetaData, ARRAY_COUNT(NewProp_bTryIntervalKeyRemoval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryLinearKeyRemovalCompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, the linear key removal techniques will be tried" },
			};
#endif
			auto NewProp_bTryLinearKeyRemovalCompression_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bTryLinearKeyRemovalCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryLinearKeyRemovalCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryLinearKeyRemovalCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryLinearKeyRemovalCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryLinearKeyRemovalCompression_MetaData, ARRAY_COUNT(NewProp_bTryLinearKeyRemovalCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryPerTrackBitwiseCompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, the per-track compressor techniques will be tried" },
			};
#endif
			auto NewProp_bTryPerTrackBitwiseCompression_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bTryPerTrackBitwiseCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryPerTrackBitwiseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryPerTrackBitwiseCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryPerTrackBitwiseCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryPerTrackBitwiseCompression_MetaData, ARRAY_COUNT(NewProp_bTryPerTrackBitwiseCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryFixedBitwiseCompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, the uniform bitwise techniques will be tried" },
			};
#endif
			auto NewProp_bTryFixedBitwiseCompression_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bTryFixedBitwiseCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryFixedBitwiseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryFixedBitwiseCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryFixedBitwiseCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryFixedBitwiseCompression_MetaData, ARRAY_COUNT(NewProp_bTryFixedBitwiseCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then Alternative Compression Threshold will be effectively raised to the existing error level" },
			};
#endif
			auto NewProp_bRaiseMaxErrorToExisting_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bRaiseMaxErrorToExisting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting = { UE4CodeGen_Private::EPropertyClass::Bool, "bRaiseMaxErrorToExisting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRaiseMaxErrorToExisting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRaiseMaxErrorToExisting_MetaData, ARRAY_COUNT(NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"Run Current Default Compressor\"" },
			};
#endif
			auto NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bFirstRecompressUsingCurrentOrDefault = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstRecompressUsingCurrentOrDefault = { UE4CodeGen_Private::EPropertyClass::Bool, "bFirstRecompressUsingCurrentOrDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData, ARRAY_COUNT(NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold" },
			};
#endif
			auto NewProp_bForceBelowThreshold_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bForceBelowThreshold = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceBelowThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceBelowThreshold_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceBelowThreshold_MetaData, ARRAY_COUNT(NewProp_bForceBelowThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			auto NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->bOnlyCheckForMissingSkeletalMeshes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCheckForMissingSkeletalMeshes = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyCheckForMissingSkeletalMeshes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData, ARRAY_COUNT(NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRecompression_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			auto NewProp_ForceRecompression_SetBit = [](void* Obj){ ((UAnimationSettings*)Obj)->ForceRecompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceRecompression = { UE4CodeGen_Private::EPropertyClass::Bool, "ForceRecompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ForceRecompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ForceRecompression_MetaData, ARRAY_COUNT(NewProp_ForceRecompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeCompressionThreshold_MetaData[] = {
				{ "Category", "Compression" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "The alternate error threshold (0.0 means don't try anything other than the current / default scheme)\n\nDetermines the current setting for world-space error tolerance in the animation compressor.\nWhen requested, animation being compressed will also consider an alternative compression\nmethod if the end result of that method produces less error than the AlternativeCompressionThreshold.\nAlso known as \"Max End Effector Error\"" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlternativeCompressionThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AlternativeCompressionThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, AlternativeCompressionThreshold), METADATA_PARAMS(NewProp_AlternativeCompressionThreshold_MetaData, ARRAY_COUNT(NewProp_AlternativeCompressionThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "Max error for compression of curves using remove redundant keys" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCurveError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, MaxCurveError), METADATA_PARAMS(NewProp_MaxCurveError_MetaData, ARRAY_COUNT(NewProp_MaxCurveError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslationCompressionFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(NewProp_TranslationCompressionFormat_MetaData, ARRAY_COUNT(NewProp_TranslationCompressionFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "RotationCompressionFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(NewProp_RotationCompressionFormat_MetaData, ARRAY_COUNT(NewProp_RotationCompressionFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionAlgorithm_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultCompressionAlgorithm = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultCompressionAlgorithm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000002004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, DefaultCompressionAlgorithm), Z_Construct_UClass_UAnimCompress_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultCompressionAlgorithm_MetaData, ARRAY_COUNT(NewProp_DefaultCompressionAlgorithm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEndEffectorsMatchNameArray_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyEndEffectorsMatchNameArray = { UE4CodeGen_Private::EPropertyClass::Array, "KeyEndEffectorsMatchNameArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, KeyEndEffectorsMatchNameArray), METADATA_PARAMS(NewProp_KeyEndEffectorsMatchNameArray_MetaData, ARRAY_COUNT(NewProp_KeyEndEffectorsMatchNameArray_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyEndEffectorsMatchNameArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "KeyEndEffectorsMatchNameArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
				{ "ToolTip", "compression upgrade version" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion = { UE4CodeGen_Private::EPropertyClass::Int, "CompressCommandletVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000024001, 1, nullptr, STRUCT_OFFSET(UAnimationSettings, CompressCommandletVersion), METADATA_PARAMS(NewProp_CompressCommandletVersion_MetaData, ARRAY_COUNT(NewProp_CompressCommandletVersion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStripAnimationDataOnDedicatedServer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnablePerformanceLog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryIntervalKeyRemoval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryLinearKeyRemovalCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryPerTrackBitwiseCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryFixedBitwiseCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRaiseMaxErrorToExisting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFirstRecompressUsingCurrentOrDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceBelowThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyCheckForMissingSkeletalMeshes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceRecompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlternativeCompressionThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCurveError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationCompressionFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationCompressionFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultCompressionAlgorithm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEndEffectorsMatchNameArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEndEffectorsMatchNameArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressCommandletVersion,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimationSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimationSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSettings, 2749497370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSettings(Z_Construct_UClass_UAnimationSettings, &UAnimationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
