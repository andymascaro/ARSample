// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/AITask_MoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_MoveTo() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature()
	{
		struct _Script_AIModule_eventMoveTaskCompletedSignature_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> Result;
			AAIController* AIController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController = { UE4CodeGen_Private::EPropertyClass::Object, "AIController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Byte, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "MoveTaskCompletedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventMoveTaskCompletedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UAITask_MoveTo::StaticRegisterNativesUAITask_MoveTo()
	{
		UClass* Class = UAITask_MoveTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIMoveTo", (Native)&UAITask_MoveTo::execAIMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo()
	{
		struct AITask_MoveTo_eventAIMoveTo_Parms
		{
			AAIController* Controller;
			FVector GoalLocation;
			AActor* GoalActor;
			float AcceptanceRadius;
			TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap;
			TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath;
			bool bUsePathfinding;
			bool bLockAILogic;
			bool bUseContinuosGoalTracking;
			UAITask_MoveTo* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, ReturnValue), Z_Construct_UClass_UAITask_MoveTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseContinuosGoalTracking_SetBit = [](void* Obj){ ((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUseContinuosGoalTracking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContinuosGoalTracking = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseContinuosGoalTracking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseContinuosGoalTracking_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLockAILogic_SetBit = [](void* Obj){ ((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bLockAILogic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockAILogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockAILogic_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AcceptPartialPath = { UE4CodeGen_Private::EPropertyClass::Byte, "AcceptPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptPartialPath), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Byte, "StopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, StopOnOverlap), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor = { UE4CodeGen_Private::EPropertyClass::Object, "GoalActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseContinuosGoalTracking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockAILogic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "AcceptanceRadius,StopOnOverlap,AcceptPartialPath,bUsePathfinding,bUseContinuosGoalTracking" },
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "Category", "AI|Tasks" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_AcceptPartialPath", "Default" },
				{ "CPP_Default_bLockAILogic", "true" },
				{ "CPP_Default_bUseContinuosGoalTracking", "false" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "CPP_Default_StopOnOverlap", "Default" },
				{ "DefaultToSelf", "Controller" },
				{ "DisplayName", "Move To Location or Actor" },
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_MoveTo, "AIMoveTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AITask_MoveTo_eventAIMoveTo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister()
	{
		return UAITask_MoveTo::StaticClass();
	}
	UClass* Z_Construct_UClass_UAITask_MoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAITask,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo, "AIMoveTo" }, // 4183675778
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Tasks/AITask_MoveTo.h" },
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRequest_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
				{ "ToolTip", "parameters of move request" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveRequest = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveRequest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAITask_MoveTo, MoveRequest), Z_Construct_UScriptStruct_FAIMoveRequest, METADATA_PARAMS(NewProp_MoveRequest_MetaData, ARRAY_COUNT(NewProp_MoveRequest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoveFinished_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMoveFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UAITask_MoveTo, OnMoveFinished), Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnMoveFinished_MetaData, ARRAY_COUNT(NewProp_OnMoveFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRequestFailed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UAITask_MoveTo, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnRequestFailed_MetaData, ARRAY_COUNT(NewProp_OnRequestFailed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveRequest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMoveFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnRequestFailed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAITask_MoveTo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAITask_MoveTo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900084u,
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
	IMPLEMENT_CLASS(UAITask_MoveTo, 1299712303);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask_MoveTo(Z_Construct_UClass_UAITask_MoveTo, &UAITask_MoveTo::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
