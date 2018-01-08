// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneSpawnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnable() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* ESpawnOwnership_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_ESpawnOwnership, Z_Construct_UPackage__Script_MovieScene(), TEXT("ESpawnOwnership"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpawnOwnership(ESpawnOwnership_StaticEnum, TEXT("/Script/MovieScene"), TEXT("ESpawnOwnership"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_ESpawnOwnership_CRC() { return 3249704449U; }
	UEnum* Z_Construct_UEnum_MovieScene_ESpawnOwnership()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpawnOwnership"), 0, Get_Z_Construct_UEnum_MovieScene_ESpawnOwnership_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpawnOwnership::InnerSequence", (int64)ESpawnOwnership::InnerSequence },
				{ "ESpawnOwnership::MasterSequence", (int64)ESpawnOwnership::MasterSequence },
				{ "ESpawnOwnership::External", (int64)ESpawnOwnership::External },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "External.ToolTip", "Once spawned, the object's lifetime is managed externally." },
				{ "InnerSequence.ToolTip", "The object's lifetime is managed by the sequence that spawned it" },
				{ "MasterSequence.ToolTip", "The object's lifetime is managed by the outermost sequence" },
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESpawnOwnership",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESpawnOwnership",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneSpawnable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSpawnable, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSpawnable"), sizeof(FMovieSceneSpawnable), Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSpawnable(FMovieSceneSpawnable::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSpawnable"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSpawnable")),new UScriptStruct::TCppStructOps<FMovieSceneSpawnable>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSpawnable;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSpawnable"), sizeof(FMovieSceneSpawnable), Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "MovieSceneSpawnable describes an object that can be spawned for this MovieScene" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSpawnable>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "Deprecated generated class" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedClass = { UE4CodeGen_Private::EPropertyClass::Class, "GeneratedClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, GeneratedClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GeneratedClass_MetaData, ARRAY_COUNT(NewProp_GeneratedClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ownership_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "Property indicating where ownership responsibility for this object lies" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ownership = { UE4CodeGen_Private::EPropertyClass::Enum, "Ownership", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, Ownership), Z_Construct_UEnum_MovieScene_ESpawnOwnership, METADATA_PARAMS(NewProp_Ownership_MetaData, ARRAY_COUNT(NewProp_Ownership_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ownership_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildPossessables_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "Set of GUIDs to possessable object bindings that are bound to an object inside this spawnable // @todo sequencer: This should be a TSet, but they don't duplicate correctly atm" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildPossessables = { UE4CodeGen_Private::EPropertyClass::Array, "ChildPossessables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, ChildPossessables), METADATA_PARAMS(NewProp_ChildPossessables_MetaData, ARRAY_COUNT(NewProp_ChildPossessables_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildPossessables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChildPossessables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTemplate_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, ObjectTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ObjectTemplate_MetaData, ARRAY_COUNT(NewProp_ObjectTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "Name label // @todo sequencer: Should be editor-only probably" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSpawnable.h" },
				{ "ToolTip", "Unique identifier of the spawnable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSpawnable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeneratedClass,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ownership,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ownership_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildPossessables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildPossessables_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSpawnable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSpawnable),
				alignof(FMovieSceneSpawnable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC() { return 4233433179U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
