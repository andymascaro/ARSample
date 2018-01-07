// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/GameplayTask_WaitDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, "TaskDelayDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay()
	{
		UClass* Class = UGameplayTask_WaitDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskWaitDelay", (Native)&UGameplayTask_WaitDelay::execTaskWaitDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay()
	{
		struct GameplayTask_WaitDelay_eventTaskWaitDelay_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			float Time;
			uint8 Priority;
			UGameplayTask_WaitDelay* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000082, 1, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Priority), nullptr, METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "TaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskOwner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "TaskOwner, Priority" },
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "Category", "GameplayTasks" },
				{ "CPP_Default_Priority", "192" },
				{ "DefaultToSelf", "TaskOwner" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
				{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, "TaskWaitDelay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister()
	{
		return UGameplayTask_WaitDelay::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTask,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, "TaskDelayDelegate__DelegateSignature" }, // 2176950250
				{ &Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay, "TaskWaitDelay" }, // 43990825
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/GameplayTask_WaitDelay.h" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFinish", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_WaitDelay, OnFinish), Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFinish_MetaData, ARRAY_COUNT(NewProp_OnFinish_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFinish,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTask_WaitDelay>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTask_WaitDelay::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880084u,
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
	IMPLEMENT_CLASS(UGameplayTask_WaitDelay, 3372722472);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_WaitDelay(Z_Construct_UClass_UGameplayTask_WaitDelay, &UGameplayTask_WaitDelay::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_WaitDelay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_WaitDelay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
