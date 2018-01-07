// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_Automatic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_Automatic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_Automatic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_Automatic();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_Automatic::StaticRegisterNativesUAnimCompress_Automatic()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_Automatic_NoRegister()
	{
		return UAnimCompress_Automatic::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_Automatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompress,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimCompress_Automatic.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true and the existing compression error is greater than Max End Effector Error, then Max End Effector Error will be effectively raised to the existing error level" },
			};
#endif
			auto NewProp_bRaiseMaxErrorToExisting_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bRaiseMaxErrorToExisting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting = { UE4CodeGen_Private::EPropertyClass::Bool, "bRaiseMaxErrorToExisting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRaiseMaxErrorToExisting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRaiseMaxErrorToExisting_MetaData, ARRAY_COUNT(NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true and the existing compression error is greater than Max End Effector Error, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold\nAlso known as \"force below threshold\"" },
			};
#endif
			auto NewProp_bAutoReplaceIfExistingErrorTooGreat_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bAutoReplaceIfExistingErrorTooGreat = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReplaceIfExistingErrorTooGreat = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoReplaceIfExistingErrorTooGreat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoReplaceIfExistingErrorTooGreat_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData, ARRAY_COUNT(NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunCurrentDefaultCompressor_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"First Recompress Using Current Or Default\"" },
			};
#endif
			auto NewProp_bRunCurrentDefaultCompressor_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bRunCurrentDefaultCompressor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunCurrentDefaultCompressor = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunCurrentDefaultCompressor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunCurrentDefaultCompressor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunCurrentDefaultCompressor_MetaData, ARRAY_COUNT(NewProp_bRunCurrentDefaultCompressor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryIntervalKeyRemoval_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true, the resampling techniques will be tried" },
			};
#endif
			auto NewProp_bTryIntervalKeyRemoval_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bTryIntervalKeyRemoval = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryIntervalKeyRemoval = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryIntervalKeyRemoval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryIntervalKeyRemoval_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryIntervalKeyRemoval_MetaData, ARRAY_COUNT(NewProp_bTryIntervalKeyRemoval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryLinearKeyRemovalCompression_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true, the linear key removal techniques will be tried" },
			};
#endif
			auto NewProp_bTryLinearKeyRemovalCompression_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bTryLinearKeyRemovalCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryLinearKeyRemovalCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryLinearKeyRemovalCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryLinearKeyRemovalCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryLinearKeyRemovalCompression_MetaData, ARRAY_COUNT(NewProp_bTryLinearKeyRemovalCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryPerTrackBitwiseCompression_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true, the per-track compressor techniques will be tried" },
			};
#endif
			auto NewProp_bTryPerTrackBitwiseCompression_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bTryPerTrackBitwiseCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryPerTrackBitwiseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryPerTrackBitwiseCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryPerTrackBitwiseCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryPerTrackBitwiseCompression_MetaData, ARRAY_COUNT(NewProp_bTryPerTrackBitwiseCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryFixedBitwiseCompression_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "If true, the uniform bitwise techniques will be tried" },
			};
#endif
			auto NewProp_bTryFixedBitwiseCompression_SetBit = [](void* Obj){ ((UAnimCompress_Automatic*)Obj)->bTryFixedBitwiseCompression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryFixedBitwiseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bTryFixedBitwiseCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress_Automatic), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTryFixedBitwiseCompression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTryFixedBitwiseCompression_MetaData, ARRAY_COUNT(NewProp_bTryFixedBitwiseCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEndEffectorError_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_Automatic" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
				{ "ToolTip", "Maximum amount of error that a compression technique can introduce in an end effector\nDetermines the current setting for world - space error tolerance in the animation compressor.\nWhen requested, animation being compressed will also consider an alternative compression\nmethod if the end result of that method produces less error than the AlternativeCompressionThreshold.\nAlso known as \"Alternative Compression Threshold\"" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEndEffectorError = { UE4CodeGen_Private::EPropertyClass::Float, "MaxEndEffectorError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_Automatic, MaxEndEffectorError), METADATA_PARAMS(NewProp_MaxEndEffectorError_MetaData, ARRAY_COUNT(NewProp_MaxEndEffectorError_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRaiseMaxErrorToExisting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoReplaceIfExistingErrorTooGreat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunCurrentDefaultCompressor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryIntervalKeyRemoval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryLinearKeyRemovalCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryPerTrackBitwiseCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTryFixedBitwiseCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxEndEffectorError,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_Automatic>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_Automatic::StaticClass,
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
	IMPLEMENT_CLASS(UAnimCompress_Automatic, 3085813192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_Automatic(Z_Construct_UClass_UAnimCompress_Automatic, &UAnimCompress_Automatic::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_Automatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_Automatic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
