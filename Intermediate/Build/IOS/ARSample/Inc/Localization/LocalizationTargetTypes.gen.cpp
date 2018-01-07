// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LocalizationTargetTypes.h"
#include "Public/LocalizationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationTargetTypes() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy();
	UPackage* Z_Construct_UPackage__Script_Localization();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension();
	LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
	LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet();
// End Cross Module References
	static UEnum* ELocalizationTargetLoadingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetLoadingPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetLoadingPolicy(ELocalizationTargetLoadingPolicy_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetLoadingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_CRC() { return 602826555U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetLoadingPolicy"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetLoadingPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizationTargetLoadingPolicy::Never", (int64)ELocalizationTargetLoadingPolicy::Never },
				{ "ELocalizationTargetLoadingPolicy::Always", (int64)ELocalizationTargetLoadingPolicy::Always },
				{ "ELocalizationTargetLoadingPolicy::Editor", (int64)ELocalizationTargetLoadingPolicy::Editor },
				{ "ELocalizationTargetLoadingPolicy::Game", (int64)ELocalizationTargetLoadingPolicy::Game },
				{ "ELocalizationTargetLoadingPolicy::PropertyNames", (int64)ELocalizationTargetLoadingPolicy::PropertyNames },
				{ "ELocalizationTargetLoadingPolicy::ToolTips", (int64)ELocalizationTargetLoadingPolicy::ToolTips },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.ToolTip", "This target's localization data will always be loaded automatically." },
				{ "Editor.ToolTip", "This target's localization data will only be loaded when running the editor. Use if this target localizes the editor." },
				{ "Game.ToolTip", "This target's localization data will only be loaded when running the game. Use if this target localizes your game." },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "Never.ToolTip", "This target's localization data will never be loaded automatically." },
				{ "PropertyNames.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized property names." },
				{ "ToolTips.ToolTip", "This target's localization data will only be loaded if the editor is displaying localized tool tips." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocalizationTargetLoadingPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELocalizationTargetLoadingPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELocalizationTargetConflictStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizationTargetConflictStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocalizationTargetConflictStatus(ELocalizationTargetConflictStatus_StaticEnum, TEXT("/Script/Localization"), TEXT("ELocalizationTargetConflictStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_CRC() { return 1184334625U; }
	UEnum* Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocalizationTargetConflictStatus"), 0, Get_Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELocalizationTargetConflictStatus::Unknown", (int64)ELocalizationTargetConflictStatus::Unknown },
				{ "ELocalizationTargetConflictStatus::ConflictsPresent", (int64)ELocalizationTargetConflictStatus::ConflictsPresent },
				{ "ELocalizationTargetConflictStatus::Clear", (int64)ELocalizationTargetConflictStatus::Clear },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Clear.ToolTip", "The localization target is clear of conflicts." },
				{ "ConflictsPresent.ToolTip", "The are outstanding conflicts present in this localization target." },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "Unknown.ToolTip", "The status of conflicts in this localization target could not be determined." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Localization,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocalizationTargetConflictStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELocalizationTargetConflictStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLocalizationTargetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationTargetSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationTargetSettings(FLocalizationTargetSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationTargetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationTargetSettings")),new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationTargetSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationTargetSettings"), sizeof(FLocalizationTargetSettings), Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationTargetSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedCulturesStatistics_MetaData[] = {
				{ "Category", "Cultures" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Cultures for which the source text is being localized for." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedCulturesStatistics = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedCulturesStatistics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, SupportedCulturesStatistics), METADATA_PARAMS(NewProp_SupportedCulturesStatistics_MetaData, ARRAY_COUNT(NewProp_SupportedCulturesStatistics_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedCulturesStatistics_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedCulturesStatistics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCultureStatistics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeCultureIndex_MetaData[] = {
				{ "Category", "Cultures" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The index of the native culture among the supported cultures." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NativeCultureIndex = { UE4CodeGen_Private::EPropertyClass::Int, "NativeCultureIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, NativeCultureIndex), METADATA_PARAMS(NewProp_NativeCultureIndex_MetaData, ARRAY_COUNT(NewProp_NativeCultureIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportDialogueSettings_MetaData[] = {
				{ "Category", "Import Dialogue" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Settings for importing dialogue from WAV files." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportDialogueSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportDialogueSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, ImportDialogueSettings), Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, METADATA_PARAMS(NewProp_ImportDialogueSettings_MetaData, ARRAY_COUNT(NewProp_ImportDialogueSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileSettings_MetaData[] = {
				{ "Category", "Compile Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Settings for compiling translations." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompileSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "CompileSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, CompileSettings), Z_Construct_UScriptStruct_FLocalizationCompilationSettings, METADATA_PARAMS(NewProp_CompileSettings_MetaData, ARRAY_COUNT(NewProp_CompileSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportSettings_MetaData[] = {
				{ "Category", "Export Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Settings for exporting translations." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExportSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "ExportSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, ExportSettings), Z_Construct_UScriptStruct_FLocalizationExportingSettings, METADATA_PARAMS(NewProp_ExportSettings_MetaData, ARRAY_COUNT(NewProp_ExportSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromMetaData_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Parameters for defining what text is gathered from metadata and how." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromMetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "GatherFromMetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromMetaData), Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, METADATA_PARAMS(NewProp_GatherFromMetaData_MetaData, ARRAY_COUNT(NewProp_GatherFromMetaData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromPackages_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Parameters for defining what text is gathered from packages and how." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromPackages = { UE4CodeGen_Private::EPropertyClass::Struct, "GatherFromPackages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromPackages), Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, METADATA_PARAMS(NewProp_GatherFromPackages_MetaData, ARRAY_COUNT(NewProp_GatherFromPackages_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GatherFromTextFiles_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Parameters for defining what text is gathered from text files and how." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GatherFromTextFiles = { UE4CodeGen_Private::EPropertyClass::Struct, "GatherFromTextFiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, GatherFromTextFiles), Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, METADATA_PARAMS(NewProp_GatherFromTextFiles_MetaData, ARRAY_COUNT(NewProp_GatherFromTextFiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredModuleNames_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The names of modules which must be loaded when gathering text. Use to gather from packages or metadata sourced from a module that isn't the primary game module." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredModuleNames = { UE4CodeGen_Private::EPropertyClass::Array, "RequiredModuleNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, RequiredModuleNames), METADATA_PARAMS(NewProp_RequiredModuleNames_MetaData, ARRAY_COUNT(NewProp_RequiredModuleNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequiredModuleNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RequiredModuleNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalManifestDependencies_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "FilePathFilter", "manifest" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Text present in these manifests will not be duplicated in this target." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalManifestDependencies = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalManifestDependencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, AdditionalManifestDependencies), METADATA_PARAMS(NewProp_AdditionalManifestDependencies_MetaData, ARRAY_COUNT(NewProp_AdditionalManifestDependencies_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalManifestDependencies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AdditionalManifestDependencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDependencies_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Text present in these targets will not be duplicated in this target." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetDependencies = { UE4CodeGen_Private::EPropertyClass::Array, "TargetDependencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, TargetDependencies), METADATA_PARAMS(NewProp_TargetDependencies_MetaData, ARRAY_COUNT(NewProp_TargetDependencies_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDependencies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetDependencies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConflictStatus_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Whether the target has outstanding conflicts that require resolution." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConflictStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "ConflictStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, ConflictStatus), Z_Construct_UEnum_Localization_ELocalizationTargetConflictStatus, METADATA_PARAMS(NewProp_ConflictStatus_MetaData, ARRAY_COUNT(NewProp_ConflictStatus_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConflictStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Unique name for the target." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationTargetSettings, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedCulturesStatistics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SupportedCulturesStatistics_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NativeCultureIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportDialogueSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompileSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GatherFromMetaData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GatherFromPackages,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GatherFromTextFiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredModuleNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredModuleNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalManifestDependencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalManifestDependencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDependencies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetDependencies_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConflictStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConflictStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocalizationTargetSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocalizationTargetSettings),
				alignof(FLocalizationTargetSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationTargetSettings_CRC() { return 3684566137U; }
class UScriptStruct* FCultureStatistics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCultureStatistics, Z_Construct_UPackage__Script_Localization(), TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCultureStatistics(FCultureStatistics::StaticStruct, TEXT("/Script/Localization"), TEXT("CultureStatistics"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics
{
	FScriptStruct_Localization_StaticRegisterNativesFCultureStatistics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CultureStatistics")),new UScriptStruct::TCppStructOps<FCultureStatistics>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFCultureStatistics;
	UScriptStruct* Z_Construct_UScriptStruct_FCultureStatistics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CultureStatistics"), sizeof(FCultureStatistics), Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCultureStatistics>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WordCount_MetaData[] = {
				{ "Category", "Statistics" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The estimated number of words that have been localized for this culture." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_WordCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "WordCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002001, 1, nullptr, STRUCT_OFFSET(FCultureStatistics, WordCount), METADATA_PARAMS(NewProp_WordCount_MetaData, ARRAY_COUNT(NewProp_WordCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[] = {
				{ "Category", "Culture" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The ISO name for this culture." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CultureName = { UE4CodeGen_Private::EPropertyClass::Str, "CultureName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FCultureStatistics, CultureName), METADATA_PARAMS(NewProp_CultureName_MetaData, ARRAY_COUNT(NewProp_CultureName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WordCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CultureName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CultureStatistics",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCultureStatistics),
				alignof(FCultureStatistics),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCultureStatistics_CRC() { return 3103642199U; }
class UScriptStruct* FLocalizationImportDialogueSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationImportDialogueSettings(FLocalizationImportDialogueSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationImportDialogueSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationImportDialogueSettings")),new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationImportDialogueSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationImportDialogueSettings"), sizeof(FLocalizationImportDialogueSettings), Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationImportDialogueSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportNativeAsSource_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Should the dialogue for the native culture be imported as if it were source audio? If false, the native culture dialogue will be imported as localized data for the native culture." },
			};
#endif
			auto NewProp_bImportNativeAsSource_SetBit = [](void* Obj){ ((FLocalizationImportDialogueSettings*)Obj)->bImportNativeAsSource = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportNativeAsSource = { UE4CodeGen_Private::EPropertyClass::Bool, "bImportNativeAsSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLocalizationImportDialogueSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bImportNativeAsSource_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bImportNativeAsSource_MetaData, ARRAY_COUNT(NewProp_bImportNativeAsSource_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedDialogueFolder_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Folder in which to create the generated sound waves. This is relative to the root of the L10N culture folder (or the root content folder if importing native dialogue as source dialogue)." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportedDialogueFolder = { UE4CodeGen_Private::EPropertyClass::Str, "ImportedDialogueFolder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationImportDialogueSettings, ImportedDialogueFolder), METADATA_PARAMS(NewProp_ImportedDialogueFolder_MetaData, ARRAY_COUNT(NewProp_ImportedDialogueFolder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawAudioPath_MetaData[] = {
				{ "Category", "Dialogue" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Path to the folder to import the audio from. This folder is expected to contain culture sub-folders, which in turn contain the raw WAV files to import." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawAudioPath = { UE4CodeGen_Private::EPropertyClass::Struct, "RawAudioPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationImportDialogueSettings, RawAudioPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_RawAudioPath_MetaData, ARRAY_COUNT(NewProp_RawAudioPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bImportNativeAsSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedDialogueFolder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RawAudioPath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocalizationImportDialogueSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocalizationImportDialogueSettings),
				alignof(FLocalizationImportDialogueSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings_CRC() { return 1965159059U; }
class UScriptStruct* FLocalizationCompilationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationCompilationSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationCompilationSettings(FLocalizationCompilationSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationCompilationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationCompilationSettings")),new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationCompilationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationCompilationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationCompilationSettings"), sizeof(FLocalizationCompilationSettings), Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationCompilationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipSourceCheck_MetaData[] = {
				{ "Category", "Source" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Should we skip the source check when compiling translations? This will allow translations whose source no longer matches the active source to still be used by the game at runtime." },
			};
#endif
			auto NewProp_SkipSourceCheck_SetBit = [](void* Obj){ ((FLocalizationCompilationSettings*)Obj)->SkipSourceCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipSourceCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "SkipSourceCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLocalizationCompilationSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SkipSourceCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SkipSourceCheck_MetaData, ARRAY_COUNT(NewProp_SkipSourceCheck_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkipSourceCheck,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocalizationCompilationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocalizationCompilationSettings),
				alignof(FLocalizationCompilationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationCompilationSettings_CRC() { return 2550970327U; }
class UScriptStruct* FLocalizationExportingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationExportingSettings, Z_Construct_UPackage__Script_Localization(), TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationExportingSettings(FLocalizationExportingSettings::StaticStruct, TEXT("/Script/Localization"), TEXT("LocalizationExportingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings
{
	FScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizationExportingSettings")),new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFLocalizationExportingSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationExportingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationExportingSettings"), sizeof(FLocalizationExportingSettings), Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationExportingSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldAddSourceLocationsAsComments_MetaData[] = {
				{ "Category", "Comments" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location." },
			};
#endif
			auto NewProp_ShouldAddSourceLocationsAsComments_SetBit = [](void* Obj){ ((FLocalizationExportingSettings*)Obj)->ShouldAddSourceLocationsAsComments = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldAddSourceLocationsAsComments = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldAddSourceLocationsAsComments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLocalizationExportingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldAddSourceLocationsAsComments_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldAddSourceLocationsAsComments_MetaData, ARRAY_COUNT(NewProp_ShouldAddSourceLocationsAsComments_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldPersistCommentsOnExport_MetaData[] = {
				{ "Category", "Comments" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields." },
			};
#endif
			auto NewProp_ShouldPersistCommentsOnExport_SetBit = [](void* Obj){ ((FLocalizationExportingSettings*)Obj)->ShouldPersistCommentsOnExport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldPersistCommentsOnExport = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldPersistCommentsOnExport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLocalizationExportingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldPersistCommentsOnExport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldPersistCommentsOnExport_MetaData, ARRAY_COUNT(NewProp_ShouldPersistCommentsOnExport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapseMode_MetaData[] = {
				{ "Category", "Collapsing" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "How should we collapse down text when exporting to PO?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollapseMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CollapseMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLocalizationExportingSettings, CollapseMode), Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, METADATA_PARAMS(NewProp_CollapseMode_MetaData, ARRAY_COUNT(NewProp_CollapseMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollapseMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldAddSourceLocationsAsComments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldPersistCommentsOnExport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollapseMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollapseMode_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocalizationExportingSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocalizationExportingSettings),
				alignof(FLocalizationExportingSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationExportingSettings_CRC() { return 3694664854U; }
class UScriptStruct* FGatherTextFromMetaDataConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromMetaDataConfiguration(FGatherTextFromMetaDataConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromMetaDataConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromMetaDataConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromMetaDataConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromMetaDataConfiguration"), sizeof(FGatherTextFromMetaDataConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromMetaDataConfiguration>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
			};
#endif
			auto NewProp_ShouldGatherFromEditorOnlyData_SetBit = [](void* Obj){ ((FGatherTextFromMetaDataConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldGatherFromEditorOnlyData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromMetaDataConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldGatherFromEditorOnlyData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySpecifications_MetaData[] = {
				{ "Category", "MetaData" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Specifications for how to gather text from specific metadata keys." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeySpecifications = { UE4CodeGen_Private::EPropertyClass::Array, "KeySpecifications", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, KeySpecifications), METADATA_PARAMS(NewProp_KeySpecifications_MetaData, ARRAY_COUNT(NewProp_KeySpecifications_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeySpecifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeySpecifications", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns will be excluded from gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, ExcludePathWildcards), METADATA_PARAMS(NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Metadata from source files whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards = { UE4CodeGen_Private::EPropertyClass::Array, "IncludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromMetaDataConfiguration, IncludePathWildcards), METADATA_PARAMS(NewProp_IncludePathWildcards_MetaData, ARRAY_COUNT(NewProp_IncludePathWildcards_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IncludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
				{ "Category", "Execution" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, metadata will be gathered according to this configuration." },
			};
#endif
			auto NewProp_IsEnabled_SetBit = [](void* Obj){ ((FGatherTextFromMetaDataConfiguration*)Obj)->IsEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromMetaDataConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsEnabled_MetaData, ARRAY_COUNT(NewProp_IsEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldGatherFromEditorOnlyData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeySpecifications,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeySpecifications_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludePathWildcards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludePathWildcards_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsEnabled,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextFromMetaDataConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextFromMetaDataConfiguration),
				alignof(FGatherTextFromMetaDataConfiguration),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration_CRC() { return 2556515931U; }
class UScriptStruct* FMetaDataKeyGatherSpecification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyGatherSpecification(FMetaDataKeyGatherSpecification::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyGatherSpecification"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyGatherSpecification")),new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyGatherSpecification;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyGatherSpecification"), sizeof(FMetaDataKeyGatherSpecification), Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyGatherSpecification>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextKeyPattern_MetaData[] = {
				{ "Category", "Output" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The pattern which will be formatted to form the localization key for the metadata value gathered as text.\n      Placeholder - Description\n      {FieldPath} - The fully qualified name of the object upon which the metadata resides.\n      {MetaDataValue} - The value associated with the metadata key." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextKeyPattern = { UE4CodeGen_Private::EPropertyClass::Struct, "TextKeyPattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextKeyPattern), Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, METADATA_PARAMS(NewProp_TextKeyPattern_MetaData, ARRAY_COUNT(NewProp_TextKeyPattern_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextNamespace_MetaData[] = {
				{ "Category", "Output" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The localization namespace in which the gathered text will be output." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextNamespace = { UE4CodeGen_Private::EPropertyClass::Str, "TextNamespace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, TextNamespace), METADATA_PARAMS(NewProp_TextNamespace_MetaData, ARRAY_COUNT(NewProp_TextNamespace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The metadata key for which values will be gathered as text." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataKey = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaDataKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMetaDataKeyGatherSpecification, MetaDataKey), Z_Construct_UScriptStruct_FMetaDataKeyName, METADATA_PARAMS(NewProp_MetaDataKey_MetaData, ARRAY_COUNT(NewProp_MetaDataKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextKeyPattern,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextNamespace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaDataKey,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MetaDataKeyGatherSpecification",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMetaDataKeyGatherSpecification),
				alignof(FMetaDataKeyGatherSpecification),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification_CRC() { return 1698494627U; }
class UScriptStruct* FMetaDataKeyName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyName, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataKeyName(FMetaDataKeyName::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataKeyName"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataKeyName")),new UScriptStruct::TCppStructOps<FMetaDataKeyName>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataKeyName;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataKeyName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataKeyName"), sizeof(FMetaDataKeyName), Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataKeyName>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Name" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMetaDataKeyName, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MetaDataKeyName",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMetaDataKeyName),
				alignof(FMetaDataKeyName),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataKeyName_CRC() { return 2956674996U; }
class UScriptStruct* FMetaDataTextKeyPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataTextKeyPattern, Z_Construct_UPackage__Script_Localization(), TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMetaDataTextKeyPattern(FMetaDataTextKeyPattern::StaticStruct, TEXT("/Script/Localization"), TEXT("MetaDataTextKeyPattern"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern
{
	FScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MetaDataTextKeyPattern")),new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFMetaDataTextKeyPattern;
	UScriptStruct* Z_Construct_UScriptStruct_FMetaDataTextKeyPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MetaDataTextKeyPattern"), sizeof(FMetaDataTextKeyPattern), Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaDataTextKeyPattern>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
				{ "Category", "Pattern" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern = { UE4CodeGen_Private::EPropertyClass::Str, "Pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMetaDataTextKeyPattern, Pattern), METADATA_PARAMS(NewProp_Pattern_MetaData, ARRAY_COUNT(NewProp_Pattern_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pattern,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MetaDataTextKeyPattern",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMetaDataTextKeyPattern),
				alignof(FMetaDataTextKeyPattern),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMetaDataTextKeyPattern_CRC() { return 3203766896U; }
class UScriptStruct* FGatherTextFromPackagesConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromPackagesConfiguration(FGatherTextFromPackagesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromPackagesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromPackagesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromPackagesConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromPackagesConfiguration"), sizeof(FGatherTextFromPackagesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromPackagesConfiguration>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipGatherCache_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Should we ignore the cached text in the package header and perform a full package load instead?" },
			};
#endif
			auto NewProp_SkipGatherCache_SetBit = [](void* Obj){ ((FGatherTextFromPackagesConfiguration*)Obj)->SkipGatherCache = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipGatherCache = { UE4CodeGen_Private::EPropertyClass::Bool, "SkipGatherCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromPackagesConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SkipGatherCache_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SkipGatherCache_MetaData, ARRAY_COUNT(NewProp_SkipGatherCache_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
				{ "Category", "Gather Text" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
			};
#endif
			auto NewProp_ShouldGatherFromEditorOnlyData_SetBit = [](void* Obj){ ((FGatherTextFromPackagesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldGatherFromEditorOnlyData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromPackagesConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldGatherFromEditorOnlyData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Packages in these collections may be processed for gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Collections = { UE4CodeGen_Private::EPropertyClass::Array, "Collections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, Collections), METADATA_PARAMS(NewProp_Collections_MetaData, ARRAY_COUNT(NewProp_Collections_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Collections_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Collections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Packages whose names match these wildcard patterns may be processed for text to gather." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileExtensions = { UE4CodeGen_Private::EPropertyClass::Array, "FileExtensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, FileExtensions), METADATA_PARAMS(NewProp_FileExtensions_MetaData, ARRAY_COUNT(NewProp_FileExtensions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileExtensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Packages whose paths match these wildcard patterns will be excluded from gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, ExcludePathWildcards), METADATA_PARAMS(NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludePathWildcards_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IncludePathWildcards = { UE4CodeGen_Private::EPropertyClass::Array, "IncludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromPackagesConfiguration, IncludePathWildcards), METADATA_PARAMS(NewProp_IncludePathWildcards_MetaData, ARRAY_COUNT(NewProp_IncludePathWildcards_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludePathWildcards_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "IncludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextIncludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
				{ "Category", "Execution" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, text from packages will be gathered according to this configuration." },
			};
#endif
			auto NewProp_IsEnabled_SetBit = [](void* Obj){ ((FGatherTextFromPackagesConfiguration*)Obj)->IsEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromPackagesConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsEnabled_MetaData, ARRAY_COUNT(NewProp_IsEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkipGatherCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldGatherFromEditorOnlyData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Collections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileExtensions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileExtensions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludePathWildcards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IncludePathWildcards_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsEnabled,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextFromPackagesConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextFromPackagesConfiguration),
				alignof(FGatherTextFromPackagesConfiguration),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration_CRC() { return 1773409441U; }
class UScriptStruct* FGatherTextFromTextFilesConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFromTextFilesConfiguration(FGatherTextFromTextFilesConfiguration::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFromTextFilesConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFromTextFilesConfiguration")),new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFromTextFilesConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFromTextFilesConfiguration"), sizeof(FGatherTextFromTextFilesConfiguration), Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFromTextFilesConfiguration>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldGatherFromEditorOnlyData_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, data that is specified as editor-only may be processed for gathering." },
			};
#endif
			auto NewProp_ShouldGatherFromEditorOnlyData_SetBit = [](void* Obj){ ((FGatherTextFromTextFilesConfiguration*)Obj)->ShouldGatherFromEditorOnlyData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldGatherFromEditorOnlyData = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldGatherFromEditorOnlyData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromTextFilesConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShouldGatherFromEditorOnlyData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShouldGatherFromEditorOnlyData_MetaData, ARRAY_COUNT(NewProp_ShouldGatherFromEditorOnlyData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileExtensions_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Text files whose names match these wildcard patterns may be parsed for text to gather." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileExtensions = { UE4CodeGen_Private::EPropertyClass::Array, "FileExtensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, FileExtensions), METADATA_PARAMS(NewProp_FileExtensions_MetaData, ARRAY_COUNT(NewProp_FileExtensions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileExtensions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileExtensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextFileExtension, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludePathWildcards_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "Text files whose paths match these wildcard patterns will be excluded from gathering." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludePathWildcards = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, ExcludePathWildcards), METADATA_PARAMS(NewProp_ExcludePathWildcards_MetaData, ARRAY_COUNT(NewProp_ExcludePathWildcards_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludePathWildcards_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExcludePathWildcards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextExcludePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchDirectories_MetaData[] = {
				{ "Category", "Filter" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "The paths of directories to be searched recursively for text files, specified relative to the project's root, which may be parsed for text to gather." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SearchDirectories = { UE4CodeGen_Private::EPropertyClass::Array, "SearchDirectories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFromTextFilesConfiguration, SearchDirectories), METADATA_PARAMS(NewProp_SearchDirectories_MetaData, ARRAY_COUNT(NewProp_SearchDirectories_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchDirectories_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchDirectories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGatherTextSearchDirectory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[] = {
				{ "Category", "Execution" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ToolTip", "If enabled, text from text files will be gathered according to this configuration." },
			};
#endif
			auto NewProp_IsEnabled_SetBit = [](void* Obj){ ((FGatherTextFromTextFilesConfiguration*)Obj)->IsEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "IsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGatherTextFromTextFilesConfiguration), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsEnabled_MetaData, ARRAY_COUNT(NewProp_IsEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShouldGatherFromEditorOnlyData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileExtensions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileExtensions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExcludePathWildcards_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchDirectories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SearchDirectories_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsEnabled,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextFromTextFilesConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextFromTextFilesConfiguration),
				alignof(FGatherTextFromTextFilesConfiguration),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration_CRC() { return 871595962U; }
class UScriptStruct* FGatherTextFileExtension::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFileExtension, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextFileExtension(FGatherTextFileExtension::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextFileExtension"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextFileExtension")),new UScriptStruct::TCppStructOps<FGatherTextFileExtension>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextFileExtension;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextFileExtension()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextFileExtension"), sizeof(FGatherTextFileExtension), Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextFileExtension>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
				{ "Category", "Pattern" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern = { UE4CodeGen_Private::EPropertyClass::Str, "Pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextFileExtension, Pattern), METADATA_PARAMS(NewProp_Pattern_MetaData, ARRAY_COUNT(NewProp_Pattern_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pattern,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextFileExtension",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextFileExtension),
				alignof(FGatherTextFileExtension),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextFileExtension_CRC() { return 1765112418U; }
class UScriptStruct* FGatherTextExcludePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextExcludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextExcludePath(FGatherTextExcludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextExcludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextExcludePath")),new UScriptStruct::TCppStructOps<FGatherTextExcludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextExcludePath;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextExcludePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextExcludePath"), sizeof(FGatherTextExcludePath), Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextExcludePath>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
				{ "Category", "Pattern" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern = { UE4CodeGen_Private::EPropertyClass::Str, "Pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextExcludePath, Pattern), METADATA_PARAMS(NewProp_Pattern_MetaData, ARRAY_COUNT(NewProp_Pattern_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pattern,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextExcludePath",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextExcludePath),
				alignof(FGatherTextExcludePath),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextExcludePath_CRC() { return 1627481390U; }
class UScriptStruct* FGatherTextIncludePath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextIncludePath, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextIncludePath(FGatherTextIncludePath::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextIncludePath"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextIncludePath")),new UScriptStruct::TCppStructOps<FGatherTextIncludePath>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextIncludePath;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextIncludePath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextIncludePath"), sizeof(FGatherTextIncludePath), Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextIncludePath>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
				{ "Category", "Pattern" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pattern = { UE4CodeGen_Private::EPropertyClass::Str, "Pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextIncludePath, Pattern), METADATA_PARAMS(NewProp_Pattern_MetaData, ARRAY_COUNT(NewProp_Pattern_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pattern,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextIncludePath",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextIncludePath),
				alignof(FGatherTextIncludePath),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextIncludePath_CRC() { return 217647451U; }
class UScriptStruct* FGatherTextSearchDirectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOCALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextSearchDirectory, Z_Construct_UPackage__Script_Localization(), TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGatherTextSearchDirectory(FGatherTextSearchDirectory::StaticStruct, TEXT("/Script/Localization"), TEXT("GatherTextSearchDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory
{
	FScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GatherTextSearchDirectory")),new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>);
	}
} ScriptStruct_Localization_StaticRegisterNativesFGatherTextSearchDirectory;
	UScriptStruct* Z_Construct_UScriptStruct_FGatherTextSearchDirectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Localization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GatherTextSearchDirectory"), sizeof(FGatherTextSearchDirectory), Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGatherTextSearchDirectory>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
				{ "Category", "Path" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FGatherTextSearchDirectory, Path), METADATA_PARAMS(NewProp_Path_MetaData, ARRAY_COUNT(NewProp_Path_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GatherTextSearchDirectory",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGatherTextSearchDirectory),
				alignof(FGatherTextSearchDirectory),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGatherTextSearchDirectory_CRC() { return 3421698930U; }
	void ULocalizationTarget::StaticRegisterNativesULocalizationTarget()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTarget_NoRegister()
	{
		return ULocalizationTarget::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizationTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LocalizationTargetTypes.h" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "Target" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
				{ "ShowOnlyInnerProperties", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULocalizationTarget, Settings), Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULocalizationTarget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULocalizationTarget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(ULocalizationTarget, 3275692338);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTarget(Z_Construct_UClass_ULocalizationTarget, &ULocalizationTarget::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTarget);
	void ULocalizationTargetSet::StaticRegisterNativesULocalizationTargetSet()
	{
	}
	UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister()
	{
		return ULocalizationTargetSet::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalizationTargetSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Localization,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LocalizationTargetTypes.h" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjects_MetaData[] = {
				{ "Category", "Targets" },
				{ "ModuleRelativePath", "Public/LocalizationTargetTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetObjects = { UE4CodeGen_Private::EPropertyClass::Array, "TargetObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULocalizationTargetSet, TargetObjects), METADATA_PARAMS(NewProp_TargetObjects_MetaData, ARRAY_COUNT(NewProp_TargetObjects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TargetObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULocalizationTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetObjects_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULocalizationTargetSet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULocalizationTargetSet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(ULocalizationTargetSet, 266519467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalizationTargetSet(Z_Construct_UClass_ULocalizationTargetSet, &ULocalizationTargetSet::StaticClass, TEXT("/Script/Localization"), TEXT("ULocalizationTargetSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationTargetSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
