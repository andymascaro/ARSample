// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AISense_Blueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
// End Cross Module References
	static FName NAME_UAISense_Blueprint_K2_OnNewPawn = FName(TEXT("K2_OnNewPawn"));
	void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn)
	{
		AISense_Blueprint_eventK2_OnNewPawn_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_K2_OnNewPawn),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerRegistered = FName(TEXT("OnListenerRegistered"));
	void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerRegistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerRegistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUnregistered = FName(TEXT("OnListenerUnregistered"));
	void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUnregistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUnregistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUpdated = FName(TEXT("OnListenerUpdated"));
	void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUpdated_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUpdated),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnUpdate = FName(TEXT("OnUpdate"));
	float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*> const& EventsToProcess)
	{
		AISense_Blueprint_eventOnUpdate_Parms Parms;
		Parms.EventsToProcess=EventsToProcess;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnUpdate),&Parms);
		return Parms.ReturnValue;
	}
	void UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint()
	{
		UClass* Class = UAISense_Blueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllListenerActors", (Native)&UAISense_Blueprint::execGetAllListenerActors },
			{ "GetAllListenerComponents", (Native)&UAISense_Blueprint::execGetAllListenerComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors()
	{
		struct AISense_Blueprint_eventGetAllListenerActors_Parms
		{
			TArray<AActor*> ListenerActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerActors = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerActors_Parms, ListenerActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerActors_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "GetAllListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AISense_Blueprint_eventGetAllListenerActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents()
	{
		struct AISense_Blueprint_eventGetAllListenerComponents_Parms
		{
			TArray<UAIPerceptionComponent*> ListenerComponents;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerComponents_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerComponents_Parms, ListenerComponents), METADATA_PARAMS(NewProp_ListenerComponents_MetaData, ARRAY_COUNT(NewProp_ListenerComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerComponents_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "GetAllListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AISense_Blueprint_eventGetAllListenerComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn = { UE4CodeGen_Private::EPropertyClass::Object, "NewPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventK2_OnNewPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnNewPawn" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ToolTip", "called when sense's instance gets notified about new pawn that has just been spawned" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "K2_OnNewPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(NewProp_PerceptionComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorListener,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerRegistered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(NewProp_PerceptionComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorListener,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ToolTip", "called when a listener unregistered from this sense. Most often this is called due to actor's death\n    @param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerUnregistered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(NewProp_PerceptionComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorListener,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToProcess_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToProcess = { UE4CodeGen_Private::EPropertyClass::Array, "EventsToProcess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, EventsToProcess), METADATA_PARAMS(NewProp_EventsToProcess_MetaData, ARRAY_COUNT(NewProp_EventsToProcess_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventsToProcess_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EventsToProcess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventsToProcess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EventsToProcess_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ToolTip", "returns requested amount of time to pass until next frame.\n    Return 0 to get update every frame (WARNING: hits performance)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(AISense_Blueprint_eventOnUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister()
	{
		return UAISense_Blueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_UAISense_Blueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAISense,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors, "GetAllListenerActors" }, // 2941645180
				{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents, "GetAllListenerComponents" }, // 3179262937
				{ &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn, "K2_OnNewPawn" }, // 2790163037
				{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered, "OnListenerRegistered" }, // 1592218124
				{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered, "OnListenerUnregistered" }, // 3765916924
				{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated, "OnListenerUpdated" }, // 1218393721
				{ &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate, "OnUpdate" }, // 3284336021
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "AI" },
				{ "IncludePath", "Perception/AISense_Blueprint.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnprocessedEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnprocessedEvents = { UE4CodeGen_Private::EPropertyClass::Array, "UnprocessedEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents), METADATA_PARAMS(NewProp_UnprocessedEvents_MetaData, ARRAY_COUNT(NewProp_UnprocessedEvents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnprocessedEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UnprocessedEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerContainer_MetaData[] = {
				{ "Category", "Sense" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerContainer = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008800000001c, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer), METADATA_PARAMS(NewProp_ListenerContainer_MetaData, ARRAY_COUNT(NewProp_ListenerContainer_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerContainer_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerContainer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerDataType_MetaData[] = {
				{ "Category", "Sense" },
				{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListenerDataType = { UE4CodeGen_Private::EPropertyClass::Class, "ListenerDataType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType), Z_Construct_UClass_UUserDefinedStruct_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ListenerDataType_MetaData, ARRAY_COUNT(NewProp_ListenerDataType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnprocessedEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnprocessedEvents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerContainer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerContainer_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ListenerDataType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAISense_Blueprint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAISense_Blueprint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900085u,
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
	IMPLEMENT_CLASS(UAISense_Blueprint, 433410943);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Blueprint(Z_Construct_UClass_UAISense_Blueprint, &UAISense_Blueprint::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Blueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Blueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
