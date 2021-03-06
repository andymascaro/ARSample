// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Evaluation/MovieScenePropertyTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData();
// End Cross Module References
class UScriptStruct* FMovieScenePropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionTemplate"), sizeof(FMovieScenePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePropertySectionTemplate(FMovieScenePropertySectionTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScenePropertySectionTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePropertySectionTemplate"), sizeof(FMovieScenePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyData = { UE4CodeGen_Private::EPropertyClass::Struct, "PropertyData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionTemplate, PropertyData), Z_Construct_UScriptStruct_FMovieScenePropertySectionData, METADATA_PARAMS(NewProp_PropertyData_MetaData, ARRAY_COUNT(NewProp_PropertyData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScenePropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000205),
				sizeof(FMovieScenePropertySectionTemplate),
				alignof(FMovieScenePropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate_CRC() { return 3130068707U; }
class UScriptStruct* FMovieScenePropertySectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertySectionData"), sizeof(FMovieScenePropertySectionData), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePropertySectionData(FMovieScenePropertySectionData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieScenePropertySectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePropertySectionData")),new UScriptStruct::TCppStructOps<FMovieScenePropertySectionData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieScenePropertySectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePropertySectionData"), sizeof(FMovieScenePropertySectionData), Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertySectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyFunctionName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyFunctionName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyFunctionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, NotifyFunctionName), METADATA_PARAMS(NewProp_NotifyFunctionName_MetaData, ARRAY_COUNT(NewProp_NotifyFunctionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName = { UE4CodeGen_Private::EPropertyClass::Name, "FunctionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, FunctionName), METADATA_PARAMS(NewProp_FunctionName_MetaData, ARRAY_COUNT(NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyPath = { UE4CodeGen_Private::EPropertyClass::Str, "PropertyPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyPath), METADATA_PARAMS(NewProp_PropertyPath_MetaData, ARRAY_COUNT(NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
				{ "ModuleRelativePath", "Public/Evaluation/MovieScenePropertyTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScenePropertySectionData, PropertyName), METADATA_PARAMS(NewProp_PropertyName_MetaData, ARRAY_COUNT(NewProp_PropertyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyFunctionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FunctionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScenePropertySectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieScenePropertySectionData),
				alignof(FMovieScenePropertySectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePropertySectionData_CRC() { return 1095359867U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
