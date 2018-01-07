// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Damage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Damage() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAIDamageEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDamageEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDamageEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDamageEvent"), sizeof(FAIDamageEvent), Get_Z_Construct_UScriptStruct_FAIDamageEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDamageEvent(FAIDamageEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDamageEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDamageEvent")),new UScriptStruct::TCppStructOps<FAIDamageEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDamageEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDamageEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDamageEvent"), sizeof(FAIDamageEvent), Get_Z_Construct_UScriptStruct_FAIDamageEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDamageEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "Actor that instigated damage. Can be None" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDamageEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Instigator_MetaData, ARRAY_COUNT(NewProp_Instigator_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "Damaged actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDamageEvent, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_DamagedActor_MetaData, ARRAY_COUNT(NewProp_DamagedActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "Event's additional spatial information\n    @TODO document" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDamageEvent, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_HitLocation_MetaData, ARRAY_COUNT(NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "Event's \"Location\", or what will be later treated as the perceived location for this sense.\n    If not set, HitLocation will be used, if that is unset too DamagedActor's location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDamageEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "Damage taken by DamagedActor.\n    @Note 0-damage events do not get ignored" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount = { UE4CodeGen_Private::EPropertyClass::Float, "Amount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAIDamageEvent, Amount), METADATA_PARAMS(NewProp_Amount_MetaData, ARRAY_COUNT(NewProp_Amount_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amount,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIDamageEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAIDamageEvent),
				alignof(FAIDamageEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDamageEvent_CRC() { return 758119366U; }
	void UAISense_Damage::StaticRegisterNativesUAISense_Damage()
	{
		UClass* Class = UAISense_Damage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportDamageEvent", (Native)&UAISense_Damage::execReportDamageEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent()
	{
		struct AISense_Damage_eventReportDamageEvent_Parms
		{
			UObject* WorldContextObject;
			AActor* DamagedActor;
			AActor* Instigator;
			float DamageAmount;
			FVector EventLocation;
			FVector HitLocation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "EventLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, EventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "DamageAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "HitLocation" },
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
				{ "ToolTip", "EventLocation will be reported as Instigator's location at the moment of event happening" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Damage, "ReportDamageEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AISense_Damage_eventReportDamageEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Damage_NoRegister()
	{
		return UAISense_Damage::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Damage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent, "ReportDamageEvent" }, // 3833052037
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Damage.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents = { UE4CodeGen_Private::EPropertyClass::Array, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Damage, RegisteredEvents), METADATA_PARAMS(NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(NewProp_RegisteredEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIDamageEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Damage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Damage::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAISense_Damage, 3824299064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Damage(Z_Construct_UClass_UAISense_Damage, &UAISense_Damage::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Damage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Damage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
