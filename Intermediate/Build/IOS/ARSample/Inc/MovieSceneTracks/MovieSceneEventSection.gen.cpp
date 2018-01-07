// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieSceneEventSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FEventPayload();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneEventSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionData"), sizeof(FMovieSceneEventSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionData(FMovieSceneEventSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionData"), sizeof(FMovieSceneEventSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ToolTip", "A curve of events" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ToolTip", "Array of values that correspond to each key time" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues = { UE4CodeGen_Private::EPropertyClass::Array, "KeyValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyValues), METADATA_PARAMS(NewProp_KeyValues_MetaData, ARRAY_COUNT(NewProp_KeyValues_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyValues", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ToolTip", "Sorted array of key times" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyTimes = { UE4CodeGen_Private::EPropertyClass::Array, "KeyTimes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyTimes), METADATA_PARAMS(NewProp_KeyTimes_MetaData, ARRAY_COUNT(NewProp_KeyTimes_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeyTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "KeyTimes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyValues,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyValues_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyTimes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyTimes_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEventSectionData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMovieSceneEventSectionData),
				alignof(FMovieSceneEventSectionData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC() { return 3942518763U; }
class UScriptStruct* FEventPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventPayload, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EventPayload"), sizeof(FEventPayload), Get_Z_Construct_UScriptStruct_FEventPayload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventPayload(FEventPayload::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("EventPayload"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventPayload")),new UScriptStruct::TCppStructOps<FEventPayload>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload;
	UScriptStruct* Z_Construct_UScriptStruct_FEventPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventPayload"), sizeof(FEventPayload), Get_Z_Construct_UScriptStruct_FEventPayload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventPayload>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
				{ "Category", "Event" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "The event parameters" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Struct, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEventPayload, Parameters), Z_Construct_UScriptStruct_FMovieSceneEventParameters, METADATA_PARAMS(NewProp_Parameters_MetaData, ARRAY_COUNT(NewProp_Parameters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
				{ "Category", "Event" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ToolTip", "The name of the event to trigger" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FEventPayload, EventName), METADATA_PARAMS(NewProp_EventName_MetaData, ARRAY_COUNT(NewProp_EventName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EventPayload",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEventPayload),
				alignof(FEventPayload),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC() { return 1115941263U; }
class UScriptStruct* FMovieSceneEventParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventParameters, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventParameters"), sizeof(FMovieSceneEventParameters), Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventParameters(FMovieSceneEventParameters::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventParameters")),new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventParameters"), sizeof(FMovieSceneEventParameters), Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MovieSceneEventParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FMovieSceneEventParameters),
				alignof(FMovieSceneEventParameters),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC() { return 551625875U; }
	void UMovieSceneEventSection::StaticRegisterNativesUMovieSceneEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister()
	{
		return UMovieSceneEventSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneEventSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieSceneEventSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
				{ "ToolTip", "Implements a section in movie scene event tracks." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData = { UE4CodeGen_Private::EPropertyClass::Struct, "EventData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(NewProp_EventData_MetaData, ARRAY_COUNT(NewProp_EventData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, Events_DEPRECATED), Z_Construct_UScriptStruct_FNameCurve, METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneEventSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneEventSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieSceneEventSection, 3069281011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventSection(Z_Construct_UClass_UMovieSceneEventSection, &UMovieSceneEventSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
