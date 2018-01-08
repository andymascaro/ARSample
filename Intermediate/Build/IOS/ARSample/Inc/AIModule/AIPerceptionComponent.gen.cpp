// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Perception/AIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature()
	{
		struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus = { UE4CodeGen_Private::EPropertyClass::Struct, "Stimulus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stimulus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "ActorPerceptionUpdatedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature()
	{
		struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors = { UE4CodeGen_Private::EPropertyClass::Array, "UpdatedActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms, UpdatedActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UpdatedActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdatedActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdatedActors_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "PerceptionUpdatedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FActorPerceptionBlueprintInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPerceptionBlueprintInfo(FActorPerceptionBlueprintInfo::StaticStruct, TEXT("/Script/AIModule"), TEXT("ActorPerceptionBlueprintInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo
{
	FScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPerceptionBlueprintInfo")),new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFActorPerceptionBlueprintInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPerceptionBlueprintInfo"), sizeof(FActorPerceptionBlueprintInfo), Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DisplayName", "Sensed Actor's Data" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHostile_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			auto NewProp_bIsHostile_SetBit = [](void* Obj){ ((FActorPerceptionBlueprintInfo*)Obj)->bIsHostile = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHostile = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHostile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FActorPerceptionBlueprintInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHostile_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsHostile_MetaData, ARRAY_COUNT(NewProp_bIsHostile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSensedStimuli_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastSensedStimuli = { UE4CodeGen_Private::EPropertyClass::Array, "LastSensedStimuli", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, LastSensedStimuli), METADATA_PARAMS(NewProp_LastSensedStimuli_MetaData, ARRAY_COUNT(NewProp_LastSensedStimuli_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSensedStimuli_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LastSensedStimuli", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Target_MetaData, ARRAY_COUNT(NewProp_Target_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHostile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastSensedStimuli,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastSensedStimuli_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ActorPerceptionBlueprintInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FActorPerceptionBlueprintInfo),
				alignof(FActorPerceptionBlueprintInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_CRC() { return 608056792U; }
	void UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent()
	{
		UClass* Class = UAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorsPerception", (Native)&UAIPerceptionComponent::execGetActorsPerception },
			{ "GetCurrentlyPerceivedActors", (Native)&UAIPerceptionComponent::execGetCurrentlyPerceivedActors },
			{ "GetKnownPerceivedActors", (Native)&UAIPerceptionComponent::execGetKnownPerceivedActors },
			{ "GetPerceivedActors", (Native)&UAIPerceptionComponent::execGetPerceivedActors },
			{ "GetPerceivedHostileActors", (Native)&UAIPerceptionComponent::execGetPerceivedHostileActors },
			{ "OnOwnerEndPlay", (Native)&UAIPerceptionComponent::execOnOwnerEndPlay },
			{ "RequestStimuliListenerUpdate", (Native)&UAIPerceptionComponent::execRequestStimuliListenerUpdate },
			{ "SetSenseEnabled", (Native)&UAIPerceptionComponent::execSetSenseEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception()
	{
		struct AIPerceptionComponent_eventGetActorsPerception_Parms
		{
			AActor* Actor;
			FActorPerceptionBlueprintInfo Info;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIPerceptionComponent_eventGetActorsPerception_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info = { UE4CodeGen_Private::EPropertyClass::Struct, "Info", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Info), Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Info,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "Retrieves whatever has been sensed about given actor" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "GetActorsPerception", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors()
	{
		struct AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse = { UE4CodeGen_Private::EPropertyClass::Class, "SenseToUse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseToUse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "If SenseToUse is none all actors currently perceived in any way will get fetched" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "GetCurrentlyPerceivedActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors()
	{
		struct AIPerceptionComponent_eventGetKnownPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse = { UE4CodeGen_Private::EPropertyClass::Class, "SenseToUse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseToUse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "GetKnownPerceivedActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors()
	{
		struct AIPerceptionComponent_eventGetPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseToUse = { UE4CodeGen_Private::EPropertyClass::Class, "SenseToUse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseToUse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "GetPerceivedActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AIPerceptionComponent_eventGetPerceivedActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors()
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActors_Parms
		{
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "blueprint interface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "GetPerceivedHostileActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay()
	{
		struct AIPerceptionComponent_eventOnOwnerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason = { UE4CodeGen_Private::EPropertyClass::Byte, "EndPlayReason", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndPlayReason,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "OnOwnerEndPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AIPerceptionComponent_eventOnOwnerEndPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "Notifies AIPerceptionSystem to update properties for this \"stimuli listener\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "RequestStimuliListenerUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled()
	{
		struct AIPerceptionComponent_eventSetSenseEnabled_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((AIPerceptionComponent_eventSetSenseEnabled_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnable_MetaData, ARRAY_COUNT(NewProp_bEnable_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SenseClass = { UE4CodeGen_Private::EPropertyClass::Class, "SenseClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventSetSenseEnabled_Parms, SenseClass), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenseClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "Note that this works only if given sense has been already configured for\n    this component instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, "SetSenseEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception, "GetActorsPerception" }, // 202715969
				{ &Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors, "GetCurrentlyPerceivedActors" }, // 3253875688
				{ &Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors, "GetKnownPerceivedActors" }, // 3787441356
				{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors, "GetPerceivedActors" }, // 817002608
				{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors, "GetPerceivedHostileActors" }, // 3172769743
				{ &Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 3467293444
				{ &Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate, "RequestStimuliListenerUpdate" }, // 2966608883
				{ &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled, "SetSenseEnabled" }, // 3232300496
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "AI" },
				{ "HideCategories", "Activation Collision" },
				{ "IncludePath", "Perception/AIPerceptionComponent.h" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\nand gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionUpdated_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTargetPerceptionUpdated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnTargetPerceptionUpdated_MetaData, ARRAY_COUNT(NewProp_OnTargetPerceptionUpdated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionUpdated_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "Might want to move these to special \"BP_AIPerceptionComponent\"" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPerceptionUpdated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnPerceptionUpdated_MetaData, ARRAY_COUNT(NewProp_OnPerceptionUpdated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner = { UE4CodeGen_Private::EPropertyClass::Object, "AIOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_AIOwner_MetaData, ARRAY_COUNT(NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
				{ "ToolTip", "Indicated sense that takes precedence over other senses when determining sensed actor's location.\n    Should be set to one of the senses configured in SensesConfig, or None." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DominantSense = { UE4CodeGen_Private::EPropertyClass::Class, "DominantSense", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, DominantSense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DominantSense_MetaData, ARRAY_COUNT(NewProp_DominantSense_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SensesConfig = { UE4CodeGen_Private::EPropertyClass::Array, "SensesConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000010009, 1, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig), METADATA_PARAMS(NewProp_SensesConfig_MetaData, ARRAY_COUNT(NewProp_SensesConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_Inner_MetaData[] = {
				{ "Category", "AI Perception" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensesConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SensesConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(NewProp_SensesConfig_Inner_MetaData, ARRAY_COUNT(NewProp_SensesConfig_Inner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTargetPerceptionUpdated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPerceptionUpdated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DominantSense,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SensesConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SensesConfig_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIPerceptionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIPerceptionComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UAIPerceptionComponent, 1196463074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionComponent(Z_Construct_UClass_UAIPerceptionComponent, &UAIPerceptionComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
