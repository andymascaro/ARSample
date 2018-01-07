// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimationRecordingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationRecordingSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
// End Cross Module References
class UScriptStruct* FAnimationRecordingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationRecordingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationRecordingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationRecordingSettings"), sizeof(FAnimationRecordingSettings), Get_Z_Construct_UScriptStruct_FAnimationRecordingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationRecordingSettings(FAnimationRecordingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationRecordingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationRecordingSettings")),new UScriptStruct::TCppStructOps<FAnimationRecordingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationRecordingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationRecordingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationRecordingSettings"), sizeof(FAnimationRecordingSettings), Get_Z_Construct_UScriptStruct_FAnimationRecordingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Settings describing how to record an animation" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationRecordingSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Tangent mode for the recorded keys." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(NewProp_TangentMode_MetaData, ARRAY_COUNT(NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
				{ "Category", "Settings" },
				{ "DisplayName", "Interpolation Mode" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Interpolation mode for the recorded keys." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(NewProp_InterpMode_MetaData, ARRAY_COUNT(NewProp_InterpMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Maximum length of the animation recorded (in seconds). If zero the animation will keep on recording until stopped." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, Length), METADATA_PARAMS(NewProp_Length_MetaData, ARRAY_COUNT(NewProp_Length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Sample rate of the recorded animation (in Hz)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Float, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationRecordingSettings, SampleRate), METADATA_PARAMS(NewProp_SampleRate_MetaData, ARRAY_COUNT(NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveAsset_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Whether to auto-save asset when recording is completed. Defaults to false" },
			};
#endif
			auto NewProp_bAutoSaveAsset_SetBit = [](void* Obj){ ((FAnimationRecordingSettings*)Obj)->bAutoSaveAsset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveAsset = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSaveAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationRecordingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoSaveAsset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoSaveAsset_MetaData, ARRAY_COUNT(NewProp_bAutoSaveAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveRootAnimation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Whether to remove the root bone transform from the animation" },
			};
#endif
			auto NewProp_bRemoveRootAnimation_SetBit = [](void* Obj){ ((FAnimationRecordingSettings*)Obj)->bRemoveRootAnimation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveRootAnimation = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveRootAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationRecordingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveRootAnimation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveRootAnimation_MetaData, ARRAY_COUNT(NewProp_bRemoveRootAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimationRecordingSettings.h" },
				{ "ToolTip", "Whether to record animation in world space, defaults to true" },
			};
#endif
			auto NewProp_bRecordInWorldSpace_SetBit = [](void* Obj){ ((FAnimationRecordingSettings*)Obj)->bRecordInWorldSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecordInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationRecordingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRecordInWorldSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRecordInWorldSpace_MetaData, ARRAY_COUNT(NewProp_bRecordInWorldSpace_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoSaveAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveRootAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRecordInWorldSpace,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationRecordingSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimationRecordingSettings),
				alignof(FAnimationRecordingSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationRecordingSettings_CRC() { return 3784812400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
