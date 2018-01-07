// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/OnlineReplStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineReplStructs() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
// End Cross Module References
class UScriptStruct* FUniqueNetIdRepl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdRepl, Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdRepl"), sizeof(FUniqueNetIdRepl), Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUniqueNetIdRepl(FUniqueNetIdRepl::StaticStruct, TEXT("/Script/Engine"), TEXT("UniqueNetIdRepl"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl
{
	FScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UniqueNetIdRepl")),new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFUniqueNetIdRepl;
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UniqueNetIdRepl"), sizeof(FUniqueNetIdRepl), Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
				{ "ToolTip", "Wrapper for opaque type FUniqueNetId\n\nMakes sure that the opaque aspects of FUniqueNetId are properly handled/serialized\nover network RPC and actor replication" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FUniqueNetIdWrapper,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"UniqueNetIdRepl",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FUniqueNetIdRepl),
				alignof(FUniqueNetIdRepl),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdRepl_CRC() { return 3298086219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
