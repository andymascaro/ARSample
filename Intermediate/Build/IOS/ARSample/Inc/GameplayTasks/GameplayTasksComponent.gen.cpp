// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameplayTasksComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature()
	{
		struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
		{
			FGameplayResourceSet NewlyClaimed;
			FGameplayResourceSet FreshlyReleased;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased = { UE4CodeGen_Private::EPropertyClass::Struct, "FreshlyReleased", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed = { UE4CodeGen_Private::EPropertyClass::Struct, "NewlyClaimed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreshlyReleased,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewlyClaimed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, "OnClaimedResourcesChangeSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGameplayTaskRunResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskRunResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTaskRunResult(EGameplayTaskRunResult_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("EGameplayTaskRunResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_CRC() { return 1833582364U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTaskRunResult"), 0, Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTaskRunResult::Error", (int64)EGameplayTaskRunResult::Error },
				{ "EGameplayTaskRunResult::Failed", (int64)EGameplayTaskRunResult::Failed },
				{ "EGameplayTaskRunResult::Success_Paused", (int64)EGameplayTaskRunResult::Success_Paused },
				{ "EGameplayTaskRunResult::Success_Active", (int64)EGameplayTaskRunResult::Success_Active },
				{ "EGameplayTaskRunResult::Success_Finished", (int64)EGameplayTaskRunResult::Success_Finished },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Error.ToolTip", "When tried running a null-task" },
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "Success_Active.ToolTip", "Successfully activated" },
				{ "Success_Finished.ToolTip", "Successfully activated, but finished instantly" },
				{ "Success_Paused.ToolTip", "Successfully registered for running, but currently paused due to higher priority tasks running" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTaskRunResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayTaskRunResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent()
	{
		UClass* Class = UGameplayTasksComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_RunGameplayTask", (Native)&UGameplayTasksComponent::execK2_RunGameplayTask },
			{ "OnRep_SimulatedTasks", (Native)&UGameplayTasksComponent::execOnRep_SimulatedTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask()
	{
		struct GameplayTasksComponent_eventK2_RunGameplayTask_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			UGameplayTask* Task;
			uint8 Priority;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalRequiredResources;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalClaimedResources;
			EGameplayTaskRunResult ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, ReturnValue), Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalClaimedResources = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalClaimedResources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalClaimedResources), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AdditionalClaimedResources_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "AdditionalClaimedResources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalRequiredResources = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalRequiredResources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalRequiredResources), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AdditionalRequiredResources_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "AdditionalRequiredResources", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Priority), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task = { UE4CodeGen_Private::EPropertyClass::Object, "Task", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Task), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "TaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalClaimedResources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalClaimedResources_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalRequiredResources,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdditionalRequiredResources_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Task,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "AdditionalRequiredResources, AdditionalClaimedResources" },
				{ "AutoCreateRefTerm", "AdditionalRequiredResources, AdditionalClaimedResources" },
				{ "Category", "Gameplay Tasks" },
				{ "DisplayName", "Run Gameplay Task" },
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "ToolTip", "END IGameplayTaskOwnerInterface" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, "K2_RunGameplayTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameplayTasksComponent_eventK2_RunGameplayTask_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, "OnRep_SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister()
	{
		return UGameplayTasksComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTasksComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask, "K2_RunGameplayTask" }, // 2933281864
				{ &Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks, "OnRep_SimulatedTasks" }, // 3634065095
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "GameplayTasks" },
				{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
				{ "IncludePath", "GameplayTasksComponent.h" },
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "The core ActorComponent for interfacing with the GameplayAbilities System" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClaimedResourcesChange_MetaData[] = {
				{ "Category", "Gameplay Tasks" },
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClaimedResourcesChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClaimedResourcesChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080004, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, OnClaimedResourcesChange), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnClaimedResourcesChange_MetaData, ARRAY_COUNT(NewProp_OnClaimedResourcesChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnownTasks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "ToolTip", "All known tasks (processed by this component) referenced for GC" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KnownTasks = { UE4CodeGen_Private::EPropertyClass::Array, "KnownTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, KnownTasks), METADATA_PARAMS(NewProp_KnownTasks_MetaData, ARRAY_COUNT(NewProp_KnownTasks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KnownTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "KnownTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickingTasks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "ToolTip", "Array of currently active UGameplayTask that require ticking" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TickingTasks = { UE4CodeGen_Private::EPropertyClass::Array, "TickingTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TickingTasks), METADATA_PARAMS(NewProp_TickingTasks_MetaData, ARRAY_COUNT(NewProp_TickingTasks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickingTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TickingTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskPriorityQueue_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskPriorityQueue = { UE4CodeGen_Private::EPropertyClass::Array, "TaskPriorityQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TaskPriorityQueue), METADATA_PARAMS(NewProp_TaskPriorityQueue_MetaData, ARRAY_COUNT(NewProp_TaskPriorityQueue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskPriorityQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TaskPriorityQueue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedTasks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "ToolTip", "Tasks that run on simulated proxies" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedTasks = { UE4CodeGen_Private::EPropertyClass::Array, "SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000020, 1, "OnRep_SimulatedTasks", STRUCT_OFFSET(UGameplayTasksComponent, SimulatedTasks), METADATA_PARAMS(NewProp_SimulatedTasks_MetaData, ARRAY_COUNT(NewProp_SimulatedTasks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulatedTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnClaimedResourcesChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KnownTasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KnownTasks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickingTasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickingTasks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskPriorityQueue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskPriorityQueue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulatedTasks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SimulatedTasks_Inner,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IGameplayTaskOwnerInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTasksComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTasksComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTasksComponent, 841167141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTasksComponent(Z_Construct_UClass_UGameplayTasksComponent, &UGameplayTasksComponent::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTasksComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTasksComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
