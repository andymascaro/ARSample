// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequenceBindingReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FLevelSequenceBindingReferences::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferences(FLevelSequenceBindingReferences::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferences"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferences")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferences;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferences"), sizeof(FLevelSequenceBindingReferences), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingIdToReferences_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "The map from object binding ID to an array of references that pertain to that ID" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_BindingIdToReferences = { UE4CodeGen_Private::EPropertyClass::Map, "BindingIdToReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferences, BindingIdToReferences), METADATA_PARAMS(NewProp_BindingIdToReferences_MetaData, ARRAY_COUNT(NewProp_BindingIdToReferences_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "BindingIdToReferences_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "BindingIdToReferences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingIdToReferences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingIdToReferences_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingIdToReferences_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceBindingReferences",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceBindingReferences),
				alignof(FLevelSequenceBindingReferences),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_CRC() { return 4217235421U; }
class UScriptStruct* FLevelSequenceBindingReferenceArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReferenceArray(FLevelSequenceBindingReferenceArray::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReferenceArray"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReferenceArray")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReferenceArray;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReferenceArray"), sizeof(FLevelSequenceBindingReferenceArray), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "An array of binding references" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_References = { UE4CodeGen_Private::EPropertyClass::Array, "References", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferenceArray, References), METADATA_PARAMS(NewProp_References_MetaData, ARRAY_COUNT(NewProp_References_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_References_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "References", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequenceBindingReference, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_References,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_References_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceBindingReferenceArray",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceBindingReferenceArray),
				alignof(FLevelSequenceBindingReferenceArray),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_CRC() { return 490375240U; }
class UScriptStruct* FLevelSequenceBindingReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceBindingReference(FLevelSequenceBindingReference::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceBindingReference"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceBindingReference")),new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceBindingReference;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceBindingReference"), sizeof(FLevelSequenceBindingReference), Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context.\n\nBindings consist of an optional package name, and the path to the object within that package.\nWhere package name is empty, the reference is a relative path from a specific outer (the context).\nCurrently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectPath = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, ObjectPath), METADATA_PARAMS(NewProp_ObjectPath_MetaData, ARRAY_COUNT(NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalObjectPath_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "Path to a specific actor/component inside an external package" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalObjectPath = { UE4CodeGen_Private::EPropertyClass::Struct, "ExternalObjectPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, ExternalObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(NewProp_ExternalObjectPath_MetaData, ARRAY_COUNT(NewProp_ExternalObjectPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
				{ "ToolTip", "Replaced by ExternalObjectPath" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Str, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, PackageName_DEPRECATED), METADATA_PARAMS(NewProp_PackageName_MetaData, ARRAY_COUNT(NewProp_PackageName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalObjectPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PackageName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceBindingReference",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceBindingReference),
				alignof(FLevelSequenceBindingReference),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceBindingReference_CRC() { return 3534441554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
