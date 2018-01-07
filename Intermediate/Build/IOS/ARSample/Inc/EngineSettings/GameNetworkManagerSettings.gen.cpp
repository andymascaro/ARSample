// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameNetworkManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManagerSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameNetworkManagerSettings.h" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "Holds the settings for the AGameNetworkManager class." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The amount of time to wait before checking a connection for standby issues." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime = { UE4CodeGen_Private::EPropertyClass::Float, "JoinInProgressStandbyWaitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime), METADATA_PARAMS(NewProp_JoinInProgressStandbyWaitTime_MetaData, ARRAY_COUNT(NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing = { UE4CodeGen_Private::EPropertyClass::Float, "PercentForBadPing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentForBadPing), METADATA_PARAMS(NewProp_PercentForBadPing_MetaData, ARRAY_COUNT(NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForTxStandby", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForTxStandby), METADATA_PARAMS(NewProp_PercentMissingForTxStandby_MetaData, ARRAY_COUNT(NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForRxStandby", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForRxStandby), METADATA_PARAMS(NewProp_PercentMissingForRxStandby_MetaData, ARRAY_COUNT(NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyTxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyTxCheatTime), METADATA_PARAMS(NewProp_StandbyTxCheatTime_MetaData, ARRAY_COUNT(NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyRxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyRxCheatTime), METADATA_PARAMS(NewProp_StandbyRxCheatTime_MetaData, ARRAY_COUNT(NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "Used to determine if checking for standby cheats should occur." },
			};
#endif
			auto NewProp_bIsStandbyCheckingEnabled_SetBit = [](void* Obj){ ((UGameNetworkManagerSettings*)Obj)->bIsStandbyCheckingEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStandbyCheckingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGameNetworkManagerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStandbyCheckingEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStandbyCheckingEnabled_MetaData, ARRAY_COUNT(NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[] = {
				{ "Category", "StandbyCheats" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "BadPingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, BadPingThreshold), METADATA_PARAMS(NewProp_BadPingThreshold_MetaData, ARRAY_COUNT(NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[] = {
				{ "Category", "Bandwidth" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNetBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, TotalNetBandwidth), METADATA_PARAMS(NewProp_TotalNetBandwidth_MetaData, ARRAY_COUNT(NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[] = {
				{ "Category", "Bandwidth" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "Maximum bandwidth dynamically set per connection." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MaxDynamicBandwidth), METADATA_PARAMS(NewProp_MaxDynamicBandwidth_MetaData, ARRAY_COUNT(NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[] = {
				{ "Category", "Bandwidth" },
				{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
				{ "ToolTip", "Minimum bandwidth dynamically set per connection." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MinDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MinDynamicBandwidth), METADATA_PARAMS(NewProp_MinDynamicBandwidth_MetaData, ARRAY_COUNT(NewProp_MinDynamicBandwidth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JoinInProgressStandbyWaitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentForBadPing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentMissingForTxStandby,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PercentMissingForRxStandby,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandbyTxCheatTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StandbyRxCheatTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStandbyCheckingEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BadPingThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalNetBandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDynamicBandwidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinDynamicBandwidth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameNetworkManagerSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameNetworkManagerSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameNetworkManagerSettings, 4067902679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameNetworkManagerSettings(Z_Construct_UClass_UGameNetworkManagerSettings, &UGameNetworkManagerSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameNetworkManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
