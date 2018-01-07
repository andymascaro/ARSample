// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimStateMachineTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateMachineTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETransitionLogicType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionLogicType, Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionLogicType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionLogicType(ETransitionLogicType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETransitionLogicType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETransitionLogicType_CRC() { return 1821772447U; }
	UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionLogicType"), 0, Get_Z_Construct_UEnum_Engine_ETransitionLogicType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionLogicType::TLT_StandardBlend", (int64)ETransitionLogicType::TLT_StandardBlend },
				{ "ETransitionLogicType::TLT_Custom", (int64)ETransitionLogicType::TLT_Custom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "TLT_Custom.DisplayName", "Custom" },
				{ "TLT_StandardBlend.DisplayName", "Standard Blend" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionLogicType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETransitionLogicType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransitionBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionBlendMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionBlendMode(ETransitionBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETransitionBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETransitionBlendMode_CRC() { return 4017912684U; }
	UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionBlendMode"), 0, Get_Z_Construct_UEnum_Engine_ETransitionBlendMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionBlendMode::TBM_Linear", (int64)ETransitionBlendMode::TBM_Linear },
				{ "ETransitionBlendMode::TBM_Cubic", (int64)ETransitionBlendMode::TBM_Cubic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "TBM_Cubic.DisplayName", "Cubic" },
				{ "TBM_Linear.DisplayName", "Linear" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionBlendMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETransitionBlendMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBakedAnimationStateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationStateMachine, Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationStateMachine"), sizeof(FBakedAnimationStateMachine), Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedAnimationStateMachine(FBakedAnimationStateMachine::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedAnimationStateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedAnimationStateMachine")),new UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine;
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedAnimationStateMachine"), sizeof(FBakedAnimationStateMachine), Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "List of all transitions between states" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, Transitions), METADATA_PARAMS(NewProp_Transitions_MetaData, ARRAY_COUNT(NewProp_Transitions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "List of all states this machine can be in" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, States), METADATA_PARAMS(NewProp_States_MetaData, ARRAY_COUNT(NewProp_States_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Index of the initial state that the machine will start in" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialState = { UE4CodeGen_Private::EPropertyClass::Int, "InitialState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, InitialState), METADATA_PARAMS(NewProp_InitialState_MetaData, ARRAY_COUNT(NewProp_InitialState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Name of this machine (primarily for debugging purposes)" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MachineName = { UE4CodeGen_Private::EPropertyClass::Name, "MachineName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, MachineName), METADATA_PARAMS(NewProp_MachineName_MetaData, ARRAY_COUNT(NewProp_MachineName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MachineName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BakedAnimationStateMachine",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBakedAnimationStateMachine),
				alignof(FBakedAnimationStateMachine),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC() { return 4239077423U; }
class UScriptStruct* FBakedAnimationState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationState, Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationState"), sizeof(FBakedAnimationState), Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedAnimationState(FBakedAnimationState::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedAnimationState"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedAnimationState")),new UScriptStruct::TCppStructOps<FBakedAnimationState>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState;
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedAnimationState"), sizeof(FBakedAnimationState), Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationState>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysResetOnEntry_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight" },
			};
#endif
			auto NewProp_bAlwaysResetOnEntry_SetBit = [](void* Obj){ ((FBakedAnimationState*)Obj)->bAlwaysResetOnEntry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysResetOnEntry = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysResetOnEntry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedAnimationState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysResetOnEntry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysResetOnEntry_MetaData, ARRAY_COUNT(NewProp_bAlwaysResetOnEntry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Indices into the property array for player nodes in the state" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerNodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, PlayerNodeIndices), METADATA_PARAMS(NewProp_PlayerNodeIndices_MetaData, ARRAY_COUNT(NewProp_PlayerNodeIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerNodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryRuleNodeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryRuleNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EntryRuleNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, EntryRuleNodeIndex), METADATA_PARAMS(NewProp_EntryRuleNodeIndex_MetaData, ARRAY_COUNT(NewProp_EntryRuleNodeIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAConduit_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			auto NewProp_bIsAConduit_SetBit = [](void* Obj){ ((FBakedAnimationState*)Obj)->bIsAConduit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAConduit = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAConduit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedAnimationState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAConduit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAConduit_MetaData, ARRAY_COUNT(NewProp_bIsAConduit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify = { UE4CodeGen_Private::EPropertyClass::Int, "FullyBlendedNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, FullyBlendedNotify), METADATA_PARAMS(NewProp_FullyBlendedNotify_MetaData, ARRAY_COUNT(NewProp_FullyBlendedNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, EndNotify), METADATA_PARAMS(NewProp_EndNotify_MetaData, ARRAY_COUNT(NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StartNotify), METADATA_PARAMS(NewProp_StartNotify_MetaData, ARRAY_COUNT(NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "StateRootNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateRootNodeIndex), METADATA_PARAMS(NewProp_StateRootNodeIndex_MetaData, ARRAY_COUNT(NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, Transitions), METADATA_PARAMS(NewProp_Transitions_MetaData, ARRAY_COUNT(NewProp_Transitions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedStateExitTransition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The name of this state" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysResetOnEntry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerNodeIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerNodeIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryRuleNodeIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAConduit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullyBlendedNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateRootNodeIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BakedAnimationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBakedAnimationState),
				alignof(FBakedAnimationState),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC() { return 2495378479U; }
class UScriptStruct* FBakedStateExitTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedStateExitTransition, Z_Construct_UPackage__Script_Engine(), TEXT("BakedStateExitTransition"), sizeof(FBakedStateExitTransition), Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedStateExitTransition(FBakedStateExitTransition::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedStateExitTransition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedStateExitTransition")),new UScriptStruct::TCppStructOps<FBakedStateExitTransition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition;
	UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedStateExitTransition"), sizeof(FBakedStateExitTransition), Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedStateExitTransition>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseEvaluatorLinks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseEvaluatorLinks = { UE4CodeGen_Private::EPropertyClass::Array, "PoseEvaluatorLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, PoseEvaluatorLinks), METADATA_PARAMS(NewProp_PoseEvaluatorLinks_MetaData, ARRAY_COUNT(NewProp_PoseEvaluatorLinks_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseEvaluatorLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PoseEvaluatorLinks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRemainingTimeRule_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Automatic Transition Rule based on animation remaining time." },
			};
#endif
			auto NewProp_bAutomaticRemainingTimeRule_SetBit = [](void* Obj){ ((FBakedStateExitTransition*)Obj)->bAutomaticRemainingTimeRule = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRemainingTimeRule = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticRemainingTimeRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedStateExitTransition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutomaticRemainingTimeRule_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutomaticRemainingTimeRule_MetaData, ARRAY_COUNT(NewProp_bAutomaticRemainingTimeRule_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDesiredTransitionReturnValue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "What the transition rule node needs to return to take this transition (for bidirectional transitions)" },
			};
#endif
			auto NewProp_bDesiredTransitionReturnValue_SetBit = [](void* Obj){ ((FBakedStateExitTransition*)Obj)->bDesiredTransitionReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDesiredTransitionReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bDesiredTransitionReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedStateExitTransition), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDesiredTransitionReturnValue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDesiredTransitionReturnValue_MetaData, ARRAY_COUNT(NewProp_bDesiredTransitionReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The index into the machine table of transitions" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TransitionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, TransitionIndex), METADATA_PARAMS(NewProp_TransitionIndex_MetaData, ARRAY_COUNT(NewProp_TransitionIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResultNodeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The blend graph result node index" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomResultNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CustomResultNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CustomResultNodeIndex), METADATA_PARAMS(NewProp_CustomResultNodeIndex_MetaData, ARRAY_COUNT(NewProp_CustomResultNodeIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanTakeDelegateIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The node property index for this rule" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CanTakeDelegateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CanTakeDelegateIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CanTakeDelegateIndex), METADATA_PARAMS(NewProp_CanTakeDelegateIndex_MetaData, ARRAY_COUNT(NewProp_CanTakeDelegateIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseEvaluatorLinks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PoseEvaluatorLinks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutomaticRemainingTimeRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDesiredTransitionReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomResultNodeIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanTakeDelegateIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BakedStateExitTransition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBakedStateExitTransition),
				alignof(FBakedStateExitTransition),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC() { return 1566607236U; }
class UScriptStruct* FAnimationTransitionBetweenStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionBetweenStates"), sizeof(FAnimationTransitionBetweenStates), Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationTransitionBetweenStates(FAnimationTransitionBetweenStates::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationTransitionBetweenStates"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationTransitionBetweenStates")),new UScriptStruct::TCppStructOps<FAnimationTransitionBetweenStates>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationTransitionBetweenStates"), sizeof(FAnimationTransitionBetweenStates), Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "This represents a baked transition" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionBetweenStates>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogicType_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogicType = { UE4CodeGen_Private::EPropertyClass::Byte, "LogicType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, LogicType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(NewProp_LogicType_MetaData, ARRAY_COUNT(NewProp_LogicType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(NewProp_BlendProfile_MetaData, ARRAY_COUNT(NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_CustomCurve_MetaData, ARRAY_COUNT(NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(NewProp_BlendMode_MetaData, ARRAY_COUNT(NewProp_BlendMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterruptNotify = { UE4CodeGen_Private::EPropertyClass::Int, "InterruptNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, InterruptNotify), METADATA_PARAMS(NewProp_InterruptNotify_MetaData, ARRAY_COUNT(NewProp_InterruptNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, EndNotify), METADATA_PARAMS(NewProp_EndNotify_MetaData, ARRAY_COUNT(NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, StartNotify), METADATA_PARAMS(NewProp_StartNotify_MetaData, ARRAY_COUNT(NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CrossfadeDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CrossfadeDuration), METADATA_PARAMS(NewProp_CrossfadeDuration_MetaData, ARRAY_COUNT(NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Transition-only: State being transitioned to" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextState = { UE4CodeGen_Private::EPropertyClass::Int, "NextState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, NextState), METADATA_PARAMS(NewProp_NextState_MetaData, ARRAY_COUNT(NewProp_NextState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Transition-only: State being transitioned from" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousState = { UE4CodeGen_Private::EPropertyClass::Int, "PreviousState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, PreviousState), METADATA_PARAMS(NewProp_PreviousState_MetaData, ARRAY_COUNT(NewProp_PreviousState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogicType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendProfile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterruptNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrossfadeDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousState,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimationStateBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationTransitionBetweenStates",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationTransitionBetweenStates),
				alignof(FAnimationTransitionBetweenStates),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC() { return 3685298872U; }
class UScriptStruct* FAnimationState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationState, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationState"), sizeof(FAnimationState), Get_Z_Construct_UScriptStruct_FAnimationState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationState(FAnimationState::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationState"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationState
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationState")),new UScriptStruct::TCppStructOps<FAnimationState>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationState;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationState"), sizeof(FAnimationState), Get_Z_Construct_UScriptStruct_FAnimationState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationState>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The index of the notify to fire when this state is fully entered (weight within the machine becomes one)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify = { UE4CodeGen_Private::EPropertyClass::Int, "FullyBlendedNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, FullyBlendedNotify), METADATA_PARAMS(NewProp_FullyBlendedNotify_MetaData, ARRAY_COUNT(NewProp_FullyBlendedNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The index of the notify to fire when this state is finished exiting (weight within the machine becomes zero)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, EndNotify), METADATA_PARAMS(NewProp_EndNotify_MetaData, ARRAY_COUNT(NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The index of the notify to fire when this state is first entered (weight within the machine becomes non-zero)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, StartNotify), METADATA_PARAMS(NewProp_StartNotify_MetaData, ARRAY_COUNT(NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "StateRootNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, StateRootNodeIndex), METADATA_PARAMS(NewProp_StateRootNodeIndex_MetaData, ARRAY_COUNT(NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, Transitions), METADATA_PARAMS(NewProp_Transitions_MetaData, ARRAY_COUNT(NewProp_Transitions_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionRule, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullyBlendedNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartNotify,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateRootNodeIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Transitions_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FAnimationStateBase,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationState),
				alignof(FAnimationState),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC() { return 3889893630U; }
class UScriptStruct* FAnimationStateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationStateBase"), sizeof(FAnimationStateBase), Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationStateBase(FAnimationStateBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationStateBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationStateBase")),new UScriptStruct::TCppStructOps<FAnimationStateBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationStateBase"), sizeof(FAnimationStateBase), Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "This is the base class that both baked states and transitions use" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateBase>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "The name of this state" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationStateBase, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationStateBase",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationStateBase),
				alignof(FAnimationStateBase),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC() { return 1186819197U; }
class UScriptStruct* FAnimationTransitionRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionRule, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionRule"), sizeof(FAnimationTransitionRule), Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationTransitionRule(FAnimationTransitionRule::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationTransitionRule"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationTransitionRule")),new UScriptStruct::TCppStructOps<FAnimationTransitionRule>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationTransitionRule"), sizeof(FAnimationTransitionRule), Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "This structure represents a baked transition rule inside a state" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionRule>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TransitionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, TransitionIndex), METADATA_PARAMS(NewProp_TransitionIndex_MetaData, ARRAY_COUNT(NewProp_TransitionIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionReturnVal_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "ToolTip", "What RuleToExecute must return to take transition (for bidirectional transitions)" },
			};
#endif
			auto NewProp_TransitionReturnVal_SetBit = [](void* Obj){ ((FAnimationTransitionRule*)Obj)->TransitionReturnVal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransitionReturnVal = { UE4CodeGen_Private::EPropertyClass::Bool, "TransitionReturnVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationTransitionRule), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TransitionReturnVal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TransitionReturnVal_MetaData, ARRAY_COUNT(NewProp_TransitionReturnVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleToExecute_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RuleToExecute = { UE4CodeGen_Private::EPropertyClass::Name, "RuleToExecute", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, RuleToExecute), METADATA_PARAMS(NewProp_RuleToExecute_MetaData, ARRAY_COUNT(NewProp_RuleToExecute_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransitionReturnVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuleToExecute,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnimationTransitionRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnimationTransitionRule),
				alignof(FAnimationTransitionRule),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC() { return 3614833811U; }
	void UAnimStateMachineTypes::StaticRegisterNativesUAnimStateMachineTypes()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister()
	{
		return UAnimStateMachineTypes::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimStateMachineTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Animation/AnimStateMachineTypes.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimStateMachineTypes>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimStateMachineTypes::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateMachineTypes, 2776379932);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateMachineTypes(Z_Construct_UClass_UAnimStateMachineTypes, &UAnimStateMachineTypes::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimStateMachineTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateMachineTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
