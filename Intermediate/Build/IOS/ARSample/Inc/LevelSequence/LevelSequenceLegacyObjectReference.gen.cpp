// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequenceLegacyObjectReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
// End Cross Module References
class UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObjectReferenceMap(FLevelSequenceObjectReferenceMap::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObjectReferenceMap"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceObjectReferenceMap")),new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObjectReferenceMap;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObjectReferenceMap"), sizeof(FLevelSequenceObjectReferenceMap), Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceObjectReferenceMap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceObjectReferenceMap),
				alignof(FLevelSequenceObjectReferenceMap),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_CRC() { return 2575599590U; }
class UScriptStruct* FLevelSequenceLegacyObjectReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceLegacyObjectReference(FLevelSequenceLegacyObjectReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceLegacyObjectReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceLegacyObjectReference")),new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceLegacyObjectReference;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceLegacyObjectReference"), sizeof(FLevelSequenceLegacyObjectReference), Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
				{ "ToolTip", "Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceLegacyObjectReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceLegacyObjectReference),
				alignof(FLevelSequenceLegacyObjectReference),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_CRC() { return 1919330850U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
