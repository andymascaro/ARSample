// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AutomationWorkerMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationWorkerMessages() {}
// Cross Module References
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse();
	UPackage* Z_Construct_UPackage__Script_AutomationMessages();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationEvent();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse();
	AUTOMATIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers();
// End Cross Module References
class UScriptStruct* FAutomationWorkerPerformanceDataResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataResponse"), sizeof(FAutomationWorkerPerformanceDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPerformanceDataResponse(FAutomationWorkerPerformanceDataResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPerformanceDataResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPerformanceDataResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPerformanceDataResponse"), sizeof(FAutomationWorkerPerformanceDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that responds to PerformanceDataRequest." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataResponse, ErrorMessage), METADATA_PARAMS(NewProp_ErrorMessage_MetaData, ARRAY_COUNT(NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_bSuccess_SetBit = [](void* Obj){ ((FAutomationWorkerPerformanceDataResponse*)Obj)->bSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerPerformanceDataResponse), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuccess_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuccess_MetaData, ARRAY_COUNT(NewProp_bSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuccess,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerPerformanceDataResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerPerformanceDataResponse),
				alignof(FAutomationWorkerPerformanceDataResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataResponse_CRC() { return 3592030876U; }
class UScriptStruct* FAutomationWorkerPerformanceDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPerformanceDataRequest"), sizeof(FAutomationWorkerPerformanceDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPerformanceDataRequest(FAutomationWorkerPerformanceDataRequest::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPerformanceDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPerformanceDataRequest")),new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPerformanceDataRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPerformanceDataRequest"), sizeof(FAutomationWorkerPerformanceDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message to request the performance data for this hardware." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPerformanceDataRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPoints_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataPoints = { UE4CodeGen_Private::EPropertyClass::Array, "DataPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, DataPoints), METADATA_PARAMS(NewProp_DataPoints_MetaData, ARRAY_COUNT(NewProp_DataPoints_MetaData)) };
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DataPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Double, "DataPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, TestName), METADATA_PARAMS(NewProp_TestName_MetaData, ARRAY_COUNT(NewProp_TestName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware = { UE4CodeGen_Private::EPropertyClass::Str, "Hardware", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Hardware), METADATA_PARAMS(NewProp_Hardware_MetaData, ARRAY_COUNT(NewProp_Hardware_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerPerformanceDataRequest, Platform), METADATA_PARAMS(NewProp_Platform_MetaData, ARRAY_COUNT(NewProp_Platform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hardware,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Platform,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerPerformanceDataRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerPerformanceDataRequest),
				alignof(FAutomationWorkerPerformanceDataRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPerformanceDataRequest_CRC() { return 2461716490U; }
class UScriptStruct* FAutomationWorkerTestDataResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataResponse"), sizeof(FAutomationWorkerTestDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerTestDataResponse(FAutomationWorkerTestDataResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerTestDataResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerTestDataResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerTestDataResponse"), sizeof(FAutomationWorkerTestDataResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that responds to TestDataRequests." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNew_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_bIsNew_SetBit = [](void* Obj){ ((FAutomationWorkerTestDataResponse*)Obj)->bIsNew = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNew = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNew", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerTestDataResponse), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsNew_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsNew_MetaData, ARRAY_COUNT(NewProp_bIsNew_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData = { UE4CodeGen_Private::EPropertyClass::Str, "JsonData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataResponse, JsonData), METADATA_PARAMS(NewProp_JsonData_MetaData, ARRAY_COUNT(NewProp_JsonData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsNew,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerTestDataResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerTestDataResponse),
				alignof(FAutomationWorkerTestDataResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataResponse_CRC() { return 2081771260U; }
class UScriptStruct* FAutomationWorkerTestDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerTestDataRequest"), sizeof(FAutomationWorkerTestDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerTestDataRequest(FAutomationWorkerTestDataRequest::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerTestDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerTestDataRequest")),new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerTestDataRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerTestDataRequest"), sizeof(FAutomationWorkerTestDataRequest), Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that handles both storing and requesting ground truth data.\nfor the first time this test is run, it might need to store things, or get things." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerTestDataRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData = { UE4CodeGen_Private::EPropertyClass::Str, "JsonData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, JsonData), METADATA_PARAMS(NewProp_JsonData_MetaData, ARRAY_COUNT(NewProp_JsonData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName = { UE4CodeGen_Private::EPropertyClass::Str, "DataName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataName), METADATA_PARAMS(NewProp_DataName_MetaData, ARRAY_COUNT(NewProp_DataName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTestName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataTestName = { UE4CodeGen_Private::EPropertyClass::Str, "DataTestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataTestName), METADATA_PARAMS(NewProp_DataTestName_MetaData, ARRAY_COUNT(NewProp_DataTestName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPlatform_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataPlatform = { UE4CodeGen_Private::EPropertyClass::Str, "DataPlatform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataPlatform), METADATA_PARAMS(NewProp_DataPlatform_MetaData, ARRAY_COUNT(NewProp_DataPlatform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "The category of the data, this is purely to bucket and separate the ground truth data we store into different directories." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataType = { UE4CodeGen_Private::EPropertyClass::Str, "DataType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerTestDataRequest, DataType), METADATA_PARAMS(NewProp_DataType_MetaData, ARRAY_COUNT(NewProp_DataType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataTestName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataPlatform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerTestDataRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerTestDataRequest),
				alignof(FAutomationWorkerTestDataRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerTestDataRequest_CRC() { return 3355695671U; }
class UScriptStruct* FAutomationWorkerImageComparisonResults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerImageComparisonResults(FAutomationWorkerImageComparisonResults::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerImageComparisonResults"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerImageComparisonResults")),new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerImageComparisonResults;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerImageComparisonResults"), sizeof(FAutomationWorkerImageComparisonResults), Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerImageComparisonResults>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, ErrorMessage), METADATA_PARAMS(NewProp_ErrorMessage_MetaData, ARRAY_COUNT(NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "GlobalDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, GlobalDifference), METADATA_PARAMS(NewProp_GlobalDifference_MetaData, ARRAY_COUNT(NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "MaxLocalDifference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerImageComparisonResults, MaxLocalDifference), METADATA_PARAMS(NewProp_MaxLocalDifference_MetaData, ARRAY_COUNT(NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimilar_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Were the images similar?  If they're not you should log an error." },
			};
#endif
			auto NewProp_bSimilar_SetBit = [](void* Obj){ ((FAutomationWorkerImageComparisonResults*)Obj)->bSimilar = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimilar = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimilar", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerImageComparisonResults), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSimilar_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSimilar_MetaData, ARRAY_COUNT(NewProp_bSimilar_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNew_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Was this a new image we've never seen before and have no ground truth for?" },
			};
#endif
			auto NewProp_bNew_SetBit = [](void* Obj){ ((FAutomationWorkerImageComparisonResults*)Obj)->bNew = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNew = { UE4CodeGen_Private::EPropertyClass::Bool, "bNew", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerImageComparisonResults), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNew_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNew_MetaData, ARRAY_COUNT(NewProp_bNew_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxLocalDifference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSimilar,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNew,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerImageComparisonResults",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerImageComparisonResults),
				alignof(FAutomationWorkerImageComparisonResults),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerImageComparisonResults_CRC() { return 468623701U; }
class UScriptStruct* FAutomationWorkerScreenImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerScreenImage, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerScreenImage(FAutomationWorkerScreenImage::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerScreenImage"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerScreenImage")),new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerScreenImage;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerScreenImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerScreenImage"), sizeof(FAutomationWorkerScreenImage), Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that is sent in containing a screen shot run during performance test." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerScreenImage>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Struct, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, Metadata), Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, METADATA_PARAMS(NewProp_Metadata_MetaData, ARRAY_COUNT(NewProp_Metadata_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenShotName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "The screen shot name." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenShotName = { UE4CodeGen_Private::EPropertyClass::Str, "ScreenShotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenShotName), METADATA_PARAMS(NewProp_ScreenShotName_MetaData, ARRAY_COUNT(NewProp_ScreenShotName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenImage_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "The screen shot data." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScreenImage = { UE4CodeGen_Private::EPropertyClass::Array, "ScreenImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerScreenImage, ScreenImage), METADATA_PARAMS(NewProp_ScreenImage_MetaData, ARRAY_COUNT(NewProp_ScreenImage_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenImage_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ScreenImage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Metadata,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenShotName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenImage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenImage_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerScreenImage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerScreenImage),
				alignof(FAutomationWorkerScreenImage),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerScreenImage_CRC() { return 2033552378U; }
class UScriptStruct* FAutomationScreenshotMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotMetadata, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationScreenshotMetadata(FAutomationScreenshotMetadata::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationScreenshotMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationScreenshotMetadata")),new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationScreenshotMetadata;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationScreenshotMetadata"), sizeof(FAutomationScreenshotMetadata), Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotMetadata>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_bIgnoreColors_SetBit = [](void* Obj){ ((FAutomationScreenshotMetadata*)Obj)->bIgnoreColors = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreColors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreColors_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreColors_MetaData, ARRAY_COUNT(NewProp_bIgnoreColors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_bIgnoreAntiAliasing_SetBit = [](void* Obj){ ((FAutomationScreenshotMetadata*)Obj)->bIgnoreAntiAliasing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreAntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreAntiAliasing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreAntiAliasing_MetaData, ARRAY_COUNT(NewProp_bIgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumGlobalError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumGlobalError), METADATA_PARAMS(NewProp_MaximumGlobalError_MetaData, ARRAY_COUNT(NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumLocalError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, MaximumLocalError), METADATA_PARAMS(NewProp_MaximumLocalError_MetaData, ARRAY_COUNT(NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceMaxBrightness_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceMaxBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceMaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMaxBrightness), nullptr, METADATA_PARAMS(NewProp_ToleranceMaxBrightness_MetaData, ARRAY_COUNT(NewProp_ToleranceMaxBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceMinBrightness_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceMinBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceMinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceMinBrightness), nullptr, METADATA_PARAMS(NewProp_ToleranceMinBrightness_MetaData, ARRAY_COUNT(NewProp_ToleranceMinBrightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceAlpha_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceAlpha = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceAlpha), nullptr, METADATA_PARAMS(NewProp_ToleranceAlpha_MetaData, ARRAY_COUNT(NewProp_ToleranceAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceBlue_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceBlue = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceBlue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceBlue), nullptr, METADATA_PARAMS(NewProp_ToleranceBlue_MetaData, ARRAY_COUNT(NewProp_ToleranceBlue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceGreen_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceGreen = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceGreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceGreen), nullptr, METADATA_PARAMS(NewProp_ToleranceGreen_MetaData, ARRAY_COUNT(NewProp_ToleranceGreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceRed_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleranceRed = { UE4CodeGen_Private::EPropertyClass::Byte, "ToleranceRed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ToleranceRed), nullptr, METADATA_PARAMS(NewProp_ToleranceRed_MetaData, ARRAY_COUNT(NewProp_ToleranceRed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasComparisonRules_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Comparison Requests" },
			};
#endif
			auto NewProp_bHasComparisonRules_SetBit = [](void* Obj){ ((FAutomationScreenshotMetadata*)Obj)->bHasComparisonRules = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasComparisonRules = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasComparisonRules", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasComparisonRules_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasComparisonRules_MetaData, ARRAY_COUNT(NewProp_bHasComparisonRules_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FoliageQuality = { UE4CodeGen_Private::EPropertyClass::Int, "FoliageQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FoliageQuality), METADATA_PARAMS(NewProp_FoliageQuality_MetaData, ARRAY_COUNT(NewProp_FoliageQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectsQuality = { UE4CodeGen_Private::EPropertyClass::Int, "EffectsQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, EffectsQuality), METADATA_PARAMS(NewProp_EffectsQuality_MetaData, ARRAY_COUNT(NewProp_EffectsQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureQuality = { UE4CodeGen_Private::EPropertyClass::Int, "TextureQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, TextureQuality), METADATA_PARAMS(NewProp_TextureQuality_MetaData, ARRAY_COUNT(NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostProcessQuality = { UE4CodeGen_Private::EPropertyClass::Int, "PostProcessQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, PostProcessQuality), METADATA_PARAMS(NewProp_PostProcessQuality_MetaData, ARRAY_COUNT(NewProp_PostProcessQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ShadowQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ShadowQuality), METADATA_PARAMS(NewProp_ShadowQuality_MetaData, ARRAY_COUNT(NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasingQuality = { UE4CodeGen_Private::EPropertyClass::Int, "AntiAliasingQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AntiAliasingQuality), METADATA_PARAMS(NewProp_AntiAliasingQuality_MetaData, ARRAY_COUNT(NewProp_AntiAliasingQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ViewDistanceQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ViewDistanceQuality), METADATA_PARAMS(NewProp_ViewDistanceQuality_MetaData, ARRAY_COUNT(NewProp_ViewDistanceQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionQuality_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Quality Levels" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "ResolutionQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, ResolutionQuality), METADATA_PARAMS(NewProp_ResolutionQuality_MetaData, ARRAY_COUNT(NewProp_ResolutionQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueDeviceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueDeviceId = { UE4CodeGen_Private::EPropertyClass::Str, "UniqueDeviceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, UniqueDeviceId), METADATA_PARAMS(NewProp_UniqueDeviceId_MetaData, ARRAY_COUNT(NewProp_UniqueDeviceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterUserDriverVersion_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterUserDriverVersion = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterUserDriverVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterUserDriverVersion), METADATA_PARAMS(NewProp_AdapterUserDriverVersion_MetaData, ARRAY_COUNT(NewProp_AdapterUserDriverVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterInternalDriverVersion_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterInternalDriverVersion = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterInternalDriverVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterInternalDriverVersion), METADATA_PARAMS(NewProp_AdapterInternalDriverVersion_MetaData, ARRAY_COUNT(NewProp_AdapterInternalDriverVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterName = { UE4CodeGen_Private::EPropertyClass::Str, "AdapterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, AdapterName), METADATA_PARAMS(NewProp_AdapterName_MetaData, ARRAY_COUNT(NewProp_AdapterName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vendor_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Hardware Details" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Vendor = { UE4CodeGen_Private::EPropertyClass::Str, "Vendor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Vendor), METADATA_PARAMS(NewProp_Vendor_MetaData, ARRAY_COUNT(NewProp_Vendor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStereo_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_bIsStereo_SetBit = [](void* Obj){ ((FAutomationScreenshotMetadata*)Obj)->bIsStereo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStereo = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStereo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationScreenshotMetadata), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStereo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStereo_MetaData, ARRAY_COUNT(NewProp_bIsStereo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureLevel_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FeatureLevel = { UE4CodeGen_Private::EPropertyClass::Str, "FeatureLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, FeatureLevel), METADATA_PARAMS(NewProp_FeatureLevel_MetaData, ARRAY_COUNT(NewProp_FeatureLevel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Platform), METADATA_PARAMS(NewProp_Platform_MetaData, ARRAY_COUNT(NewProp_Platform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rhi_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "RHI Details" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Rhi = { UE4CodeGen_Private::EPropertyClass::Str, "Rhi", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Rhi), METADATA_PARAMS(NewProp_Rhi_MetaData, ARRAY_COUNT(NewProp_Rhi_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commit_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Commit = { UE4CodeGen_Private::EPropertyClass::Str, "Commit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Commit), METADATA_PARAMS(NewProp_Commit_MetaData, ARRAY_COUNT(NewProp_Commit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Id_MetaData, ARRAY_COUNT(NewProp_Id_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Str, "Context", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Context), METADATA_PARAMS(NewProp_Context_MetaData, ARRAY_COUNT(NewProp_Context_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationScreenshotMetadata, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreColors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreAntiAliasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumGlobalError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaximumLocalError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceMaxBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceMinBrightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceBlue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceGreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToleranceRed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasComparisonRules,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FoliageQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectsQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcessQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AntiAliasingQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewDistanceQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResolutionQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniqueDeviceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdapterUserDriverVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdapterInternalDriverVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdapterName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vendor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStereo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FeatureLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Platform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rhi,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Commit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Context,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationScreenshotMetadata",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationScreenshotMetadata),
				alignof(FAutomationScreenshotMetadata),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotMetadata_CRC() { return 2147691723U; }
class UScriptStruct* FAutomationWorkerNextNetworkCommandReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply(FAutomationWorkerNextNetworkCommandReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerNextNetworkCommandReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerNextNetworkCommandReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerNextNetworkCommandReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerNextNetworkCommandReply"), sizeof(FAutomationWorkerNextNetworkCommandReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerNextNetworkCommandReply>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerNextNetworkCommandReply",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerNextNetworkCommandReply),
				alignof(FAutomationWorkerNextNetworkCommandReply),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerNextNetworkCommandReply_CRC() { return 4023751075U; }
class UScriptStruct* FAutomationWorkerRequestNextNetworkCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand(FAutomationWorkerRequestNextNetworkCommand::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestNextNetworkCommand"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestNextNetworkCommand")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestNextNetworkCommand;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestNextNetworkCommand"), sizeof(FAutomationWorkerRequestNextNetworkCommand), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestNextNetworkCommand>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestNextNetworkCommand, ExecutionCount), METADATA_PARAMS(NewProp_ExecutionCount_MetaData, ARRAY_COUNT(NewProp_ExecutionCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExecutionCount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerRequestNextNetworkCommand",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerRequestNextNetworkCommand),
				alignof(FAutomationWorkerRequestNextNetworkCommand),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestNextNetworkCommand_CRC() { return 2743184471U; }
class UScriptStruct* FAutomationWorkerRunTestsReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTestsReply(FAutomationWorkerRunTestsReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTestsReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTestsReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTestsReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTestsReply"), sizeof(FAutomationWorkerRunTestsReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerRunTests." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTestsReply>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewProp_Success_SetBit = [](void* Obj){ ((FAutomationWorkerRunTestsReply*)Obj)->Success = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success = { UE4CodeGen_Private::EPropertyClass::Bool, "Success", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRunTestsReply), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Success_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Success_MetaData, ARRAY_COUNT(NewProp_Success_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ExecutionCount), METADATA_PARAMS(NewProp_ExecutionCount_MetaData, ARRAY_COUNT(NewProp_ExecutionCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Duration), METADATA_PARAMS(NewProp_Duration_MetaData, ARRAY_COUNT(NewProp_Duration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorTotal_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorTotal = { UE4CodeGen_Private::EPropertyClass::Int, "ErrorTotal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, ErrorTotal), METADATA_PARAMS(NewProp_ErrorTotal_MetaData, ARRAY_COUNT(NewProp_ErrorTotal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningTotal_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WarningTotal = { UE4CodeGen_Private::EPropertyClass::Int, "WarningTotal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, WarningTotal), METADATA_PARAMS(NewProp_WarningTotal_MetaData, ARRAY_COUNT(NewProp_WarningTotal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTestsReply, TestName), METADATA_PARAMS(NewProp_TestName_MetaData, ARRAY_COUNT(NewProp_TestName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Success,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExecutionCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorTotal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarningTotal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerRunTestsReply",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerRunTestsReply),
				alignof(FAutomationWorkerRunTestsReply),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTestsReply_CRC() { return 2812569539U; }
class UScriptStruct* FAutomationWorkerRunTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRunTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRunTests(FAutomationWorkerRunTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRunTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRunTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRunTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRunTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRunTests"), sizeof(FAutomationWorkerRunTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message to request the running of automation tests on a worker." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRunTests>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendAnalytics_MetaData[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "If true, send results to analytics when complete" },
			};
#endif
			auto NewProp_bSendAnalytics_SetBit = [](void* Obj){ ((FAutomationWorkerRunTests*)Obj)->bSendAnalytics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendAnalytics = { UE4CodeGen_Private::EPropertyClass::Bool, "bSendAnalytics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRunTests), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSendAnalytics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSendAnalytics_MetaData, ARRAY_COUNT(NewProp_bSendAnalytics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeautifiedTestName_MetaData[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the test to run." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeautifiedTestName = { UE4CodeGen_Private::EPropertyClass::Str, "BeautifiedTestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, BeautifiedTestName), METADATA_PARAMS(NewProp_BeautifiedTestName_MetaData, ARRAY_COUNT(NewProp_BeautifiedTestName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the test to run." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, TestName), METADATA_PARAMS(NewProp_TestName_MetaData, ARRAY_COUNT(NewProp_TestName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleIndex_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoleIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RoleIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, RoleIndex), METADATA_PARAMS(NewProp_RoleIndex_MetaData, ARRAY_COUNT(NewProp_RoleIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ExecutionCount = { UE4CodeGen_Private::EPropertyClass::UInt32, "ExecutionCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRunTests, ExecutionCount), METADATA_PARAMS(NewProp_ExecutionCount_MetaData, ARRAY_COUNT(NewProp_ExecutionCount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSendAnalytics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BeautifiedTestName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoleIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExecutionCount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerRunTests",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerRunTests),
				alignof(FAutomationWorkerRunTests),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRunTests_CRC() { return 2561682680U; }
class UScriptStruct* FAutomationWorkerRequestTestsReplyComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete(FAutomationWorkerRequestTestsReplyComplete::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTestsReplyComplete"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTestsReplyComplete")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTestsReplyComplete;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTestsReplyComplete"), sizeof(FAutomationWorkerRequestTestsReplyComplete), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Returns list of all tests" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTestsReplyComplete>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests = { UE4CodeGen_Private::EPropertyClass::Array, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTestsReplyComplete, Tests), METADATA_PARAMS(NewProp_Tests_MetaData, ARRAY_COUNT(NewProp_Tests_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tests_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerRequestTestsReplyComplete",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerRequestTestsReplyComplete),
				alignof(FAutomationWorkerRequestTestsReplyComplete),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTestsReplyComplete_CRC() { return 1296500157U; }
class UScriptStruct* FAutomationWorkerSingleTestReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerSingleTestReply"), sizeof(FAutomationWorkerSingleTestReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerSingleTestReply(FAutomationWorkerSingleTestReply::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerSingleTestReply"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerSingleTestReply")),new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerSingleTestReply;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerSingleTestReply"), sizeof(FAutomationWorkerSingleTestReply), Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "A single test reply, used by FAutomationWorkerRequestTestsReplyComplete" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerSingleTestReply>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumParticipantsRequired_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumParticipantsRequired = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumParticipantsRequired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, NumParticipantsRequired), METADATA_PARAMS(NewProp_NumParticipantsRequired_MetaData, ARRAY_COUNT(NewProp_NumParticipantsRequired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestFlags_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TestFlags = { UE4CodeGen_Private::EPropertyClass::UInt32, "TestFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestFlags), METADATA_PARAMS(NewProp_TestFlags_MetaData, ARRAY_COUNT(NewProp_TestFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenCommand_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OpenCommand = { UE4CodeGen_Private::EPropertyClass::Str, "OpenCommand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, OpenCommand), METADATA_PARAMS(NewProp_OpenCommand_MetaData, ARRAY_COUNT(NewProp_OpenCommand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath = { UE4CodeGen_Private::EPropertyClass::Str, "AssetPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, AssetPath), METADATA_PARAMS(NewProp_AssetPath_MetaData, ARRAY_COUNT(NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileLine_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceFileLine = { UE4CodeGen_Private::EPropertyClass::Int, "SourceFileLine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFileLine), METADATA_PARAMS(NewProp_SourceFileLine_MetaData, ARRAY_COUNT(NewProp_SourceFileLine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFile = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, SourceFile), METADATA_PARAMS(NewProp_SourceFile_MetaData, ARRAY_COUNT(NewProp_SourceFile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestParameter_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestParameter = { UE4CodeGen_Private::EPropertyClass::Str, "TestParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestParameter), METADATA_PARAMS(NewProp_TestParameter_MetaData, ARRAY_COUNT(NewProp_TestParameter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestName = { UE4CodeGen_Private::EPropertyClass::Str, "TestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, TestName), METADATA_PARAMS(NewProp_TestName_MetaData, ARRAY_COUNT(NewProp_TestName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullTestPath_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullTestPath = { UE4CodeGen_Private::EPropertyClass::Str, "FullTestPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, FullTestPath), METADATA_PARAMS(NewProp_FullTestPath_MetaData, ARRAY_COUNT(NewProp_FullTestPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerSingleTestReply, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumParticipantsRequired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenCommand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AssetPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFileLine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceFile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestParameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullTestPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerSingleTestReply",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerSingleTestReply),
				alignof(FAutomationWorkerSingleTestReply),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerSingleTestReply_CRC() { return 3020505190U; }
class UScriptStruct* FAutomationWorkerRequestTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerRequestTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerRequestTests(FAutomationWorkerRequestTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerRequestTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerRequestTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerRequestTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerRequestTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerRequestTests"), sizeof(FAutomationWorkerRequestTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message for requesting available automation tests from a worker." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerRequestTests>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedTestFlags_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds a flag indicating which tests we'd like to request." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RequestedTestFlags = { UE4CodeGen_Private::EPropertyClass::UInt32, "RequestedTestFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerRequestTests, RequestedTestFlags), METADATA_PARAMS(NewProp_RequestedTestFlags_MetaData, ARRAY_COUNT(NewProp_RequestedTestFlags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperDirectoryIncluded_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds a flag indicating whether the developer directory should be included." },
			};
#endif
			auto NewProp_DeveloperDirectoryIncluded_SetBit = [](void* Obj){ ((FAutomationWorkerRequestTests*)Obj)->DeveloperDirectoryIncluded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeveloperDirectoryIncluded = { UE4CodeGen_Private::EPropertyClass::Bool, "DeveloperDirectoryIncluded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAutomationWorkerRequestTests), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DeveloperDirectoryIncluded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DeveloperDirectoryIncluded_MetaData, ARRAY_COUNT(NewProp_DeveloperDirectoryIncluded_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestedTestFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeveloperDirectoryIncluded,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerRequestTests",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerRequestTests),
				alignof(FAutomationWorkerRequestTests),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerRequestTests_CRC() { return 2749483769U; }
class UScriptStruct* FAutomationWorkerPong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPong, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPong(FAutomationWorkerPong::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPong"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPong")),new UScriptStruct::TCppStructOps<FAutomationWorkerPong>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPong;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPong"), sizeof(FAutomationWorkerPong), Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPong>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerPong",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerPong),
				alignof(FAutomationWorkerPong),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPong_CRC() { return 1624653607U; }
class UScriptStruct* FAutomationWorkerResetTests::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerResetTests, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerResetTests(FAutomationWorkerResetTests::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerResetTests"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerResetTests")),new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerResetTests;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerResetTests()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerResetTests"), sizeof(FAutomationWorkerResetTests), Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerResetTests>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerResetTests",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerResetTests),
				alignof(FAutomationWorkerResetTests),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerResetTests_CRC() { return 897064807U; }
class UScriptStruct* FAutomationWorkerPing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerPing, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerPing(FAutomationWorkerPing::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerPing"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerPing")),new UScriptStruct::TCppStructOps<FAutomationWorkerPing>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerPing;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerPing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerPing"), sizeof(FAutomationWorkerPing), Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerPing>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerPing",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerPing),
				alignof(FAutomationWorkerPing),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerPing_CRC() { return 1912671501U; }
class UScriptStruct* FAutomationWorkerWorkerOffline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerWorkerOffline(FAutomationWorkerWorkerOffline::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerWorkerOffline"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerWorkerOffline")),new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerWorkerOffline;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerWorkerOffline"), sizeof(FAutomationWorkerWorkerOffline), Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that notifies automation controllers that a worker went off-line." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerWorkerOffline>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerWorkerOffline",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerWorkerOffline),
				alignof(FAutomationWorkerWorkerOffline),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerWorkerOffline_CRC() { return 4050196771U; }
class UScriptStruct* FAutomationWorkerFindWorkersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkersResponse(FAutomationWorkerFindWorkersResponse::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkersResponse")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkersResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkersResponse"), sizeof(FAutomationWorkerFindWorkersResponse), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that is sent in response to FAutomationWorkerFindWorkers." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkersResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the worker's application session identifier." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderModeName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the current render mode." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RenderModeName = { UE4CodeGen_Private::EPropertyClass::Str, "RenderModeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RenderModeName), METADATA_PARAMS(NewProp_RenderModeName_MetaData, ARRAY_COUNT(NewProp_RenderModeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the amount of RAM this device has in gigabytes." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB = { UE4CodeGen_Private::EPropertyClass::UInt32, "RAMInGB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, RAMInGB), METADATA_PARAMS(NewProp_RAMInGB_MetaData, ARRAY_COUNT(NewProp_RAMInGB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUModelName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the CPU model." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUModelName = { UE4CodeGen_Private::EPropertyClass::Str, "CPUModelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, CPUModelName), METADATA_PARAMS(NewProp_CPUModelName_MetaData, ARRAY_COUNT(NewProp_CPUModelName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the GPU." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUName = { UE4CodeGen_Private::EPropertyClass::Str, "GPUName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, GPUName), METADATA_PARAMS(NewProp_GPUName_MetaData, ARRAY_COUNT(NewProp_GPUName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the device model." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModelName = { UE4CodeGen_Private::EPropertyClass::Str, "ModelName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, ModelName), METADATA_PARAMS(NewProp_ModelName_MetaData, ARRAY_COUNT(NewProp_ModelName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OSVersionName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the operating system version." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OSVersionName = { UE4CodeGen_Private::EPropertyClass::Str, "OSVersionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, OSVersionName), METADATA_PARAMS(NewProp_OSVersionName_MetaData, ARRAY_COUNT(NewProp_OSVersionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the platform that the worker is running on." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform = { UE4CodeGen_Private::EPropertyClass::Str, "Platform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, Platform), METADATA_PARAMS(NewProp_Platform_MetaData, ARRAY_COUNT(NewProp_Platform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the worker's application instance." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, InstanceName), METADATA_PARAMS(NewProp_InstanceName_MetaData, ARRAY_COUNT(NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the name of the device that the worker is running on." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkersResponse, DeviceName), METADATA_PARAMS(NewProp_DeviceName_MetaData, ARRAY_COUNT(NewProp_DeviceName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderModeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RAMInGB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CPUModelName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GPUName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModelName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OSVersionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Platform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerFindWorkersResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerFindWorkersResponse),
				alignof(FAutomationWorkerFindWorkersResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkersResponse_CRC() { return 473567782U; }
class UScriptStruct* FAutomationWorkerFindWorkers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOMATIONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers, Z_Construct_UPackage__Script_AutomationMessages(), TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationWorkerFindWorkers(FAutomationWorkerFindWorkers::StaticStruct, TEXT("/Script/AutomationMessages"), TEXT("AutomationWorkerFindWorkers"), false, nullptr, nullptr);
static struct FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers
{
	FScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationWorkerFindWorkers")),new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>);
	}
} ScriptStruct_AutomationMessages_StaticRegisterNativesFAutomationWorkerFindWorkers;
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AutomationMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationWorkerFindWorkers"), sizeof(FAutomationWorkerFindWorkers), Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Implements a message that is published to find automation workers." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWorkerFindWorkers>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the session identifier to find workers for." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "The name of the process." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessName = { UE4CodeGen_Private::EPropertyClass::Str, "ProcessName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, ProcessName), METADATA_PARAMS(NewProp_ProcessName_MetaData, ARRAY_COUNT(NewProp_ProcessName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "The name of the game." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameName = { UE4CodeGen_Private::EPropertyClass::Str, "GameName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, GameName), METADATA_PARAMS(NewProp_GameName_MetaData, ARRAY_COUNT(NewProp_GameName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/AutomationWorkerMessages.h" },
				{ "ToolTip", "Holds the change list number to find workers for." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Changelist = { UE4CodeGen_Private::EPropertyClass::Int, "Changelist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAutomationWorkerFindWorkers, Changelist), METADATA_PARAMS(NewProp_Changelist_MetaData, ARRAY_COUNT(NewProp_Changelist_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProcessName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Changelist,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AutomationMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AutomationWorkerFindWorkers",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAutomationWorkerFindWorkers),
				alignof(FAutomationWorkerFindWorkers),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationWorkerFindWorkers_CRC() { return 3470521350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
