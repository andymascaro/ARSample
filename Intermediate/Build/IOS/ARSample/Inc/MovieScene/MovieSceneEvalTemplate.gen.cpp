// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvalTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
// End Cross Module References
class UScriptStruct* FMovieSceneEvalTemplatePtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplatePtr"), sizeof(FMovieSceneEvalTemplatePtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplatePtr(FMovieSceneEvalTemplatePtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplatePtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplatePtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplatePtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplatePtr"), sizeof(FMovieSceneEvalTemplatePtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
				{ "ToolTip", "Custom serialized type that allows serializing structs derived from FMovieSceneEvalTemplate, and attempts to store an evaluation template in inline memory if possible" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplatePtr>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvalTemplatePtr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvalTemplatePtr),
				alignof(FMovieSceneEvalTemplatePtr),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_CRC() { return 3548917868U; }
class UScriptStruct* FMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplate"), sizeof(FMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplate(FMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplate"), sizeof(FMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
				{ "ToolTip", "Structure used for movie scene evaluation templates contained within a track. Typically these are defined as one per-section.\nSerialized into a FMovieSceneEvaluationTemplate contained within the sequence itself (for fast initialization at runtime).\nTemplates are executed in a 3-phase algorithm:\n            1) Initialize: (opt-in) Called at the start of the frame. Able to access mutable state from the playback context. Used to initialize any persistent state required for the evaluation pass.\n            2) Evaluate: Potentially called on a thread. Should (where possible) perform all costly evaluation logic, accumulating into execution tokens which will be executed at a later time on the game thread.\n            3) Execute: Called on all previously submitted execution tokens to apply the evaluated state to the movie scene player" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSection_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
				{ "ToolTip", "The section from which this template originates" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSection = { UE4CodeGen_Private::EPropertyClass::Object, "SourceSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvalTemplate, SourceSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(NewProp_SourceSection_MetaData, ARRAY_COUNT(NewProp_SourceSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
				{ "ToolTip", "Enumeration value signifying whether we should restore any animated state stored by this entity when this eval tempalte is no longer evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvalTemplate, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(NewProp_CompletionMode_MetaData, ARRAY_COUNT(NewProp_CompletionMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionMode_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvalTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneEvalTemplate),
				alignof(FMovieSceneEvalTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_CRC() { return 921115777U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
