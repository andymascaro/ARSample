// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneSequenceHierarchy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceHierarchy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchy"), sizeof(FMovieSceneSequenceHierarchy), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceHierarchy(FMovieSceneSequenceHierarchy::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceHierarchy"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceHierarchy")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceHierarchy"), sizeof(FMovieSceneSequenceHierarchy), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Structure that stores hierarchical information pertaining to all sequences contained within a master sequence" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Structural information describing the structure of the sequence" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Map, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Hierarchy), METADATA_PARAMS(NewProp_Hierarchy_MetaData, ARRAY_COUNT(NewProp_Hierarchy_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Hierarchy_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::UInt32, "Hierarchy_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequences_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Map of all (recursive) sub sequences found in this template, keyed on sequence ID" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubSequences = { UE4CodeGen_Private::EPropertyClass::Map, "SubSequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, SubSequences), METADATA_PARAMS(NewProp_SubSequences_MetaData, ARRAY_COUNT(NewProp_SubSequences_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SubSequences_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::UInt32, "SubSequences_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSequences_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSequences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSequences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSequences_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubSequences_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceHierarchy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequenceHierarchy),
				alignof(FMovieSceneSequenceHierarchy),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC() { return 1494091644U; }
class UScriptStruct* FMovieSceneSequenceHierarchyNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchyNode"), sizeof(FMovieSceneSequenceHierarchyNode), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceHierarchyNode(FMovieSceneSequenceHierarchyNode::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceHierarchyNode"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceHierarchyNode")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceHierarchyNode"), sizeof(FMovieSceneSequenceHierarchyNode), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Simple structure specifying parent and child sequence IDs for any given sequences" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Array of child sequences contained within this sequence" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, Children), METADATA_PARAMS(NewProp_Children_MetaData, ARRAY_COUNT(NewProp_Children_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Children", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Movie scene sequence ID of this node's parent sequence" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentID = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, ParentID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(NewProp_ParentID_MetaData, ARRAY_COUNT(NewProp_ParentID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Children_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceHierarchyNode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequenceHierarchyNode),
				alignof(FMovieSceneSequenceHierarchyNode),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC() { return 3045357366U; }
class UScriptStruct* FMovieSceneSubSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceData"), sizeof(FMovieSceneSubSequenceData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSequenceData(FMovieSceneSubSequenceData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSequenceData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSequenceData"), sizeof(FMovieSceneSubSequenceData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidPlayRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "This sub sequence's valid bounds according to its parent sub section. Clamped recursively during template generation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValidPlayRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ValidPlayRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, ValidPlayRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_ValidPlayRange_MetaData, ARRAY_COUNT(NewProp_ValidPlayRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionPath_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "This sequence's path within its movie scene" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionPath = { UE4CodeGen_Private::EPropertyClass::Name, "SectionPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SectionPath), METADATA_PARAMS(NewProp_SectionPath_MetaData, ARRAY_COUNT(NewProp_SectionPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "The accumulated hierarchical bias of this sequence. Higher bias will take precedence" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias = { UE4CodeGen_Private::EPropertyClass::Int, "HierarchicalBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, HierarchicalBias), METADATA_PARAMS(NewProp_HierarchicalBias_MetaData, ARRAY_COUNT(NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "The sequence postroll range considering the start offset" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostRollRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PostRollRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PostRollRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_PostRollRange_MetaData, ARRAY_COUNT(NewProp_PostRollRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "The sequence preroll range considering the start offset" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreRollRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PreRollRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PreRollRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_PreRollRange_MetaData, ARRAY_COUNT(NewProp_PreRollRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeterministicSequenceID_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeterministicSequenceID = { UE4CodeGen_Private::EPropertyClass::Struct, "DeterministicSequenceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, DeterministicSequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(NewProp_DeterministicSequenceID_MetaData, ARRAY_COUNT(NewProp_DeterministicSequenceID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSequenceSignature_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Cached signature of the evaluation template" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceSequenceSignature = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceSequenceSignature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SourceSequenceSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_SourceSequenceSignature_MetaData, ARRAY_COUNT(NewProp_SourceSequenceSignature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootToSequenceTransform_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "Transform that transforms a given time from the sequences outer space, to its authored space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootToSequenceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "RootToSequenceTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, RootToSequenceTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(NewProp_RootToSequenceTransform_MetaData, ARRAY_COUNT(NewProp_RootToSequenceTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceKeyObject_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "The key object that the sub section uses. Usually either the sequence or the section." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceKeyObject = { UE4CodeGen_Private::EPropertyClass::Object, "SequenceKeyObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SequenceKeyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_SequenceKeyObject_MetaData, ARRAY_COUNT(NewProp_SequenceKeyObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
				{ "ToolTip", "The sequence that the sub section references" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(NewProp_Sequence_MetaData, ARRAY_COUNT(NewProp_Sequence_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidPlayRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionPath,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HierarchicalBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostRollRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreRollRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeterministicSequenceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSequenceSignature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootToSequenceTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SequenceKeyObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequence,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSubSequenceData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSubSequenceData),
				alignof(FMovieSceneSubSequenceData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC() { return 3942547310U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
