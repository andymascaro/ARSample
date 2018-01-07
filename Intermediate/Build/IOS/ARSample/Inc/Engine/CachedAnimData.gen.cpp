// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Animation/CachedAnimData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
// End Cross Module References
class UScriptStruct* FCachedAnimTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimTransitionData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimTransitionData"), sizeof(FCachedAnimTransitionData), Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimTransitionData(FCachedAnimTransitionData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimTransitionData")),new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimTransitionData"), sizeof(FCachedAnimTransitionData), Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToStateName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of To State to Cache" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToStateName = { UE4CodeGen_Private::EPropertyClass::Name, "ToStateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, ToStateName), METADATA_PARAMS(NewProp_ToStateName_MetaData, ARRAY_COUNT(NewProp_ToStateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromStateName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of From State to Cache" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FromStateName = { UE4CodeGen_Private::EPropertyClass::Name, "FromStateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, FromStateName), METADATA_PARAMS(NewProp_FromStateName_MetaData, ARRAY_COUNT(NewProp_FromStateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of StateMachine State is in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, StateMachineName), METADATA_PARAMS(NewProp_StateMachineName_MetaData, ARRAY_COUNT(NewProp_StateMachineName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToStateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FromStateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachineName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedAnimTransitionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCachedAnimTransitionData),
				alignof(FCachedAnimTransitionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC() { return 2345460937U; }
class UScriptStruct* FCachedAnimRelevancyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimRelevancyData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimRelevancyData"), sizeof(FCachedAnimRelevancyData), Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimRelevancyData(FCachedAnimRelevancyData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimRelevancyData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimRelevancyData")),new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimRelevancyData"), sizeof(FCachedAnimRelevancyData), Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of State to Cache" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of StateMachine State is in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateMachineName), METADATA_PARAMS(NewProp_StateMachineName_MetaData, ARRAY_COUNT(NewProp_StateMachineName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachineName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedAnimRelevancyData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCachedAnimRelevancyData),
				alignof(FCachedAnimRelevancyData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC() { return 491315230U; }
class UScriptStruct* FCachedAnimAssetPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimAssetPlayerData"), sizeof(FCachedAnimAssetPlayerData), Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimAssetPlayerData(FCachedAnimAssetPlayerData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimAssetPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimAssetPlayerData")),new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimAssetPlayerData"), sizeof(FCachedAnimAssetPlayerData), Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of State to Cache" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of StateMachine State is in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateMachineName), METADATA_PARAMS(NewProp_StateMachineName_MetaData, ARRAY_COUNT(NewProp_StateMachineName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachineName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedAnimAssetPlayerData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCachedAnimAssetPlayerData),
				alignof(FCachedAnimAssetPlayerData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC() { return 412535804U; }
class UScriptStruct* FCachedAnimStateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateArray, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateArray"), sizeof(FCachedAnimStateArray), Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimStateArray(FCachedAnimStateArray::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimStateArray"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimStateArray")),new UScriptStruct::TCppStructOps<FCachedAnimStateArray>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimStateArray"), sizeof(FCachedAnimStateArray), Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateArray>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Array of states" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateArray, States), METADATA_PARAMS(NewProp_States_MetaData, ARRAY_COUNT(NewProp_States_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedAnimStateArray",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCachedAnimStateArray),
				alignof(FCachedAnimStateArray),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC() { return 3662757306U; }
class UScriptStruct* FCachedAnimStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateData"), sizeof(FCachedAnimStateData), Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimStateData(FCachedAnimStateData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimStateData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimStateData")),new UScriptStruct::TCppStructOps<FCachedAnimStateData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimStateData"), sizeof(FCachedAnimStateData), Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "This file contains a number of helper structures that can be used to process state-machine-\nrelated data in C++. This includes relevancy, state weights, animation time etc." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of State to Cache" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[] = {
				{ "Category", "State Machine" },
				{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
				{ "ToolTip", "Name of StateMachine State is in" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateMachineName), METADATA_PARAMS(NewProp_StateMachineName_MetaData, ARRAY_COUNT(NewProp_StateMachineName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachineName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedAnimStateData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FCachedAnimStateData),
				alignof(FCachedAnimStateData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC() { return 79489558U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
