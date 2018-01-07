// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieScene3DAttachTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FMovieScene3DAttachSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DAttachSectionTemplate"), sizeof(FMovieScene3DAttachSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DAttachSectionTemplate(FMovieScene3DAttachSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DAttachSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DAttachSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene3DAttachSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DAttachSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DAttachSectionTemplate"), sizeof(FMovieScene3DAttachSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DAttachSectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The detachment scale rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentScaleRule_MetaData, ARRAY_COUNT(NewProp_DetachmentScaleRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The detachment rotation rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentRotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentRotationRule_MetaData, ARRAY_COUNT(NewProp_DetachmentRotationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The detachment location rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentLocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentLocationRule_MetaData, ARRAY_COUNT(NewProp_DetachmentLocationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The attachment scale rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentScaleRule_MetaData, ARRAY_COUNT(NewProp_AttachmentScaleRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The attachment rotation rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentRotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentRotationRule_MetaData, ARRAY_COUNT(NewProp_AttachmentRotationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "The attachment location rule" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentLocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentLocationRule_MetaData, ARRAY_COUNT(NewProp_AttachmentLocationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "Name of the component to attach to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachComponentName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachComponentName), METADATA_PARAMS(NewProp_AttachComponentName_MetaData, ARRAY_COUNT(NewProp_AttachComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "Name of the socket to attach to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachSocketName), METADATA_PARAMS(NewProp_AttachSocketName_MetaData, ARRAY_COUNT(NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachGuid_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DAttachTemplate.h" },
				{ "ToolTip", "GUID of the parent we should attach to" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "AttachGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieScene3DAttachSectionTemplate, AttachGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_AttachGuid_MetaData, ARRAY_COUNT(NewProp_AttachGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentRotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentRotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentLocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentLocationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentRotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentRotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentLocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentLocationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachGuid,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieScene3DAttachSectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieScene3DAttachSectionTemplate),
				alignof(FMovieScene3DAttachSectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DAttachSectionTemplate_CRC() { return 3991186904U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
