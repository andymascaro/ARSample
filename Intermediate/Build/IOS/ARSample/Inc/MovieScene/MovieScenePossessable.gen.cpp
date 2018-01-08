// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieScenePossessable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePossessable() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieScenePossessable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePossessable, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePossessable"), sizeof(FMovieScenePossessable), Get_Z_Construct_UScriptStruct_FMovieScenePossessable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePossessable(FMovieScenePossessable::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePossessable"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePossessable")),new UScriptStruct::TCppStructOps<FMovieScenePossessable>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePossessable;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePossessable"), sizeof(FMovieScenePossessable), Get_Z_Construct_UScriptStruct_FMovieScenePossessable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
				{ "ToolTip", "MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePossessable>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
				{ "ToolTip", "GUID relating to this possessable's parent, if applicable." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePossessable, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ParentGuid_MetaData, ARRAY_COUNT(NewProp_ParentGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjectClass_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
				{ "ToolTip", "Type of the object we'll be possessing // @todo sequencer: Might be able to be editor-only.  We'll see.\n// @todo sequencer: This isn't used for anything yet.  We could use it to gate which types of objects can be bound to a\n// possessable \"slot\" though.  Or we could use it to generate a \"preview\" spawnable puppet when previewing with no\n// possessable object available." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PossessedObjectClass = { UE4CodeGen_Private::EPropertyClass::Class, "PossessedObjectClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePossessable, PossessedObjectClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PossessedObjectClass_MetaData, ARRAY_COUNT(NewProp_PossessedObjectClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
				{ "ToolTip", "Name label for this slot // @todo sequencer: Should be editor-only probably" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePossessable, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
				{ "ToolTip", "Unique identifier of the possessable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePossessable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PossessedObjectClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScenePossessable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScenePossessable),
				alignof(FMovieScenePossessable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePossessable_CRC() { return 1889551984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
