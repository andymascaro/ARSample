// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/IOSRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOSRuntimeSettings() {}
// Cross Module References
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard();
	UPackage* Z_Construct_UPackage__Script_IOSRuntimeSettings();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion();
	IOSRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock();
	IOSRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory();
	IOSRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath();
	IOSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UIOSRuntimeSettings_NoRegister();
	IOSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UIOSRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EIOSMetalShaderStandard_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSMetalShaderStandard"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSMetalShaderStandard(EIOSMetalShaderStandard_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSMetalShaderStandard"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard_CRC() { return 1246317884U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSMetalShaderStandard"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSMetalShaderStandard_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_1_0", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_1_0 },
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_1_1", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_1_1 },
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_1_2", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_1_2 },
				{ "EIOSMetalShaderStandard::IOSMetalSLStandard_2_0", (int64)EIOSMetalShaderStandard::IOSMetalSLStandard_2_0 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IOSMetalSLStandard_1_0.DisplayName", "Metal v1.0 (iOS 8.0/tvOS 9.0)" },
				{ "IOSMetalSLStandard_1_0.ToolTip", "Metal Shaders Compatible With iOS 8.0/tvOS 9.0 or later (std=ios-metal1.0)" },
				{ "IOSMetalSLStandard_1_1.DisplayName", "Metal v1.1 (iOS 9.0/tvOS 9.0)" },
				{ "IOSMetalSLStandard_1_1.ToolTip", "Metal Shaders Compatible With iOS 9.0/tvOS 9.0 or later (std=ios-metal1.1)" },
				{ "IOSMetalSLStandard_1_2.DisplayName", "Metal v1.2 (iOS 10.0/tvOS 10.0)" },
				{ "IOSMetalSLStandard_1_2.ToolTip", "Metal Shaders Compatible With iOS 10.0/tvOS 10.0 or later (std=ios-metal1.2)" },
				{ "IOSMetalSLStandard_2_0.DisplayName", "Metal v2.0 (iOS 11.0/tvOS 11.0)" },
				{ "IOSMetalSLStandard_2_0.ToolTip", "Metal Shaders Compatible With iOS 11.0/tvOS 11.0 or later (std=ios-metal2.0)" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EIOSMetalShaderStandard",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EIOSMetalShaderStandard",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EIOSVersion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EIOSVersion"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIOSVersion(EIOSVersion_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EIOSVersion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion_CRC() { return 2083567645U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIOSVersion"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIOSVersion::IOS_61", (int64)EIOSVersion::IOS_61 },
				{ "EIOSVersion::IOS_7", (int64)EIOSVersion::IOS_7 },
				{ "EIOSVersion::IOS_8", (int64)EIOSVersion::IOS_8 },
				{ "EIOSVersion::IOS_9", (int64)EIOSVersion::IOS_9 },
				{ "EIOSVersion::IOS_10", (int64)EIOSVersion::IOS_10 },
				{ "EIOSVersion::IOS_11", (int64)EIOSVersion::IOS_11 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IOS_10.DisplayName", "10.0" },
				{ "IOS_10.ToolTip", "iOS 10" },
				{ "IOS_11.DisplayName", "11.0" },
				{ "IOS_11.ToolTip", "iOS 11" },
				{ "IOS_61.Hidden", "" },
				{ "IOS_61.ToolTip", "iOS 6.1" },
				{ "IOS_7.Hidden", "" },
				{ "IOS_7.ToolTip", "iOS 7" },
				{ "IOS_8.Hidden", "" },
				{ "IOS_8.ToolTip", "iOS 8" },
				{ "IOS_9.DisplayName", "9.0" },
				{ "IOS_9.ToolTip", "iOS 9" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EIOSVersion",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EIOSVersion",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPowerUsageFrameRateLock_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("EPowerUsageFrameRateLock"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPowerUsageFrameRateLock(EPowerUsageFrameRateLock_StaticEnum, TEXT("/Script/IOSRuntimeSettings"), TEXT("EPowerUsageFrameRateLock"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock_CRC() { return 2474087246U; }
	UEnum* Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPowerUsageFrameRateLock"), 0, Get_Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPowerUsageFrameRateLock::PUFRL_None", (int64)EPowerUsageFrameRateLock::PUFRL_None },
				{ "EPowerUsageFrameRateLock::PUFRL_20", (int64)EPowerUsageFrameRateLock::PUFRL_20 },
				{ "EPowerUsageFrameRateLock::PUFRL_30", (int64)EPowerUsageFrameRateLock::PUFRL_30 },
				{ "EPowerUsageFrameRateLock::PUFRL_60", (int64)EPowerUsageFrameRateLock::PUFRL_60 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "PUFRL_20.DisplayName", "20 FPS" },
				{ "PUFRL_20.ToolTip", "Frame rate is limited to a maximum of 20 frames per second." },
				{ "PUFRL_30.DisplayName", "30 FPS" },
				{ "PUFRL_30.ToolTip", "Frame rate is limited to a maximum of 30 frames per second." },
				{ "PUFRL_60.DisplayName", "60 FPS" },
				{ "PUFRL_60.ToolTip", "Frame rate is limited to a maximum of 60 frames per second." },
				{ "PUFRL_None.DisplayName", "None" },
				{ "PUFRL_None.ToolTip", "Frame rate is not limited." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPowerUsageFrameRateLock",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPowerUsageFrameRateLock",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FIOSBuildResourceDirectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IOSRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSBuildResourceDirectory, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("IOSBuildResourceDirectory"), sizeof(FIOSBuildResourceDirectory), Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSBuildResourceDirectory(FIOSBuildResourceDirectory::StaticStruct, TEXT("/Script/IOSRuntimeSettings"), TEXT("IOSBuildResourceDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory
{
	FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSBuildResourceDirectory")),new UScriptStruct::TCppStructOps<FIOSBuildResourceDirectory>);
	}
} ScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceDirectory;
	UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceDirectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSBuildResourceDirectory"), sizeof(FIOSBuildResourceDirectory), Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "IOS Build resource file struct, used to serialize Directorys to the configs for use in the build system," },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSBuildResourceDirectory>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
				{ "Category", "Directory" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The path to the file." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FIOSBuildResourceDirectory, Path), METADATA_PARAMS(NewProp_Path_MetaData, ARRAY_COUNT(NewProp_Path_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IOSBuildResourceDirectory",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIOSBuildResourceDirectory),
				alignof(FIOSBuildResourceDirectory),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceDirectory_CRC() { return 827171183U; }
class UScriptStruct* FIOSBuildResourceFilePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IOSRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSBuildResourceFilePath, Z_Construct_UPackage__Script_IOSRuntimeSettings(), TEXT("IOSBuildResourceFilePath"), sizeof(FIOSBuildResourceFilePath), Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSBuildResourceFilePath(FIOSBuildResourceFilePath::StaticStruct, TEXT("/Script/IOSRuntimeSettings"), TEXT("IOSBuildResourceFilePath"), false, nullptr, nullptr);
static struct FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath
{
	FScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSBuildResourceFilePath")),new UScriptStruct::TCppStructOps<FIOSBuildResourceFilePath>);
	}
} ScriptStruct_IOSRuntimeSettings_StaticRegisterNativesFIOSBuildResourceFilePath;
	UScriptStruct* Z_Construct_UScriptStruct_FIOSBuildResourceFilePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_IOSRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSBuildResourceFilePath"), sizeof(FIOSBuildResourceFilePath), Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "IOS Build resource file struct, used to serialize filepaths to the configs for use in the build system," },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSBuildResourceFilePath>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
				{ "Category", "FilePath" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The path to the file." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FIOSBuildResourceFilePath, FilePath), METADATA_PARAMS(NewProp_FilePath_MetaData, ARRAY_COUNT(NewProp_FilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilePath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IOSBuildResourceFilePath",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIOSBuildResourceFilePath),
				alignof(FIOSBuildResourceFilePath),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSBuildResourceFilePath_CRC() { return 4293694207U; }
	void UIOSRuntimeSettings::StaticRegisterNativesUIOSRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UIOSRuntimeSettings_NoRegister()
	{
		return UIOSRuntimeSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UIOSRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_IOSRuntimeSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "IOSRuntimeSettings.h" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Implements the settings for the iOS target platform." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Windows." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin = { UE4CodeGen_Private::EPropertyClass::Str, "OcclusionPlugin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(NewProp_OcclusionPlugin_MetaData, ARRAY_COUNT(NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Which of the currently enabled reverb plugins to use on Windows." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin = { UE4CodeGen_Private::EPropertyClass::Str, "ReverbPlugin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, ReverbPlugin), METADATA_PARAMS(NewProp_ReverbPlugin_MetaData, ARRAY_COUNT(NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[] = {
				{ "Category", "Audio" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Windows." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin = { UE4CodeGen_Private::EPropertyClass::Str, "SpatializationPlugin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(NewProp_SpatializationPlugin_MetaData, ARRAY_COUNT(NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNumSourceWorkers_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Number of Source Workers" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNumSourceWorkers = { UE4CodeGen_Private::EPropertyClass::Int, "AudioNumSourceWorkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AudioNumSourceWorkers), METADATA_PARAMS(NewProp_AudioNumSourceWorkers_MetaData, ARRAY_COUNT(NewProp_AudioNumSourceWorkers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioMaxChannels_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Max Channels" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioMaxChannels = { UE4CodeGen_Private::EPropertyClass::Int, "AudioMaxChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AudioMaxChannels), METADATA_PARAMS(NewProp_AudioMaxChannels_MetaData, ARRAY_COUNT(NewProp_AudioMaxChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioNumBuffersToEnqueue_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMin", "1" },
				{ "DisplayName", "Number of Buffers To Enqueue" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms." },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioNumBuffersToEnqueue = { UE4CodeGen_Private::EPropertyClass::Int, "AudioNumBuffersToEnqueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AudioNumBuffersToEnqueue), METADATA_PARAMS(NewProp_AudioNumBuffersToEnqueue_MetaData, ARRAY_COUNT(NewProp_AudioNumBuffersToEnqueue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCallbackBufferFrameSize_MetaData[] = {
				{ "Category", "Audio" },
				{ "ClampMax", "4096" },
				{ "ClampMin", "512" },
				{ "DisplayName", "Callback Buffer Size" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioCallbackBufferFrameSize = { UE4CodeGen_Private::EPropertyClass::Int, "AudioCallbackBufferFrameSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AudioCallbackBufferFrameSize), METADATA_PARAMS(NewProp_AudioCallbackBufferFrameSize_MetaData, ARRAY_COUNT(NewProp_AudioCallbackBufferFrameSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[] = {
				{ "Category", "Audio" },
				{ "DisplayName", "Audio Mixer Sample Rate" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Sample rate to run the audio mixer with." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "AudioSampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AudioSampleRate), METADATA_PARAMS(NewProp_AudioSampleRate_MetaData, ARRAY_COUNT(NewProp_AudioSampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIntegratedKeyboard_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not the keyboard should be usable on it's own without a UITextField" },
			};
#endif
			auto NewProp_bUseIntegratedKeyboard_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bUseIntegratedKeyboard = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIntegratedKeyboard = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseIntegratedKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseIntegratedKeyboard_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseIntegratedKeyboard_MetaData, ARRAY_COUNT(NewProp_bUseIntegratedKeyboard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMathOptimisations_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "DisplayName", "Enable Fast-Math optimisations" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether to use of Metal shader-compiler's -ffast-math optimisations.\nFast-Math performs algebraic-equivalent & reassociative optimisations not permitted by the floating point arithmetic standard (IEEE-754).\nThese can improve shader performance at some cost to precision and can lead to NaN/INF propagation as they rely on\nshader inputs or variables not containing NaN/INF values. By default fast-math is enabled for performance." },
			};
#endif
			auto NewProp_EnableMathOptimisations_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->EnableMathOptimisations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMathOptimisations = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableMathOptimisations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableMathOptimisations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableMathOptimisations_MetaData, ARRAY_COUNT(NewProp_EnableMathOptimisations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFastIntrinsics_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "DisplayName", "Use Fast-Math intrinsics" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether to use the Metal shading language's \"fast\" intrinsics.\nFast intrinsics assume that no NaN or INF value will be provided as input,\nso are more efficient. However, they will produce undefined results if NaN/INF\nis present in the argument/s." },
			};
#endif
			auto NewProp_UseFastIntrinsics_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->UseFastIntrinsics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFastIntrinsics = { UE4CodeGen_Private::EPropertyClass::Bool, "UseFastIntrinsics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseFastIntrinsics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseFastIntrinsics_MetaData, ARRAY_COUNT(NewProp_UseFastIntrinsics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShaderLanguageVersion_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "DisplayName", "Max. Metal Shader Standard To Target" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The maximum supported Metal shader langauge version.\nThis defines what features may be used and OS versions supported." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxShaderLanguageVersion = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxShaderLanguageVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, MaxShaderLanguageVersion), nullptr, METADATA_PARAMS(NewProp_MaxShaderLanguageVersion_MetaData, ARRAY_COUNT(NewProp_MaxShaderLanguageVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticSigning_MetaData[] = {
				{ "Category", "Build" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether to use automatic signing through Xcode" },
			};
#endif
			auto NewProp_bAutomaticSigning_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bAutomaticSigning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticSigning = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticSigning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutomaticSigning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutomaticSigning_MetaData, ARRAY_COUNT(NewProp_bAutomaticSigning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SigningCertificate_MetaData[] = {
				{ "Category", "Build" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Signing certificate to utilize when signing" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SigningCertificate = { UE4CodeGen_Private::EPropertyClass::Str, "SigningCertificate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, SigningCertificate), METADATA_PARAMS(NewProp_SigningCertificate_MetaData, ARRAY_COUNT(NewProp_SigningCertificate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileProvision_MetaData[] = {
				{ "Category", "Build" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Mobile provision to utilize when signing" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MobileProvision = { UE4CodeGen_Private::EPropertyClass::Str, "MobileProvision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, MobileProvision), METADATA_PARAMS(NewProp_MobileProvision_MetaData, ARRAY_COUNT(NewProp_MobileProvision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookAppID_MetaData[] = {
				{ "Category", "Online" },
				{ "EditCondition", "bEnableFacebookSupport" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Facebook App ID obtained from Facebook's Developer Centre" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookAppID = { UE4CodeGen_Private::EPropertyClass::Str, "FacebookAppID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, FacebookAppID), METADATA_PARAMS(NewProp_FacebookAppID_MetaData, ARRAY_COUNT(NewProp_FacebookAppID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFacebookSupport_MetaData[] = {
				{ "Category", "Online" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether the app supports Facebook" },
			};
#endif
			auto NewProp_bEnableFacebookSupport_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bEnableFacebookSupport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFacebookSupport = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableFacebookSupport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableFacebookSupport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableFacebookSupport_MetaData, ARRAY_COUNT(NewProp_bEnableFacebookSupport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlistData_MetaData[] = {
				{ "Category", "ExtraData" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Any additional plist key/value data utilizing \\n for a new line" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalPlistData = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalPlistData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalPlistData), METADATA_PARAMS(NewProp_AdditionalPlistData_MetaData, ARRAY_COUNT(NewProp_AdditionalPlistData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsIPhone_MetaData[] = {
				{ "Category", "DeviceUsage" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to add support for iPhone devices" },
			};
#endif
			auto NewProp_bSupportsIPhone_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsIPhone = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsIPhone = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsIPhone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsIPhone_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsIPhone_MetaData, ARRAY_COUNT(NewProp_bSupportsIPhone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsIPad_MetaData[] = {
				{ "Category", "DeviceUsage" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to add support for iPad devices" },
			};
#endif
			auto NewProp_bSupportsIPad_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsIPad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsIPad = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsIPad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsIPad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsIPad_MetaData, ARRAY_COUNT(NewProp_bSupportsIPad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumiOSVersion_MetaData[] = {
				{ "Category", "OSInfo" },
				{ "DisplayName", "Minimum iOS Version" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Minimum iOS version this game supports" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinimumiOSVersion = { UE4CodeGen_Private::EPropertyClass::Enum, "MinimumiOSVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, MinimumiOSVersion), Z_Construct_UEnum_IOSRuntimeSettings_EIOSVersion, METADATA_PARAMS(NewProp_MinimumiOSVersion_MetaData, ARRAY_COUNT(NewProp_MinimumiOSVersion_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinimumiOSVersion_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRateLock_MetaData[] = {
				{ "Category", "PowerUsage" },
				{ "ConfigHierarchyEditable", "" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Set the maximum frame rate to save on power consumption" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameRateLock = { UE4CodeGen_Private::EPropertyClass::Enum, "FrameRateLock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, FrameRateLock), Z_Construct_UEnum_IOSRuntimeSettings_EPowerUsageFrameRateLock, METADATA_PARAMS(NewProp_FrameRateLock_MetaData, ARRAY_COUNT(NewProp_FrameRateLock_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameRateLock_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionInfo_MetaData[] = {
				{ "Category", "BundleInformation" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Specifies the version for the application." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_VersionInfo = { UE4CodeGen_Private::EPropertyClass::Str, "VersionInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, VersionInfo), METADATA_PARAMS(NewProp_VersionInfo_MetaData, ARRAY_COUNT(NewProp_VersionInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleIdentifier_MetaData[] = {
				{ "Category", "BundleInformation" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Specifies the bundle identifier for the application." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleIdentifier = { UE4CodeGen_Private::EPropertyClass::Str, "BundleIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, BundleIdentifier), METADATA_PARAMS(NewProp_BundleIdentifier_MetaData, ARRAY_COUNT(NewProp_BundleIdentifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleName_MetaData[] = {
				{ "Category", "BundleInformation" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Specifies the the name of the application bundle. This is the short name for the application bundle." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleName = { UE4CodeGen_Private::EPropertyClass::Str, "BundleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, BundleName), METADATA_PARAMS(NewProp_BundleName_MetaData, ARRAY_COUNT(NewProp_BundleName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleDisplayName_MetaData[] = {
				{ "Category", "BundleInformation" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Specifies the the display name for the application. This will be displayed under the icon on the device." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BundleDisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "BundleDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, BundleDisplayName), METADATA_PARAMS(NewProp_BundleDisplayName_MetaData, ARRAY_COUNT(NewProp_BundleDisplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsLandscapeRightOrientation_MetaData[] = {
				{ "Category", "DeviceOrientations" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Supports right landscape orientation. Portrait will not be supported." },
			};
#endif
			auto NewProp_bSupportsLandscapeRightOrientation_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsLandscapeRightOrientation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsLandscapeRightOrientation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsLandscapeRightOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsLandscapeRightOrientation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsLandscapeRightOrientation_MetaData, ARRAY_COUNT(NewProp_bSupportsLandscapeRightOrientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsLandscapeLeftOrientation_MetaData[] = {
				{ "Category", "DeviceOrientations" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Supports left landscape orientation. Portrait will not be supported." },
			};
#endif
			auto NewProp_bSupportsLandscapeLeftOrientation_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsLandscapeLeftOrientation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsLandscapeLeftOrientation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsLandscapeLeftOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsLandscapeLeftOrientation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsLandscapeLeftOrientation_MetaData, ARRAY_COUNT(NewProp_bSupportsLandscapeLeftOrientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsUpsideDownOrientation_MetaData[] = {
				{ "Category", "DeviceOrientations" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Supports upside down portrait orientation. Landscape will not be supported." },
			};
#endif
			auto NewProp_bSupportsUpsideDownOrientation_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsUpsideDownOrientation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsUpsideDownOrientation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsUpsideDownOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsUpsideDownOrientation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsUpsideDownOrientation_MetaData, ARRAY_COUNT(NewProp_bSupportsUpsideDownOrientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsPortraitOrientation_MetaData[] = {
				{ "Category", "DeviceOrientations" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Supports default portrait orientation. Landscape will not be supported." },
			};
#endif
			auto NewProp_bSupportsPortraitOrientation_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsPortraitOrientation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsPortraitOrientation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsPortraitOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsPortraitOrientation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsPortraitOrientation_MetaData, ARRAY_COUNT(NewProp_bSupportsPortraitOrientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteAbsoluteDpadValues_MetaData[] = {
				{ "Category", "Input" },
				{ "DisplayName", "Use AppleTV Remote absolute trackpad values" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "If checked, the center of the trackpad is 0,0 (center) for the virtual joystick. If unchecked, the location the user taps becomes 0,0" },
			};
#endif
			auto NewProp_bUseRemoteAbsoluteDpadValues_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bUseRemoteAbsoluteDpadValues = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteAbsoluteDpadValues = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRemoteAbsoluteDpadValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRemoteAbsoluteDpadValues_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRemoteAbsoluteDpadValues_MetaData, ARRAY_COUNT(NewProp_bUseRemoteAbsoluteDpadValues_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteAsVirtualJoystick_MetaData[] = {
				{ "Category", "Input" },
				{ "DisplayName", "Use AppleTV trackpad as virtual joystick" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "If checked, the trackpad is a virtual joystick (acts like the left stick of a controller). If unchecked, the trackpad will send touch events" },
			};
#endif
			auto NewProp_bUseRemoteAsVirtualJoystick_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bUseRemoteAsVirtualJoystick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteAsVirtualJoystick = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRemoteAsVirtualJoystick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRemoteAsVirtualJoystick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRemoteAsVirtualJoystick_MetaData, ARRAY_COUNT(NewProp_bUseRemoteAsVirtualJoystick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRemoteRotation_MetaData[] = {
				{ "Category", "Input" },
				{ "DisplayName", "Allow AppleTV Remote landscape mode" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "If checked, the Siri Remote can be rotated to landscape view" },
			};
#endif
			auto NewProp_bAllowRemoteRotation_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bAllowRemoteRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoteRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRemoteRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowRemoteRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowRemoteRotation_MetaData, ARRAY_COUNT(NewProp_bAllowRemoteRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatRemoteAsSeparateController_MetaData[] = {
				{ "Category", "Input" },
				{ "DisplayName", "Treat AppleTV Remote as separate controller" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "If checked, the Siri Remote will act as a separate controller Id from any connected controllers. If unchecked, the remote and the first connected controller will share an ID (and control the same player)" },
			};
#endif
			auto NewProp_bTreatRemoteAsSeparateController_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bTreatRemoteAsSeparateController = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatRemoteAsSeparateController = { UE4CodeGen_Private::EPropertyClass::Bool, "bTreatRemoteAsSeparateController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTreatRemoteAsSeparateController_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTreatRemoteAsSeparateController_MetaData, ARRAY_COUNT(NewProp_bTreatRemoteAsSeparateController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSHPrivateKeyOverridePath_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "DisplayName", "Override existing SSH permissions file" },
				{ "EditCondition", "bUseRSync" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The path of the ssh permissions key to be used when connecting to the remote server." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSHPrivateKeyOverridePath = { UE4CodeGen_Private::EPropertyClass::Struct, "SSHPrivateKeyOverridePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, SSHPrivateKeyOverridePath), Z_Construct_UScriptStruct_FIOSBuildResourceFilePath, METADATA_PARAMS(NewProp_SSHPrivateKeyOverridePath_MetaData, ARRAY_COUNT(NewProp_SSHPrivateKeyOverridePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSHPrivateKeyLocation_MetaData[] = {
				{ "Category", "Build" },
				{ "DisplayName", "Found Existing SSH permissions file" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The existing location of an SSH Key found by UE4." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSHPrivateKeyLocation = { UE4CodeGen_Private::EPropertyClass::Str, "SSHPrivateKeyLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, SSHPrivateKeyLocation), METADATA_PARAMS(NewProp_SSHPrivateKeyLocation_MetaData, ARRAY_COUNT(NewProp_SSHPrivateKeyLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaCopyInstallPath_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "EditCondition", "bUseRSync" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The install directory of DeltaCopy." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaCopyInstallPath = { UE4CodeGen_Private::EPropertyClass::Struct, "DeltaCopyInstallPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, DeltaCopyInstallPath), Z_Construct_UScriptStruct_FIOSBuildResourceDirectory, METADATA_PARAMS(NewProp_DeltaCopyInstallPath_MetaData, ARRAY_COUNT(NewProp_DeltaCopyInstallPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSyncUsername_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "DisplayName", "Username on Remote Server." },
				{ "EditCondition", "bUseRSync" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The mac users name which matches the SSH Private Key, for remote builds using RSync." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RSyncUsername = { UE4CodeGen_Private::EPropertyClass::Str, "RSyncUsername", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, RSyncUsername), METADATA_PARAMS(NewProp_RSyncUsername_MetaData, ARRAY_COUNT(NewProp_RSyncUsername_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRSync_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "DisplayName", "Use RSync for building IOS" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable the use of RSync for remote builds on a mac" },
			};
#endif
			auto NewProp_bUseRSync_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bUseRSync = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRSync = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRSync", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseRSync_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseRSync_MetaData, ARRAY_COUNT(NewProp_bUseRSync_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteServerName_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "The name or ip address of the remote mac which will be used to build IOS" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteServerName = { UE4CodeGen_Private::EPropertyClass::Str, "RemoteServerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, RemoteServerName), METADATA_PARAMS(NewProp_RemoteServerName_MetaData, ARRAY_COUNT(NewProp_RemoteServerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalShippingLinkerFlags_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "DisplayName", "Additional Shipping Linker Flags" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Any additional linker flags to pass to the linker in shipping builds" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalShippingLinkerFlags = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalShippingLinkerFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalShippingLinkerFlags), METADATA_PARAMS(NewProp_AdditionalShippingLinkerFlags_MetaData, ARRAY_COUNT(NewProp_AdditionalShippingLinkerFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalLinkerFlags_MetaData[] = {
				{ "Category", "Build" },
				{ "ConfigHierarchyEditable", "" },
				{ "DisplayName", "Additional Non-Shipping Linker Flags" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Any additional linker flags to pass to the linker in non-shipping builds" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalLinkerFlags = { UE4CodeGen_Private::EPropertyClass::Str, "AdditionalLinkerFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UIOSRuntimeSettings, AdditionalLinkerFlags), METADATA_PARAMS(NewProp_AdditionalLinkerFlags_MetaData, ARRAY_COUNT(NewProp_AdditionalLinkerFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForBitcode_MetaData[] = {
				{ "Category", "Build" },
				{ "DisplayName", "Support bitcode in Shipping" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable bitcode compiling?" },
			};
#endif
			auto NewProp_bShipForBitcode_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bShipForBitcode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForBitcode = { UE4CodeGen_Private::EPropertyClass::Bool, "bShipForBitcode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShipForBitcode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShipForBitcode_MetaData, ARRAY_COUNT(NewProp_bShipForBitcode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArmV7S_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable ArmV7s support?" },
			};
#endif
			auto NewProp_bShipForArmV7S_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bShipForArmV7S = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArmV7S = { UE4CodeGen_Private::EPropertyClass::Bool, "bShipForArmV7S", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShipForArmV7S_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShipForArmV7S_MetaData, ARRAY_COUNT(NewProp_bShipForArmV7S_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArm64_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable Arm64 support?" },
			};
#endif
			auto NewProp_bShipForArm64_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bShipForArm64 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArm64 = { UE4CodeGen_Private::EPropertyClass::Bool, "bShipForArm64", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShipForArm64_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShipForArm64_MetaData, ARRAY_COUNT(NewProp_bShipForArm64_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShipForArmV7_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable ArmV7 support? (this will be used if all type are unchecked)" },
			};
#endif
			auto NewProp_bShipForArmV7_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bShipForArmV7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShipForArmV7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bShipForArmV7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShipForArmV7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShipForArmV7_MetaData, ARRAY_COUNT(NewProp_bShipForArmV7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArmV7S_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable ArmV7s support?" },
			};
#endif
			auto NewProp_bDevForArmV7S_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bDevForArmV7S = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArmV7S = { UE4CodeGen_Private::EPropertyClass::Bool, "bDevForArmV7S", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDevForArmV7S_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDevForArmV7S_MetaData, ARRAY_COUNT(NewProp_bDevForArmV7S_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArm64_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable Arm64 support?" },
			};
#endif
			auto NewProp_bDevForArm64_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bDevForArm64 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArm64 = { UE4CodeGen_Private::EPropertyClass::Bool, "bDevForArm64", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDevForArm64_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDevForArm64_MetaData, ARRAY_COUNT(NewProp_bDevForArm64_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDevForArmV7_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable ArmV7 support? (this will be used if all type are unchecked)" },
			};
#endif
			auto NewProp_bDevForArmV7_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bDevForArmV7 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDevForArmV7 = { UE4CodeGen_Private::EPropertyClass::Bool, "bDevForArmV7", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDevForArmV7_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDevForArmV7_MetaData, ARRAY_COUNT(NewProp_bDevForArmV7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateXCArchive_MetaData[] = {
				{ "Category", "Build" },
				{ "DisplayName", "Generate xcode archive package" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable generation of xcode archive package" },
			};
#endif
			auto NewProp_bGenerateXCArchive_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bGenerateXCArchive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateXCArchive = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateXCArchive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateXCArchive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateXCArchive_MetaData, ARRAY_COUNT(NewProp_bGenerateXCArchive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedSYMBundle_MetaData[] = {
				{ "Category", "Build" },
				{ "DisplayName", "Generate dSYM bundle for third party crash tools" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable generation of dSYM bundle" },
			};
#endif
			auto NewProp_bGeneratedSYMBundle_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bGeneratedSYMBundle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedSYMBundle = { UE4CodeGen_Private::EPropertyClass::Bool, "bGeneratedSYMBundle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGeneratedSYMBundle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGeneratedSYMBundle_MetaData, ARRAY_COUNT(NewProp_bGeneratedSYMBundle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratedSYMFile_MetaData[] = {
				{ "Category", "Build" },
				{ "DisplayName", "Generate dSYM file for code debugging and profiling" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Enable generation of dSYM file" },
			};
#endif
			auto NewProp_bGeneratedSYMFile_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bGeneratedSYMFile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratedSYMFile = { UE4CodeGen_Private::EPropertyClass::Bool, "bGeneratedSYMFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGeneratedSYMFile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGeneratedSYMFile_MetaData, ARRAY_COUNT(NewProp_bGeneratedSYMFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableRemoteShaderCompile_MetaData[] = {
				{ "Category", "Build" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Remotely compile shaders offline" },
			};
#endif
			auto NewProp_EnableRemoteShaderCompile_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->EnableRemoteShaderCompile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableRemoteShaderCompile = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableRemoteShaderCompile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableRemoteShaderCompile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableRemoteShaderCompile_MetaData, ARRAY_COUNT(NewProp_EnableRemoteShaderCompile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsOpenGLES2_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to add support for OpenGL ES2 (if this is false, then your game should specify minimum IOS8 version)" },
			};
#endif
			auto NewProp_bSupportsOpenGLES2_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsOpenGLES2 = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsOpenGLES2 = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsOpenGLES2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsOpenGLES2_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsOpenGLES2_MetaData, ARRAY_COUNT(NewProp_bSupportsOpenGLES2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookASTCTextures_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Cook ASTC texture data for Metal on A8 or later devices" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to add support for ASTC textures" },
			};
#endif
			auto NewProp_bCookASTCTextures_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bCookASTCTextures = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookASTCTextures = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookASTCTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCookASTCTextures_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCookASTCTextures_MetaData, ARRAY_COUNT(NewProp_bCookASTCTextures_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookPVRTCTextures_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Cook PVRTC texture data for OpenGL ES or Metal on A7 and earlier devices" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to add support for PVRTC textures" },
			};
#endif
			auto NewProp_bCookPVRTCTextures_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bCookPVRTCTextures = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookPVRTCTextures = { UE4CodeGen_Private::EPropertyClass::Bool, "bCookPVRTCTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCookPVRTCTextures_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCookPVRTCTextures_MetaData, ARRAY_COUNT(NewProp_bCookPVRTCTextures_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMetalMRT_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Metal Desktop-Forward Renderer" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to compile iOS Metal shaders for the desktop Forward renderer (requires iOS 10+ and an A10 processor)" },
			};
#endif
			auto NewProp_bSupportsMetalMRT_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsMetalMRT = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMetalMRT = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsMetalMRT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsMetalMRT_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsMetalMRT_MetaData, ARRAY_COUNT(NewProp_bSupportsMetalMRT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsMetal_MetaData[] = {
				{ "Category", "Rendering" },
				{ "DisplayName", "Metal Mobile Renderer" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Whether or not to compile iOS Metal shaders for the Mobile renderer (requires iOS 8+ and an A7 processor)." },
			};
#endif
			auto NewProp_bSupportsMetal_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bSupportsMetal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsMetal = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsMetal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsMetal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsMetal_MetaData, ARRAY_COUNT(NewProp_bSupportsMetal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemoteNotificationsSupport_MetaData[] = {
				{ "Category", "Online" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Should push/remote notifications support (iOS Online Subsystem) be enabled?" },
			};
#endif
			auto NewProp_bEnableRemoteNotificationsSupport_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bEnableRemoteNotificationsSupport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemoteNotificationsSupport = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRemoteNotificationsSupport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableRemoteNotificationsSupport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableRemoteNotificationsSupport_MetaData, ARRAY_COUNT(NewProp_bEnableRemoteNotificationsSupport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCloudKitSupport_MetaData[] = {
				{ "Category", "Online" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Should Cloud Kit support (iOS Online Subsystem) be enabled?" },
			};
#endif
			auto NewProp_bEnableCloudKitSupport_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bEnableCloudKitSupport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCloudKitSupport = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCloudKitSupport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCloudKitSupport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCloudKitSupport_MetaData, ARRAY_COUNT(NewProp_bEnableCloudKitSupport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGameCenterSupport_MetaData[] = {
				{ "Category", "Online" },
				{ "ConfigHierarchyEditable", "" },
				{ "ModuleRelativePath", "Classes/IOSRuntimeSettings.h" },
				{ "ToolTip", "Should Game Center support (iOS Online Subsystem) be enabled?" },
			};
#endif
			auto NewProp_bEnableGameCenterSupport_SetBit = [](void* Obj){ ((UIOSRuntimeSettings*)Obj)->bEnableGameCenterSupport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGameCenterSupport = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableGameCenterSupport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UIOSRuntimeSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableGameCenterSupport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableGameCenterSupport_MetaData, ARRAY_COUNT(NewProp_bEnableGameCenterSupport_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OcclusionPlugin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReverbPlugin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpatializationPlugin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioNumSourceWorkers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioMaxChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioNumBuffersToEnqueue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioCallbackBufferFrameSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioSampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseIntegratedKeyboard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableMathOptimisations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseFastIntrinsics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxShaderLanguageVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutomaticSigning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SigningCertificate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileProvision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FacebookAppID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableFacebookSupport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalPlistData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsIPhone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsIPad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumiOSVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumiOSVersion_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRateLock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRateLock_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VersionInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BundleDisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsLandscapeRightOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsLandscapeLeftOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsUpsideDownOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsPortraitOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRemoteAbsoluteDpadValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRemoteAsVirtualJoystick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowRemoteRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTreatRemoteAsSeparateController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SSHPrivateKeyOverridePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SSHPrivateKeyLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaCopyInstallPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RSyncUsername,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseRSync,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemoteServerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalShippingLinkerFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalLinkerFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShipForBitcode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShipForArmV7S,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShipForArm64,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShipForArmV7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDevForArmV7S,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDevForArm64,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDevForArmV7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateXCArchive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGeneratedSYMBundle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGeneratedSYMFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableRemoteShaderCompile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsOpenGLES2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCookASTCTextures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCookPVRTCTextures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsMetalMRT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsMetal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableRemoteNotificationsSupport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCloudKitSupport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableGameCenterSupport,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UIOSRuntimeSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UIOSRuntimeSettings::StaticClass,
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
	IMPLEMENT_CLASS(UIOSRuntimeSettings, 2977053438);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIOSRuntimeSettings(Z_Construct_UClass_UIOSRuntimeSettings, &UIOSRuntimeSettings::StaticClass, TEXT("/Script/IOSRuntimeSettings"), TEXT("UIOSRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOSRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
