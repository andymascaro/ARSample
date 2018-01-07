// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tests/AutomationTestSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FLaunchOnTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchOnTestSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LaunchOnTestSettings"), sizeof(FLaunchOnTestSettings), Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLaunchOnTestSettings(FLaunchOnTestSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LaunchOnTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LaunchOnTestSettings")),new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLaunchOnTestSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LaunchOnTestSettings"), sizeof(FLaunchOnTestSettings), Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the editor Launch On With Map Iterations test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "This is the device to be used for launch on. Example: WindowsNoEditor, Android, IOS, Linux" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLaunchOnTestSettings, DeviceID), METADATA_PARAMS(NewProp_DeviceID_MetaData, ARRAY_COUNT(NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchOnTestmap_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "umap" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Map to be used for the Launch On test *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchOnTestmap = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchOnTestmap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FLaunchOnTestSettings, LaunchOnTestmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_LaunchOnTestmap_MetaData, ARRAY_COUNT(NewProp_LaunchOnTestmap_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchOnTestmap,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LaunchOnTestSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLaunchOnTestSettings),
				alignof(FLaunchOnTestSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLaunchOnTestSettings_CRC() { return 2729269512U; }
class UScriptStruct* FEditorMapPerformanceTestDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorMapPerformanceTestDefinition"), sizeof(FEditorMapPerformanceTestDefinition), Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorMapPerformanceTestDefinition(FEditorMapPerformanceTestDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorMapPerformanceTestDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorMapPerformanceTestDefinition")),new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorMapPerformanceTestDefinition;
	UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorMapPerformanceTestDefinition"), sizeof(FEditorMapPerformanceTestDefinition), Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the asset import / export automation test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestTimer_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "This is the length of time in seconds that this test will run for before stopping." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestTimer = { UE4CodeGen_Private::EPropertyClass::Int, "TestTimer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, TestTimer), METADATA_PARAMS(NewProp_TestTimer_MetaData, ARRAY_COUNT(NewProp_TestTimer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceTestmap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Map to be used for the Performance Capture *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceTestmap = { UE4CodeGen_Private::EPropertyClass::Struct, "PerformanceTestmap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, PerformanceTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_PerformanceTestmap_MetaData, ARRAY_COUNT(NewProp_PerformanceTestmap_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestTimer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerformanceTestmap,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditorMapPerformanceTestDefinition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEditorMapPerformanceTestDefinition),
				alignof(FEditorMapPerformanceTestDefinition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_CRC() { return 1381243533U; }
class UScriptStruct* FBuildPromotionTestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionTestSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionTestSettings"), sizeof(FBuildPromotionTestSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionTestSettings(FBuildPromotionTestSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionTestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionTestSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionTestSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionTestSettings"), sizeof(FBuildPromotionTestSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the editor build promotion test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceControlMaterial_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Material to modify for the content browser step *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceControlMaterial = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceControlMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, SourceControlMaterial), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_SourceControlMaterial_MetaData, ARRAY_COUNT(NewProp_SourceControlMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectSettings_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "New project settings *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProjectSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "NewProjectSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, NewProjectSettings), Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, METADATA_PARAMS(NewProp_NewProjectSettings_MetaData, ARRAY_COUNT(NewProp_NewProjectSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAssets_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Open assets settings *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpenAssets = { UE4CodeGen_Private::EPropertyClass::Struct, "OpenAssets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, OpenAssets), Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, METADATA_PARAMS(NewProp_OpenAssets_MetaData, ARRAY_COUNT(NewProp_OpenAssets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportWorkflow_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import workflow settings *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportWorkflow = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportWorkflow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, ImportWorkflow), Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, METADATA_PARAMS(NewProp_ImportWorkflow_MetaData, ARRAY_COUNT(NewProp_ImportWorkflow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStaticMeshAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default static mesh asset to apply materials to *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultStaticMeshAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultStaticMeshAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, DefaultStaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultStaticMeshAsset_MetaData, ARRAY_COUNT(NewProp_DefaultStaticMeshAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceControlMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewProjectSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenAssets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportWorkflow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultStaticMeshAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuildPromotionTestSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuildPromotionTestSettings),
				alignof(FBuildPromotionTestSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionTestSettings_CRC() { return 1365522633U; }
class UScriptStruct* FBlueprintEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintEditorPromotionSettings"), sizeof(FBlueprintEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintEditorPromotionSettings(FBlueprintEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintEditorPromotionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintEditorPromotionSettings"), sizeof(FBlueprintEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the blueprint editor build promotion tests" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default particle asset to use for tests" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultParticleAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultParticleAsset_MetaData, ARRAY_COUNT(NewProp_DefaultParticleAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondMeshPath_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The mesh to set on the blueprint after the delay *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondMeshPath = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondMeshPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, SecondMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_SecondMeshPath_MetaData, ARRAY_COUNT(NewProp_SecondMeshPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstMeshPath_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The starting mesh for the blueprint *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstMeshPath = { UE4CodeGen_Private::EPropertyClass::Struct, "FirstMeshPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, FirstMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_FirstMeshPath_MetaData, ARRAY_COUNT(NewProp_FirstMeshPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultParticleAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondMeshPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstMeshPath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlueprintEditorPromotionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBlueprintEditorPromotionSettings),
				alignof(FBlueprintEditorPromotionSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_CRC() { return 1877794623U; }
class UScriptStruct* FParticleEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEditorPromotionSettings"), sizeof(FParticleEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEditorPromotionSettings(FParticleEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEditorPromotionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEditorPromotionSettings"), sizeof(FParticleEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the particle editor build promotion tests" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default particle asset to use for tests" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultParticleAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultParticleAsset_MetaData, ARRAY_COUNT(NewProp_DefaultParticleAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultParticleAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleEditorPromotionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FParticleEditorPromotionSettings),
				alignof(FParticleEditorPromotionSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_CRC() { return 20407607U; }
class UScriptStruct* FMaterialEditorPromotionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialEditorPromotionSettings"), sizeof(FMaterialEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialEditorPromotionSettings(FMaterialEditorPromotionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialEditorPromotionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialEditorPromotionSettings")),new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialEditorPromotionSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialEditorPromotionSettings"), sizeof(FMaterialEditorPromotionSettings), Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the material editor build promotion tests" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNormalTexture_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default material asset to apply to static meshes *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultNormalTexture = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultNormalTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultNormalTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultNormalTexture_MetaData, ARRAY_COUNT(NewProp_DefaultNormalTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default material asset to apply to static meshes *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTexture = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultDiffuseTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultDiffuseTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultDiffuseTexture_MetaData, ARRAY_COUNT(NewProp_DefaultDiffuseTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Default material asset to apply to static meshes *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultMaterialAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultMaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_DefaultMaterialAsset_MetaData, ARRAY_COUNT(NewProp_DefaultMaterialAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultNormalTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultDiffuseTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultMaterialAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialEditorPromotionSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialEditorPromotionSettings),
				alignof(FMaterialEditorPromotionSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_CRC() { return 3420265450U; }
class UScriptStruct* FBuildPromotionNewProjectSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionNewProjectSettings"), sizeof(FBuildPromotionNewProjectSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionNewProjectSettings(FBuildPromotionNewProjectSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionNewProjectSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionNewProjectSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionNewProjectSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionNewProjectSettings"), sizeof(FBuildPromotionNewProjectSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the new project stage of the build promotion test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectNameOverride_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The name of the project *" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewProjectNameOverride = { UE4CodeGen_Private::EPropertyClass::Str, "NewProjectNameOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectNameOverride), METADATA_PARAMS(NewProp_NewProjectNameOverride_MetaData, ARRAY_COUNT(NewProp_NewProjectNameOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewProjectFolderOverride_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The path for the new project" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewProjectFolderOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "NewProjectFolderOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectFolderOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_NewProjectFolderOverride_MetaData, ARRAY_COUNT(NewProp_NewProjectFolderOverride_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewProjectNameOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewProjectFolderOverride,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuildPromotionNewProjectSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuildPromotionNewProjectSettings),
				alignof(FBuildPromotionNewProjectSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_CRC() { return 4187064301U; }
class UScriptStruct* FBuildPromotionOpenAssetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionOpenAssetSettings"), sizeof(FBuildPromotionOpenAssetSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionOpenAssetSettings(FBuildPromotionOpenAssetSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionOpenAssetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionOpenAssetSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionOpenAssetSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionOpenAssetSettings"), sizeof(FBuildPromotionOpenAssetSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the open assets stage of the build promotion test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The texture asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, TextureAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_TextureAsset_MetaData, ARRAY_COUNT(NewProp_TextureAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The static mesh asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticMeshAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, StaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_StaticMeshAsset_MetaData, ARRAY_COUNT(NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The skeletal mesh asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "SkeletalMeshAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_SkeletalMeshAsset_MetaData, ARRAY_COUNT(NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The particle system asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSystemAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "ParticleSystemAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, ParticleSystemAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_ParticleSystemAsset_MetaData, ARRAY_COUNT(NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The material asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, MaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_MaterialAsset_MetaData, ARRAY_COUNT(NewProp_MaterialAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintAsset_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "uasset" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The blueprint asset to open" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueprintAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, BlueprintAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_BlueprintAsset_MetaData, ARRAY_COUNT(NewProp_BlueprintAsset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleSystemAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintAsset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuildPromotionOpenAssetSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuildPromotionOpenAssetSettings),
				alignof(FBuildPromotionOpenAssetSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_CRC() { return 3384127496U; }
class UScriptStruct* FBuildPromotionImportWorkflowSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionImportWorkflowSettings"), sizeof(FBuildPromotionImportWorkflowSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildPromotionImportWorkflowSettings(FBuildPromotionImportWorkflowSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BuildPromotionImportWorkflowSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuildPromotionImportWorkflowSettings")),new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildPromotionImportWorkflowSettings"), sizeof(FBuildPromotionImportWorkflowSettings), Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the import workflow stage of the build promotion test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherAssetsToImport_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for any other assets you may want to import" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OtherAssetsToImport = { UE4CodeGen_Private::EPropertyClass::Array, "OtherAssetsToImport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport), METADATA_PARAMS(NewProp_OtherAssetsToImport_MetaData, ARRAY_COUNT(NewProp_OtherAssetsToImport_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherAssetsToImport_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OtherAssetsToImport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurroundSound_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the surround sound (Select any of the channels.  It will auto import the rest)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurroundSound = { UE4CodeGen_Private::EPropertyClass::Struct, "SurroundSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SurroundSound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_SurroundSound_MetaData, ARRAY_COUNT(NewProp_SurroundSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the sound" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Struct, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Sound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Struct, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Animation), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_Animation_MetaData, ARRAY_COUNT(NewProp_Animation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the skeletal mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SkeletalMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphMesh_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the morph mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MorphMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "MorphMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, MorphMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_MorphMesh_MetaData, ARRAY_COUNT(NewProp_MorphMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapeMesh_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the blend shape" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendShapeMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendShapeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, BlendShapeMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_BlendShapeMesh_MetaData, ARRAY_COUNT(NewProp_BlendShapeMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportStaticMesh_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the static mesh to re-import" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReimportStaticMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "ReimportStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_ReimportStaticMesh_MetaData, ARRAY_COUNT(NewProp_ReimportStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the static mesh" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, StaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_StaticMesh_MetaData, ARRAY_COUNT(NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the Normalmap texture" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Normal), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffuse_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Import settings for the Diffuse texture" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Diffuse = { UE4CodeGen_Private::EPropertyClass::Struct, "Diffuse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Diffuse), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(NewProp_Diffuse_MetaData, ARRAY_COUNT(NewProp_Diffuse_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherAssetsToImport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherAssetsToImport_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SurroundSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Animation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MorphMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendShapeMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReimportStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Diffuse,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuildPromotionImportWorkflowSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuildPromotionImportWorkflowSettings),
				alignof(FBuildPromotionImportWorkflowSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_CRC() { return 831890133U; }
class UScriptStruct* FEditorImportWorkflowDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportWorkflowDefinition"), sizeof(FEditorImportWorkflowDefinition), Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorImportWorkflowDefinition(FEditorImportWorkflowDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorImportWorkflowDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorImportWorkflowDefinition")),new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorImportWorkflowDefinition;
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorImportWorkflowDefinition"), sizeof(FEditorImportWorkflowDefinition), Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the asset import workflow test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Settings for the import factory" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FactorySettings = { UE4CodeGen_Private::EPropertyClass::Array, "FactorySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorImportWorkflowDefinition, FactorySettings), METADATA_PARAMS(NewProp_FactorySettings_MetaData, ARRAY_COUNT(NewProp_FactorySettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FactorySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "*" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The file to import" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportFilePath = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorImportWorkflowDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_ImportFilePath_MetaData, ARRAY_COUNT(NewProp_ImportFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FactorySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FactorySettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportFilePath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditorImportWorkflowDefinition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEditorImportWorkflowDefinition),
				alignof(FEditorImportWorkflowDefinition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_CRC() { return 2797432056U; }
class UScriptStruct* FEditorImportExportTestDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportExportTestDefinition"), sizeof(FEditorImportExportTestDefinition), Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorImportExportTestDefinition(FEditorImportExportTestDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorImportExportTestDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorImportExportTestDefinition")),new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorImportExportTestDefinition;
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorImportExportTestDefinition"), sizeof(FEditorImportExportTestDefinition), Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds settings for the asset import / export automation test" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Settings for the import factory" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FactorySettings = { UE4CodeGen_Private::EPropertyClass::Array, "FactorySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, FactorySettings), METADATA_PARAMS(NewProp_FactorySettings_MetaData, ARRAY_COUNT(NewProp_FactorySettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FactorySettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipExport_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "If true, the export step will be skipped" },
			};
#endif
			auto NewProp_bSkipExport_SetBit = [](void* Obj){ ((FEditorImportExportTestDefinition*)Obj)->bSkipExport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipExport = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipExport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEditorImportExportTestDefinition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipExport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipExport_MetaData, ARRAY_COUNT(NewProp_bSkipExport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportFileExtension_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The file extension to use when exporting this asset.  Used to find a supporting exporter" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportFileExtension = { UE4CodeGen_Private::EPropertyClass::Str, "ExportFileExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, ExportFileExtension), METADATA_PARAMS(NewProp_ExportFileExtension_MetaData, ARRAY_COUNT(NewProp_ExportFileExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "*" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The file to import" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportFilePath = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_ImportFilePath_MetaData, ARRAY_COUNT(NewProp_ImportFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FactorySettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FactorySettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipExport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExportFileExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportFilePath,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EditorImportExportTestDefinition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEditorImportExportTestDefinition),
				alignof(FEditorImportExportTestDefinition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_CRC() { return 1818608773U; }
class UScriptStruct* FImportFactorySettingValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportFactorySettingValues, Z_Construct_UPackage__Script_Engine(), TEXT("ImportFactorySettingValues"), sizeof(FImportFactorySettingValues), Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportFactorySettingValues(FImportFactorySettingValues::StaticStruct, TEXT("/Script/Engine"), TEXT("ImportFactorySettingValues"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues
{
	FScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportFactorySettingValues")),new UScriptStruct::TCppStructOps<FImportFactorySettingValues>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFImportFactorySettingValues;
	UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportFactorySettingValues"), sizeof(FImportFactorySettingValues), Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Holds UProperty names and values to customize factory settings" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportFactorySettingValues>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Value to import for the specified property." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FImportFactorySettingValues, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Name of the property to change.  Nested settings can be modified using \"Outer.Property" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName = { UE4CodeGen_Private::EPropertyClass::Str, "SettingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FImportFactorySettingValues, SettingName), METADATA_PARAMS(NewProp_SettingName_MetaData, ARRAY_COUNT(NewProp_SettingName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SettingName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ImportFactorySettingValues",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FImportFactorySettingValues),
				alignof(FImportFactorySettingValues),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportFactorySettingValues_CRC() { return 254110920U; }
class UScriptStruct* FExternalToolDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalToolDefinition, Z_Construct_UPackage__Script_Engine(), TEXT("ExternalToolDefinition"), sizeof(FExternalToolDefinition), Get_Z_Construct_UScriptStruct_FExternalToolDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternalToolDefinition(FExternalToolDefinition::StaticStruct, TEXT("/Script/Engine"), TEXT("ExternalToolDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition
{
	FScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternalToolDefinition")),new UScriptStruct::TCppStructOps<FExternalToolDefinition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExternalToolDefinition;
	UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternalToolDefinition"), sizeof(FExternalToolDefinition), Get_Z_Construct_UScriptStruct_FExternalToolDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Structure for defining an external tool" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalToolDefinition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptDirectory_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "RelativePath", "" },
				{ "ToolTip", "If the ScriptExtension is set, look here for the script files." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScriptDirectory = { UE4CodeGen_Private::EPropertyClass::Struct, "ScriptDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ScriptDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_ScriptDirectory_MetaData, ARRAY_COUNT(NewProp_ScriptDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptExtension_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "If set, look for scripts with this extension." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScriptExtension = { UE4CodeGen_Private::EPropertyClass::Str, "ScriptExtension", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ScriptExtension), METADATA_PARAMS(NewProp_ScriptExtension_MetaData, ARRAY_COUNT(NewProp_ScriptExtension_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "RelativePath", "" },
				{ "ToolTip", "The working directory for the new process." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkingDirectory = { UE4CodeGen_Private::EPropertyClass::Struct, "WorkingDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, WorkingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(NewProp_WorkingDirectory_MetaData, ARRAY_COUNT(NewProp_WorkingDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandLineOptions_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The command line options to pass to the executable." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandLineOptions = { UE4CodeGen_Private::EPropertyClass::Str, "CommandLineOptions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, CommandLineOptions), METADATA_PARAMS(NewProp_CommandLineOptions_MetaData, ARRAY_COUNT(NewProp_CommandLineOptions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "FilePathFilter", "*" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The executable to run." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutablePath = { UE4CodeGen_Private::EPropertyClass::Struct, "ExecutablePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ExecutablePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(NewProp_ExecutablePath_MetaData, ARRAY_COUNT(NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The name of the tool / test." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolName = { UE4CodeGen_Private::EPropertyClass::Str, "ToolName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ToolName), METADATA_PARAMS(NewProp_ToolName_MetaData, ARRAY_COUNT(NewProp_ToolName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScriptDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScriptExtension,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkingDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CommandLineOptions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExecutablePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToolName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ExternalToolDefinition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FExternalToolDefinition),
				alignof(FExternalToolDefinition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternalToolDefinition_CRC() { return 4067360818U; }
	void UAutomationTestSettings::StaticRegisterNativesUAutomationTestSettings()
	{
	}
	UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister()
	{
		return UAutomationTestSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UAutomationTestSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tests/AutomationTestSettings.h" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Implements the Editor's user settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenshotResolution_MetaData[] = {
				{ "Category", "Screenshots" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The default resolution to take all automation screenshots at." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultScreenshotResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultScreenshotResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, DefaultScreenshotResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_DefaultScreenshotResolution_MetaData, ARRAY_COUNT(NewProp_DefaultScreenshotResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchOnSettings_MetaData[] = {
				{ "Category", "Automation" },
				{ "FilePathFilter", "umap" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The map and device type to be used for the editor Launch On With Map Iterations test." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaunchOnSettings = { UE4CodeGen_Private::EPropertyClass::Array, "LaunchOnSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, LaunchOnSettings), METADATA_PARAMS(NewProp_LaunchOnSettings_MetaData, ARRAY_COUNT(NewProp_LaunchOnSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchOnSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchOnSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLaunchOnTestSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportExportTestDefinitions_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Asset import / Export test settings" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportExportTestDefinitions = { UE4CodeGen_Private::EPropertyClass::Array, "ImportExportTestDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ImportExportTestDefinitions), METADATA_PARAMS(NewProp_ImportExportTestDefinitions_MetaData, ARRAY_COUNT(NewProp_ImportExportTestDefinitions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportExportTestDefinitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportExportTestDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTools_MetaData[] = {
				{ "Category", "ExternalTools" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "External executables and scripts to run as part of automation." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalTools = { UE4CodeGen_Private::EPropertyClass::Array, "ExternalTools", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ExternalTools), METADATA_PARAMS(NewProp_ExternalTools_MetaData, ARRAY_COUNT(NewProp_ExternalTools_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTools_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ExternalTools", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FExternalToolDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestLevelFolders_MetaData[] = {
				{ "Category", "MiscAutomationSetups" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Folders containing levels to exclude from automated tests" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestLevelFolders = { UE4CodeGen_Private::EPropertyClass::Array, "TestLevelFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, TestLevelFolders), METADATA_PARAMS(NewProp_TestLevelFolders_MetaData, ARRAY_COUNT(NewProp_TestLevelFolders_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestLevelFolders_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TestLevelFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintEditorPromotionTest_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Blueprint editor promotion test settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintEditorPromotionTest = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueprintEditorPromotionTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, BlueprintEditorPromotionTest), Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, METADATA_PARAMS(NewProp_BlueprintEditorPromotionTest_MetaData, ARRAY_COUNT(NewProp_BlueprintEditorPromotionTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleEditorPromotionTest_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Particle editor promotion test settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleEditorPromotionTest = { UE4CodeGen_Private::EPropertyClass::Struct, "ParticleEditorPromotionTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ParticleEditorPromotionTest), Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, METADATA_PARAMS(NewProp_ParticleEditorPromotionTest_MetaData, ARRAY_COUNT(NewProp_ParticleEditorPromotionTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialEditorPromotionTest_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Material editor promotion test settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialEditorPromotionTest = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialEditorPromotionTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, MaterialEditorPromotionTest), Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, METADATA_PARAMS(NewProp_MaterialEditorPromotionTest_MetaData, ARRAY_COUNT(NewProp_MaterialEditorPromotionTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildPromotionTest_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Editor build promotion test settings" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildPromotionTest = { UE4CodeGen_Private::EPropertyClass::Struct, "BuildPromotionTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, BuildPromotionTest), Z_Construct_UScriptStruct_FBuildPromotionTestSettings, METADATA_PARAMS(NewProp_BuildPromotionTest_MetaData, ARRAY_COUNT(NewProp_BuildPromotionTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpen_MetaData[] = {
				{ "Category", "Open Asset Tests" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Asset to test for open in automation process" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetsToOpen = { UE4CodeGen_Private::EPropertyClass::Array, "AssetsToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, AssetsToOpen), METADATA_PARAMS(NewProp_AssetsToOpen_MetaData, ARRAY_COUNT(NewProp_AssetsToOpen_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetsToOpen_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetsToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPerformanceTestMaps_MetaData[] = {
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The map to be used for the editor performance capture tool." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorPerformanceTestMaps = { UE4CodeGen_Private::EPropertyClass::Array, "EditorPerformanceTestMaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EditorPerformanceTestMaps), METADATA_PARAMS(NewProp_EditorPerformanceTestMaps_MetaData, ARRAY_COUNT(NewProp_EditorPerformanceTestMaps_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorPerformanceTestMaps_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorPerformanceTestMaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomationTestmap_MetaData[] = {
				{ "AllowedClasses", "World" },
				{ "Category", "Automation" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "The automation test map to be used for several of the automation tests." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutomationTestmap = { UE4CodeGen_Private::EPropertyClass::Struct, "AutomationTestmap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, AutomationTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_AutomationTestmap_MetaData, ARRAY_COUNT(NewProp_AutomationTestmap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorTestModules_MetaData[] = {
				{ "Category", "Loading" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Modules to load that have editor tests" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorTestModules = { UE4CodeGen_Private::EPropertyClass::Array, "EditorTestModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EditorTestModules), METADATA_PARAMS(NewProp_EditorTestModules_MetaData, ARRAY_COUNT(NewProp_EditorTestModules_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditorTestModules_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "EditorTestModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineTestModules_MetaData[] = {
				{ "Category", "Loading" },
				{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
				{ "ToolTip", "Modules to load that have engine tests" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineTestModules = { UE4CodeGen_Private::EPropertyClass::Array, "EngineTestModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EngineTestModules), METADATA_PARAMS(NewProp_EngineTestModules_MetaData, ARRAY_COUNT(NewProp_EngineTestModules_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineTestModules_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "EngineTestModules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultScreenshotResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchOnSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchOnSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportExportTestDefinitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportExportTestDefinitions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalTools,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalTools_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestLevelFolders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestLevelFolders_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintEditorPromotionTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleEditorPromotionTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialEditorPromotionTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuildPromotionTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetsToOpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetsToOpen_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorPerformanceTestMaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorPerformanceTestMaps_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutomationTestmap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorTestModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorTestModules_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineTestModules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineTestModules_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAutomationTestSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAutomationTestSettings::StaticClass,
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
	IMPLEMENT_CLASS(UAutomationTestSettings, 4047913689);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationTestSettings(Z_Construct_UClass_UAutomationTestSettings, &UAutomationTestSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAutomationTestSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
