// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/GameplayTask_TimeLimitedExecution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_TimeLimitedExecution() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, "TaskFinishDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UGameplayTask_TimeLimitedExecution::StaticRegisterNativesUGameplayTask_TimeLimitedExecution()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister()
	{
		return UGameplayTask_TimeLimitedExecution::StaticClass();
	}
	UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTask,
				(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, "TaskFinishDelegate__DelegateSignature" }, // 3513290793
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/GameplayTask_TimeLimitedExecution.h" },
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Adds time limit for running a child task\n- child task needs to be created with UGameplayTask_TimeLimitedExecution passed as TaskOwner\n- activations are tied together and when either UGameplayTask_TimeLimitedExecution or child task is activated, other one starts as well\n- OnFinished and OnTimeExpired are mutually exclusive" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimeExpired_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
				{ "ToolTip", "called when time runs out" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeExpired = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimeExpired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnTimeExpired), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnTimeExpired_MetaData, ARRAY_COUNT(NewProp_OnTimeExpired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
				{ "ToolTip", "called when child task finishes execution before time runs out" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnFinished), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFinished_MetaData, ARRAY_COUNT(NewProp_OnFinished_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnTimeExpired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFinished,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGameplayTask_TimeLimitedExecution>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGameplayTask_TimeLimitedExecution::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880084u,
				IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
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
	IMPLEMENT_CLASS(UGameplayTask_TimeLimitedExecution, 1890900083);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_TimeLimitedExecution(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, &UGameplayTask_TimeLimitedExecution::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_TimeLimitedExecution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_TimeLimitedExecution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
