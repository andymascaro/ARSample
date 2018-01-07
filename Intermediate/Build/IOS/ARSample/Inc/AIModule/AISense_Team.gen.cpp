// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Team() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAITeamStimulusEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITeamStimulusEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AITeamStimulusEvent"), sizeof(FAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITeamStimulusEvent(FAITeamStimulusEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AITeamStimulusEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITeamStimulusEvent")),new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITeamStimulusEvent"), sizeof(FAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy = { UE4CodeGen_Private::EPropertyClass::Object, "Enemy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAITeamStimulusEvent, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Enemy_MetaData, ARRAY_COUNT(NewProp_Enemy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Broadcaster_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Broadcaster = { UE4CodeGen_Private::EPropertyClass::Object, "Broadcaster", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAITeamStimulusEvent, Broadcaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Broadcaster_MetaData, ARRAY_COUNT(NewProp_Broadcaster_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enemy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Broadcaster,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AITeamStimulusEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAITeamStimulusEvent),
				alignof(FAITeamStimulusEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_CRC() { return 2000231150U; }
	void UAISense_Team::StaticRegisterNativesUAISense_Team()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Team_NoRegister()
	{
		return UAISense_Team::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Team.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents = { UE4CodeGen_Private::EPropertyClass::Array, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Team, RegisteredEvents), METADATA_PARAMS(NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(NewProp_RegisteredEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAITeamStimulusEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Team>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Team::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Team, 3411727999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Team(Z_Construct_UClass_UAISense_Team, &UAISense_Team::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
