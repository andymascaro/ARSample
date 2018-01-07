// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvaluationField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationField() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationField::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationField, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationField(FMovieSceneEvaluationField::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationField"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationField")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationField;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationField"), sizeof(FMovieSceneEvaluationField), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Memory layout optimized primarily for speed of searching the applicable ranges" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationField>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Meta data that maps to entries in the 'Ranges' array." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Array, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationField, MetaData), METADATA_PARAMS(NewProp_MetaData_MetaData, ARRAY_COUNT(NewProp_MetaData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Groups that store segment pointers for each of the above ranges. Each index has a corresponding entry in FMovieSceneEvaluationField::Ranges." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Groups = { UE4CodeGen_Private::EPropertyClass::Array, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationField, Groups), METADATA_PARAMS(NewProp_Groups_MetaData, ARRAY_COUNT(NewProp_Groups_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Groups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Groups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Ranges stored separately for fast (cache efficient) lookup. Each index has a corresponding entry in FMovieSceneEvaluationField::Groups." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ranges = { UE4CodeGen_Private::EPropertyClass::Array, "Ranges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationField, Ranges), METADATA_PARAMS(NewProp_Ranges_MetaData, ARRAY_COUNT(NewProp_Ranges_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Ranges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MetaData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Groups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ranges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Ranges_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationField",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationField),
				alignof(FMovieSceneEvaluationField),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationField_CRC() { return 3758402560U; }
class UScriptStruct* FMovieSceneEvaluationMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationMetaData(FMovieSceneEvaluationMetaData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationMetaData")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationMetaData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationMetaData"), sizeof(FMovieSceneEvaluationMetaData), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Informational meta-data that applies to a given time range" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationMetaData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEntities_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Array of entities (tracks and/or sections) that are active in this time range." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEntities = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveEntities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveEntities), METADATA_PARAMS(NewProp_ActiveEntities_MetaData, ARRAY_COUNT(NewProp_ActiveEntities_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveEntities_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveEntities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSequences_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Array of sequences that are active in this time range." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveSequences = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveSequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationMetaData, ActiveSequences), METADATA_PARAMS(NewProp_ActiveSequences_MetaData, ARRAY_COUNT(NewProp_ActiveSequences_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSequences_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveSequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveEntities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveEntities_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveSequences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActiveSequences_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationMetaData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationMetaData),
				alignof(FMovieSceneEvaluationMetaData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationMetaData_CRC() { return 1008923013U; }
class UScriptStruct* FMovieSceneOrderedEvaluationKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneOrderedEvaluationKey(FMovieSceneOrderedEvaluationKey::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneOrderedEvaluationKey"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneOrderedEvaluationKey")),new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneOrderedEvaluationKey;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneOrderedEvaluationKey"), sizeof(FMovieSceneOrderedEvaluationKey), Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Struct that stores the key for an evaluated entity, and the index at which it was (or is to be) evaluated" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneOrderedEvaluationKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EvaluationIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "EvaluationIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, EvaluationIndex), METADATA_PARAMS(NewProp_EvaluationIndex_MetaData, ARRAY_COUNT(NewProp_EvaluationIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneOrderedEvaluationKey, Key), Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, METADATA_PARAMS(NewProp_Key_MetaData, ARRAY_COUNT(NewProp_Key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneOrderedEvaluationKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneOrderedEvaluationKey),
				alignof(FMovieSceneOrderedEvaluationKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneOrderedEvaluationKey_CRC() { return 3546652692U; }
class UScriptStruct* FMovieSceneEvaluationGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroup(FMovieSceneEvaluationGroup::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroup"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroup")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroup"), sizeof(FMovieSceneEvaluationGroup), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Holds segment pointers for all segments that are active for a given range of the sequence" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentPtrLUT_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "A grouping of evaluation pointers that occur in this range of the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentPtrLUT = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentPtrLUT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationGroup, SegmentPtrLUT), METADATA_PARAMS(NewProp_SegmentPtrLUT_MetaData, ARRAY_COUNT(NewProp_SegmentPtrLUT_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentPtrLUT_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentPtrLUT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTIndices_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Array of indices that define all the flush groups in the range." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LUTIndices = { UE4CodeGen_Private::EPropertyClass::Array, "LUTIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationGroup, LUTIndices), METADATA_PARAMS(NewProp_LUTIndices_MetaData, ARRAY_COUNT(NewProp_LUTIndices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LUTIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LUTIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentPtrLUT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentPtrLUT_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LUTIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LUTIndices_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationGroup),
				alignof(FMovieSceneEvaluationGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroup_CRC() { return 1271391290U; }
class UScriptStruct* FMovieSceneEvaluationGroupLUTIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex(FMovieSceneEvaluationGroupLUTIndex::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationGroupLUTIndex"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationGroupLUTIndex")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationGroupLUTIndex;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationGroupLUTIndex"), sizeof(FMovieSceneEvaluationGroupLUTIndex), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "Lookup table index for a group of evaluation templates" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationGroupLUTIndex>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEvalPtrs_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The number of evaluation pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset + NumInitPtrs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEvalPtrs = { UE4CodeGen_Private::EPropertyClass::Int, "NumEvalPtrs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs), METADATA_PARAMS(NewProp_NumEvalPtrs_MetaData, ARRAY_COUNT(NewProp_NumEvalPtrs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitPtrs_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The number of initialization pointers are stored after &FMovieSceneEvaluationGroup::SegmentPtrLUT[0] + LUTOffset." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumInitPtrs = { UE4CodeGen_Private::EPropertyClass::Int, "NumInitPtrs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs), METADATA_PARAMS(NewProp_NumInitPtrs_MetaData, ARRAY_COUNT(NewProp_NumInitPtrs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LUTOffset_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The offset within FMovieSceneEvaluationGroup::SegmentPtrLUT that this index starts" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LUTOffset = { UE4CodeGen_Private::EPropertyClass::Int, "LUTOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationGroupLUTIndex, LUTOffset), METADATA_PARAMS(NewProp_LUTOffset_MetaData, ARRAY_COUNT(NewProp_LUTOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumEvalPtrs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumInitPtrs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LUTOffset,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationGroupLUTIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationGroupLUTIndex),
				alignof(FMovieSceneEvaluationGroupLUTIndex),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationGroupLUTIndex_CRC() { return 2627492857U; }
class UScriptStruct* FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr(FMovieSceneEvaluationFieldSegmentPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldSegmentPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldSegmentPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldSegmentPtr;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldSegmentPtr"), sizeof(FMovieSceneEvaluationFieldSegmentPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "A pointer to a particular segment of a track held within an evaluation template" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldSegmentPtr>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The index of the segment within the track (see FMovieSceneEvaluationTrack::Segments)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SegmentIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationFieldSegmentPtr, SegmentIndex), METADATA_PARAMS(NewProp_SegmentIndex_MetaData, ARRAY_COUNT(NewProp_SegmentIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationFieldSegmentPtr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationFieldSegmentPtr),
				alignof(FMovieSceneEvaluationFieldSegmentPtr),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldSegmentPtr_CRC() { return 2055914061U; }
class UScriptStruct* FMovieSceneEvaluationFieldTrackPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr(FMovieSceneEvaluationFieldTrackPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationFieldTrackPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationFieldTrackPtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationFieldTrackPtr;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationFieldTrackPtr"), sizeof(FMovieSceneEvaluationFieldTrackPtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "A pointer to a track held within an evaluation template" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationFieldTrackPtr>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The Identifier of the track inside the track map (see FMovieSceneEvaluationTemplate::Tracks)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(NewProp_TrackIdentifier_MetaData, ARRAY_COUNT(NewProp_TrackIdentifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationField.h" },
				{ "ToolTip", "The sequence ID that identifies to which sequence the track belongs" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceID = { UE4CodeGen_Private::EPropertyClass::Struct, "SequenceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationFieldTrackPtr, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(NewProp_SequenceID_MetaData, ARRAY_COUNT(NewProp_SequenceID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationFieldTrackPtr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationFieldTrackPtr),
				alignof(FMovieSceneEvaluationFieldTrackPtr),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationFieldTrackPtr_CRC() { return 1804070238U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
