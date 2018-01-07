// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AutomatedLevelSequenceCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedLevelSequenceCapture() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
// End Cross Module References
	void UAutomatedLevelSequenceCapture::StaticRegisterNativesUAutomatedLevelSequenceCapture()
	{
	}
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture_NoRegister()
	{
		return UAutomatedLevelSequenceCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_UAutomatedLevelSequenceCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AutomatedLevelSequenceCapture.h" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[] = {
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "The pre-existing level sequence actor to use for capture that specifies playback settings" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LevelSequenceActor = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LevelSequenceActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000800000000, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(NewProp_LevelSequenceActor_MetaData, ARRAY_COUNT(NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[] = {
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "A level sequence asset to playback at runtime - used where the level sequence does not already exist in the world." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequenceAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelSequenceAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, LevelSequenceAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_LevelSequenceAsset_MetaData, ARRAY_COUNT(NewProp_LevelSequenceAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWriteEditDecisionList_MetaData[] = {
				{ "Category", "Sequence" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "Whether to write edit decision lists (EDLs) if the sequence contains shots" },
			};
#endif
			auto NewProp_bWriteEditDecisionList_SetBit = [](void* Obj){ ((UAutomatedLevelSequenceCapture*)Obj)->bWriteEditDecisionList = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWriteEditDecisionList = { UE4CodeGen_Private::EPropertyClass::Bool, "bWriteEditDecisionList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAutomatedLevelSequenceCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWriteEditDecisionList_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWriteEditDecisionList_MetaData, ARRAY_COUNT(NewProp_bWriteEditDecisionList_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[] = {
				{ "Category", "CaptureSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions = { UE4CodeGen_Private::EPropertyClass::Object, "BurnInOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800080009, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(NewProp_BurnInOptions_MetaData, ARRAY_COUNT(NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeWarmUp_MetaData[] = {
				{ "Category", "Animation" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "The number of seconds to wait (in real-time) before we start playing back the warm up frames.  Useful for allowing post processing effects to settle down before capturing the animation." },
				{ "Units", "Seconds" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeWarmUp = { UE4CodeGen_Private::EPropertyClass::Float, "DelayBeforeWarmUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, DelayBeforeWarmUp), METADATA_PARAMS(NewProp_DelayBeforeWarmUp_MetaData, ARRAY_COUNT(NewProp_DelayBeforeWarmUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmUpFrameCount_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "The number of extra frames to play before the sequence's start frame, to \"warm up\" the animation.  This is useful if your\n          animation contains particles or other runtime effects that are spawned into the scene earlier than your capture start frame" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarmUpFrameCount = { UE4CodeGen_Private::EPropertyClass::Int, "WarmUpFrameCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, WarmUpFrameCount), METADATA_PARAMS(NewProp_WarmUpFrameCount_MetaData, ARRAY_COUNT(NewProp_WarmUpFrameCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[] = {
				{ "Category", "Animation" },
				{ "EditCondition", "bUseCustomEndFrame" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "Frame number to end capturing.  The frame number range depends on whether the bUseRelativeFrameNumbers option is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndFrame = { UE4CodeGen_Private::EPropertyClass::Int, "EndFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, EndFrame), METADATA_PARAMS(NewProp_EndFrame_MetaData, ARRAY_COUNT(NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEndFrame_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "When enabled, the EndFrame setting will override the default ending frame number" },
			};
#endif
			auto NewProp_bUseCustomEndFrame_SetBit = [](void* Obj){ ((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomEndFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEndFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomEndFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAutomatedLevelSequenceCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomEndFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomEndFrame_MetaData, ARRAY_COUNT(NewProp_bUseCustomEndFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
				{ "Category", "Animation" },
				{ "EditCondition", "bUseCustomStartFrame" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "Frame number to start capturing.  The frame number range depends on whether the bUseRelativeFrameNumbers option is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartFrame = { UE4CodeGen_Private::EPropertyClass::Int, "StartFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, STRUCT_OFFSET(UAutomatedLevelSequenceCapture, StartFrame), METADATA_PARAMS(NewProp_StartFrame_MetaData, ARRAY_COUNT(NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomStartFrame_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/AutomatedLevelSequenceCapture.h" },
				{ "ToolTip", "When enabled, the StartFrame setting will override the default starting frame number" },
			};
#endif
			auto NewProp_bUseCustomStartFrame_SetBit = [](void* Obj){ ((UAutomatedLevelSequenceCapture*)Obj)->bUseCustomStartFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomStartFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCustomStartFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAutomatedLevelSequenceCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCustomStartFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCustomStartFrame_MetaData, ARRAY_COUNT(NewProp_bUseCustomStartFrame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSequenceActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelSequenceAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWriteEditDecisionList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurnInOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayBeforeWarmUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarmUpFrameCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomEndFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCustomStartFrame,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAutomatedLevelSequenceCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAutomatedLevelSequenceCapture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900084u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				"EditorSettings",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomatedLevelSequenceCapture, 3972233076);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomatedLevelSequenceCapture(Z_Construct_UClass_UAutomatedLevelSequenceCapture, &UAutomatedLevelSequenceCapture::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UAutomatedLevelSequenceCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedLevelSequenceCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
