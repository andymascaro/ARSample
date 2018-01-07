// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelSequenceObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceObject() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceObject(FLevelSequenceObject::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceObject"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceObject")),new UScriptStruct::TCppStructOps<FLevelSequenceObject>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceObject;
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceObject"), sizeof(FLevelSequenceObject), Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
				{ "ToolTip", "Structure for animated Actor objects." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObject>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
				{ "ToolTip", "Cached pointer to the Actor component (only if ComponentName is set)." },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CachedComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CachedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000002000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceObject, CachedComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_CachedComponent_MetaData, ARRAY_COUNT(NewProp_CachedComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
				{ "ToolTip", "Optional name of an ActorComponent." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName = { UE4CodeGen_Private::EPropertyClass::Str, "ComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceObject, ComponentName), METADATA_PARAMS(NewProp_ComponentName_MetaData, ARRAY_COUNT(NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectOrOwner_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
				{ "ToolTip", "The object or the owner of the object being possessed." },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ObjectOrOwner = { UE4CodeGen_Private::EPropertyClass::LazyObject, "ObjectOrOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequenceObject, ObjectOrOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ObjectOrOwner_MetaData, ARRAY_COUNT(NewProp_ObjectOrOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectOrOwner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LevelSequenceObject",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLevelSequenceObject),
				alignof(FLevelSequenceObject),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceObject_CRC() { return 248444665U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
