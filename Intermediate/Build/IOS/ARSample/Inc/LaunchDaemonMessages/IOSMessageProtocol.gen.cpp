// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/IOSMessageProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOSMessageProtocol() {}
// Cross Module References
	LAUNCHDAEMONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp();
	UPackage* Z_Construct_UPackage__Script_LaunchDaemonMessages();
	LAUNCHDAEMONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonPong();
	LAUNCHDAEMONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonPing();
// End Cross Module References
class UScriptStruct* FIOSLaunchDaemonLaunchApp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHDAEMONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp, Z_Construct_UPackage__Script_LaunchDaemonMessages(), TEXT("IOSLaunchDaemonLaunchApp"), sizeof(FIOSLaunchDaemonLaunchApp), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSLaunchDaemonLaunchApp(FIOSLaunchDaemonLaunchApp::StaticStruct, TEXT("/Script/LaunchDaemonMessages"), TEXT("IOSLaunchDaemonLaunchApp"), false, nullptr, nullptr);
static struct FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonLaunchApp
{
	FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonLaunchApp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSLaunchDaemonLaunchApp")),new UScriptStruct::TCppStructOps<FIOSLaunchDaemonLaunchApp>);
	}
} ScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonLaunchApp;
	UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LaunchDaemonMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSLaunchDaemonLaunchApp"), sizeof(FIOSLaunchDaemonLaunchApp), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSLaunchDaemonLaunchApp>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Str, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonLaunchApp, Parameters), METADATA_PARAMS(NewProp_Parameters_MetaData, ARRAY_COUNT(NewProp_Parameters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppID = { UE4CodeGen_Private::EPropertyClass::Str, "AppID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonLaunchApp, AppID), METADATA_PARAMS(NewProp_AppID_MetaData, ARRAY_COUNT(NewProp_AppID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AppID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LaunchDaemonMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IOSLaunchDaemonLaunchApp",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIOSLaunchDaemonLaunchApp),
				alignof(FIOSLaunchDaemonLaunchApp),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonLaunchApp_CRC() { return 131363563U; }
class UScriptStruct* FIOSLaunchDaemonPong::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHDAEMONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPong_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSLaunchDaemonPong, Z_Construct_UPackage__Script_LaunchDaemonMessages(), TEXT("IOSLaunchDaemonPong"), sizeof(FIOSLaunchDaemonPong), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPong_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSLaunchDaemonPong(FIOSLaunchDaemonPong::StaticStruct, TEXT("/Script/LaunchDaemonMessages"), TEXT("IOSLaunchDaemonPong"), false, nullptr, nullptr);
static struct FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPong
{
	FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPong()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSLaunchDaemonPong")),new UScriptStruct::TCppStructOps<FIOSLaunchDaemonPong>);
	}
} ScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPong;
	UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonPong()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPong_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LaunchDaemonMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSLaunchDaemonPong"), sizeof(FIOSLaunchDaemonPong), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPong_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSLaunchDaemonPong>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanReboot_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewProp_bCanReboot_SetBit = [](void* Obj){ ((FIOSLaunchDaemonPong*)Obj)->bCanReboot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanReboot = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanReboot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FIOSLaunchDaemonPong), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanReboot_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanReboot_MetaData, ARRAY_COUNT(NewProp_bCanReboot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPowerOn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewProp_bCanPowerOn_SetBit = [](void* Obj){ ((FIOSLaunchDaemonPong*)Obj)->bCanPowerOn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPowerOn = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanPowerOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FIOSLaunchDaemonPong), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanPowerOn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanPowerOn_MetaData, ARRAY_COUNT(NewProp_bCanPowerOn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanPowerOff_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewProp_bCanPowerOff_SetBit = [](void* Obj){ ((FIOSLaunchDaemonPong*)Obj)->bCanPowerOff = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPowerOff = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanPowerOff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FIOSLaunchDaemonPong), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanPowerOff_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanPowerOff_MetaData, ARRAY_COUNT(NewProp_bCanPowerOff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceType = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonPong, DeviceType), METADATA_PARAMS(NewProp_DeviceType_MetaData, ARRAY_COUNT(NewProp_DeviceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceStatus_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceStatus = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonPong, DeviceStatus), METADATA_PARAMS(NewProp_DeviceStatus_MetaData, ARRAY_COUNT(NewProp_DeviceStatus_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonPong, DeviceName), METADATA_PARAMS(NewProp_DeviceName_MetaData, ARRAY_COUNT(NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Str, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FIOSLaunchDaemonPong, DeviceID), METADATA_PARAMS(NewProp_DeviceID_MetaData, ARRAY_COUNT(NewProp_DeviceID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanReboot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanPowerOn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanPowerOff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LaunchDaemonMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IOSLaunchDaemonPong",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIOSLaunchDaemonPong),
				alignof(FIOSLaunchDaemonPong),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPong_CRC() { return 1790254785U; }
class UScriptStruct* FIOSLaunchDaemonPing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHDAEMONMESSAGES_API uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIOSLaunchDaemonPing, Z_Construct_UPackage__Script_LaunchDaemonMessages(), TEXT("IOSLaunchDaemonPing"), sizeof(FIOSLaunchDaemonPing), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIOSLaunchDaemonPing(FIOSLaunchDaemonPing::StaticStruct, TEXT("/Script/LaunchDaemonMessages"), TEXT("IOSLaunchDaemonPing"), false, nullptr, nullptr);
static struct FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPing
{
	FScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IOSLaunchDaemonPing")),new UScriptStruct::TCppStructOps<FIOSLaunchDaemonPing>);
	}
} ScriptStruct_LaunchDaemonMessages_StaticRegisterNativesFIOSLaunchDaemonPing;
	UScriptStruct* Z_Construct_UScriptStruct_FIOSLaunchDaemonPing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPing_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LaunchDaemonMessages();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IOSLaunchDaemonPing"), sizeof(FIOSLaunchDaemonPing), Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPing_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/IOSMessageProtocol.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIOSLaunchDaemonPing>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LaunchDaemonMessages,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"IOSLaunchDaemonPing",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FIOSLaunchDaemonPing),
				alignof(FIOSLaunchDaemonPing),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIOSLaunchDaemonPing_CRC() { return 1449434168U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
