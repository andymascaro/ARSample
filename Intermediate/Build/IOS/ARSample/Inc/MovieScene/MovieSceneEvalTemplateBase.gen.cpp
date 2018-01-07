// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneEvalTemplateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplateBase() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct();
// End Cross Module References
class UScriptStruct* FMovieSceneEvalTemplateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplateBase"), sizeof(FMovieSceneEvalTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplateBase(FMovieSceneEvalTemplateBase::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplateBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplateBase")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplateBase"), sizeof(FMovieSceneEvalTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
				{ "ToolTip", "Base structure used for all movie scene evaluation templates" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEvalTemplateBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEvalTemplateBase),
				alignof(FMovieSceneEvalTemplateBase),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_CRC() { return 3394924745U; }
class UScriptStruct* FMovieSceneEmptyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEmptyStruct"), sizeof(FMovieSceneEmptyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEmptyStruct(FMovieSceneEmptyStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEmptyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEmptyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEmptyStruct"), sizeof(FMovieSceneEmptyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
				{ "ToolTip", "Empty struct used for serialization" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEmptyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEmptyStruct),
				alignof(FMovieSceneEmptyStruct),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_CRC() { return 3024821844U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
