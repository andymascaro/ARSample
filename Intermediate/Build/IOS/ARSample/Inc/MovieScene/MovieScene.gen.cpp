// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackLabels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackLabels, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackLabels"), sizeof(FMovieSceneTrackLabels), Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackLabels(FMovieSceneTrackLabels::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackLabels"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackLabels")),new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackLabels"), sizeof(FMovieSceneTrackLabels), Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Structure for labels that can be assigned to movie scene tracks." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Strings = { UE4CodeGen_Private::EPropertyClass::Array, "Strings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTrackLabels, Strings), METADATA_PARAMS(NewProp_Strings_MetaData, ARRAY_COUNT(NewProp_Strings_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Strings_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Strings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Strings_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTrackLabels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneTrackLabels),
				alignof(FMovieSceneTrackLabels),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC() { return 3102860772U; }
class UScriptStruct* FMovieSceneEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEditorData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEditorData"), sizeof(FMovieSceneEditorData), Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEditorData(FMovieSceneEditorData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEditorData")),new UScriptStruct::TCppStructOps<FMovieSceneEditorData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEditorData"), sizeof(FMovieSceneEditorData), Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEditorData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "The last view-range that the user was observing" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_ViewRange_MetaData, ARRAY_COUNT(NewProp_ViewRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkingRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "User-defined working range in which the entire sequence should reside." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkingRange = { UE4CodeGen_Private::EPropertyClass::Struct, "WorkingRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkingRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_WorkingRange_MetaData, ARRAY_COUNT(NewProp_WorkingRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpansionStates_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Map of node path -> expansion state." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExpansionStates = { UE4CodeGen_Private::EPropertyClass::Map, "ExpansionStates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ExpansionStates), METADATA_PARAMS(NewProp_ExpansionStates_MetaData, ARRAY_COUNT(NewProp_ExpansionStates_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpansionStates_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ExpansionStates_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpansionStates_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpansionStates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneExpansionState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkingRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpansionStates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpansionStates_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpansionStates_ValueProp,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEditorData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEditorData),
				alignof(FMovieSceneEditorData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC() { return 3830360583U; }
class UScriptStruct* FMovieSceneExpansionState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneExpansionState, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneExpansionState"), sizeof(FMovieSceneExpansionState), Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneExpansionState(FMovieSceneExpansionState::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneExpansionState"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneExpansionState")),new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneExpansionState"), sizeof(FMovieSceneExpansionState), Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "@todo: remove this type when support for intrinsics on TMap values is added?" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			auto NewProp_bExpanded_SetBit = [](void* Obj){ ((FMovieSceneExpansionState*)Obj)->bExpanded = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bExpanded", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneExpansionState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExpanded_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExpanded_MetaData, ARRAY_COUNT(NewProp_bExpanded_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExpanded,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneExpansionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneExpansionState),
				alignof(FMovieSceneExpansionState),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC() { return 3871098268U; }
	void UMovieScene::StaticRegisterNativesUMovieScene()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene_NoRegister()
	{
		return UMovieScene::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieScene.h" },
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Implements a movie scene asset." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, EndTime_DEPRECATED), METADATA_PARAMS(NewProp_EndTime_MetaData, ARRAY_COUNT(NewProp_EndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, StartTime_DEPRECATED), METADATA_PARAMS(NewProp_StartTime_MetaData, ARRAY_COUNT(NewProp_StartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTime = { UE4CodeGen_Private::EPropertyClass::Float, "OutTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, OutTime_DEPRECATED), METADATA_PARAMS(NewProp_OutTime_MetaData, ARRAY_COUNT(NewProp_OutTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime = { UE4CodeGen_Private::EPropertyClass::Float, "InTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, InTime_DEPRECATED), METADATA_PARAMS(NewProp_InTime_MetaData, ARRAY_COUNT(NewProp_InTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootFolders_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "The root folders for this movie scene." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootFolders = { UE4CodeGen_Private::EPropertyClass::Array, "RootFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, RootFolders), METADATA_PARAMS(NewProp_RootFolders_MetaData, ARRAY_COUNT(NewProp_RootFolders_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootFolders_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RootFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorData = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, EditorData), Z_Construct_UScriptStruct_FMovieSceneEditorData, METADATA_PARAMS(NewProp_EditorData_MetaData, ARRAY_COUNT(NewProp_EditorData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToLabels_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Maps object GUIDs to user defined labels." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectsToLabels = { UE4CodeGen_Private::EPropertyClass::Map, "ObjectsToLabels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToLabels), METADATA_PARAMS(NewProp_ObjectsToLabels_MetaData, ARRAY_COUNT(NewProp_ObjectsToLabels_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectsToLabels_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectsToLabels_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsToLabels_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectsToLabels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackLabels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToDisplayNames_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Maps object GUIDs to user defined display names." },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectsToDisplayNames = { UE4CodeGen_Private::EPropertyClass::Map, "ObjectsToDisplayNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToDisplayNames), METADATA_PARAMS(NewProp_ObjectsToDisplayNames_MetaData, ARRAY_COUNT(NewProp_ObjectsToDisplayNames_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectsToDisplayNames_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectsToDisplayNames_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectsToDisplayNames_ValueProp = { UE4CodeGen_Private::EPropertyClass::Text, "ObjectsToDisplayNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedFrameInterval_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedFrameInterval = { UE4CodeGen_Private::EPropertyClass::Float, "FixedFrameInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, FixedFrameInterval), METADATA_PARAMS(NewProp_FixedFrameInterval_MetaData, ARRAY_COUNT(NewProp_FixedFrameInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFixedFrameIntervalPlayback_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			auto NewProp_bForceFixedFrameIntervalPlayback_SetBit = [](void* Obj){ ((UMovieScene*)Obj)->bForceFixedFrameIntervalPlayback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFixedFrameIntervalPlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFixedFrameIntervalPlayback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieScene), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceFixedFrameIntervalPlayback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceFixedFrameIntervalPlayback_MetaData, ARRAY_COUNT(NewProp_bForceFixedFrameIntervalPlayback_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRangeLocked_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
			};
#endif
			auto NewProp_bPlaybackRangeLocked_SetBit = [](void* Obj){ ((UMovieScene*)Obj)->bPlaybackRangeLocked = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRangeLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaybackRangeLocked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieScene), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlaybackRangeLocked_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlaybackRangeLocked_MetaData, ARRAY_COUNT(NewProp_bPlaybackRangeLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, PlaybackRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_PlaybackRange_MetaData, ARRAY_COUNT(NewProp_PlaybackRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionRange_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "User-defined selection range." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionRange = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectionRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, SelectionRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(NewProp_SelectionRange_MetaData, ARRAY_COUNT(NewProp_SelectionRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCutTrack_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "The camera cut track is a specialized track for switching between cameras on a cinematic" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraCutTrack = { UE4CodeGen_Private::EPropertyClass::Object, "CameraCutTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0042000000080008, 1, nullptr, STRUCT_OFFSET(UMovieScene, CameraCutTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(NewProp_CameraCutTrack_MetaData, ARRAY_COUNT(NewProp_CameraCutTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Master tracks which are not bound to spawned or possessed objects" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MasterTracks = { UE4CodeGen_Private::EPropertyClass::Array, "MasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieScene, MasterTracks), METADATA_PARAMS(NewProp_MasterTracks_MetaData, ARRAY_COUNT(NewProp_MasterTracks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Master tracks which are not bound to spawned or possessed objects" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(NewProp_MasterTracks_Inner_MetaData, ARRAY_COUNT(NewProp_MasterTracks_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Tracks bound to possessed or spawned objects" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectBindings), METADATA_PARAMS(NewProp_ObjectBindings_MetaData, ARRAY_COUNT(NewProp_ObjectBindings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Possessables_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Typed slots for already-spawned objects that we are able to control with this MovieScene" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Possessables = { UE4CodeGen_Private::EPropertyClass::Array, "Possessables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, Possessables), METADATA_PARAMS(NewProp_Possessables_MetaData, ARRAY_COUNT(NewProp_Possessables_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Possessables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Possessables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieScene.h" },
				{ "ToolTip", "Data-only blueprints for all of the objects that we we're able to spawn.\nThese describe objects and actors that we may instantiate at runtime,\nor create proxy objects for previewing in the editor." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawnables = { UE4CodeGen_Private::EPropertyClass::Array, "Spawnables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, Spawnables), METADATA_PARAMS(NewProp_Spawnables_MetaData, ARRAY_COUNT(NewProp_Spawnables_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Spawnables", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTime,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootFolders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootFolders_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToLabels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToLabels_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToLabels_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToDisplayNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToDisplayNames_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectsToDisplayNames_ValueProp,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FixedFrameInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceFixedFrameIntervalPlayback,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlaybackRangeLocked,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaybackRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraCutTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MasterTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBindings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObjectBindings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Possessables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Possessables_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spawnables,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Spawnables_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene, 3881114770);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene(Z_Construct_UClass_UMovieScene, &UMovieScene::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
