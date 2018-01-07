// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Animation/MovieSceneWidgetMaterialTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
// End Cross Module References
class UScriptStruct* FMovieSceneWidgetMaterialSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieSceneWidgetMaterialSectionTemplate"), sizeof(FMovieSceneWidgetMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate(FMovieSceneWidgetMaterialSectionTemplate::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieSceneWidgetMaterialSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneWidgetMaterialSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneWidgetMaterialSectionTemplate>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieSceneWidgetMaterialSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneWidgetMaterialSectionTemplate"), sizeof(FMovieSceneWidgetMaterialSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWidgetMaterialSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[] = {
				{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath = { UE4CodeGen_Private::EPropertyClass::Array, "BrushPropertyNamePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath), METADATA_PARAMS(NewProp_BrushPropertyNamePath_MetaData, ARRAY_COUNT(NewProp_BrushPropertyNamePath_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "BrushPropertyNamePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushPropertyNamePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrushPropertyNamePath_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneWidgetMaterialSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneWidgetMaterialSectionTemplate),
				alignof(FMovieSceneWidgetMaterialSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_CRC() { return 2501819756U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
