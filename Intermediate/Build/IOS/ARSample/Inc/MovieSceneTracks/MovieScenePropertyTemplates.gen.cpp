// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Evaluation/MovieScenePropertyTemplates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTemplates() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
// End Cross Module References
class UScriptStruct* FMovieSceneTransformPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneTransformPropertySectionTemplate"), sizeof(FMovieSceneTransformPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate(FMovieSceneTransformPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneTransformPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTransformPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneTransformPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneTransformPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTransformPropertySectionTemplate"), sizeof(FMovieSceneTransformPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTransformPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateData_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateData = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTransformPropertySectionTemplate, TemplateData), Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData, METADATA_PARAMS(NewProp_TemplateData_MetaData, ARRAY_COUNT(NewProp_TemplateData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TemplateData,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneTransformPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneTransformPropertySectionTemplate),
				alignof(FMovieSceneTransformPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC() { return 404731897U; }
class UScriptStruct* FMovieSceneVectorPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVectorPropertySectionTemplate"), sizeof(FMovieSceneVectorPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate(FMovieSceneVectorPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneVectorPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneVectorPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneVectorPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneVectorPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneVectorPropertySectionTemplate"), sizeof(FMovieSceneVectorPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVectorPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannelsUsed_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannelsUsed = { UE4CodeGen_Private::EPropertyClass::Int, "NumChannelsUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, NumChannelsUsed), METADATA_PARAMS(NewProp_NumChannelsUsed_MetaData, ARRAY_COUNT(NewProp_NumChannelsUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentCurves_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentCurves = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentCurves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, CPP_ARRAY_DIM(ComponentCurves, FMovieSceneVectorPropertySectionTemplate), nullptr, STRUCT_OFFSET(FMovieSceneVectorPropertySectionTemplate, ComponentCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_ComponentCurves_MetaData, ARRAY_COUNT(NewProp_ComponentCurves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumChannelsUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentCurves,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneVectorPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneVectorPropertySectionTemplate),
				alignof(FMovieSceneVectorPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC() { return 3224799271U; }
class UScriptStruct* FMovieSceneStringPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneStringPropertySectionTemplate(FMovieSceneStringPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneStringPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneStringPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneStringPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneStringPropertySectionTemplate"), sizeof(FMovieSceneStringPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "StringCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneStringPropertySectionTemplate, StringCurve), Z_Construct_UScriptStruct_FStringCurve, METADATA_PARAMS(NewProp_StringCurve_MetaData, ARRAY_COUNT(NewProp_StringCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneStringPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneStringPropertySectionTemplate),
				alignof(FMovieSceneStringPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC() { return 1861187695U; }
class UScriptStruct* FMovieSceneIntegerPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneIntegerPropertySectionTemplate"), sizeof(FMovieSceneIntegerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate(FMovieSceneIntegerPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneIntegerPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneIntegerPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneIntegerPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneIntegerPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneIntegerPropertySectionTemplate"), sizeof(FMovieSceneIntegerPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneIntegerPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneIntegerPropertySectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntegerCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "IntegerCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneIntegerPropertySectionTemplate, IntegerCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_IntegerCurve_MetaData, ARRAY_COUNT(NewProp_IntegerCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntegerCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneIntegerPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneIntegerPropertySectionTemplate),
				alignof(FMovieSceneIntegerPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC() { return 93775410U; }
class UScriptStruct* FMovieSceneEnumPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEnumPropertySectionTemplate"), sizeof(FMovieSceneEnumPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate(FMovieSceneEnumPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEnumPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEnumPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEnumPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEnumPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEnumPropertySectionTemplate"), sizeof(FMovieSceneEnumPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEnumPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnumCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "EnumCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEnumPropertySectionTemplate, EnumCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_EnumCurve_MetaData, ARRAY_COUNT(NewProp_EnumCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnumCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEnumPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneEnumPropertySectionTemplate),
				alignof(FMovieSceneEnumPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC() { return 2859186832U; }
class UScriptStruct* FMovieSceneBytePropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBytePropertySectionTemplate"), sizeof(FMovieSceneBytePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBytePropertySectionTemplate(FMovieSceneBytePropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneBytePropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBytePropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneBytePropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBytePropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBytePropertySectionTemplate"), sizeof(FMovieSceneBytePropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBytePropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByteCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ByteCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneBytePropertySectionTemplate, ByteCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_ByteCurve_MetaData, ARRAY_COUNT(NewProp_ByteCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ByteCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneBytePropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneBytePropertySectionTemplate),
				alignof(FMovieSceneBytePropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC() { return 3788382189U; }
class UScriptStruct* FMovieSceneFloatPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneFloatPropertySectionTemplate"), sizeof(FMovieSceneFloatPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate(FMovieSceneFloatPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneFloatPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFloatPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFloatPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFloatPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneFloatPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneFloatPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatPropertySectionTemplate"), sizeof(FMovieSceneFloatPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatPropertySectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(NewProp_BlendType_MetaData, ARRAY_COUNT(NewProp_BlendType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatPropertySectionTemplate, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(NewProp_FloatCurve_MetaData, ARRAY_COUNT(NewProp_FloatCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneFloatPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneFloatPropertySectionTemplate),
				alignof(FMovieSceneFloatPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC() { return 3350844556U; }
class UScriptStruct* FMovieSceneBoolPropertySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate(FMovieSceneBoolPropertySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneBoolPropertySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBoolPropertySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneBoolPropertySectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBoolPropertySectionTemplate"), sizeof(FMovieSceneBoolPropertySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBoolPropertySectionTemplate>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolCurve_MetaData[] = {
				{ "ModuleRelativePath", "Private/Evaluation/MovieScenePropertyTemplates.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "BoolCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneBoolPropertySectionTemplate, BoolCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(NewProp_BoolCurve_MetaData, ARRAY_COUNT(NewProp_BoolCurve_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolCurve,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneBoolPropertySectionTemplate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMovieSceneBoolPropertySectionTemplate),
				alignof(FMovieSceneBoolPropertySectionTemplate),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC() { return 1815450122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
