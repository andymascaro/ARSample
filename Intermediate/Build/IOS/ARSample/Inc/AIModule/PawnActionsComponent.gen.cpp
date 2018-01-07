// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Actions/PawnActionsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnActionsComponent() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPawnActionStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionStack, Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionStack"), sizeof(FPawnActionStack), Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnActionStack(FPawnActionStack::StaticStruct, TEXT("/Script/AIModule"), TEXT("PawnActionStack"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack
{
	FScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnActionStack")),new UScriptStruct::TCppStructOps<FPawnActionStack>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack;
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnActionStack"), sizeof(FPawnActionStack), Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionStack>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopAction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopAction = { UE4CodeGen_Private::EPropertyClass::Object, "TopAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPawnActionStack, TopAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_TopAction_MetaData, ARRAY_COUNT(NewProp_TopAction_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopAction,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PawnActionStack",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPawnActionStack),
				alignof(FPawnActionStack),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_CRC() { return 3729927640U; }
class UScriptStruct* FPawnActionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionEvent"), sizeof(FPawnActionEvent), Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnActionEvent(FPawnActionEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("PawnActionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnActionEvent")),new UScriptStruct::TCppStructOps<FPawnActionEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent;
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnActionEvent"), sizeof(FPawnActionEvent), Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionEvent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Object, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPawnActionEvent, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PawnActionEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FPawnActionEvent),
				alignof(FPawnActionEvent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_CRC() { return 2766206104U; }
	void UPawnActionsComponent::StaticRegisterNativesUPawnActionsComponent()
	{
		UClass* Class = UPawnActionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AbortAction", (Native)&UPawnActionsComponent::execK2_AbortAction },
			{ "K2_ForceAbortAction", (Native)&UPawnActionsComponent::execK2_ForceAbortAction },
			{ "K2_PerformAction", (Native)&UPawnActionsComponent::execK2_PerformAction },
			{ "K2_PushAction", (Native)&UPawnActionsComponent::execK2_PushAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction()
	{
		struct PawnActionsComponent_eventK2_AbortAction_Parms
		{
			UPawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort = { UE4CodeGen_Private::EPropertyClass::Object, "ActionToAbort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ActionToAbort), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionToAbort,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PawnAction" },
				{ "DisplayName", "AbortAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
				{ "ToolTip", "Aborts given action instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, "K2_AbortAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnActionsComponent_eventK2_AbortAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction()
	{
		struct PawnActionsComponent_eventK2_ForceAbortAction_Parms
		{
			UPawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort = { UE4CodeGen_Private::EPropertyClass::Object, "ActionToAbort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ActionToAbort), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionToAbort,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PawnAction" },
				{ "DisplayName", "ForceAbortAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
				{ "ToolTip", "Aborts given action instance" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, "K2_ForceAbortAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnActionsComponent_eventK2_ForceAbortAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction()
	{
		struct PawnActionsComponent_eventK2_PerformAction_Parms
		{
			APawn* Pawn;
			UPawnAction* Action;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PawnActionsComponent_eventK2_PerformAction_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Object, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|PawnActions" },
				{ "CPP_Default_Priority", "HardScript" },
				{ "DisplayName", "PerformAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
				{ "ToolTip", "blueprint interface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, "K2_PerformAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction()
	{
		struct PawnActionsComponent_eventK2_PushAction_Parms
		{
			UPawnAction* NewAction;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			UObject* Instigator;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PawnActionsComponent_eventK2_PushAction_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PawnActionsComponent_eventK2_PushAction_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAction = { UE4CodeGen_Private::EPropertyClass::Object, "NewAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, NewAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Instigator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAction,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PawnAction" },
				{ "DisplayName", "PushAction" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, "K2_PushAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PawnActionsComponent_eventK2_PushAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister()
	{
		return UPawnActionsComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnActionsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction, "K2_AbortAction" }, // 1003153056
				{ &Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction, "K2_ForceAbortAction" }, // 3070978556
				{ &Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction, "K2_PerformAction" }, // 1685087889
				{ &Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction, "K2_PushAction" }, // 2842673287
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Actions/PawnActionsComponent.h" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAction = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UPawnActionsComponent, CurrentAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(NewProp_CurrentAction_MetaData, ARRAY_COUNT(NewProp_CurrentAction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionEvents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionEvents = { UE4CodeGen_Private::EPropertyClass::Array, "ActionEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UPawnActionsComponent, ActionEvents), METADATA_PARAMS(NewProp_ActionEvents_MetaData, ARRAY_COUNT(NewProp_ActionEvents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionEvents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPawnActionEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionStacks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionStacks = { UE4CodeGen_Private::EPropertyClass::Array, "ActionStacks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UPawnActionsComponent, ActionStacks), METADATA_PARAMS(NewProp_ActionStacks_MetaData, ARRAY_COUNT(NewProp_ActionStacks_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionStacks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionStacks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPawnActionStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[] = {
				{ "Category", "PawnActions" },
				{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UPawnActionsComponent, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_ControlledPawn_MetaData, ARRAY_COUNT(NewProp_ControlledPawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionEvents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionEvents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionStacks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionStacks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnActionsComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnActionsComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPawnActionsComponent, 3761732429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnActionsComponent(Z_Construct_UClass_UPawnActionsComponent, &UPawnActionsComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnActionsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnActionsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
