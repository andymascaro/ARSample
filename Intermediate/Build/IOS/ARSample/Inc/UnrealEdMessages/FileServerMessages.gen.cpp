// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/FileServerMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileServerMessages() {}
// Cross Module References
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FFileServerReady::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALEDMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileServerReady, Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileServerReady(FFileServerReady::StaticStruct, TEXT("/Script/UnrealEdMessages"), TEXT("FileServerReady"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady
{
	FScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileServerReady")),new UScriptStruct::TCppStructOps<FFileServerReady>);
	}
} ScriptStruct_UnrealEdMessages_StaticRegisterNativesFFileServerReady;
	UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEdMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileServerReady"), sizeof(FFileServerReady), Get_Z_Construct_UScriptStruct_FFileServerReady_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
				{ "ToolTip", "Implements a message that is published by file servers when they're ready to accept connections." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileServerReady>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
				{ "ToolTip", "Holds the file server's application identifier." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFileServerReady, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressList_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
				{ "ToolTip", "Holds the list of IP addresses that the file server is listening on." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddressList = { UE4CodeGen_Private::EPropertyClass::Array, "AddressList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFileServerReady, AddressList), METADATA_PARAMS(NewProp_AddressList_MetaData, ARRAY_COUNT(NewProp_AddressList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "AddressList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressList_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FileServerReady",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFileServerReady),
				alignof(FFileServerReady),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileServerReady_CRC() { return 883969286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
