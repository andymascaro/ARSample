// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieSceneTrackIdentifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackIdentifier() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackIdentifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackIdentifier"), sizeof(FMovieSceneTrackIdentifier), Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackIdentifier(FMovieSceneTrackIdentifier::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackIdentifier"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifier
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackIdentifier")),new UScriptStruct::TCppStructOps<FMovieSceneTrackIdentifier>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackIdentifier;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackIdentifier"), sizeof(FMovieSceneTrackIdentifier), Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackIdentifier.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackIdentifier>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackIdentifier.h" },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::UInt32, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTrackIdentifier, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackIdentifier",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackIdentifier),
				alignof(FMovieSceneTrackIdentifier),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC() { return 633061858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
