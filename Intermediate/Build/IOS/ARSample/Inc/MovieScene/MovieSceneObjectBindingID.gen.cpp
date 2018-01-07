// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneObjectBindingID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectBindingID() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EMovieSceneObjectBindingSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneObjectBindingSpace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneObjectBindingSpace(EMovieSceneObjectBindingSpace_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneObjectBindingSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_CRC() { return 2140821927U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneObjectBindingSpace"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneObjectBindingSpace::Local", (int64)EMovieSceneObjectBindingSpace::Local },
				{ "EMovieSceneObjectBindingSpace::Root", (int64)EMovieSceneObjectBindingSpace::Root },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Local.ToolTip", "The object binding sequence ID resolves from a local sequence (ie, it may need to accumulate a parent sequence ID before it resolves correctly)" },
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "Root.ToolTip", "The object binding sequence ID resolves from the root of the sequence" },
				{ "ToolTip", "Enumeration specifying how a movie scene object binding ID relates to the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneObjectBindingSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneObjectBindingSpace",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneObjectBindingID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectBindingID"), sizeof(FMovieSceneObjectBindingID), Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneObjectBindingID(FMovieSceneObjectBindingID::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneObjectBindingID"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneObjectBindingID")),new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingID>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneObjectBindingID;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneObjectBindingID"), sizeof(FMovieSceneObjectBindingID), Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HasNativeMake", "" },
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "ToolTip", "Persistent identifier to a specific object binding within a sequence hierarchy." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingID>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
				{ "Category", "Binding" },
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "ToolTip", "Identifier for the object binding within the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Guid_MetaData, ARRAY_COUNT(NewProp_Guid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "ToolTip", "The binding's resolution space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space = { UE4CodeGen_Private::EPropertyClass::Enum, "Space", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, Space), Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, METADATA_PARAMS(NewProp_Space_MetaData, ARRAY_COUNT(NewProp_Space_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
				{ "ToolTip", "Sequence ID stored as an int32 so that it can be used in the blueprint VM" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SequenceID = { UE4CodeGen_Private::EPropertyClass::Int, "SequenceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, SequenceID), METADATA_PARAMS(NewProp_SequenceID_MetaData, ARRAY_COUNT(NewProp_SequenceID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Guid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Space,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Space_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneObjectBindingID",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneObjectBindingID),
				alignof(FMovieSceneObjectBindingID),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_CRC() { return 1508153773U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
