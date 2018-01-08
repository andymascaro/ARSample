// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/NetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
class UScriptStruct* FPacketSimulationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("PacketSimulationSettings"), sizeof(FPacketSimulationSettings), Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPacketSimulationSettings(FPacketSimulationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("PacketSimulationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PacketSimulationSettings")),new UScriptStruct::TCppStructOps<FPacketSimulationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPacketSimulationSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FPacketSimulationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PacketSimulationSettings"), sizeof(FPacketSimulationSettings), Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Holds the packet simulation settings in one place" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPacketSimulationSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLagVariance_MetaData[] = {
				{ "Category", "Simulation Settings" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "When set, will cause PktLag to use variable lag instead of constant.\nValue is treated as millisecond lag range (e.g. -GivenVariance <= 0 <= GivenVariance).\nClamped between 0 and 100.\n\nCan only be used when PktLag is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLagVariance = { UE4CodeGen_Private::EPropertyClass::Int, "PktLagVariance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLagVariance), METADATA_PARAMS(NewProp_PktLagVariance_MetaData, ARRAY_COUNT(NewProp_PktLagVariance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLag_MetaData[] = {
				{ "Category", "Simulation Settings" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "When set, will cause calls to FlushNet to delay packets.\nValue is treated as millisecond lag.\n\nCannot be used with PktOrder." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLag = { UE4CodeGen_Private::EPropertyClass::Int, "PktLag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLag), METADATA_PARAMS(NewProp_PktLag_MetaData, ARRAY_COUNT(NewProp_PktLag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktDup_MetaData[] = {
				{ "Category", "Simulation Settings" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "When set, will cause calls to FlushNet to duplicate packets.\nValue is treated as % of packets duplicated (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nCannot be used with PktOrder or PktLag." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktDup = { UE4CodeGen_Private::EPropertyClass::Int, "PktDup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktDup), METADATA_PARAMS(NewProp_PktDup_MetaData, ARRAY_COUNT(NewProp_PktDup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktOrder_MetaData[] = {
				{ "Category", "Simulation Settings" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "When set, will cause calls to FlushNet to change ordering of packets at random.\nValue is treated as a bool (i.e. 0 = False, anything else = True).\nThis works by randomly selecting packets to be delayed until a subsequent call to FlushNet.\n\nTakes precedence over PktDup and PktLag." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktOrder = { UE4CodeGen_Private::EPropertyClass::Int, "PktOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktOrder), METADATA_PARAMS(NewProp_PktOrder_MetaData, ARRAY_COUNT(NewProp_PktOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PktLoss_MetaData[] = {
				{ "Category", "Simulation Settings" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "When set, will cause calls to FlushNet to drop packets.\nValue is treated as % of packets dropped (i.e. 0 = None, 100 = All).\nNo general pattern / ordering is guaranteed.\nClamped between 0 and 100.\n\nWorks with all other settings." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PktLoss = { UE4CodeGen_Private::EPropertyClass::Int, "PktLoss", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPacketSimulationSettings, PktLoss), METADATA_PARAMS(NewProp_PktLoss_MetaData, ARRAY_COUNT(NewProp_PktLoss_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PktLagVariance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PktLag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PktDup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PktOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PktLoss,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PacketSimulationSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPacketSimulationSettings),
				alignof(FPacketSimulationSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPacketSimulationSettings_CRC() { return 3393486752U; }
	void UNetDriver::StaticRegisterNativesUNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UNetDriver_NoRegister()
	{
		return UNetDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_UNetDriver()
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
				{ "IncludePath", "Engine/NetDriver.h" },
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Accumulated time for the net driver, updated by Tick" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriverName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Used to specify the net driver to filter actors with (NAME_None || NAME_GameNetDriver is the default net driver)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NetDriverName = { UE4CodeGen_Private::EPropertyClass::Name, "NetDriverName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, NetDriverName), METADATA_PARAMS(NewProp_NetDriverName_MetaData, ARRAY_COUNT(NewProp_NetDriverName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteRoleProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoteRoleProperty = { UE4CodeGen_Private::EPropertyClass::Object, "RemoteRoleProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, RemoteRoleProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_RemoteRoleProperty_MetaData, ARRAY_COUNT(NewProp_RemoteRoleProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleProperty = { UE4CodeGen_Private::EPropertyClass::Object, "RoleProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, RoleProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_RoleProperty_MetaData, ARRAY_COUNT(NewProp_RoleProperty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "The loaded UClass of the net connection type to use" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NetConnectionClass = { UE4CodeGen_Private::EPropertyClass::Class, "NetConnectionClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, NetConnectionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_NetConnectionClass_MetaData, ARRAY_COUNT(NewProp_NetConnectionClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "World this net driver is associated with" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientConnections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Array of connections to clients (this net driver is a host)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientConnections = { UE4CodeGen_Private::EPropertyClass::Array, "ClientConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, ClientConnections), METADATA_PARAMS(NewProp_ClientConnections_MetaData, ARRAY_COUNT(NewProp_ClientConnections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientConnections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ClientConnections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerConnection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Connection to the server (this net driver is a client)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerConnection = { UE4CodeGen_Private::EPropertyClass::Object, "ServerConnection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNetDriver, ServerConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(NewProp_ServerConnection_MetaData, ARRAY_COUNT(NewProp_ServerConnection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTimeouts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "If true, ignore timeouts completely.  Should be used only in development" },
			};
#endif
			auto NewProp_bNoTimeouts_SetBit = [](void* Obj){ ((UNetDriver*)Obj)->bNoTimeouts = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTimeouts = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoTimeouts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UNetDriver), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoTimeouts_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoTimeouts_MetaData, ARRAY_COUNT(NewProp_bNoTimeouts_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "A multiplier that is applied to the above values when we are running with unoptimized builds (debug)\nor data (uncooked). This allows us to retain normal timeout behavior while debugging without resorting\nto the nuclear 'notimeouts' option or bumping the values above. If ==0 multiplier = 1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeoutMultiplierForUnoptimizedBuilds = { UE4CodeGen_Private::EPropertyClass::Float, "TimeoutMultiplierForUnoptimizedBuilds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, TimeoutMultiplierForUnoptimizedBuilds), METADATA_PARAMS(NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData, ARRAY_COUNT(NewProp_TimeoutMultiplierForUnoptimizedBuilds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Amount of time to wait before considering an established connection timed out.\nTypically shorter than the time to wait on a new connection because this connection\nshould already have been setup and any interruption should be trapped quicker." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "ConnectionTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, ConnectionTimeout), METADATA_PARAMS(NewProp_ConnectionTimeout_MetaData, ARRAY_COUNT(NewProp_ConnectionTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialConnectTimeout_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Amount of time to wait for a new net connection to be established before destroying the connection" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialConnectTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "InitialConnectTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, InitialConnectTimeout), METADATA_PARAMS(NewProp_InitialConnectTimeout_MetaData, ARRAY_COUNT(NewProp_InitialConnectTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepAliveTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeepAliveTime = { UE4CodeGen_Private::EPropertyClass::Float, "KeepAliveTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, KeepAliveTime), METADATA_PARAMS(NewProp_KeepAliveTime_MetaData, ARRAY_COUNT(NewProp_KeepAliveTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelevantTimeout_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelevantTimeout = { UE4CodeGen_Private::EPropertyClass::Float, "RelevantTimeout", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, RelevantTimeout), METADATA_PARAMS(NewProp_RelevantTimeout_MetaData, ARRAY_COUNT(NewProp_RelevantTimeout_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPrioritySeconds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnPrioritySeconds = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnPrioritySeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, SpawnPrioritySeconds), METADATA_PARAMS(NewProp_SpawnPrioritySeconds_MetaData, ARRAY_COUNT(NewProp_SpawnPrioritySeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTravelPause_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Amount of time a server will wait before traveling to next map, gives clients time to receive final RPCs on existing level @see NextSwitchCountdown" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTravelPause = { UE4CodeGen_Private::EPropertyClass::Float, "ServerTravelPause", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, ServerTravelPause), METADATA_PARAMS(NewProp_ServerTravelPause_MetaData, ARRAY_COUNT(NewProp_ServerTravelPause_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClientRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxClientRate = { UE4CodeGen_Private::EPropertyClass::Int, "MaxClientRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, MaxClientRate), METADATA_PARAMS(NewProp_MaxClientRate_MetaData, ARRAY_COUNT(NewProp_MaxClientRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInternetClientRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInternetClientRate = { UE4CodeGen_Private::EPropertyClass::Int, "MaxInternetClientRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, MaxInternetClientRate), METADATA_PARAMS(NewProp_MaxInternetClientRate_MetaData, ARRAY_COUNT(NewProp_MaxInternetClientRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetServerMaxTickRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetServerMaxTickRate = { UE4CodeGen_Private::EPropertyClass::Int, "NetServerMaxTickRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, NetServerMaxTickRate), METADATA_PARAMS(NewProp_NetServerMaxTickRate_MetaData, ARRAY_COUNT(NewProp_NetServerMaxTickRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampListenServerTickRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			auto NewProp_bClampListenServerTickRate_SetBit = [](void* Obj){ ((UNetDriver*)Obj)->bClampListenServerTickRate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampListenServerTickRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bClampListenServerTickRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNetDriver), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClampListenServerTickRate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClampListenServerTickRate_MetaData, ARRAY_COUNT(NewProp_bClampListenServerTickRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDownloadSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDownloadSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, MaxDownloadSize), METADATA_PARAMS(NewProp_MaxDownloadSize_MetaData, ARRAY_COUNT(NewProp_MaxDownloadSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnectionClassName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/NetDriver.h" },
				{ "ToolTip", "Used to specify the class to use for connections" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetConnectionClassName = { UE4CodeGen_Private::EPropertyClass::Str, "NetConnectionClassName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetDriver, NetConnectionClassName), METADATA_PARAMS(NewProp_NetConnectionClassName_MetaData, ARRAY_COUNT(NewProp_NetConnectionClassName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetDriverName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemoteRoleProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoleProperty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetConnectionClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientConnections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientConnections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerConnection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoTimeouts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeoutMultiplierForUnoptimizedBuilds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConnectionTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialConnectTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeepAliveTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelevantTimeout,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnPrioritySeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerTravelPause,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxClientRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInternetClientRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetServerMaxTickRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClampListenServerTickRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDownloadSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetConnectionClassName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNetDriver>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNetDriver::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0008008Du,
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
	IMPLEMENT_CLASS(UNetDriver, 4214158796);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetDriver(Z_Construct_UClass_UNetDriver, &UNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
