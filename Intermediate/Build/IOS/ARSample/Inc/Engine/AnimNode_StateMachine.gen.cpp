// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNode_StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateMachine() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_StateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateMachine, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_StateMachine"), sizeof(FAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_StateMachine(FAnimNode_StateMachine::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_StateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_StateMachine")),new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_StateMachine;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_StateMachine"), sizeof(FAnimNode_StateMachine), Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "State machine node" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateMachine>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Elapsed time since entering the current state" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime = { UE4CodeGen_Private::EPropertyClass::Float, "ElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, ElapsedTime), METADATA_PARAMS(NewProp_ElapsedTime_MetaData, ARRAY_COUNT(NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "The current state within the state machine" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentState = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, CurrentState), METADATA_PARAMS(NewProp_CurrentState_MetaData, ARRAY_COUNT(NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReinitializeOnBecomingRelevant_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Reinitialize the state machine if we have become relevant to the graph\nafter not being ticked on the previous frame(s)" },
			};
#endif
			auto NewProp_bReinitializeOnBecomingRelevant_SetBit = [](void* Obj){ ((FAnimNode_StateMachine*)Obj)->bReinitializeOnBecomingRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReinitializeOnBecomingRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bReinitializeOnBecomingRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_StateMachine), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReinitializeOnBecomingRelevant_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReinitializeOnBecomingRelevant_MetaData, ARRAY_COUNT(NewProp_bReinitializeOnBecomingRelevant_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipFirstUpdateTransition_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Skip transition from entry state on first update?\ndefault is true, we throw away transition data on first update" },
			};
#endif
			auto NewProp_bSkipFirstUpdateTransition_SetBit = [](void* Obj){ ((FAnimNode_StateMachine*)Obj)->bSkipFirstUpdateTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstUpdateTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipFirstUpdateTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_StateMachine), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipFirstUpdateTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipFirstUpdateTransition_MetaData, ARRAY_COUNT(NewProp_bSkipFirstUpdateTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionsPerFrame_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTransitionsPerFrame = { UE4CodeGen_Private::EPropertyClass::Int, "MaxTransitionsPerFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, MaxTransitionsPerFrame), METADATA_PARAMS(NewProp_MaxTransitionsPerFrame_MetaData, ARRAY_COUNT(NewProp_MaxTransitionsPerFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineIndexInClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateMachineIndexInClass = { UE4CodeGen_Private::EPropertyClass::Int, "StateMachineIndexInClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_StateMachine, StateMachineIndexInClass), METADATA_PARAMS(NewProp_StateMachineIndexInClass_MetaData, ARRAY_COUNT(NewProp_StateMachineIndexInClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElapsedTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReinitializeOnBecomingRelevant,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipFirstUpdateTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTransitionsPerFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachineIndexInClass,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimNode_Base,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimNode_StateMachine",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAnimNode_StateMachine),
				alignof(FAnimNode_StateMachine),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_StateMachine_CRC() { return 338713800U; }
class UScriptStruct* FAnimationPotentialTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationPotentialTransition, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationPotentialTransition"), sizeof(FAnimationPotentialTransition), Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationPotentialTransition(FAnimationPotentialTransition::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationPotentialTransition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationPotentialTransition")),new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationPotentialTransition;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationPotentialTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationPotentialTransition"), sizeof(FAnimationPotentialTransition), Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationPotentialTransition>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationPotentialTransition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationPotentialTransition),
				alignof(FAnimationPotentialTransition),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationPotentialTransition_CRC() { return 1663860916U; }
class UScriptStruct* FAnimationActiveTransitionEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationActiveTransitionEntry"), sizeof(FAnimationActiveTransitionEntry), Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationActiveTransitionEntry(FAnimationActiveTransitionEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationActiveTransitionEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationActiveTransitionEntry")),new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationActiveTransitionEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationActiveTransitionEntry"), sizeof(FAnimationActiveTransitionEntry), Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Information about an active transition on the transition stack" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationActiveTransitionEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_StateMachine.h" },
				{ "ToolTip", "Blend profile to use for this transition. Specifying this will make the transition evaluate per-bone" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationActiveTransitionEntry, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(NewProp_BlendProfile_MetaData, ARRAY_COUNT(NewProp_BlendProfile_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendProfile,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationActiveTransitionEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationActiveTransitionEntry),
				alignof(FAnimationActiveTransitionEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationActiveTransitionEntry_CRC() { return 4188787387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
