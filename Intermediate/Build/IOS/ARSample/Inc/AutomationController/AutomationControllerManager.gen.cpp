// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AutomationControllerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerManager() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationEvent();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
	AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationState();
// End Cross Module References
class UScriptStruct* FAutomatedTestPassResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestPassResults, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestPassResults(FAutomatedTestPassResults::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestPassResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestPassResults")),new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestPassResults;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestPassResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestPassResults"), sizeof(FAutomatedTestPassResults), Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestPassResults>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests = { UE4CodeGen_Private::EPropertyClass::Array, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Tests), METADATA_PARAMS(NewProp_Tests_MetaData, ARRAY_COUNT(NewProp_Tests_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomatedTestResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonExportDirectory_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonExportDirectory = { UE4CodeGen_Private::EPropertyClass::Str, "ComparisonExportDirectory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, ComparisonExportDirectory), METADATA_PARAMS(NewProp_ComparisonExportDirectory_MetaData, ARRAY_COUNT(NewProp_ComparisonExportDirectory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonExported_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			auto NewProp_ComparisonExported_SetBit = [](void* Obj){ ((FAutomatedTestPassResults*)Obj)->ComparisonExported = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ComparisonExported = { UE4CodeGen_Private::EPropertyClass::Bool, "ComparisonExported", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomatedTestPassResults), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ComparisonExported_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ComparisonExported_MetaData, ARRAY_COUNT(NewProp_ComparisonExported_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDuration_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDuration = { UE4CodeGen_Private::EPropertyClass::Float, "TotalDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, TotalDuration), METADATA_PARAMS(NewProp_TotalDuration_MetaData, ARRAY_COUNT(NewProp_TotalDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotRun_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotRun = { UE4CodeGen_Private::EPropertyClass::Int, "NotRun", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, NotRun), METADATA_PARAMS(NewProp_NotRun_MetaData, ARRAY_COUNT(NewProp_NotRun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Failed = { UE4CodeGen_Private::EPropertyClass::Int, "Failed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Failed), METADATA_PARAMS(NewProp_Failed_MetaData, ARRAY_COUNT(NewProp_Failed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SucceededWithWarnings_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SucceededWithWarnings = { UE4CodeGen_Private::EPropertyClass::Int, "SucceededWithWarnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, SucceededWithWarnings), METADATA_PARAMS(NewProp_SucceededWithWarnings_MetaData, ARRAY_COUNT(NewProp_SucceededWithWarnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Succeeded_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Succeeded = { UE4CodeGen_Private::EPropertyClass::Int, "Succeeded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestPassResults, Succeeded), METADATA_PARAMS(NewProp_Succeeded_MetaData, ARRAY_COUNT(NewProp_Succeeded_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComparisonExportDirectory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComparisonExported,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotRun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Failed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SucceededWithWarnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Succeeded,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomatedTestPassResults",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomatedTestPassResults),
				alignof(FAutomatedTestPassResults),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestPassResults_CRC() { return 3782501673U; }
class UScriptStruct* FAutomatedTestResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestResult, Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomatedTestResult(FAutomatedTestResult::StaticStruct, TEXT("/Script/AutomationController"), TEXT("AutomatedTestResult"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult
{
	FScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomatedTestResult")),new UScriptStruct::TCppStructOps<FAutomatedTestResult>);
	}
} ScriptStruct_AutomationController_StaticRegisterNativesFAutomatedTestResult;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomatedTestResult"), sizeof(FAutomatedTestResult), Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Errors = { UE4CodeGen_Private::EPropertyClass::Int, "Errors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Errors), METADATA_PARAMS(NewProp_Errors_MetaData, ARRAY_COUNT(NewProp_Errors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Warnings = { UE4CodeGen_Private::EPropertyClass::Int, "Warnings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Warnings), METADATA_PARAMS(NewProp_Warnings_MetaData, ARRAY_COUNT(NewProp_Warnings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Artifacts = { UE4CodeGen_Private::EPropertyClass::Array, "Artifacts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, Artifacts), METADATA_PARAMS(NewProp_Artifacts_MetaData, ARRAY_COUNT(NewProp_Artifacts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Artifacts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationArtifact, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State = { UE4CodeGen_Private::EPropertyClass::Enum, "State", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, State), Z_Construct_UEnum_AutomationController_EAutomationState, METADATA_PARAMS(NewProp_State_MetaData, ARRAY_COUNT(NewProp_State_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullTestPath = { UE4CodeGen_Private::EPropertyClass::Str, "FullTestPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, FullTestPath), METADATA_PARAMS(NewProp_FullTestPath_MetaData, ARRAY_COUNT(NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestDisplayName_MetaData[] = {
				{ "ModuleRelativePath", "Private/AutomationControllerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestDisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "TestDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomatedTestResult, TestDisplayName), METADATA_PARAMS(NewProp_TestDisplayName_MetaData, ARRAY_COUNT(NewProp_TestDisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Errors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Warnings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Artifacts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Artifacts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_State,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_State_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullTestPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestDisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomatedTestResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomatedTestResult),
				alignof(FAutomatedTestResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomatedTestResult_CRC() { return 1232830667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
