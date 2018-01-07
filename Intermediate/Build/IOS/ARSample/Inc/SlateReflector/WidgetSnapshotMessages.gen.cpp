// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/WidgetSnapshotMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSnapshotMessages() {}
// Cross Module References
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse();
	UPackage* Z_Construct_UPackage__Script_SlateReflector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATEREFLECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest();
// End Cross Module References
class UScriptStruct* FWidgetSnapshotResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotResponse, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotResponse(FWidgetSnapshotResponse::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotResponse")),new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotResponse"), sizeof(FWidgetSnapshotResponse), Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "Implements a message that is used to receive a widget snapshot from a remote target." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotData_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "The snapshot data, to be used by FWidgetSnapshotData::LoadSnapshotFromBuffer" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotData = { UE4CodeGen_Private::EPropertyClass::Array, "SnapshotData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotData), METADATA_PARAMS(NewProp_SnapshotData_MetaData, ARRAY_COUNT(NewProp_SnapshotData_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SnapshotData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "SnapshotData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId = { UE4CodeGen_Private::EPropertyClass::Struct, "SnapshotRequestId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FWidgetSnapshotResponse, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SnapshotRequestId_MetaData, ARRAY_COUNT(NewProp_SnapshotRequestId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotRequestId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WidgetSnapshotResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWidgetSnapshotResponse),
				alignof(FWidgetSnapshotResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotResponse_CRC() { return 4224715422U; }
class UScriptStruct* FWidgetSnapshotRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATEREFLECTOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest, Z_Construct_UPackage__Script_SlateReflector(), TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetSnapshotRequest(FWidgetSnapshotRequest::StaticStruct, TEXT("/Script/SlateReflector"), TEXT("WidgetSnapshotRequest"), false, nullptr, nullptr);
static struct FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest
{
	FScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetSnapshotRequest")),new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>);
	}
} ScriptStruct_SlateReflector_StaticRegisterNativesFWidgetSnapshotRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshotRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateReflector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetSnapshotRequest"), sizeof(FWidgetSnapshotRequest), Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "Implements a message that is used to request a widget snapshot from a remote target." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshotRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotRequestId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "The request ID of this snapshot (used to identify the correct response from the target)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotRequestId = { UE4CodeGen_Private::EPropertyClass::Struct, "SnapshotRequestId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FWidgetSnapshotRequest, SnapshotRequestId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SnapshotRequestId_MetaData, ARRAY_COUNT(NewProp_SnapshotRequestId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Private/WidgetSnapshotMessages.h" },
				{ "ToolTip", "The instance ID of the remote target we want to receive a snapshot from" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetInstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetInstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FWidgetSnapshotRequest, TargetInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_TargetInstanceId_MetaData, ARRAY_COUNT(NewProp_TargetInstanceId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapshotRequestId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetInstanceId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateReflector,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WidgetSnapshotRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FWidgetSnapshotRequest),
				alignof(FWidgetSnapshotRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetSnapshotRequest_CRC() { return 2156994440U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
