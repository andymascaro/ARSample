// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId();
// End Cross Module References
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbort = FName(TEXT("ReceiveAbort"));
	void UBTTask_BlueprintBase::ReceiveAbort(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveAbort_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbort),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbortAI = FName(TEXT("ReceiveAbortAI"));
	void UBTTask_BlueprintBase::ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveAbortAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbortAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecute = FName(TEXT("ReceiveExecute"));
	void UBTTask_BlueprintBase::ReceiveExecute(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveExecute_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecute),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecuteAI = FName(TEXT("ReceiveExecuteAI"));
	void UBTTask_BlueprintBase::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveExecuteAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecuteAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTTask_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTTask_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTTask_BlueprintBase::StaticRegisterNativesUBTTask_BlueprintBase()
	{
		UClass* Class = UBTTask_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAbort", (Native)&UBTTask_BlueprintBase::execFinishAbort },
			{ "FinishExecute", (Native)&UBTTask_BlueprintBase::execFinishExecute },
			{ "IsTaskAborting", (Native)&UBTTask_BlueprintBase::execIsTaskAborting },
			{ "IsTaskExecuting", (Native)&UBTTask_BlueprintBase::execIsTaskExecuting },
			{ "SetFinishOnMessage", (Native)&UBTTask_BlueprintBase::execSetFinishOnMessage },
			{ "SetFinishOnMessageWithId", (Native)&UBTTask_BlueprintBase::execSetFinishOnMessageWithId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "aborts task execution" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "FinishAbort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute()
	{
		struct BTTask_BlueprintBase_eventFinishExecute_Parms
		{
			bool bSuccess;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSuccess_SetBit = [](void* Obj){ ((BTTask_BlueprintBase_eventFinishExecute_Parms*)Obj)->bSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventFinishExecute_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuccess,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "finishes task execution with Success or Fail result" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "FinishExecute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventFinishExecute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting()
	{
		struct BTTask_BlueprintBase_eventIsTaskAborting_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTTask_BlueprintBase_eventIsTaskAborting_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventIsTaskAborting_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "check if task is currently being aborted" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "IsTaskAborting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTTask_BlueprintBase_eventIsTaskAborting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting()
	{
		struct BTTask_BlueprintBase_eventIsTaskExecuting_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTTask_BlueprintBase_eventIsTaskExecuting_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventIsTaskExecuting_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "check if task is currently being executed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "IsTaskExecuting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTTask_BlueprintBase_eventIsTaskExecuting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbort_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "if blueprint graph contains this event, task will stay active until FinishAbort is called\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveAbort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveAbort_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveAbort\n    @see ReceiveAbort for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveAbortAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveAbortAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecute_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "entry point, task will stay active until FinishExecute is called.\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveExecute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveExecute_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveExecute\n     @see ReceiveExecute for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveExecuteAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of tick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveTickAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveTickAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage()
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessage_Parms
		{
			FName MessageName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageName = { UE4CodeGen_Private::EPropertyClass::Name, "MessageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessage_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "SetFinishOnMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventSetFinishOnMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId()
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms
		{
			FName MessageName;
			int32 RequestID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestID = { UE4CodeGen_Private::EPropertyClass::Int, "RequestID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageName = { UE4CodeGen_Private::EPropertyClass::Name, "MessageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "CPP_Default_RequestID", "-1" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message with indicated ID" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "SetFinishOnMessageWithId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister()
	{
		return UBTTask_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort, "FinishAbort" }, // 1398548446
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute, "FinishExecute" }, // 3910262960
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting, "IsTaskAborting" }, // 4163495989
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting, "IsTaskExecuting" }, // 2305375822
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort, "ReceiveAbort" }, // 2311730221
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI, "ReceiveAbortAI" }, // 3658761897
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute, "ReceiveExecute" }, // 2624120782
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI, "ReceiveExecuteAI" }, // 4243530398
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 2518935005
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 1001635167
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage, "SetFinishOnMessage" }, // 642242803
				{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId, "SetFinishOnMessageWithId" }, // 97810177
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Base class for blueprint based task nodes. Do NOT use it for creating native c++ classes!\n\nWhen task receives Abort event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Execute, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsTaskExecuting() when in doubt." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "show detailed information about properties" },
			};
#endif
			auto NewProp_bShowPropertyDetails_SetBit = [](void* Obj){ ((UBTTask_BlueprintBase*)Obj)->bShowPropertyDetails = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowPropertyDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowPropertyDetails_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowPropertyDetails_MetaData, ARRAY_COUNT(NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorOwner_MetaData, ARRAY_COUNT(NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
				{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner = { UE4CodeGen_Private::EPropertyClass::Object, "AIOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_AIOwner_MetaData, ARRAY_COUNT(NewProp_AIOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowPropertyDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_BlueprintBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UBTTask_BlueprintBase, 296585807);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_BlueprintBase(Z_Construct_UClass_UBTTask_BlueprintBase, &UBTTask_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
