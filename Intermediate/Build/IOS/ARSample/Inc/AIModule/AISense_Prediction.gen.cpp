// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Prediction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Prediction() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
class UScriptStruct* FAIPredictionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIPredictionEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AIPredictionEvent"), sizeof(FAIPredictionEvent), Get_Z_Construct_UScriptStruct_FAIPredictionEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIPredictionEvent(FAIPredictionEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIPredictionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIPredictionEvent")),new UScriptStruct::TCppStructOps<FAIPredictionEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIPredictionEvent"), sizeof(FAIPredictionEvent), Get_Z_Construct_UScriptStruct_FAIPredictionEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIPredictionEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor = { UE4CodeGen_Private::EPropertyClass::Object, "PredictedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAIPredictionEvent, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_PredictedActor_MetaData, ARRAY_COUNT(NewProp_PredictedActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requestor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor = { UE4CodeGen_Private::EPropertyClass::Object, "Requestor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAIPredictionEvent, Requestor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Requestor_MetaData, ARRAY_COUNT(NewProp_Requestor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PredictedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Requestor,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AIPredictionEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAIPredictionEvent),
				alignof(FAIPredictionEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_CRC() { return 2378908453U; }
	void UAISense_Prediction::StaticRegisterNativesUAISense_Prediction()
	{
		UClass* Class = UAISense_Prediction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestControllerPredictionEvent", (Native)&UAISense_Prediction::execRequestControllerPredictionEvent },
			{ "RequestPawnPredictionEvent", (Native)&UAISense_Prediction::execRequestPawnPredictionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent()
	{
		struct AISense_Prediction_eventRequestControllerPredictionEvent_Parms
		{
			AAIController* Requestor;
			AActor* PredictedActor;
			float PredictionTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTime = { UE4CodeGen_Private::EPropertyClass::Float, "PredictionTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor = { UE4CodeGen_Private::EPropertyClass::Object, "PredictedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor = { UE4CodeGen_Private::EPropertyClass::Object, "Requestor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, Requestor), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PredictionTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PredictedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Requestor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
				{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, "RequestControllerPredictionEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AISense_Prediction_eventRequestControllerPredictionEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent()
	{
		struct AISense_Prediction_eventRequestPawnPredictionEvent_Parms
		{
			APawn* Requestor;
			AActor* PredictedActor;
			float PredictionTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTime = { UE4CodeGen_Private::EPropertyClass::Float, "PredictionTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor = { UE4CodeGen_Private::EPropertyClass::Object, "PredictedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor = { UE4CodeGen_Private::EPropertyClass::Object, "Requestor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, Requestor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PredictionTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PredictedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Requestor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
				{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, "RequestPawnPredictionEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AISense_Prediction_eventRequestPawnPredictionEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister()
	{
		return UAISense_Prediction::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Prediction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent, "RequestControllerPredictionEvent" }, // 3892651307
				{ &Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent, "RequestPawnPredictionEvent" }, // 677049446
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Prediction.h" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents = { UE4CodeGen_Private::EPropertyClass::Array, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Prediction, RegisteredEvents), METADATA_PARAMS(NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(NewProp_RegisteredEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RegisteredEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIPredictionEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RegisteredEvents_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Prediction>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Prediction::StaticClass,
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
	IMPLEMENT_CLASS(UAISense_Prediction, 2583100495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Prediction(Z_Construct_UClass_UAISense_Prediction, &UAISense_Prediction::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Prediction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Prediction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
