// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_ClaimTaskResource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocalPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocalPointOnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocusActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetImmediateMoveDestination();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetMoveStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_HasPartialPath();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_ClearFocus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_SetFocalPoint();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_SetFocus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_MoveToActor();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_MoveToLocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnPossess();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnUnpossess();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnUsingBlackBoard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_RunBehaviorTree();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_SetMoveBlockDetection();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_UnclaimTaskResource();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_UseBlackboard();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature()
	{
		struct _Script_AIModule_eventAIMoveCompletedSignature_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Byte, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID = { UE4CodeGen_Private::EPropertyClass::Struct, "RequestID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "AIMoveCompletedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventAIMoveCompletedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AAIController_OnPossess = FName(TEXT("OnPossess"));
	void AAIController::OnPossess(APawn* PossessedPawn)
	{
		AIController_eventOnPossess_Parms Parms;
		Parms.PossessedPawn=PossessedPawn;
		ProcessEvent(FindFunctionChecked(NAME_AAIController_OnPossess),&Parms);
	}
	static FName NAME_AAIController_OnUnpossess = FName(TEXT("OnUnpossess"));
	void AAIController::OnUnpossess(APawn* UnpossessedPawn)
	{
		AIController_eventOnUnpossess_Parms Parms;
		Parms.UnpossessedPawn=UnpossessedPawn;
		ProcessEvent(FindFunctionChecked(NAME_AAIController_OnUnpossess),&Parms);
	}
	static FName NAME_AAIController_OnUsingBlackBoard = FName(TEXT("OnUsingBlackBoard"));
	void AAIController::OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset)
	{
		AIController_eventOnUsingBlackBoard_Parms Parms;
		Parms.BlackboardComp=BlackboardComp;
		Parms.BlackboardAsset=BlackboardAsset;
		ProcessEvent(FindFunctionChecked(NAME_AAIController_OnUsingBlackBoard),&Parms);
	}
	void AAIController::StaticRegisterNativesAAIController()
	{
		UClass* Class = AAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimTaskResource", (Native)&AAIController::execClaimTaskResource },
			{ "GetAIPerceptionComponent", (Native)&AAIController::execGetAIPerceptionComponent },
			{ "GetFocalPoint", (Native)&AAIController::execGetFocalPoint },
			{ "GetFocalPointOnActor", (Native)&AAIController::execGetFocalPointOnActor },
			{ "GetFocusActor", (Native)&AAIController::execGetFocusActor },
			{ "GetImmediateMoveDestination", (Native)&AAIController::execGetImmediateMoveDestination },
			{ "GetMoveStatus", (Native)&AAIController::execGetMoveStatus },
			{ "GetPathFollowingComponent", (Native)&AAIController::execGetPathFollowingComponent },
			{ "HasPartialPath", (Native)&AAIController::execHasPartialPath },
			{ "K2_ClearFocus", (Native)&AAIController::execK2_ClearFocus },
			{ "K2_SetFocalPoint", (Native)&AAIController::execK2_SetFocalPoint },
			{ "K2_SetFocus", (Native)&AAIController::execK2_SetFocus },
			{ "MoveToActor", (Native)&AAIController::execMoveToActor },
			{ "MoveToLocation", (Native)&AAIController::execMoveToLocation },
			{ "OnGameplayTaskResourcesClaimed", (Native)&AAIController::execOnGameplayTaskResourcesClaimed },
			{ "RunBehaviorTree", (Native)&AAIController::execRunBehaviorTree },
			{ "SetMoveBlockDetection", (Native)&AAIController::execSetMoveBlockDetection },
			{ "UnclaimTaskResource", (Native)&AAIController::execUnclaimTaskResource },
			{ "UseBlackboard", (Native)&AAIController::execUseBlackboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAIController_ClaimTaskResource()
	{
		struct AIController_eventClaimTaskResource_Parms
		{
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventClaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Tasks" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "ClaimTaskResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIController_eventClaimTaskResource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetAIPerceptionComponent()
	{
		struct AIController_eventGetAIPerceptionComponent_Parms
		{
			UAIPerceptionComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AIController_eventGetAIPerceptionComponent_Parms, ReturnValue), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Perception" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetAIPerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(AIController_eventGetAIPerceptionComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetFocalPoint()
	{
		struct AIController_eventGetFocalPoint_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventGetFocalPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Retrieve the final position that controller should be looking at." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetFocalPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AIController_eventGetFocalPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetFocalPointOnActor()
	{
		struct AIController_eventGetFocalPointOnActor_Parms
		{
			const AActor* Actor;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Actor_MetaData, ARRAY_COUNT(NewProp_Actor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Retrieve the focal point this controller should focus to on given actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetFocalPointOnActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(AIController_eventGetFocalPointOnActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetFocusActor()
	{
		struct AIController_eventGetFocusActor_Parms
		{
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Get the focused actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetFocusActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AIController_eventGetFocusActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetImmediateMoveDestination()
	{
		struct AIController_eventGetImmediateMoveDestination_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventGetImmediateMoveDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Returns position of current path segment's end." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetImmediateMoveDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(AIController_eventGetImmediateMoveDestination_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetMoveStatus()
	{
		struct AIController_eventGetMoveStatus_Parms
		{
			TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Returns status of path following" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetMoveStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AIController_eventGetMoveStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_GetPathFollowingComponent()
	{
		struct AIController_eventGetPathFollowingComponent_Parms
		{
			UPathFollowingComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AIController_eventGetPathFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Returns PathFollowingComponent subobject *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "GetPathFollowingComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AIController_eventGetPathFollowingComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_HasPartialPath()
	{
		struct AIController_eventHasPartialPath_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIController_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventHasPartialPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "HasPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AIController_eventHasPartialPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_K2_ClearFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "DisplayName", "ClearFocus" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Clears Focus, will also clear FocalPoint as a result" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "K2_ClearFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_K2_SetFocalPoint()
	{
		struct AIController_eventK2_SetFocalPoint_Parms
		{
			FVector FP;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FP = { UE4CodeGen_Private::EPropertyClass::Struct, "FP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventK2_SetFocalPoint_Parms, FP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "DisplayName", "SetFocalPoint" },
				{ "Keywords", "focus" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Set the position that controller should be looking at." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "K2_SetFocalPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AIController_eventK2_SetFocalPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_K2_SetFocus()
	{
		struct AIController_eventK2_SetFocus_Parms
		{
			AActor* NewFocus;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFocus = { UE4CodeGen_Private::EPropertyClass::Object, "NewFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventK2_SetFocus_Parms, NewFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFocus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "DisplayName", "SetFocus" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Set Focus for actor, will set FocalPoint as a result." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "K2_SetFocus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIController_eventK2_SetFocus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_MoveToActor()
	{
		struct AIController_eventMoveToActor_Parms
		{
			AActor* Goal;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
			TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((AIController_eventMoveToActor_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((AIController_eventMoveToActor_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((AIController_eventMoveToActor_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((AIController_eventMoveToActor_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Object, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Goal,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "true" },
				{ "CPP_Default_bStopOnOverlap", "true" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Makes AI go toward specified Goal actor (destination will be continuously updated), aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "MoveToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIController_eventMoveToActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_MoveToLocation()
	{
		struct AIController_eventMoveToLocation_Parms
		{
			FVector Dest;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
			TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((AIController_eventMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((AIController_eventMoveToLocation_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bProjectDestinationToNavigation_SetBit = [](void* Obj){ ((AIController_eventMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectDestinationToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectDestinationToNavigation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((AIController_eventMoveToLocation_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((AIController_eventMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dest_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Struct, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Dest_MetaData, ARRAY_COUNT(NewProp_Dest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectDestinationToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "true" },
				{ "CPP_Default_bProjectDestinationToNavigation", "false" },
				{ "CPP_Default_bStopOnOverlap", "true" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Makes AI go toward specified Dest location, aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bProjectDestinationToNavigation - project location on navigation data before using it\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "MoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(AIController_eventMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed()
	{
		struct AIController_eventOnGameplayTaskResourcesClaimed_Parms
		{
			FGameplayResourceSet NewlyClaimed;
			FGameplayResourceSet FreshlyReleased;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased = { UE4CodeGen_Private::EPropertyClass::Struct, "FreshlyReleased", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed = { UE4CodeGen_Private::EPropertyClass::Struct, "NewlyClaimed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FreshlyReleased,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewlyClaimed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "OnGameplayTaskResourcesClaimed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(AIController_eventOnGameplayTaskResourcesClaimed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_OnPossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PossessedPawn = { UE4CodeGen_Private::EPropertyClass::Object, "PossessedPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnPossess_Parms, PossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PossessedPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Event called when PossessedPawn is possessed by this controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "OnPossess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AIController_eventOnPossess_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_OnUnpossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnpossessedPawn = { UE4CodeGen_Private::EPropertyClass::Object, "UnpossessedPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnUnpossess_Parms, UnpossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnpossessedPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Gets triggered after given pawn has been unpossesed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "OnUnpossess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AIController_eventOnUnpossess_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_OnUsingBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_BlackboardComp_MetaData, ARRAY_COUNT(NewProp_BlackboardComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "OnUsingBlackBoard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(AIController_eventOnUsingBlackBoard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_RunBehaviorTree()
	{
		struct AIController_eventRunBehaviorTree_Parms
		{
			UBehaviorTree* BTAsset;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIController_eventRunBehaviorTree_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventRunBehaviorTree_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BTAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventRunBehaviorTree_Parms, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BTAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Starts executing behavior tree." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "RunBehaviorTree", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(AIController_eventRunBehaviorTree_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_SetMoveBlockDetection()
	{
		struct AIController_eventSetMoveBlockDetection_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((AIController_eventSetMoveBlockDetection_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventSetMoveBlockDetection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Updates state of movement block detection." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "SetMoveBlockDetection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIController_eventSetMoveBlockDetection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_UnclaimTaskResource()
	{
		struct AIController_eventUnclaimTaskResource_Parms
		{
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "ResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventUnclaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Tasks" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "UnclaimTaskResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIController_eventUnclaimTaskResource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAIController_UseBlackboard()
	{
		struct AIController_eventUseBlackboard_Parms
		{
			UBlackboardData* BlackboardAsset;
			UBlackboardComponent* BlackboardComponent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIController_eventUseBlackboard_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIController_eventUseBlackboard_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_BlackboardComponent_MetaData, ARRAY_COUNT(NewProp_BlackboardComponent_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardAsset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Makes AI use the specified Blackboard asset & creates a Blackboard Component if one does not already exist.\n@param       BlackboardAsset                 The Blackboard asset to use.\n@param       BlackboardComponent             The Blackboard component that was used or created to work with the passed-in Blackboard Asset.\n@return true if we successfully linked the blackboard asset to the blackboard component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, "UseBlackboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AIController_eventUseBlackboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIController_NoRegister()
	{
		return AAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AController,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAIController_ClaimTaskResource, "ClaimTaskResource" }, // 3466932453
				{ &Z_Construct_UFunction_AAIController_GetAIPerceptionComponent, "GetAIPerceptionComponent" }, // 3032492914
				{ &Z_Construct_UFunction_AAIController_GetFocalPoint, "GetFocalPoint" }, // 1264605327
				{ &Z_Construct_UFunction_AAIController_GetFocalPointOnActor, "GetFocalPointOnActor" }, // 3870756533
				{ &Z_Construct_UFunction_AAIController_GetFocusActor, "GetFocusActor" }, // 624750264
				{ &Z_Construct_UFunction_AAIController_GetImmediateMoveDestination, "GetImmediateMoveDestination" }, // 476286491
				{ &Z_Construct_UFunction_AAIController_GetMoveStatus, "GetMoveStatus" }, // 2074747614
				{ &Z_Construct_UFunction_AAIController_GetPathFollowingComponent, "GetPathFollowingComponent" }, // 1044895342
				{ &Z_Construct_UFunction_AAIController_HasPartialPath, "HasPartialPath" }, // 2185248171
				{ &Z_Construct_UFunction_AAIController_K2_ClearFocus, "K2_ClearFocus" }, // 1630999324
				{ &Z_Construct_UFunction_AAIController_K2_SetFocalPoint, "K2_SetFocalPoint" }, // 3670386654
				{ &Z_Construct_UFunction_AAIController_K2_SetFocus, "K2_SetFocus" }, // 218318990
				{ &Z_Construct_UFunction_AAIController_MoveToActor, "MoveToActor" }, // 3732756360
				{ &Z_Construct_UFunction_AAIController_MoveToLocation, "MoveToLocation" }, // 3667052406
				{ &Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed, "OnGameplayTaskResourcesClaimed" }, // 574678530
				{ &Z_Construct_UFunction_AAIController_OnPossess, "OnPossess" }, // 2773794044
				{ &Z_Construct_UFunction_AAIController_OnUnpossess, "OnUnpossess" }, // 1019803830
				{ &Z_Construct_UFunction_AAIController_OnUsingBlackBoard, "OnUsingBlackBoard" }, // 3044026076
				{ &Z_Construct_UFunction_AAIController_RunBehaviorTree, "RunBehaviorTree" }, // 476961841
				{ &Z_Construct_UFunction_AAIController_SetMoveBlockDetection, "SetMoveBlockDetection" }, // 1633636194
				{ &Z_Construct_UFunction_AAIController_UnclaimTaskResource, "UnclaimTaskResource" }, // 176443943
				{ &Z_Construct_UFunction_AAIController_UseBlackboard, "UseBlackboard" }, // 4231837919
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "AI" },
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AIController.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "AIController is the base class of controllers for AI-controlled Pawns.\n\nControllers are non-physical actors that can be attached to a pawn to control its actions.\nAIControllers manage the artificial intelligence for the pawns they control.\nIn networked games, they only exist on the server.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveMoveCompleted_MetaData[] = {
				{ "DisplayName", "MoveCompleted" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Blueprint notification that we've completed the current movement request" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceiveMoveCompleted = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ReceiveMoveCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AAIController, ReceiveMoveCompleted), Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature, METADATA_PARAMS(NewProp_ReceiveMoveCompleted_MetaData, ARRAY_COUNT(NewProp_ReceiveMoveCompleted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultNavigationFilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000005, 1, nullptr, STRUCT_OFFSET(AAIController, DefaultNavigationFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultNavigationFilterClass_MetaData, ARRAY_COUNT(NewProp_DefaultNavigationFilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTasksComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedGameplayTasksComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CachedGameplayTasksComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AAIController, CachedGameplayTasksComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(NewProp_CachedGameplayTasksComponent_MetaData, ARRAY_COUNT(NewProp_CachedGameplayTasksComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "AI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "blackboard" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard = { UE4CodeGen_Private::EPropertyClass::Object, "Blackboard", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008001c, 1, nullptr, STRUCT_OFFSET(AAIController, Blackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_Blackboard_MetaData, ARRAY_COUNT(NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionsComp_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "AI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionsComp = { UE4CodeGen_Private::EPropertyClass::Object, "ActionsComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x004000000008001c, 1, nullptr, STRUCT_OFFSET(AAIController, ActionsComp), Z_Construct_UClass_UPawnActionsComponent_NoRegister, METADATA_PARAMS(NewProp_ActionsComp_MetaData, ARRAY_COUNT(NewProp_ActionsComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
				{ "Category", "AI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AAIController, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(NewProp_PerceptionComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComponent_MetaData[] = {
				{ "Category", "AI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Component responsible for behaviors." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BrainComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(AAIController, BrainComponent), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(NewProp_BrainComponent_MetaData, ARRAY_COUNT(NewProp_BrainComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComponent_MetaData[] = {
				{ "Category", "AI" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Component used for moving along a path." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PathFollowingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AAIController, PathFollowingComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(NewProp_PathFollowingComponent_MetaData, ARRAY_COUNT(NewProp_PathFollowingComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetControlRotationFromPawnOrientation_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Copy Pawn rotation to ControlRotation, if there is no focus point." },
			};
#endif
			auto NewProp_bSetControlRotationFromPawnOrientation_SetBit = [](void* Obj){ ((AAIController*)Obj)->bSetControlRotationFromPawnOrientation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetControlRotationFromPawnOrientation = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetControlRotationFromPawnOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetControlRotationFromPawnOrientation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSetControlRotationFromPawnOrientation_MetaData, ARRAY_COUNT(NewProp_bSetControlRotationFromPawnOrientation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsPlayerState_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Specifies if this AI wants its own PlayerState." },
			};
#endif
			auto NewProp_bWantsPlayerState_SetBit = [](void* Obj){ ((AAIController*)Obj)->bWantsPlayerState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsPlayerState = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWantsPlayerState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWantsPlayerState_MetaData, ARRAY_COUNT(NewProp_bWantsPlayerState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Is strafing allowed during movement?" },
			};
#endif
			auto NewProp_bAllowStrafe_SetBit = [](void* Obj){ ((AAIController*)Obj)->bAllowStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStrafe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStrafe_MetaData, ARRAY_COUNT(NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipExtraLOSChecks_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "Skip extra line of sight traces to extremities of target being checked." },
			};
#endif
			auto NewProp_bSkipExtraLOSChecks_SetBit = [](void* Obj){ ((AAIController*)Obj)->bSkipExtraLOSChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipExtraLOSChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipExtraLOSChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipExtraLOSChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipExtraLOSChecks_MetaData, ARRAY_COUNT(NewProp_bSkipExtraLOSChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLOSflag_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "used for alternating LineOfSight traces" },
			};
#endif
			auto NewProp_bLOSflag_SetBit = [](void* Obj){ ((AAIController*)Obj)->bLOSflag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLOSflag = { UE4CodeGen_Private::EPropertyClass::Bool, "bLOSflag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLOSflag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLOSflag_MetaData, ARRAY_COUNT(NewProp_bLOSflag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopAILogicOnUnposses_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/AIController.h" },
				{ "ToolTip", "By default AI's logic gets stopped when controlled Pawn is unpossesed. Setting this flag to false\n    will make AI logic persist past loosing controll over a pawn" },
			};
#endif
			auto NewProp_bStopAILogicOnUnposses_SetBit = [](void* Obj){ ((AAIController*)Obj)->bStopAILogicOnUnposses = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAILogicOnUnposses = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopAILogicOnUnposses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAIController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopAILogicOnUnposses_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStopAILogicOnUnposses_MetaData, ARRAY_COUNT(NewProp_bStopAILogicOnUnposses_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceiveMoveCompleted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultNavigationFilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedGameplayTasksComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blackboard,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionsComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PerceptionComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BrainComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathFollowingComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetControlRotationFromPawnOrientation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWantsPlayerState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipExtraLOSChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLOSflag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopAILogicOnUnposses,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IAIPerceptionListenerInterface), false },
				{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGameplayTaskOwnerInterface), false },
				{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGenericTeamAgentInterface), false },
				{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IVisualLoggerDebugSnapshotInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AAIController, 3673895355);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIController(Z_Construct_UClass_AAIController, &AAIController::StaticClass, TEXT("/Script/AIModule"), TEXT("AAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
