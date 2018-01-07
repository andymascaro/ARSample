// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundCue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCue() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
// End Cross Module References
class UScriptStruct* FSoundNodeEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundNodeEditorData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundNodeEditorData"), sizeof(FSoundNodeEditorData), Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundNodeEditorData(FSoundNodeEditorData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundNodeEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundNodeEditorData")),new UScriptStruct::TCppStructOps<FSoundNodeEditorData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundNodeEditorData"), sizeof(FSoundNodeEditorData), Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundNodeEditorData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundNodeEditorData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundNodeEditorData),
				alignof(FSoundNodeEditorData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC() { return 1953315098U; }
	void USoundCue::StaticRegisterNativesUSoundCue()
	{
	}
	UClass* Z_Construct_UClass_USoundCue_NoRegister()
	{
		return USoundCue::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "object Object" },
				{ "IncludePath", "Sound/SoundCue.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "ToolTip", "The behavior of audio playback is defined within Sound Cues." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "Tooltip", "The priority of the subtitle.  Defaults to 10000.  Higher values will play instead of lower values." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Float, "SubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, SubtitlePriority), METADATA_PARAMS(NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(NewProp_SubtitlePriority_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueGraph_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCueGraph = { UE4CodeGen_Private::EPropertyClass::Object, "SoundCueGraph", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundCue, SoundCueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(NewProp_SoundCueGraph_MetaData, ARRAY_COUNT(NewProp_SoundCueGraph_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes = { UE4CodeGen_Private::EPropertyClass::Array, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundCue, AllNodes), METADATA_PARAMS(NewProp_AllNodes_MetaData, ARRAY_COUNT(NewProp_AllNodes_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
				{ "Category", "AttenuationSettings" },
				{ "EditCondition", "bOverrideAttenuation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "ToolTip", "Attenuation settings to use if Override Attenuation is set to true" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "ToolTip", "Pitch multiplier for the Sound Cue" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, PitchMultiplier), METADATA_PARAMS(NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "ToolTip", "Volume multiplier for the Sound Cue" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, VolumeMultiplier), METADATA_PARAMS(NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstNode = { UE4CodeGen_Private::EPropertyClass::Object, "FirstNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundCue, FirstNode), Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(NewProp_FirstNode_MetaData, ARRAY_COUNT(NewProp_FirstNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
				{ "Category", "Attenuation" },
				{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
				{ "ToolTip", "Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset" },
			};
#endif
			auto NewProp_bOverrideAttenuation_SetBit = [](void* Obj){ ((USoundCue*)Obj)->bOverrideAttenuation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundCue), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideAttenuation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlePriority,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundCueGraph,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllNodes_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttenuationOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideAttenuation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundCue>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundCue::StaticClass,
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
	IMPLEMENT_CLASS(USoundCue, 1891904341);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCue(Z_Construct_UClass_USoundCue, &USoundCue::StaticClass, TEXT("/Script/Engine"), TEXT("USoundCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
