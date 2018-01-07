// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneTrackImplementation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackImplementation() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackImplementationPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementationPtr"), sizeof(FMovieSceneTrackImplementationPtr), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackImplementationPtr(FMovieSceneTrackImplementationPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackImplementationPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackImplementationPtr")),new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementationPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackImplementationPtr"), sizeof(FMovieSceneTrackImplementationPtr), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
				{ "ToolTip", "Custom serialized type that attempts to store a track implementation template in inline memory if possible" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementationPtr>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackImplementationPtr",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackImplementationPtr),
				alignof(FMovieSceneTrackImplementationPtr),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC() { return 3739524199U; }
class UScriptStruct* FMovieSceneTrackImplementation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementation"), sizeof(FMovieSceneTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackImplementation(FMovieSceneTrackImplementation::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackImplementation"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackImplementation")),new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementation>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackImplementation"), sizeof(FMovieSceneTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
				{ "ToolTip", "Structure that allows the implementation of setup/teardown/initialization/evaluation logic at the track level." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementation>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackImplementation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackImplementation),
				alignof(FMovieSceneTrackImplementation),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC() { return 3381224189U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
