// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBinding() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FMovieSceneBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBinding, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBinding"), sizeof(FMovieSceneBinding), Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBinding(FMovieSceneBinding::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneBinding"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBinding")),new UScriptStruct::TCppStructOps<FMovieSceneBinding>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBinding"), sizeof(FMovieSceneBinding), Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
				{ "ToolTip", "A set of tracks bound to runtime objects" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBinding>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
				{ "ToolTip", "All tracks in this binding" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Array, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(FMovieSceneBinding, Tracks), METADATA_PARAMS(NewProp_Tracks_MetaData, ARRAY_COUNT(NewProp_Tracks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
				{ "ToolTip", "All tracks in this binding" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(NewProp_Tracks_Inner_MetaData, ARRAY_COUNT(NewProp_Tracks_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
				{ "ToolTip", "Display name" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_BindingName = { UE4CodeGen_Private::EPropertyClass::Str, "BindingName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneBinding, BindingName), METADATA_PARAMS(NewProp_BindingName_MetaData, ARRAY_COUNT(NewProp_BindingName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
				{ "ToolTip", "Object binding guid for runtime objects" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneBinding, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ObjectGuid_MetaData, ARRAY_COUNT(NewProp_ObjectGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BindingName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectGuid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneBinding",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneBinding),
				alignof(FMovieSceneBinding),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_CRC() { return 3346046330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
