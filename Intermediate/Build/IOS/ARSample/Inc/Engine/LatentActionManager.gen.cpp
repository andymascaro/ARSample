// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LatentActionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentActionManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLatentActionManager::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionManager, Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionManager"), sizeof(FLatentActionManager), Get_Z_Construct_UScriptStruct_FLatentActionManager_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLatentActionManager(FLatentActionManager::StaticStruct, TEXT("/Script/Engine"), TEXT("LatentActionManager"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLatentActionManager
{
	FScriptStruct_Engine_StaticRegisterNativesFLatentActionManager()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LatentActionManager")),new UScriptStruct::TCppStructOps<FLatentActionManager>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLatentActionManager;
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LatentActionManager"), sizeof(FLatentActionManager), Get_Z_Construct_UScriptStruct_FLatentActionManager_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "ToolTip", "The latent action manager handles all pending latent actions for a single world" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionManager>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LatentActionManager",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FLatentActionManager),
				alignof(FLatentActionManager),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLatentActionManager_CRC() { return 372499793U; }
class UScriptStruct* FLatentActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionInfo"), sizeof(FLatentActionInfo), Get_Z_Construct_UScriptStruct_FLatentActionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLatentActionInfo(FLatentActionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("LatentActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LatentActionInfo")),new UScriptStruct::TCppStructOps<FLatentActionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLatentActionInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LatentActionInfo"), sizeof(FLatentActionInfo), Get_Z_Construct_UScriptStruct_FLatentActionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "ToolTip", "Latent action info" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackTarget_MetaData[] = {
				{ "LatentCallbackTarget", "TRUE" },
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "ToolTip", "Object to execute the function on." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CallbackTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLatentActionInfo, CallbackTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_CallbackTarget_MetaData, ARRAY_COUNT(NewProp_CallbackTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionFunction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "ToolTip", "The function to execute." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExecutionFunction = { UE4CodeGen_Private::EPropertyClass::Name, "ExecutionFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLatentActionInfo, ExecutionFunction), METADATA_PARAMS(NewProp_ExecutionFunction_MetaData, ARRAY_COUNT(NewProp_ExecutionFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "ToolTip", "the UUID for this action" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UUID = { UE4CodeGen_Private::EPropertyClass::Int, "UUID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLatentActionInfo, UUID), METADATA_PARAMS(NewProp_UUID_MetaData, ARRAY_COUNT(NewProp_UUID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Linkage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
				{ "NeedsLatentFixup", "TRUE" },
				{ "ToolTip", "The resume point within the function to execute" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Linkage = { UE4CodeGen_Private::EPropertyClass::Int, "Linkage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLatentActionInfo, Linkage), METADATA_PARAMS(NewProp_Linkage_MetaData, ARRAY_COUNT(NewProp_Linkage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallbackTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExecutionFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UUID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Linkage,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LatentActionInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FLatentActionInfo),
				alignof(FLatentActionInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLatentActionInfo_CRC() { return 409093616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
