// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Event/ParticleModuleEventGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventGenerator() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
// End Cross Module References
class UScriptStruct* FParticleEvent_GenerateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEvent_GenerateInfo"), sizeof(FParticleEvent_GenerateInfo), Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEvent_GenerateInfo(FParticleEvent_GenerateInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEvent_GenerateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleEvent_GenerateInfo")),new UScriptStruct::TCppStructOps<FParticleEvent_GenerateInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEvent_GenerateInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEvent_GenerateInfo"), sizeof(FParticleEvent_GenerateInfo), Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEvent_GenerateInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "The events we want to fire off when this event has been generated" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleModuleEventsToSendToGame = { UE4CodeGen_Private::EPropertyClass::Array, "ParticleModuleEventsToSendToGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000009, 1, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame), METADATA_PARAMS(NewProp_ParticleModuleEventsToSendToGame_MetaData, ARRAY_COUNT(NewProp_ParticleModuleEventsToSendToGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "The events we want to fire off when this event has been generated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleModuleEventsToSendToGame_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleModuleEventsToSendToGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister, METADATA_PARAMS(NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData, ARRAY_COUNT(NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Should the event tag with a custom name? Leave blank for the default." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomName = { UE4CodeGen_Private::EPropertyClass::Name, "CustomName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, CustomName), METADATA_PARAMS(NewProp_CustomName_MetaData, ARRAY_COUNT(NewProp_CustomName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOrbitOffset_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Use the orbit offset when computing the position at which the event occurred." },
			};
#endif
			auto NewProp_bUseOrbitOffset_SetBit = [](void* Obj){ ((FParticleEvent_GenerateInfo*)Obj)->bUseOrbitOffset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOrbitOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseOrbitOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleEvent_GenerateInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseOrbitOffset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseOrbitOffset_MetaData, ARRAY_COUNT(NewProp_bUseOrbitOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseReflectedImpactVector_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Use the impact FVector not the hit normal (collision only)." },
			};
#endif
			auto NewProp_UseReflectedImpactVector_SetBit = [](void* Obj){ ((FParticleEvent_GenerateInfo*)Obj)->UseReflectedImpactVector = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseReflectedImpactVector = { UE4CodeGen_Private::EPropertyClass::Bool, "UseReflectedImpactVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleEvent_GenerateInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseReflectedImpactVector_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseReflectedImpactVector_MetaData, ARRAY_COUNT(NewProp_UseReflectedImpactVector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTimeOnly_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Only fire the last time (collision only)." },
			};
#endif
			auto NewProp_LastTimeOnly_SetBit = [](void* Obj){ ((FParticleEvent_GenerateInfo*)Obj)->LastTimeOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LastTimeOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "LastTimeOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleEvent_GenerateInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LastTimeOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LastTimeOnly_MetaData, ARRAY_COUNT(NewProp_LastTimeOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimeOnly_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Only fire the first time (collision only)." },
			};
#endif
			auto NewProp_FirstTimeOnly_SetBit = [](void* Obj){ ((FParticleEvent_GenerateInfo*)Obj)->FirstTimeOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimeOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "FirstTimeOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleEvent_GenerateInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FirstTimeOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FirstTimeOnly_MetaData, ARRAY_COUNT(NewProp_FirstTimeOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleFrequency_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "Only fire the first time (collision only)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleFrequency = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleFrequency), METADATA_PARAMS(NewProp_ParticleFrequency_MetaData, ARRAY_COUNT(NewProp_ParticleFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "How often to trigger the event (<= 1 means EVERY time)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Frequency = { UE4CodeGen_Private::EPropertyClass::Int, "Frequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Frequency), METADATA_PARAMS(NewProp_Frequency_MetaData, ARRAY_COUNT(NewProp_Frequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "ParticleEvent_GenerateInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ToolTip", "The type of event." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Type), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleModuleEventsToSendToGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleModuleEventsToSendToGame_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseOrbitOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseReflectedImpactVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastTimeOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstTimeOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Frequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ParticleEvent_GenerateInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FParticleEvent_GenerateInfo),
				alignof(FParticleEvent_GenerateInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_CRC() { return 605711870U; }
	void UParticleModuleEventGenerator::StaticRegisterNativesUParticleModuleEventGenerator()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister()
	{
		return UParticleModuleEventGenerator::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Event Generator" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Event/ParticleModuleEventGenerator.h" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008002000009, 1, nullptr, STRUCT_OFFSET(UParticleModuleEventGenerator, Events), METADATA_PARAMS(NewProp_Events_MetaData, ARRAY_COUNT(NewProp_Events_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000008000000008, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Events_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleEventGenerator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleEventGenerator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00881080u,
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
	IMPLEMENT_CLASS(UParticleModuleEventGenerator, 3123857347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventGenerator(Z_Construct_UClass_UParticleModuleEventGenerator, &UParticleModuleEventGenerator::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
