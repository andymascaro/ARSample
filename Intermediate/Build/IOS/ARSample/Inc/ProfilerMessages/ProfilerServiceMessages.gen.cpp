// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ProfilerServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilerServiceMessages() {}
// Cross Module References
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest();
	UPackage* Z_Construct_UPackage__Script_ProfilerMessages();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2();
	PROFILERMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize();
// End Cross Module References
class UScriptStruct* FProfilerServiceRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceRequest, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceRequest(FProfilerServiceRequest::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceRequest"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceRequest")),new UScriptStruct::TCppStructOps<FProfilerServiceRequest>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceRequest"), sizeof(FProfilerServiceRequest), Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Request @see EProfilerRequestType." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Request = { UE4CodeGen_Private::EPropertyClass::UInt32, "Request", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceRequest, Request), METADATA_PARAMS(NewProp_Request_MetaData, ARRAY_COUNT(NewProp_Request_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Request,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceRequest),
				alignof(FProfilerServiceRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceRequest_CRC() { return 4133580541U; }
class UScriptStruct* FProfilerServicePreview::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreview, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreview(FProfilerServicePreview::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreview"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreview")),new UScriptStruct::TCppStructOps<FProfilerServicePreview>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreview;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreview()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreview"), sizeof(FProfilerServicePreview), Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreview>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestedPreviewState_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "The data preview state that should be set." },
			};
#endif
			auto NewProp_bRequestedPreviewState_SetBit = [](void* Obj){ ((FProfilerServicePreview*)Obj)->bRequestedPreviewState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestedPreviewState = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequestedPreviewState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfilerServicePreview), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequestedPreviewState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRequestedPreviewState_MetaData, ARRAY_COUNT(NewProp_bRequestedPreviewState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequestedPreviewState,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServicePreview",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServicePreview),
				alignof(FProfilerServicePreview),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreview_CRC() { return 3047538035U; }
class UScriptStruct* FProfilerServiceCapture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceCapture, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceCapture(FProfilerServiceCapture::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceCapture"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceCapture")),new UScriptStruct::TCppStructOps<FProfilerServiceCapture>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceCapture;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceCapture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceCapture"), sizeof(FProfilerServiceCapture), Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceCapture>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestedCaptureState_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "The data capture state that should be set." },
			};
#endif
			auto NewProp_bRequestedCaptureState_SetBit = [](void* Obj){ ((FProfilerServiceCapture*)Obj)->bRequestedCaptureState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestedCaptureState = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequestedCaptureState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfilerServiceCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequestedCaptureState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRequestedCaptureState_MetaData, ARRAY_COUNT(NewProp_bRequestedCaptureState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequestedCaptureState,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceCapture",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceCapture),
				alignof(FProfilerServiceCapture),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceCapture_CRC() { return 2119717641U; }
class UScriptStruct* FProfilerServiceUnsubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceUnsubscribe(FProfilerServiceUnsubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceUnsubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceUnsubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceUnsubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceUnsubscribe"), sizeof(FProfilerServiceUnsubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceUnsubscribe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceUnsubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceUnsubscribe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceUnsubscribe),
				alignof(FProfilerServiceUnsubscribe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceUnsubscribe_CRC() { return 3847345705U; }
class UScriptStruct* FProfilerServiceSubscribe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceSubscribe, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceSubscribe(FProfilerServiceSubscribe::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceSubscribe"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceSubscribe")),new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceSubscribe;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceSubscribe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceSubscribe"), sizeof(FProfilerServiceSubscribe), Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceSubscribe>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceSubscribe, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceSubscribe",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceSubscribe),
				alignof(FProfilerServiceSubscribe),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceSubscribe_CRC() { return 248265690U; }
class UScriptStruct* FProfilerServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePong, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePong(FProfilerServicePong::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePong")),new UScriptStruct::TCppStructOps<FProfilerServicePong>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePong;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePong"), sizeof(FProfilerServicePong), Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePong>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServicePong",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServicePong),
				alignof(FProfilerServicePong),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePong_CRC() { return 2526454064U; }
class UScriptStruct* FProfilerServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePing, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePing(FProfilerServicePing::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePing")),new UScriptStruct::TCppStructOps<FProfilerServicePing>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePing;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePing"), sizeof(FProfilerServicePing), Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePing>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServicePing",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServicePing),
				alignof(FProfilerServicePing),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePing_CRC() { return 1499210426U; }
class UScriptStruct* FProfilerServiceFileChunk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceFileChunk, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceFileChunk(FProfilerServiceFileChunk::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceFileChunk"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceFileChunk")),new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceFileChunk;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceFileChunk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceFileChunk"), sizeof(FProfilerServiceFileChunk), Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Implements a message for copying a file through the network, as well as for synchronization.\nUnfortunately assumes that InstanceId and Filename are transfered without errors." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceFileChunk>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkHash_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Hash of this data and header." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChunkHash = { UE4CodeGen_Private::EPropertyClass::Array, "ChunkHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, ChunkHash), METADATA_PARAMS(NewProp_ChunkHash_MetaData, ARRAY_COUNT(NewProp_ChunkHash_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChunkHash_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ChunkHash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "FProfilerFileChunkHeader stored in the array." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Header = { UE4CodeGen_Private::EPropertyClass::Array, "Header", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Header), METADATA_PARAMS(NewProp_Header_MetaData, ARRAY_COUNT(NewProp_Header_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Header_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Header", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Data to be sent through message bus. Message bug doesn't support TArray<>, so we encode the data as HexString." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexData = { UE4CodeGen_Private::EPropertyClass::Str, "HexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, HexData), METADATA_PARAMS(NewProp_HexData_MetaData, ARRAY_COUNT(NewProp_HexData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "The file containing this file chunk." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, Filename), METADATA_PARAMS(NewProp_Filename_MetaData, ARRAY_COUNT(NewProp_Filename_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "The ID of the instance where this message should be sent." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceFileChunk, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkHash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkHash_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Header,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Header_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Filename,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceFileChunk",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceFileChunk),
				alignof(FProfilerServiceFileChunk),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceFileChunk_CRC() { return 1990905385U; }
class UScriptStruct* FProfilerServicePreviewAck::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServicePreviewAck, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServicePreviewAck(FProfilerServicePreviewAck::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServicePreviewAck"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServicePreviewAck")),new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServicePreviewAck;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServicePreviewAck()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServicePreviewAck"), sizeof(FProfilerServicePreviewAck), Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServicePreviewAck>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServicePreviewAck, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServicePreviewAck",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServicePreviewAck),
				alignof(FProfilerServicePreviewAck),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServicePreviewAck_CRC() { return 2484789271U; }
class UScriptStruct* FProfilerServiceData2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceData2, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceData2(FProfilerServiceData2::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceData2"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceData2")),new UScriptStruct::TCppStructOps<FProfilerServiceData2>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceData2;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceData2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceData2"), sizeof(FProfilerServiceData2), Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Profiler Service data." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceData2>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexData_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Profiler data encoded as string of hexes, cannot use TArray<uint8> because of the Message Bus limitation." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HexData = { UE4CodeGen_Private::EPropertyClass::Str, "HexData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, HexData), METADATA_PARAMS(NewProp_HexData_MetaData, ARRAY_COUNT(NewProp_HexData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Size of the uncompressed data." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedSize = { UE4CodeGen_Private::EPropertyClass::Int, "UncompressedSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, UncompressedSize), METADATA_PARAMS(NewProp_UncompressedSize_MetaData, ARRAY_COUNT(NewProp_UncompressedSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Size of the compressed data." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressedSize = { UE4CodeGen_Private::EPropertyClass::Int, "CompressedSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, CompressedSize), METADATA_PARAMS(NewProp_CompressedSize_MetaData, ARRAY_COUNT(NewProp_CompressedSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Stats frame." },
			};
#endif
			static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Int64, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, Frame), METADATA_PARAMS(NewProp_Frame_MetaData, ARRAY_COUNT(NewProp_Frame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Instance ID." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceData2, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HexData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UncompressedSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceData2",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceData2),
				alignof(FProfilerServiceData2),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceData2_CRC() { return 1592132887U; }
class UScriptStruct* FProfilerServiceAuthorize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROFILERMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilerServiceAuthorize, Z_Construct_UPackage__Script_ProfilerMessages(), TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilerServiceAuthorize(FProfilerServiceAuthorize::StaticStruct, TEXT("/Script/ProfilerMessages"), TEXT("ProfilerServiceAuthorize"), false, nullptr, nullptr);
static struct FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize
{
	FScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfilerServiceAuthorize")),new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>);
	}
} ScriptStruct_ProfilerMessages_StaticRegisterNativesFProfilerServiceAuthorize;
	UScriptStruct* Z_Construct_UScriptStruct_FProfilerServiceAuthorize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProfilerMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilerServiceAuthorize"), sizeof(FProfilerServiceAuthorize), Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Profiler Service authorization message." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilerServiceAuthorize>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Instance ID." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/ProfilerServiceMessages.h" },
				{ "ToolTip", "Session ID." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfilerServiceAuthorize, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProfilerMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProfilerServiceAuthorize",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProfilerServiceAuthorize),
				alignof(FProfilerServiceAuthorize),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilerServiceAuthorize_CRC() { return 616836779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
