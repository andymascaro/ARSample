// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Sight() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAISightEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AISightEvent"), sizeof(FAISightEvent), Get_Z_Construct_UScriptStruct_FAISightEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISightEvent(FAISightEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AISightEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAISightEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAISightEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISightEvent")),new UScriptStruct::TCppStructOps<FAISightEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAISightEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISightEvent"), sizeof(FAISightEvent), Get_Z_Construct_UScriptStruct_FAISightEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer = { UE4CodeGen_Private::EPropertyClass::Object, "Observer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAISightEvent, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Observer_MetaData, ARRAY_COUNT(NewProp_Observer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenActor = { UE4CodeGen_Private::EPropertyClass::Object, "SeenActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAISightEvent, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_SeenActor_MetaData, ARRAY_COUNT(NewProp_SeenActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Observer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeenActor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AISightEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAISightEvent),
				alignof(FAISightEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_CRC() { return 1469709457U; }
	void UAISense_Sight::StaticRegisterNativesUAISense_Sight()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Sight_NoRegister()
	{
		return UAISense_Sight::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Sight()
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
				{ "IncludePath", "Perception/AISense_Sight.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance = { UE4CodeGen_Private::EPropertyClass::Float, "SightLimitQueryImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, SightLimitQueryImportance), METADATA_PARAMS(NewProp_SightLimitQueryImportance_MetaData, ARRAY_COUNT(NewProp_SightLimitQueryImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxQueryImportance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, MaxQueryImportance), METADATA_PARAMS(NewProp_MaxQueryImportance_MetaData, ARRAY_COUNT(NewProp_MaxQueryImportance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "HighImportanceQueryDistanceThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(NewProp_HighImportanceQueryDistanceThreshold_MetaData, ARRAY_COUNT(NewProp_HighImportanceQueryDistanceThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick = { UE4CodeGen_Private::EPropertyClass::Double, "MaxTimeSlicePerTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, MaxTimeSlicePerTick), METADATA_PARAMS(NewProp_MaxTimeSlicePerTick_MetaData, ARRAY_COUNT(NewProp_MaxTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck = { UE4CodeGen_Private::EPropertyClass::Int, "MinQueriesPerTimeSliceCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(NewProp_MinQueriesPerTimeSliceCheck_MetaData, ARRAY_COUNT(NewProp_MinQueriesPerTimeSliceCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick = { UE4CodeGen_Private::EPropertyClass::Int, "MaxTracesPerTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UAISense_Sight, MaxTracesPerTick), METADATA_PARAMS(NewProp_MaxTracesPerTick_MetaData, ARRAY_COUNT(NewProp_MaxTracesPerTick_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightLimitQueryImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxQueryImportance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighImportanceQueryDistanceThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTimeSlicePerTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinQueriesPerTimeSliceCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTracesPerTick,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Sight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Sight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Sight, 1910145027);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Sight(Z_Construct_UClass_UAISense_Sight, &UAISense_Sight::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
