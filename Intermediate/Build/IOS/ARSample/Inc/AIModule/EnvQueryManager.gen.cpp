// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/EnvironmentQuery/EnvQueryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryManager() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
class UScriptStruct* FEnvQueryInstanceCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstanceCache, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryInstanceCache"), sizeof(FEnvQueryInstanceCache), Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvQueryInstanceCache(FEnvQueryInstanceCache::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvQueryInstanceCache"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvQueryInstanceCache")),new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvQueryInstanceCache;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryInstanceCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvQueryInstanceCache"), sizeof(FEnvQueryInstanceCache), Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "cache of instances with sorted tests" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryInstanceCache>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "query template, duplicated in manager's world" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template = { UE4CodeGen_Private::EPropertyClass::Object, "Template", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEnvQueryInstanceCache, Template), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(NewProp_Template_MetaData, ARRAY_COUNT(NewProp_Template_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Template,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvQueryInstanceCache",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEnvQueryInstanceCache),
				alignof(FEnvQueryInstanceCache),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvQueryInstanceCache_CRC() { return 2771152704U; }
class UScriptStruct* FEnvQueryRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryRequest, Z_Construct_UPackage__Script_AIModule(), TEXT("EnvQueryRequest"), sizeof(FEnvQueryRequest), Get_Z_Construct_UScriptStruct_FEnvQueryRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnvQueryRequest(FEnvQueryRequest::StaticStruct, TEXT("/Script/AIModule"), TEXT("EnvQueryRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest
{
	FScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EnvQueryRequest")),new UScriptStruct::TCppStructOps<FEnvQueryRequest>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFEnvQueryRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FEnvQueryRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnvQueryRequest"), sizeof(FEnvQueryRequest), Get_Z_Construct_UScriptStruct_FEnvQueryRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "wrapper for easy query execution" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvQueryRequest>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "world" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FEnvQueryRequest, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "querier" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FEnvQueryRequest, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_Owner_MetaData, ARRAY_COUNT(NewProp_Owner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "query to run" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "QueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FEnvQueryRequest, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(NewProp_QueryTemplate_MetaData, ARRAY_COUNT(NewProp_QueryTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTemplate,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EnvQueryRequest",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FEnvQueryRequest),
				alignof(FEnvQueryRequest),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnvQueryRequest_CRC() { return 39954707U; }
	void UEnvQueryManager::StaticRegisterNativesUEnvQueryManager()
	{
		UClass* Class = UEnvQueryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunEQSQuery", (Native)&UEnvQueryManager::execRunEQSQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery()
	{
		struct EnvQueryManager_eventRunEQSQuery_Parms
		{
			UObject* WorldContextObject;
			UEnvQuery* QueryTemplate;
			UObject* Querier;
			TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
			TSubclassOf<UEnvQueryInstanceBlueprintWrapper>  WrapperClass;
			UEnvQueryInstanceBlueprintWrapper* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, ReturnValue), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WrapperClass = { UE4CodeGen_Private::EPropertyClass::Class, "WrapperClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WrapperClass), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RunMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, RunMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Querier = { UE4CodeGen_Private::EPropertyClass::Object, "Querier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, Querier), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "QueryTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryManager_eventRunEQSQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WrapperClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Querier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "WrapperClass" },
				{ "Category", "AI|EQS" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryManager, "RunEQSQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EnvQueryManager_eventRunEQSQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister()
	{
		return UEnvQueryManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UEnvQueryManager_RunEQSQuery, "RunEQSQuery" }, // 4107550562
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "EnvironmentQuery/EnvQueryManager.h" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningInterval_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "how often (in seconds) we will warn about the number of queries (allows us to catch multiple occurrences in a session)" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_QueryCountWarningInterval = { UE4CodeGen_Private::EPropertyClass::Double, "QueryCountWarningInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningInterval), METADATA_PARAMS(NewProp_QueryCountWarningInterval_MetaData, ARRAY_COUNT(NewProp_QueryCountWarningInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryCountWarningThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "if greater than zero, we will warn once when the number of queries is greater than or equal to this number, and log the queries out" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryCountWarningThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "QueryCountWarningThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, QueryCountWarningThreshold), METADATA_PARAMS(NewProp_QueryCountWarningThreshold_MetaData, ARRAY_COUNT(NewProp_QueryCountWarningThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTestQueriesUsingBreadth_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "whether we update EQS queries based on:\n          running a test on one query and move to the next (breadth) - default behavior,\n          or test an entire query before moving to the next one (depth)." },
			};
#endif
			auto NewProp_bTestQueriesUsingBreadth_SetBit = [](void* Obj){ ((UEnvQueryManager*)Obj)->bTestQueriesUsingBreadth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestQueriesUsingBreadth = { UE4CodeGen_Private::EPropertyClass::Bool, "bTestQueriesUsingBreadth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTestQueriesUsingBreadth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTestQueriesUsingBreadth_MetaData, ARRAY_COUNT(NewProp_bTestQueriesUsingBreadth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTestingTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "how long are we allowed to test per update, in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTestingTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAllowedTestingTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, MaxAllowedTestingTime), METADATA_PARAMS(NewProp_MaxAllowedTestingTime_MetaData, ARRAY_COUNT(NewProp_MaxAllowedTestingTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GCShieldedWrappers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GCShieldedWrappers = { UE4CodeGen_Private::EPropertyClass::Array, "GCShieldedWrappers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, GCShieldedWrappers), METADATA_PARAMS(NewProp_GCShieldedWrappers_MetaData, ARRAY_COUNT(NewProp_GCShieldedWrappers_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GCShieldedWrappers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GCShieldedWrappers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalContexts_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "local cache of context objects for managing BP based objects" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalContexts = { UE4CodeGen_Private::EPropertyClass::Array, "LocalContexts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, LocalContexts), METADATA_PARAMS(NewProp_LocalContexts_MetaData, ARRAY_COUNT(NewProp_LocalContexts_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalContexts_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LocalContexts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceCache_MetaData[] = {
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryManager.h" },
				{ "ToolTip", "cache of instances" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceCache = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UEnvQueryManager, InstanceCache), METADATA_PARAMS(NewProp_InstanceCache_MetaData, ARRAY_COUNT(NewProp_InstanceCache_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEnvQueryInstanceCache, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryCountWarningInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QueryCountWarningThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTestQueriesUsingBreadth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAllowedTestingTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GCShieldedWrappers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GCShieldedWrappers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalContexts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalContexts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceCache_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEnvQueryManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEnvQueryManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UEnvQueryManager, 1845353571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryManager(Z_Construct_UClass_UEnvQueryManager, &UEnvQueryManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
