// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_EndTask();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_ReadyForActivation();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, "GenericGameplayTaskDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETaskResourceOverlapPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("ETaskResourceOverlapPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskResourceOverlapPolicy(ETaskResourceOverlapPolicy_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("ETaskResourceOverlapPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_CRC() { return 1746866446U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskResourceOverlapPolicy"), 0, Get_Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskResourceOverlapPolicy::StartOnTop", (int64)ETaskResourceOverlapPolicy::StartOnTop },
				{ "ETaskResourceOverlapPolicy::StartAtEnd", (int64)ETaskResourceOverlapPolicy::StartAtEnd },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "StartAtEnd.ToolTip", "Wait for other same-priority tasks to finish." },
				{ "StartOnTop.ToolTip", "Pause overlapping same-priority tasks." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETaskResourceOverlapPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETaskResourceOverlapPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTaskState(EGameplayTaskState_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("EGameplayTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_CRC() { return 1317143798U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTaskState"), 0, Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTaskState::Uninitialized", (int64)EGameplayTaskState::Uninitialized },
				{ "EGameplayTaskState::AwaitingActivation", (int64)EGameplayTaskState::AwaitingActivation },
				{ "EGameplayTaskState::Paused", (int64)EGameplayTaskState::Paused },
				{ "EGameplayTaskState::Active", (int64)EGameplayTaskState::Active },
				{ "EGameplayTaskState::Finished", (int64)EGameplayTaskState::Finished },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTaskState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayTaskState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayResourceSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTASKS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayResourceSet, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("GameplayResourceSet"), sizeof(FGameplayResourceSet), Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayResourceSet(FGameplayResourceSet::StaticStruct, TEXT("/Script/GameplayTasks"), TEXT("GameplayResourceSet"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet
{
	FScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayResourceSet")),new UScriptStruct::TCppStructOps<FGameplayResourceSet>);
	}
} ScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet;
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayResourceSet"), sizeof(FGameplayResourceSet), Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayResourceSet>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameplayResourceSet",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FGameplayResourceSet),
				alignof(FGameplayResourceSet),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_CRC() { return 3668811415U; }
	void UGameplayTask::StaticRegisterNativesUGameplayTask()
	{
		UClass* Class = UGameplayTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", (Native)&UGameplayTask::execEndTask },
			{ "ReadyForActivation", (Native)&UGameplayTask::execReadyForActivation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameplayTasks" },
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "ToolTip", "Called explicitly to end the task (usually by the task itself). Calls OnDestroy.\n    @NOTE: you need to call EndTask before sending out any \"on completed\" delegates.\n    If you don't the task will still be in an \"active\" state while the event receivers may\n    assume it's already \"finished\"" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, "EndTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_ReadyForActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "true" },
				{ "Category", "Gameplay Tasks" },
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "ToolTip", "Called to trigger the actual task once the delegates have been set up" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, "ReadyForActivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_NoRegister()
	{
		return UGameplayTask::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameplayTask_EndTask, "EndTask" }, // 4219328261
				{ &Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, "GenericGameplayTaskDelegate__DelegateSignature" }, // 3088525014
				{ &Z_Construct_UFunction_UGameplayTask_ReadyForActivation, "ReadyForActivation" }, // 2402570167
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ExposedAsyncProxy", "" },
				{ "IncludePath", "GameplayTask.h" },
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "ToolTip", "child task instance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask = { UE4CodeGen_Private::EPropertyClass::Object, "ChildTask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTask, ChildTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(NewProp_ChildTask_MetaData, ARRAY_COUNT(NewProp_ChildTask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceOverlapPolicy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResourceOverlapPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "ResourceOverlapPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UGameplayTask, ResourceOverlapPolicy), Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, METADATA_PARAMS(NewProp_ResourceOverlapPolicy_MetaData, ARRAY_COUNT(NewProp_ResourceOverlapPolicy_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResourceOverlapPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "ToolTip", "This name allows us to find the task later so that we can end it." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstanceName = { UE4CodeGen_Private::EPropertyClass::Name, "InstanceName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTask, InstanceName), METADATA_PARAMS(NewProp_InstanceName_MetaData, ARRAY_COUNT(NewProp_InstanceName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildTask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceOverlapPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceOverlapPolicy_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstanceName,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask, IGameplayTaskOwnerInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTask::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100085u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask, 2821753190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask(Z_Construct_UClass_UGameplayTask, &UGameplayTask::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
