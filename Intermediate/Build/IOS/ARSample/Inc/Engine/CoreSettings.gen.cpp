// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/CoreSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGarbageCollectionSettings();
// End Cross Module References
	void UStreamingSettings::StaticRegisterNativesUStreamingSettings()
	{
	}
	UClass* Z_Construct_UClass_UStreamingSettings_NoRegister()
	{
		return UStreamingSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UStreamingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Streaming" },
				{ "IncludePath", "Engine/CoreSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Streaming settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDrivenLoaderEnabled_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.EventDrivenLoaderEnabled" },
				{ "DisplayName", "Event Driven Loader Enabled" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Enables the event driven loader in cooked builds." },
			};
#endif
			auto NewProp_EventDrivenLoaderEnabled_SetBit = [](void* Obj){ ((UStreamingSettings*)Obj)->EventDrivenLoaderEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EventDrivenLoaderEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "EventDrivenLoaderEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStreamingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EventDrivenLoaderEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EventDrivenLoaderEnabled_MetaData, ARRAY_COUNT(NewProp_EventDrivenLoaderEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.LevelStreamingComponentsUnregistrationGranularity" },
				{ "DisplayName", "Components Unregistration Granularity" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Batching granularity used to unregister actor components during level streaming." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsUnregistrationGranularity = { UE4CodeGen_Private::EPropertyClass::Int, "LevelStreamingComponentsUnregistrationGranularity", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity), METADATA_PARAMS(NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData, ARRAY_COUNT(NewProp_LevelStreamingComponentsUnregistrationGranularity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.UnregisterComponentsTimeLimit" },
				{ "DisplayName", "Component Unregister Update Time Limit" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum allowed time to spend while unregistering components during level streaming (ms per frame)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingUnregisterComponentsTimeLimit = { UE4CodeGen_Private::EPropertyClass::Float, "LevelStreamingUnregisterComponentsTimeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit), METADATA_PARAMS(NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData, ARRAY_COUNT(NewProp_LevelStreamingUnregisterComponentsTimeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.LevelStreamingComponentsRegistrationGranularity" },
				{ "DisplayName", "Components Registration Granularity" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Batching granularity used to register actor components during level streaming." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelStreamingComponentsRegistrationGranularity = { UE4CodeGen_Private::EPropertyClass::Int, "LevelStreamingComponentsRegistrationGranularity", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity), METADATA_PARAMS(NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData, ARRAY_COUNT(NewProp_LevelStreamingComponentsRegistrationGranularity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.LevelStreamingActorsUpdateTimeLimit" },
				{ "DisplayName", "Actor Initialization Update Time Limit" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum allowed time to spend for actor registration steps during level streaming (ms per frame)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelStreamingActorsUpdateTimeLimit = { UE4CodeGen_Private::EPropertyClass::Float, "LevelStreamingActorsUpdateTimeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit), METADATA_PARAMS(NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData, ARRAY_COUNT(NewProp_LevelStreamingActorsUpdateTimeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityAsyncLoadingExtraTime_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.PriorityAsyncLoadingExtraTime" },
				{ "DisplayName", "Priority Async Loading Extra Time" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Additional time to spend asynchronous loading during a high priority load." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PriorityAsyncLoadingExtraTime = { UE4CodeGen_Private::EPropertyClass::Float, "PriorityAsyncLoadingExtraTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, PriorityAsyncLoadingExtraTime), METADATA_PARAMS(NewProp_PriorityAsyncLoadingExtraTime_MetaData, ARRAY_COUNT(NewProp_PriorityAsyncLoadingExtraTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeLimit_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.AsyncLoadingTimeLimit" },
				{ "DisplayName", "Async Loading Time Limit" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum amount of time to spend doing asynchronous loading (ms per frame)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeLimit = { UE4CodeGen_Private::EPropertyClass::Float, "AsyncLoadingTimeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, AsyncLoadingTimeLimit), METADATA_PARAMS(NewProp_AsyncLoadingTimeLimit_MetaData, ARRAY_COUNT(NewProp_AsyncLoadingTimeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingUseFullTimeLimit_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.AsyncLoadingUseFullTimeLimit" },
				{ "DisplayName", "Async Loading Use Full Time Limit" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Whether to use the entire time limit even if blocked on I/O." },
			};
#endif
			auto NewProp_AsyncLoadingUseFullTimeLimit_SetBit = [](void* Obj){ ((UStreamingSettings*)Obj)->AsyncLoadingUseFullTimeLimit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingUseFullTimeLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "AsyncLoadingUseFullTimeLimit", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStreamingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AsyncLoadingUseFullTimeLimit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AsyncLoadingUseFullTimeLimit_MetaData, ARRAY_COUNT(NewProp_AsyncLoadingUseFullTimeLimit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBackgroundLevelStreaming_MetaData[] = {
				{ "Category", "LevelStreaming" },
				{ "ConsoleVariable", "s.UseBackgroundLevelStreaming" },
				{ "DisplayName", "Use Background Level Streaming" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Whether to allow background level streaming." },
			};
#endif
			auto NewProp_UseBackgroundLevelStreaming_SetBit = [](void* Obj){ ((UStreamingSettings*)Obj)->UseBackgroundLevelStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBackgroundLevelStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "UseBackgroundLevelStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStreamingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseBackgroundLevelStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseBackgroundLevelStreaming_MetaData, ARRAY_COUNT(NewProp_UseBackgroundLevelStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBulkDataSizeForAsyncLoading_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.MinBulkDataSizeForAsyncLoading" },
				{ "DisplayName", "Minimum Bulk Data Size For Async Loading" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinBulkDataSizeForAsyncLoading = { UE4CodeGen_Private::EPropertyClass::Int, "MinBulkDataSizeForAsyncLoading", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, MinBulkDataSizeForAsyncLoading), METADATA_PARAMS(NewProp_MinBulkDataSizeForAsyncLoading_MetaData, ARRAY_COUNT(NewProp_MinBulkDataSizeForAsyncLoading_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMinTime_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.TimeLimitExceededMinTime" },
				{ "DisplayName", "Minimum Time Limit For Time Limit Exceeded Warning" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Minimum time the time limit exceeded warning will be triggered by." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMinTime = { UE4CodeGen_Private::EPropertyClass::Float, "TimeLimitExceededMinTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMinTime), METADATA_PARAMS(NewProp_TimeLimitExceededMinTime_MetaData, ARRAY_COUNT(NewProp_TimeLimitExceededMinTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitExceededMultiplier_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.TimeLimitExceededMultiplier" },
				{ "DisplayName", "Time Limit Exceeded Warning Multiplier" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Multiplier for time limit exceeded warning time threshold." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitExceededMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TimeLimitExceededMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, STRUCT_OFFSET(UStreamingSettings, TimeLimitExceededMultiplier), METADATA_PARAMS(NewProp_TimeLimitExceededMultiplier_MetaData, ARRAY_COUNT(NewProp_TimeLimitExceededMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarnIfTimeLimitExceeded_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.WarnIfTimeLimitExceeded" },
				{ "DisplayName", "Warn If Time Limit Has Been Exceeded" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Enables log warning if time limit for time-sliced package streaming has been exceeded." },
			};
#endif
			auto NewProp_WarnIfTimeLimitExceeded_SetBit = [](void* Obj){ ((UStreamingSettings*)Obj)->WarnIfTimeLimitExceeded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WarnIfTimeLimitExceeded = { UE4CodeGen_Private::EPropertyClass::Bool, "WarnIfTimeLimitExceeded", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStreamingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_WarnIfTimeLimitExceeded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_WarnIfTimeLimitExceeded_MetaData, ARRAY_COUNT(NewProp_WarnIfTimeLimitExceeded_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingThreadEnabled_MetaData[] = {
				{ "Category", "PackageStreaming" },
				{ "ConsoleVariable", "s.AsyncLoadingThreadEnabled" },
				{ "DisplayName", "Async Loading Thread Enabled" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Enables separate thread for package streaming. Requires restart to take effect." },
			};
#endif
			auto NewProp_AsyncLoadingThreadEnabled_SetBit = [](void* Obj){ ((UStreamingSettings*)Obj)->AsyncLoadingThreadEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsyncLoadingThreadEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "AsyncLoadingThreadEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStreamingSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AsyncLoadingThreadEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AsyncLoadingThreadEnabled_MetaData, ARRAY_COUNT(NewProp_AsyncLoadingThreadEnabled_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventDrivenLoaderEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelStreamingComponentsUnregistrationGranularity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelStreamingUnregisterComponentsTimeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelStreamingComponentsRegistrationGranularity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelStreamingActorsUpdateTimeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PriorityAsyncLoadingExtraTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncLoadingTimeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncLoadingUseFullTimeLimit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseBackgroundLevelStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinBulkDataSizeForAsyncLoading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeLimitExceededMinTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeLimitExceededMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WarnIfTimeLimitExceeded,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsyncLoadingThreadEnabled,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStreamingSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStreamingSettings::StaticClass,
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
	IMPLEMENT_CLASS(UStreamingSettings, 3419482609);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamingSettings(Z_Construct_UClass_UStreamingSettings, &UStreamingSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UStreamingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingSettings);
	void UGarbageCollectionSettings::StaticRegisterNativesUGarbageCollectionSettings()
	{
	}
	UClass* Z_Construct_UClass_UGarbageCollectionSettings_NoRegister()
	{
		return UGarbageCollectionSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UGarbageCollectionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Garbage Collection" },
				{ "IncludePath", "Engine/CoreSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Implements the settings for garbage collection." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInEditor_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.MaxObjectsInEditor" },
				{ "DisplayName", "Maximum number of UObjects that can exist in the editor" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum number of UObjects that can exist in the editor game. Make sure this can hold enough objects for the editor and commadlets within reasonable limit." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInEditor = { UE4CodeGen_Private::EPropertyClass::Int, "MaxObjectsInEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInEditor), METADATA_PARAMS(NewProp_MaxObjectsInEditor_MetaData, ARRAY_COUNT(NewProp_MaxObjectsInEditor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsInGame_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.MaxObjectsInGame" },
				{ "DisplayName", "Maximum number of UObjects that can exist in cooked game" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum number of UObjects that can exist in cooked game. Keep this as small as possible." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsInGame = { UE4CodeGen_Private::EPropertyClass::Int, "MaxObjectsInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsInGame), METADATA_PARAMS(NewProp_MaxObjectsInGame_MetaData, ARRAY_COUNT(NewProp_MaxObjectsInGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeOfPermanentObjectPool_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.SizeOfPermanentObjectPool" },
				{ "DisplayName", "Size Of Permanent Object Pool" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Size Of Permanent Object Pool (bytes). Works only in cooked builds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeOfPermanentObjectPool = { UE4CodeGen_Private::EPropertyClass::Int, "SizeOfPermanentObjectPool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, SizeOfPermanentObjectPool), METADATA_PARAMS(NewProp_SizeOfPermanentObjectPool_MetaData, ARRAY_COUNT(NewProp_SizeOfPermanentObjectPool_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxObjectsNotConsideredByGC_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.MaxObjectsNotConsideredByGC" },
				{ "DisplayName", "Maximum Object Count Not Considered By GC" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum Object Count Not Considered By GC. Works only in cooked builds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxObjectsNotConsideredByGC = { UE4CodeGen_Private::EPropertyClass::Int, "MaxObjectsNotConsideredByGC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, MaxObjectsNotConsideredByGC), METADATA_PARAMS(NewProp_MaxObjectsNotConsideredByGC_MetaData, ARRAY_COUNT(NewProp_MaxObjectsNotConsideredByGC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRetriesBeforeForcingGC_MetaData[] = {
				{ "Category", "General" },
				{ "ConsoleVariable", "gc.NumRetriesBeforeForcingGC" },
				{ "DisplayName", "Number Of Retries Before Forcing GC" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Maximum number of times GC can be skipped if worker threads are currently modifying UObject state. 0 = never force GC" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRetriesBeforeForcingGC = { UE4CodeGen_Private::EPropertyClass::Int, "NumRetriesBeforeForcingGC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, NumRetriesBeforeForcingGC), METADATA_PARAMS(NewProp_NumRetriesBeforeForcingGC_MetaData, ARRAY_COUNT(NewProp_NumRetriesBeforeForcingGC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDisregardForGCOnDedicatedServers_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.UseDisregardForGCOnDedicatedServers" },
				{ "DisplayName", "Use DisregardForGC On Dedicated Servers" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "If false, DisregardForGC will be disabled for dedicated servers." },
			};
#endif
			auto NewProp_UseDisregardForGCOnDedicatedServers_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->UseDisregardForGCOnDedicatedServers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDisregardForGCOnDedicatedServers = { UE4CodeGen_Private::EPropertyClass::Bool, "UseDisregardForGCOnDedicatedServers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseDisregardForGCOnDedicatedServers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseDisregardForGCOnDedicatedServers_MetaData, ARRAY_COUNT(NewProp_UseDisregardForGCOnDedicatedServers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintClusteringEnabled_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.BlueprintClusteringEnabled" },
				{ "DisplayName", "Blueprint Clustering Enabled" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Whether to allow Blueprint classes to create GC clusters." },
			};
#endif
			auto NewProp_BlueprintClusteringEnabled_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->BlueprintClusteringEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlueprintClusteringEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "BlueprintClusteringEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BlueprintClusteringEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_BlueprintClusteringEnabled_MetaData, ARRAY_COUNT(NewProp_BlueprintClusteringEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClusteringEnabled_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.ActorClusteringEnabled" },
				{ "DisplayName", "Actor Clustering Enabled" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Whether to allow levels to create actor clusters for GC." },
			};
#endif
			auto NewProp_ActorClusteringEnabled_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->ActorClusteringEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActorClusteringEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "ActorClusteringEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ActorClusteringEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ActorClusteringEnabled_MetaData, ARRAY_COUNT(NewProp_ActorClusteringEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeGCClusters_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.MergeGCClusters" },
				{ "DisplayName", "Merge GC Clusters" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "If true, when creating clusters, the clusters referenced from another cluster will get merged into one big cluster." },
			};
#endif
			auto NewProp_MergeGCClusters_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->MergeGCClusters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergeGCClusters = { UE4CodeGen_Private::EPropertyClass::Bool, "MergeGCClusters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MergeGCClusters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MergeGCClusters_MetaData, ARRAY_COUNT(NewProp_MergeGCClusters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateGCClusters_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.CreateGCClusters" },
				{ "DisplayName", "Create Garbage Collector UObject Clusters" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "If true, the engine will attempt to create clusters of objects for better garbage collection performance." },
			};
#endif
			auto NewProp_CreateGCClusters_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->CreateGCClusters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateGCClusters = { UE4CodeGen_Private::EPropertyClass::Bool, "CreateGCClusters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CreateGCClusters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CreateGCClusters_MetaData, ARRAY_COUNT(NewProp_CreateGCClusters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowParallelGC_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ConsoleVariable", "gc.AllowParallelGC" },
				{ "DisplayName", "Allow Parallel GC" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "If enabled, garbage collection will use multiple threads." },
			};
#endif
			auto NewProp_AllowParallelGC_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->AllowParallelGC = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowParallelGC = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowParallelGC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AllowParallelGC_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AllowParallelGC_MetaData, ARRAY_COUNT(NewProp_AllowParallelGC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlushStreamingOnGC_MetaData[] = {
				{ "Category", "General" },
				{ "ConsoleVariable", "gc.FlushStreamingOnGC" },
				{ "DisplayName", "Flush Streaming On GC" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "If enabled, streaming will be flushed each time garbage collection is triggered." },
			};
#endif
			auto NewProp_FlushStreamingOnGC_SetBit = [](void* Obj){ ((UGarbageCollectionSettings*)Obj)->FlushStreamingOnGC = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FlushStreamingOnGC = { UE4CodeGen_Private::EPropertyClass::Bool, "FlushStreamingOnGC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGarbageCollectionSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FlushStreamingOnGC_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FlushStreamingOnGC_MetaData, ARRAY_COUNT(NewProp_FlushStreamingOnGC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenPurgingPendingKillObjects_MetaData[] = {
				{ "Category", "General" },
				{ "ConsoleVariable", "gc.TimeBetweenPurgingPendingKillObjects" },
				{ "DisplayName", "Time Between Purging Pending Kill Objects" },
				{ "ModuleRelativePath", "Classes/Engine/CoreSettings.h" },
				{ "ToolTip", "Time in seconds (game time) we should wait between purging object references to objects that are pending kill." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenPurgingPendingKillObjects = { UE4CodeGen_Private::EPropertyClass::Float, "TimeBetweenPurgingPendingKillObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UGarbageCollectionSettings, TimeBetweenPurgingPendingKillObjects), METADATA_PARAMS(NewProp_TimeBetweenPurgingPendingKillObjects_MetaData, ARRAY_COUNT(NewProp_TimeBetweenPurgingPendingKillObjects_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxObjectsInEditor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxObjectsInGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SizeOfPermanentObjectPool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxObjectsNotConsideredByGC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumRetriesBeforeForcingGC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseDisregardForGCOnDedicatedServers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueprintClusteringEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorClusteringEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MergeGCClusters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CreateGCClusters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowParallelGC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FlushStreamingOnGC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeBetweenPurgingPendingKillObjects,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGarbageCollectionSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGarbageCollectionSettings::StaticClass,
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
	IMPLEMENT_CLASS(UGarbageCollectionSettings, 3831361334);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGarbageCollectionSettings(Z_Construct_UClass_UGarbageCollectionSettings, &UGarbageCollectionSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UGarbageCollectionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGarbageCollectionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
