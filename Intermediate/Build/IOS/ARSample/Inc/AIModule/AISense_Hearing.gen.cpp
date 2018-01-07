// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Hearing() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAINoiseEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAINoiseEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AINoiseEvent"), sizeof(FAINoiseEvent), Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAINoiseEvent(FAINoiseEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AINoiseEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AINoiseEvent")),new UScriptStruct::TCppStructOps<FAINoiseEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AINoiseEvent"), sizeof(FAINoiseEvent), Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAINoiseEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Named identifier for the noise." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Actor triggering the sound." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Instigator_MetaData, ARRAY_COUNT(NewProp_Instigator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Max range at which the sound can be heard. Multiplied by Loudness.\nA value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, MaxRange), METADATA_PARAMS(NewProp_MaxRange_MetaData, ARRAY_COUNT(NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[] = {
				{ "Category", "Sense" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Loudness modifier of the sound.\nIf MaxRange is non-zero, this modifies the range (by multiplication).\nIf there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange) * Loudness, the sound is heard, false otherwise." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Loudness), METADATA_PARAMS(NewProp_Loudness_MetaData, ARRAY_COUNT(NewProp_Loudness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "if not set Instigator's location will be used" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NoiseLocation_MetaData, ARRAY_COUNT(NewProp_NoiseLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loudness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AINoiseEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAINoiseEvent),
				alignof(FAINoiseEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC() { return 214322520U; }
	void UAISense_Hearing::StaticRegisterNativesUAISense_Hearing()
	{
		UClass* Class = UAISense_Hearing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportNoiseEvent", (Native)&UAISense_Hearing::execReportNoiseEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent()
	{
		struct AISense_Hearing_eventReportNoiseEvent_Parms
		{
			UObject* WorldContextObject;
			FVector NoiseLocation;
			float Loudness;
			AActor* Instigator;
			float MaxRange;
			FName Tag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loudness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "CPP_Default_Loudness", "1.000000" },
				{ "CPP_Default_MaxRange", "0.000000" },
				{ "CPP_Default_Tag", "None" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Report a noise event.\n\n@param NoiseLocation Location of the noise.\n@param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n@param Instigator Actor that triggered the noise.\n@param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n@param Tag Identifier for the event." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Hearing, "ReportNoiseEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AISense_Hearing_eventReportNoiseEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister()
	{
		return UAISense_Hearing::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent, "ReportNoiseEvent" }, // 4102969706
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Hearing.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundSq_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
				{ "ToolTip", "Defaults to 0 to have instant notification. Setting to > 0 will result in delaying\n    when AI hears the sound based on the distance from the source" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundSq = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedOfSoundSq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UAISense_Hearing, SpeedOfSoundSq), METADATA_PARAMS(NewProp_SpeedOfSoundSq_MetaData, ARRAY_COUNT(NewProp_SpeedOfSoundSq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NoiseEvents = { UE4CodeGen_Private::EPropertyClass::Array, "NoiseEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Hearing, NoiseEvents), METADATA_PARAMS(NewProp_NoiseEvents_MetaData, ARRAY_COUNT(NewProp_NoiseEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedOfSoundSq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseEvents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Hearing>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Hearing::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAISense_Hearing, 398886542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Hearing(Z_Construct_UClass_UAISense_Hearing, &UAISense_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
