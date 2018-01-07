// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWave() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecompressionType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedSubtitle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
// End Cross Module References
	static UEnum* EDecompressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType, Z_Construct_UPackage__Script_Engine(), TEXT("EDecompressionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecompressionType(EDecompressionType_StaticEnum, TEXT("/Script/Engine"), TEXT("EDecompressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDecompressionType_CRC() { return 2049510510U; }
	UEnum* Z_Construct_UEnum_Engine_EDecompressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecompressionType"), 0, Get_Z_Construct_UEnum_Engine_EDecompressionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DTYPE_Setup", (int64)DTYPE_Setup },
				{ "DTYPE_Invalid", (int64)DTYPE_Invalid },
				{ "DTYPE_Preview", (int64)DTYPE_Preview },
				{ "DTYPE_Native", (int64)DTYPE_Native },
				{ "DTYPE_RealTime", (int64)DTYPE_RealTime },
				{ "DTYPE_Procedural", (int64)DTYPE_Procedural },
				{ "DTYPE_Xenon", (int64)DTYPE_Xenon },
				{ "DTYPE_Streaming", (int64)DTYPE_Streaming },
				{ "DTYPE_MAX", (int64)DTYPE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDecompressionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDecompressionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStreamedAudioPlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamedAudioPlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamedAudioPlatformData(FStreamedAudioPlatformData::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamedAudioPlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamedAudioPlatformData")),new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData;
	UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Platform-specific data used streaming audio at runtime." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StreamedAudioPlatformData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FStreamedAudioPlatformData),
				alignof(FStreamedAudioPlatformData),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC() { return 1279563779U; }
	void USoundWave::StaticRegisterNativesUSoundWave()
	{
	}
	UClass* Z_Construct_UClass_USoundWave_NoRegister()
	{
		return USoundWave::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundWave()
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
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundWave.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCurves_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Hold a reference to our internal curve so we can switch back to it if we want to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCurves = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundWave, InternalCurves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(NewProp_InternalCurves_MetaData, ARRAY_COUNT(NewProp_InternalCurves_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
				{ "Category", "SoundWave" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Curves associated with this sound wave" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Object, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Curves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(NewProp_Curves_MetaData, ARRAY_COUNT(NewProp_Curves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
				{ "Category", "ImportSettings" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(USoundWave, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(NewProp_AssetImportData_MetaData, ARRAY_COUNT(NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundWave, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundWave, SourceFilePath_DEPRECATED), METADATA_PARAMS(NewProp_SourceFilePath_MetaData, ARRAY_COUNT(NewProp_SourceFilePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedSubtitles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "The array of the subtitles for each language. Generated at cook time." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedSubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundWave, LocalizedSubtitles), METADATA_PARAMS(NewProp_LocalizedSubtitles_MetaData, ARRAY_COUNT(NewProp_LocalizedSubtitles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedSubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalizedSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedSubtitle, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Provides contextual information for the sound to the translator." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment = { UE4CodeGen_Private::EPropertyClass::Str, "Comment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Comment), METADATA_PARAMS(NewProp_Comment_MetaData, ARRAY_COUNT(NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Subtitle cues.  If empty, use SpokenText as the subtitle.  Will often be empty,\nas the contents of the subtitle is commonly identical to what is spoken." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Array, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Subtitles), METADATA_PARAMS(NewProp_Subtitles_MetaData, ARRAY_COUNT(NewProp_Subtitles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawPCMDataSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Size of RawPCMData, or what RawPCMData would be if the sound was fully decompressed" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RawPCMDataSize = { UE4CodeGen_Private::EPropertyClass::Int, "RawPCMDataSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundWave, RawPCMDataSize), METADATA_PARAMS(NewProp_RawPCMDataSize_MetaData, ARRAY_COUNT(NewProp_RawPCMDataSize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelSizes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Sizes of the bulk data for the source wav data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelSizes = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundWave, ChannelSizes), METADATA_PARAMS(NewProp_ChannelSizes_MetaData, ARRAY_COUNT(NewProp_ChannelSizes_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ChannelSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelOffsets_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Offsets into the bulk data for the source wav data" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelOffsets = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelOffsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundWave, ChannelOffsets), METADATA_PARAMS(NewProp_ChannelOffsets_MetaData, ARRAY_COUNT(NewProp_ChannelOffsets_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelOffsets_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ChannelOffsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
				{ "Category", "Info" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Cached sample rate for displaying in the tools" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020001, 1, nullptr, STRUCT_OFFSET(USoundWave, SampleRate), METADATA_PARAMS(NewProp_SampleRate_MetaData, ARRAY_COUNT(NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[] = {
				{ "Category", "Info" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Number of channels of multichannel data; 1 or 2 for regular mono and stereo files" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "NumChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000020001, 1, nullptr, STRUCT_OFFSET(USoundWave, NumChannels), METADATA_PARAMS(NewProp_NumChannels_MetaData, ARRAY_COUNT(NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "Category", "Sound" },
				{ "ClampMax", "4.0" },
				{ "ClampMin", "0.125" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Playback pitch for sound." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Pitch), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
				{ "Category", "Sound" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Volume), METADATA_PARAMS(NewProp_Volume_MetaData, ARRAY_COUNT(NewProp_Volume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "The priority of the subtitle." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Float, "SubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SubtitlePriority), METADATA_PARAMS(NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenText = { UE4CodeGen_Private::EPropertyClass::Str, "SpokenText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SpokenText), METADATA_PARAMS(NewProp_SpokenText_MetaData, ARRAY_COUNT(NewProp_SpokenText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "SoundGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(NewProp_SoundGroup_MetaData, ARRAY_COUNT(NewProp_SoundGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualizeWhenSilent_MetaData[] = {
				{ "Category", "Sound" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Allows sound to play at 0 volume, otherwise will stop the sound when the sound is silent." },
			};
#endif
			auto NewProp_bVirtualizeWhenSilent_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bVirtualizeWhenSilent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualizeWhenSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bVirtualizeWhenSilent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVirtualizeWhenSilent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVirtualizeWhenSilent_MetaData, ARRAY_COUNT(NewProp_bVirtualizeWhenSilent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleLine_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "If set to true the subtitles display as a sequence of single lines as opposed to multiline." },
			};
#endif
			auto NewProp_bSingleLine_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bSingleLine = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleLine = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleLine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSingleLine_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSingleLine_MetaData, ARRAY_COUNT(NewProp_bSingleLine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualWordWrap_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually." },
			};
#endif
			auto NewProp_bManualWordWrap_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bManualWordWrap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualWordWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualWordWrap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bManualWordWrap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bManualWordWrap_MetaData, ARRAY_COUNT(NewProp_bManualWordWrap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[] = {
				{ "Category", "Subtitles" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "If set to true if this sound is considered to contain mature/adult content." },
			};
#endif
			auto NewProp_bMature_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bMature = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMature = { UE4CodeGen_Private::EPropertyClass::Bool, "bMature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMature_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMature_MetaData, ARRAY_COUNT(NewProp_bMature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingPriority_MetaData[] = {
				{ "Category", "Streaming" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Priority of this sound when streaming (lower priority streams may not always play)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingPriority = { UE4CodeGen_Private::EPropertyClass::Int, "StreamingPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, StreamingPriority), METADATA_PARAMS(NewProp_StreamingPriority_MetaData, ARRAY_COUNT(NewProp_StreamingPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[] = {
				{ "Category", "Streaming" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Whether this sound can be streamed to avoid increased memory usage" },
			};
#endif
			auto NewProp_bStreaming_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStreaming_MetaData, ARRAY_COUNT(NewProp_bStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "SoundWave" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping." },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((USoundWave*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
				{ "Category", "Compression" },
				{ "ClampMax", "100" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, CompressionQuality), METADATA_PARAMS(NewProp_CompressionQuality_MetaData, ARRAY_COUNT(NewProp_CompressionQuality_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCurves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Curves,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetImportData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFilePath,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalizedSubtitles_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Subtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Subtitles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RawPCMDataSize,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelSizes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelSizes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelOffsets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChannelOffsets_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubtitlePriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpokenText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVirtualizeWhenSilent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSingleLine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bManualWordWrap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressionQuality,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundWave>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundWave::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00901080u,
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
	IMPLEMENT_CLASS(USoundWave, 4127738452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWave(Z_Construct_UClass_USoundWave, &USoundWave::StaticClass, TEXT("/Script/Engine"), TEXT("USoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
