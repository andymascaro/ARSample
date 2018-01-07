// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneKeyStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneKeyStruct() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
class UScriptStruct* FMovieSceneKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyStruct"), sizeof(FMovieSceneKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneKeyStruct(FMovieSceneKeyStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneKeyStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneKeyStruct"), sizeof(FMovieSceneKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
				{ "ToolTip", "Base class for movie scene section key structs that need to manually\nhave their changes propagated to key values." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyStruct>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneKeyStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneKeyStruct),
				alignof(FMovieSceneKeyStruct),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC() { return 4159126973U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
