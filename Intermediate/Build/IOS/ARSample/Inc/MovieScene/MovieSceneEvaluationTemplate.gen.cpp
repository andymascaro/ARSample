// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvaluationTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
// End Cross Module References
class UScriptStruct* FCachedMovieSceneEvaluationTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("CachedMovieSceneEvaluationTemplate"), sizeof(FCachedMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedMovieSceneEvaluationTemplate(FCachedMovieSceneEvaluationTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("CachedMovieSceneEvaluationTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFCachedMovieSceneEvaluationTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFCachedMovieSceneEvaluationTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedMovieSceneEvaluationTemplate")),new UScriptStruct::TCppStructOps<FCachedMovieSceneEvaluationTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFCachedMovieSceneEvaluationTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedMovieSceneEvaluationTemplate"), sizeof(FCachedMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMovieSceneEvaluationTemplate>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSignatures_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedSignatures = { UE4CodeGen_Private::EPropertyClass::Array, "CachedSignatures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(FCachedMovieSceneEvaluationTemplate, CachedSignatures), METADATA_PARAMS(NewProp_CachedSignatures_MetaData, ARRAY_COUNT(NewProp_CachedSignatures_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedSignatures_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedSignatures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCompilationParams_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCompilationParams = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedCompilationParams", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(FCachedMovieSceneEvaluationTemplate, CachedCompilationParams), Z_Construct_UScriptStruct_FMovieSceneTrackCompilationParams, METADATA_PARAMS(NewProp_CachedCompilationParams_MetaData, ARRAY_COUNT(NewProp_CachedCompilationParams_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedSignatures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedSignatures_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCompilationParams,
			};
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CachedMovieSceneEvaluationTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCachedMovieSceneEvaluationTemplate),
				alignof(FCachedMovieSceneEvaluationTemplate),
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedMovieSceneEvaluationTemplate_CRC() { return 2970386991U; }
class UScriptStruct* FMovieSceneSequenceCachedSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceCachedSignature"), sizeof(FMovieSceneSequenceCachedSignature), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceCachedSignature(FMovieSceneSequenceCachedSignature::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceCachedSignature"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCachedSignature
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCachedSignature()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceCachedSignature")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceCachedSignature>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceCachedSignature;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceCachedSignature"), sizeof(FMovieSceneSequenceCachedSignature), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceCachedSignature>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSignature_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedSignature = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedSignature", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceCachedSignature, CachedSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_CachedSignature_MetaData, ARRAY_COUNT(NewProp_CachedSignature_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceCachedSignature, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(NewProp_Sequence_MetaData, ARRAY_COUNT(NewProp_Sequence_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedSignature,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequence,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneSequenceCachedSignature",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneSequenceCachedSignature),
				alignof(FMovieSceneSequenceCachedSignature),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceCachedSignature_CRC() { return 3821485839U; }
class UScriptStruct* FMovieSceneEvaluationTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTemplate(FMovieSceneEvaluationTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepStaleTracks_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Primarily used in editor to keep stale tracks around during template regeneration to ensure we can call OnEndEvaluation on them." },
			};
#endif
			auto NewProp_bKeepStaleTracks_SetBit = [](void* Obj){ ((FMovieSceneEvaluationTemplate*)Obj)->bKeepStaleTracks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepStaleTracks = { UE4CodeGen_Private::EPropertyClass::Bool, "bKeepStaleTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEvaluationTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKeepStaleTracks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKeepStaleTracks_MetaData, ARRAY_COUNT(NewProp_bKeepStaleTracks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLegacyTrackInstances_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "When set, this template contains legacy track instances that require the initialization of a legacy sequence instance" },
			};
#endif
			auto NewProp_bHasLegacyTrackInstances_SetBit = [](void* Obj){ ((FMovieSceneEvaluationTemplate*)Obj)->bHasLegacyTrackInstances = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLegacyTrackInstances = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasLegacyTrackInstances", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEvaluationTemplate), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasLegacyTrackInstances_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasLegacyTrackInstances_MetaData, ARRAY_COUNT(NewProp_bHasLegacyTrackInstances_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateLedger_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateLedger = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateLedger", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateLedger), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, METADATA_PARAMS(NewProp_TemplateLedger_MetaData, ARRAY_COUNT(NewProp_TemplateLedger_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of all sequences found in this template (recursively)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(NewProp_Hierarchy_MetaData, ARRAY_COUNT(NewProp_Hierarchy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationField_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Evaluation field for efficient runtime evaluation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationField = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluationField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, EvaluationField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(NewProp_EvaluationField_MetaData, ARRAY_COUNT(NewProp_EvaluationField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of evaluation tracks from identifier to track" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Map, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Tracks), METADATA_PARAMS(NewProp_Tracks_MetaData, ARRAY_COUNT(NewProp_Tracks_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Tracks_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::UInt32, "Tracks_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKeepStaleTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasLegacyTrackInstances,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemplateLedger,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hierarchy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EvaluationField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvaluationTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvaluationTemplate),
				alignof(FMovieSceneEvaluationTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC() { return 3432407289U; }
class UScriptStruct* FMovieSceneTemplateGenerationLedger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTemplateGenerationLedger(FMovieSceneTemplateGenerationLedger::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTemplateGenerationLedger"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTemplateGenerationLedger")),new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSignatureToTrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of track signature to array of track identifiers that it created" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackSignatureToTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Map, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier), METADATA_PARAMS(NewProp_TrackSignatureToTrackIdentifier_MetaData, ARRAY_COUNT(NewProp_TrackSignatureToTrackIdentifier_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackReferenceCounts_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
				{ "ToolTip", "Map of track identifiers to number of references within th template (generally 1, maybe >1 for shared tracks)" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackReferenceCounts = { UE4CodeGen_Private::EPropertyClass::Map, "TrackReferenceCounts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackReferenceCounts), METADATA_PARAMS(NewProp_TrackReferenceCounts_MetaData, ARRAY_COUNT(NewProp_TrackReferenceCounts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackReferenceCounts_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackReferenceCounts_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackReferenceCounts_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TrackReferenceCounts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTrackIdentifier_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(NewProp_LastTrackIdentifier_MetaData, ARRAY_COUNT(NewProp_LastTrackIdentifier_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackSignatureToTrackIdentifier_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackReferenceCounts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackReferenceCounts_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackReferenceCounts_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastTrackIdentifier,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTemplateGenerationLedger",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTemplateGenerationLedger),
				alignof(FMovieSceneTemplateGenerationLedger),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC() { return 2275906658U; }
class UScriptStruct* FMovieSceneTrackIdentifiers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackIdentifiers"), sizeof(FMovieSceneTrackIdentifiers), Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackIdentifiers(FMovieSceneTrackIdentifiers::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackIdentifiers"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifiers
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifiers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackIdentifiers")),new UScriptStruct::TCppStructOps<FMovieSceneTrackIdentifiers>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifiers;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackIdentifiers"), sizeof(FMovieSceneTrackIdentifiers), Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackIdentifiers>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTrackIdentifiers, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackIdentifiers",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackIdentifiers),
				alignof(FMovieSceneTrackIdentifiers),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifiers_CRC() { return 938817654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
