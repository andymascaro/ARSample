// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI();
// End Cross Module References
	static FName NAME_UBTDecorator_BlueprintBase_PerformConditionCheck = FName(TEXT("PerformConditionCheck"));
	bool UBTDecorator_BlueprintBase::PerformConditionCheck(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_PerformConditionCheck),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI = FName(TEXT("PerformConditionCheckAI"));
	bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_PerformConditionCheckAI),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish = FName(TEXT("ReceiveExecutionFinish"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(AActor* OwnerActor, EBTNodeResult::Type NodeResult)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinish),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI = FName(TEXT("ReceiveExecutionFinishAI"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, EBTNodeResult::Type NodeResult)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.NodeResult=NodeResult;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart = FName(TEXT("ReceiveExecutionStart"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionStart(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStart),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI = FName(TEXT("ReceiveExecutionStartAI"));
	void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated = FName(TEXT("ReceiveObserverActivated"));
	void UBTDecorator_BlueprintBase::ReceiveObserverActivated(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivated),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI = FName(TEXT("ReceiveObserverActivatedAI"));
	void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated = FName(TEXT("ReceiveObserverDeactivated"));
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(AActor* OwnerActor)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI = FName(TEXT("ReceiveObserverDeactivatedAI"));
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTDecorator_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTDecorator_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTDecorator_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTDecorator_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTDecorator_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTDecorator_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTDecorator_BlueprintBase::StaticRegisterNativesUBTDecorator_BlueprintBase()
	{
		UClass* Class = UBTDecorator_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDecoratorExecutionActive", (Native)&UBTDecorator_BlueprintBase::execIsDecoratorExecutionActive },
			{ "IsDecoratorObserverActive", (Native)&UBTDecorator_BlueprintBase::execIsDecoratorObserverActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive()
	{
		struct BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "check if decorator is part of currently active branch" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "IsDecoratorExecutionActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorExecutionActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive()
	{
		struct BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|BehaviorTree" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "check if decorator's observer is currently active" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "IsDecoratorObserverActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTDecorator_BlueprintBase_eventIsDecoratorObserverActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "called when testing if underlying node can be executed, must call FinishConditionCheck\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "PerformConditionCheck", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheck_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveConditionCheck\n    @see ReceiveConditionCheck for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "PerformConditionCheckAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventPerformConditionCheckAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult = { UE4CodeGen_Private::EPropertyClass::Byte, "NodeResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "called when execution of underlying node is finished\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveExecutionFinish", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeResult = { UE4CodeGen_Private::EPropertyClass::Byte, "NodeResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, NodeResult), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NodeResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveExecutionFinish\n    @see ReceiveExecutionFinish for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveExecutionFinishAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionFinishAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "called on execution of underlying node\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveExecutionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveExecutionStart\n    @see ReceiveExecutionStart for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveExecutionStartAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveExecutionStartAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "called when observer is activated (flow controller)\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveObserverActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverActivated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveObserverActivated\n    @see ReceiveObserverActivated for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveObserverActivatedAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverActivatedAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "called when observer is deactivated (flow controller)\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveObserverDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverDeactivated_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveObserverDeactivated\n    @see ReceiveObserverDeactivated for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveObserverDeactivatedAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveObserverDeactivatedAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Alternative AI version of ReceiveTick\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTDecorator_BlueprintBase, "ReceiveTickAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTDecorator_BlueprintBase_eventReceiveTickAI_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase_NoRegister()
	{
		return UBTDecorator_BlueprintBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorExecutionActive, "IsDecoratorExecutionActive" }, // 3230988246
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_IsDecoratorObserverActive, "IsDecoratorObserverActive" }, // 3444220100
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheck, "PerformConditionCheck" }, // 4264149376
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_PerformConditionCheckAI, "PerformConditionCheckAI" }, // 1533443292
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinish, "ReceiveExecutionFinish" }, // 680636017
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI, "ReceiveExecutionFinishAI" }, // 3114417844
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStart, "ReceiveExecutionStart" }, // 1910660200
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveExecutionStartAI, "ReceiveExecutionStartAI" }, // 1710138383
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivated, "ReceiveObserverActivated" }, // 2021737745
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI, "ReceiveObserverActivatedAI" }, // 1527072209
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivated, "ReceiveObserverDeactivated" }, // 3929071283
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI, "ReceiveObserverDeactivatedAI" }, // 946772833
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 463744001
				{ &Z_Construct_UFunction_UBTDecorator_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 25368563
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "Base class for blueprint based decorator nodes. Do NOT use it for creating native c++ classes!\n\nUnlike task and services, decorator have two execution chains:\n ExecutionStart-ExecutionFinish and ObserverActivated-ObserverDeactivated\nwhich makes automatic latent action cleanup impossible. Keep in mind, that\nyou HAVE TO verify is given chain is still active after resuming from any\nlatent action (like Delay, Timelines, etc).\n\nHelper functions:\n- IsDecoratorExecutionActive (true after ExecutionStart, until ExecutionFinish)\n- IsDecoratorObserverActive (true after ObserverActivated, until ObserverDeactivated)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsObservingBB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "gets set to true if decorator declared BB keys it can potentially observe" },
			};
#endif
			auto NewProp_bIsObservingBB_SetBit = [](void* Obj){ ((UBTDecorator_BlueprintBase*)Obj)->bIsObservingBB = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObservingBB = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsObservingBB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsObservingBB_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsObservingBB_MetaData, ARRAY_COUNT(NewProp_bIsObservingBB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData[] = {
				{ "Category", "FlowControl" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Applies only if Decorator has any FBlackboardKeySelector property and if decorator is\n    set to abort BT flow. Is set to true ReceiveConditionCheck will be called only on changes\n   to observed BB keys. If false or no BB keys observed ReceiveConditionCheck will be called every tick" },
			};
#endif
			auto NewProp_bCheckConditionOnlyBlackBoardChanges_SetBit = [](void* Obj){ ((UBTDecorator_BlueprintBase*)Obj)->bCheckConditionOnlyBlackBoardChanges = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckConditionOnlyBlackBoardChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "bCheckConditionOnlyBlackBoardChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCheckConditionOnlyBlackBoardChanges_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData, ARRAY_COUNT(NewProp_bCheckConditionOnlyBlackBoardChanges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[] = {
				{ "Category", "Description" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "show detailed information about properties" },
			};
#endif
			auto NewProp_bShowPropertyDetails_SetBit = [](void* Obj){ ((UBTDecorator_BlueprintBase*)Obj)->bShowPropertyDetails = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowPropertyDetails", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_BlueprintBase), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowPropertyDetails_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowPropertyDetails_MetaData, ARRAY_COUNT(NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedKeyNames_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "blackboard key names that should be observed" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObservedKeyNames = { UE4CodeGen_Private::EPropertyClass::Array, "ObservedKeyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_BlueprintBase, ObservedKeyNames), METADATA_PARAMS(NewProp_ObservedKeyNames_MetaData, ARRAY_COUNT(NewProp_ObservedKeyNames_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObservedKeyNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ObservedKeyNames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ActorOwner_MetaData, ARRAY_COUNT(NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h" },
				{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner = { UE4CodeGen_Private::EPropertyClass::Object, "AIOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTDecorator_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_AIOwner_MetaData, ARRAY_COUNT(NewProp_AIOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsObservingBB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCheckConditionOnlyBlackBoardChanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowPropertyDetails,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObservedKeyNames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ObservedKeyNames_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorOwner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecorator_BlueprintBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecorator_BlueprintBase::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecorator_BlueprintBase, 3406844815);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_BlueprintBase(Z_Construct_UClass_UBTDecorator_BlueprintBase, &UBTDecorator_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
