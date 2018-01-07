// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Curves/KeyHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyHandle() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FKeyHandleMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleMap, Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleMap"), sizeof(FKeyHandleMap), Get_Z_Construct_UScriptStruct_FKeyHandleMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyHandleMap(FKeyHandleMap::StaticStruct, TEXT("/Script/Engine"), TEXT("KeyHandleMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap
{
	FScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyHandleMap")),new UScriptStruct::TCppStructOps<FKeyHandleMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap;
	UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyHandleMap"), sizeof(FKeyHandleMap), Get_Z_Construct_UScriptStruct_FKeyHandleMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
				{ "ToolTip", "Represents a mapping of key handles to key index that may be serialized" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleMap>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KeyHandleMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKeyHandleMap),
				alignof(FKeyHandleMap),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_CRC() { return 2007823930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
