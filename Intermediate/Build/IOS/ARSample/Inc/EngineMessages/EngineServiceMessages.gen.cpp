// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EngineServiceMessages.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineServiceMessages() {}
// Cross Module References
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification();
	UPackage* Z_Construct_UPackage__Script_EngineMessages();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing();
// End Cross Module References
class UScriptStruct* FEngineServiceNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceNotification, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceNotification"), sizeof(FEngineServiceNotification), Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceNotification(FEngineServiceNotification::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceNotification"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceNotification")),new UScriptStruct::TCppStructOps<FEngineServiceNotification>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceNotification;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceNotification"), sizeof(FEngineServiceNotification), Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message that contains a notification or log output." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceNotification>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the time in seconds since the engine started." },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds = { UE4CodeGen_Private::EPropertyClass::Double, "TimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceNotification, TimeSeconds), METADATA_PARAMS(NewProp_TimeSeconds_MetaData, ARRAY_COUNT(NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the notification text." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceNotification, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServiceNotification",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServiceNotification),
				alignof(FEngineServiceNotification),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC() { return 2969997008U; }
class UScriptStruct* FEngineServiceTerminate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceTerminate, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceTerminate"), sizeof(FEngineServiceTerminate), Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceTerminate(FEngineServiceTerminate::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceTerminate"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceTerminate")),new UScriptStruct::TCppStructOps<FEngineServiceTerminate>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceTerminate;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceTerminate"), sizeof(FEngineServiceTerminate), Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for terminating the engine." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceTerminate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that wants to terminate the engine." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceTerminate, UserName), METADATA_PARAMS(NewProp_UserName_MetaData, ARRAY_COUNT(NewProp_UserName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServiceTerminate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServiceTerminate),
				alignof(FEngineServiceTerminate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC() { return 1384835476U; }
class UScriptStruct* FEngineServiceExecuteCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceExecuteCommand"), sizeof(FEngineServiceExecuteCommand), Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceExecuteCommand(FEngineServiceExecuteCommand::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceExecuteCommand"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceExecuteCommand")),new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceExecuteCommand;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceExecuteCommand"), sizeof(FEngineServiceExecuteCommand), Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for executing a console command." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that wants to execute the command." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceExecuteCommand, UserName), METADATA_PARAMS(NewProp_UserName_MetaData, ARRAY_COUNT(NewProp_UserName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the command to execute." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command = { UE4CodeGen_Private::EPropertyClass::Str, "Command", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceExecuteCommand, Command), METADATA_PARAMS(NewProp_Command_MetaData, ARRAY_COUNT(NewProp_Command_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Command,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServiceExecuteCommand",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServiceExecuteCommand),
				alignof(FEngineServiceExecuteCommand),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC() { return 710344207U; }
class UScriptStruct* FEngineServiceAuthGrant::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthGrant, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthGrant"), sizeof(FEngineServiceAuthGrant), Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceAuthGrant(FEngineServiceAuthGrant::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceAuthGrant"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceAuthGrant")),new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthGrant;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceAuthGrant"), sizeof(FEngineServiceAuthGrant), Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for granting service access to a remote user." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserToGrant_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that access is granted to." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserToGrant = { UE4CodeGen_Private::EPropertyClass::Str, "UserToGrant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceAuthGrant, UserToGrant), METADATA_PARAMS(NewProp_UserToGrant_MetaData, ARRAY_COUNT(NewProp_UserToGrant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that granted access." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceAuthGrant, UserName), METADATA_PARAMS(NewProp_UserName_MetaData, ARRAY_COUNT(NewProp_UserName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserToGrant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServiceAuthGrant",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServiceAuthGrant),
				alignof(FEngineServiceAuthGrant),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC() { return 31721379U; }
class UScriptStruct* FEngineServiceAuthDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthDeny, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthDeny"), sizeof(FEngineServiceAuthDeny), Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServiceAuthDeny(FEngineServiceAuthDeny::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServiceAuthDeny"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServiceAuthDeny")),new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServiceAuthDeny;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServiceAuthDeny"), sizeof(FEngineServiceAuthDeny), Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for denying service access to a remote user." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserToDeny_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that access is denied to." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserToDeny = { UE4CodeGen_Private::EPropertyClass::Str, "UserToDeny", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceAuthDeny, UserToDeny), METADATA_PARAMS(NewProp_UserToDeny_MetaData, ARRAY_COUNT(NewProp_UserToDeny_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the user that denied access." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServiceAuthDeny, UserName), METADATA_PARAMS(NewProp_UserName_MetaData, ARRAY_COUNT(NewProp_UserName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserToDeny,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServiceAuthDeny",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServiceAuthDeny),
				alignof(FEngineServiceAuthDeny),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC() { return 772317472U; }
class UScriptStruct* FEngineServicePong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePong, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePong"), sizeof(FEngineServicePong), Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServicePong(FEngineServicePong::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServicePong"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServicePong")),new UScriptStruct::TCppStructOps<FEngineServicePong>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePong;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServicePong"), sizeof(FEngineServicePong), Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for responding to a request to discover engine instances on the network." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePong>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSeconds_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the time in seconds since the world was loaded." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "WorldTimeSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, WorldTimeSeconds), METADATA_PARAMS(NewProp_WorldTimeSeconds_MetaData, ARRAY_COUNT(NewProp_WorldTimeSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SessionId = { UE4CodeGen_Private::EPropertyClass::Struct, "SessionId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SessionId_MetaData, ARRAY_COUNT(NewProp_SessionId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the type of the engine instance." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceType = { UE4CodeGen_Private::EPropertyClass::Str, "InstanceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, InstanceType), METADATA_PARAMS(NewProp_InstanceType_MetaData, ARRAY_COUNT(NewProp_InstanceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the instance identifier." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceId = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_InstanceId_MetaData, ARRAY_COUNT(NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBegunPlay_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds a flag indicating whether game play has begun." },
			};
#endif
			auto NewProp_HasBegunPlay_SetBit = [](void* Obj){ ((FEngineServicePong*)Obj)->HasBegunPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBegunPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "HasBegunPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEngineServicePong), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HasBegunPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HasBegunPlay_MetaData, ARRAY_COUNT(NewProp_HasBegunPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the engine version." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EngineVersion = { UE4CodeGen_Private::EPropertyClass::Int, "EngineVersion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, EngineVersion), METADATA_PARAMS(NewProp_EngineVersion_MetaData, ARRAY_COUNT(NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
				{ "Category", "Message" },
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Holds the name of the currently loaded level, if any." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentLevel = { UE4CodeGen_Private::EPropertyClass::Str, "CurrentLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEngineServicePong, CurrentLevel), METADATA_PARAMS(NewProp_CurrentLevel_MetaData, ARRAY_COUNT(NewProp_CurrentLevel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldTimeSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasBegunPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineVersion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentLevel,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServicePong",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServicePong),
				alignof(FEngineServicePong),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC() { return 326434376U; }
class UScriptStruct* FEngineServicePing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINEMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePing, Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePing"), sizeof(FEngineServicePing), Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineServicePing(FEngineServicePing::StaticStruct, TEXT("/Script/EngineMessages"), TEXT("EngineServicePing"), false, nullptr, nullptr);
static struct FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing
{
	FScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineServicePing")),new UScriptStruct::TCppStructOps<FEngineServicePing>);
	}
} ScriptStruct_EngineMessages_StaticRegisterNativesFEngineServicePing;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineServicePing"), sizeof(FEngineServicePing), Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
				{ "ToolTip", "Implements a message for discovering engine instances on the network." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePing>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineServicePing",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineServicePing),
				alignof(FEngineServicePing),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC() { return 1203970321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
