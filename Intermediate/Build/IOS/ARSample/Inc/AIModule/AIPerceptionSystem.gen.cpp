// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AIPerceptionSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent();
// End Cross Module References
	void UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem()
	{
		UClass* Class = UAIPerceptionSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSenseClassForStimulus", (Native)&UAIPerceptionSystem::execGetSenseClassForStimulus },
			{ "OnPerceptionStimuliSourceEndPlay", (Native)&UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay },
			{ "RegisterPerceptionStimuliSource", (Native)&UAIPerceptionSystem::execRegisterPerceptionStimuliSource },
			{ "ReportEvent", (Native)&UAIPerceptionSystem::execReportEvent },
			{ "ReportPerceptionEvent", (Native)&UAIPerceptionSystem::execReportPerceptionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus()
	{
		struct AIPerceptionSystem_eventGetSenseClassForStimulus_Parms
		{
			UObject* WorldContextObject;
			FAIStimulus Stimulus;
			TSubclassOf<UAISense>  ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000580, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, ReturnValue), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus = { UE4CodeGen_Private::EPropertyClass::Struct, "Stimulus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(NewProp_Stimulus_MetaData, ARRAY_COUNT(NewProp_Stimulus_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stimulus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "GetSenseClassForStimulus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay()
	{
		struct AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason = { UE4CodeGen_Private::EPropertyClass::Byte, "EndPlayReason", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPlayReason,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "OnPerceptionStimuliSourceEndPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource()
	{
		struct AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UAISense>  Sense;
			AActor* Target;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Sense = { UE4CodeGen_Private::EPropertyClass::Class, "Sense", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Sense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sense,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "RegisterPerceptionStimuliSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent()
	{
		struct AIPerceptionSystem_eventReportEvent_Parms
		{
			UAISenseEvent* PerceptionEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "ReportEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIPerceptionSystem_eventReportEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent()
	{
		struct AIPerceptionSystem_eventReportPerceptionEvent_Parms
		{
			UObject* WorldContextObject;
			UAISenseEvent* PerceptionEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "ReportPerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIPerceptionSystem_eventReportPerceptionEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister()
	{
		return UAIPerceptionSystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIPerceptionSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus, "GetSenseClassForStimulus" }, // 1565562949
				{ &Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay, "OnPerceptionStimuliSourceEndPlay" }, // 201732416
				{ &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource, "RegisterPerceptionStimuliSource" }, // 3691223461
				{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent, "ReportEvent" }, // 1581067760
				{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent, "ReportPerceptionEvent" }, // 618462572
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AIPerceptionSystem.h" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "By design checks perception between hostile teams" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionAgingRate_MetaData[] = {
				{ "Category", "Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionAgingRate = { UE4CodeGen_Private::EPropertyClass::Float, "PerceptionAgingRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UAIPerceptionSystem, PerceptionAgingRate), METADATA_PARAMS(NewProp_PerceptionAgingRate_MetaData, ARRAY_COUNT(NewProp_PerceptionAgingRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Senses_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Senses = { UE4CodeGen_Private::EPropertyClass::Array, "Senses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAIPerceptionSystem, Senses), METADATA_PARAMS(NewProp_Senses_MetaData, ARRAY_COUNT(NewProp_Senses_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Senses_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Senses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionAgingRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Senses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Senses_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIPerceptionSystem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIPerceptionSystem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
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
	IMPLEMENT_CLASS(UAIPerceptionSystem, 409900480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionSystem(Z_Construct_UClass_UAIPerceptionSystem, &UAIPerceptionSystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
