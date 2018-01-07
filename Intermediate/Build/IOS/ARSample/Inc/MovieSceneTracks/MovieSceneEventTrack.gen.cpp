// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Tracks/MovieSceneEventTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
	static UEnum* EFireEventsAtPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EFireEventsAtPosition"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireEventsAtPosition(EFireEventsAtPosition_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EFireEventsAtPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_CRC() { return 183366339U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireEventsAtPosition"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireEventsAtPosition::AtStartOfEvaluation", (int64)EFireEventsAtPosition::AtStartOfEvaluation },
				{ "EFireEventsAtPosition::AtEndOfEvaluation", (int64)EFireEventsAtPosition::AtEndOfEvaluation },
				{ "EFireEventsAtPosition::AfterSpawn", (int64)EFireEventsAtPosition::AfterSpawn },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterSpawn.ToolTip", "Fire events right after any spawn tracks have been evaluated" },
				{ "AtEndOfEvaluation.ToolTip", "Fire events after everything else has been evaluated in the sequence" },
				{ "AtStartOfEvaluation.ToolTip", "Fire events before anything else is evaluated in the sequence" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "Indicates at what point in the sequence evaluation events should fire" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFireEventsAtPosition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFireEventsAtPosition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneEventTrack::StaticRegisterNativesUMovieSceneEventTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister()
	{
		return UMovieSceneEventTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneEventTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tracks/MovieSceneEventTrack.h" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "Implements a movie scene track that triggers discrete events during playback." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "The track's sections." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventTrack, Sections), METADATA_PARAMS(NewProp_Sections_MetaData, ARRAY_COUNT(NewProp_Sections_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[] = {
				{ "Category", "TrackEvent" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "Defines a list of object bindings on which to trigger the events in this track. When empty, events will trigger in the default event contexts for the playback environment (such as the level blueprint, or widget)." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventTrack, EventReceivers), METADATA_PARAMS(NewProp_EventReceivers_MetaData, ARRAY_COUNT(NewProp_EventReceivers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPosition_MetaData[] = {
				{ "Category", "TrackEvent" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "Defines where in the evaluation to trigger events" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventPosition = { UE4CodeGen_Private::EPropertyClass::Enum, "EventPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventTrack, EventPosition), Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, METADATA_PARAMS(NewProp_EventPosition_MetaData, ARRAY_COUNT(NewProp_EventPosition_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventPosition_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[] = {
				{ "Category", "TrackEvent" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
			};
#endif
			auto NewProp_bFireEventsWhenBackwards_SetBit = [](void* Obj){ ((UMovieSceneEventTrack*)Obj)->bFireEventsWhenBackwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneEventTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenBackwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[] = {
				{ "Category", "TrackEvent" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
			};
#endif
			auto NewProp_bFireEventsWhenForwards_SetBit = [](void* Obj){ ((UMovieSceneEventTrack*)Obj)->bFireEventsWhenForwards = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneEventTrack), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFireEventsWhenForwards_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(NewProp_bFireEventsWhenForwards_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventReceivers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventPosition_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenBackwards,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFireEventsWhenForwards,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneEventTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneEventTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UMovieSceneEventTrack, 109078551);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventTrack(Z_Construct_UClass_UMovieSceneEventTrack, &UMovieSceneEventTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
