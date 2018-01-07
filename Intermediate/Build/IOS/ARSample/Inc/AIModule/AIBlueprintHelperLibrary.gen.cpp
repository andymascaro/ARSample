// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Blueprint/AIBlueprintHelperLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueprintHelperLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation();
// End Cross Module References
	void UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary()
	{
		UClass* Class = UAIBlueprintHelperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMoveToProxyObject", (Native)&UAIBlueprintHelperLibrary::execCreateMoveToProxyObject },
			{ "GetAIController", (Native)&UAIBlueprintHelperLibrary::execGetAIController },
			{ "GetBlackboard", (Native)&UAIBlueprintHelperLibrary::execGetBlackboard },
			{ "GetCurrentPath", (Native)&UAIBlueprintHelperLibrary::execGetCurrentPath },
			{ "IsValidAIDirection", (Native)&UAIBlueprintHelperLibrary::execIsValidAIDirection },
			{ "IsValidAILocation", (Native)&UAIBlueprintHelperLibrary::execIsValidAILocation },
			{ "IsValidAIRotation", (Native)&UAIBlueprintHelperLibrary::execIsValidAIRotation },
			{ "LockAIResourcesWithAnimation", (Native)&UAIBlueprintHelperLibrary::execLockAIResourcesWithAnimation },
			{ "SendAIMessage", (Native)&UAIBlueprintHelperLibrary::execSendAIMessage },
			{ "SpawnAIFromClass", (Native)&UAIBlueprintHelperLibrary::execSpawnAIFromClass },
			{ "UnlockAIResourcesWithAnimation", (Native)&UAIBlueprintHelperLibrary::execUnlockAIResourcesWithAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject()
	{
		struct AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			FVector Destination;
			AActor* TargetActor;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			UAIAsyncTaskBlueprintProxy* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, ReturnValue), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination = { UE4CodeGen_Private::EPropertyClass::Struct, "Destination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Destination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintInternalUseOnly", "TRUE" },
				{ "CPP_Default_AcceptanceRadius", "5.000000" },
				{ "CPP_Default_bStopOnOverlap", "false" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "CreateMoveToProxyObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController()
	{
		struct AIBlueprintHelperLibrary_eventGetAIController_Parms
		{
			AActor* ControlledActor;
			AAIController* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledActor = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlledActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "DefaultToSelf", "ControlledObject" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "ToolTip", "The way it works exactly is if the actor passed in is a pawn, then the function retrieves\n    pawn's controller cast to AIController. Otherwise the function returns actor cast to AIController." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetAIController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetAIController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard()
	{
		struct AIBlueprintHelperLibrary_eventGetBlackboard_Parms
		{
			AActor* Target;
			UBlackboardComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "DefaultToSelf", "Target" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetBlackboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetBlackboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath()
	{
		struct AIBlueprintHelperLibrary_eventGetCurrentPath_Parms
		{
			AController* Controller;
			UNavigationPath* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "ToolTip", "Returns a copy of navigation path given controller is currently using.\n    The result being a copy means you won't be able to influence agent's pathfollowing\n    by manipulating received path" },
				{ "UnsafeDuringActorConstruction", "true" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetCurrentPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection()
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms
		{
			FVector DirectionVector;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms, DirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DirectionVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAIDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation()
	{
		struct AIBlueprintHelperLibrary_eventIsValidAILocation_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventIsValidAILocation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAILocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation()
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms
		{
			FRotator Rotation;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAIRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation()
	{
		struct AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bLockMovement;
			bool LockAILogic;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_LockAILogic_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->LockAILogic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockAILogic = { UE4CodeGen_Private::EPropertyClass::Bool, "LockAILogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LockAILogic_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bLockMovement_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->bLockMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLockMovement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockAILogic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLockMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "DefaultToSelf", "AnimInstance" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "ToolTip", "locks indicated AI resources of animated pawn" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "LockAIResourcesWithAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022405, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage()
	{
		struct AIBlueprintHelperLibrary_eventSendAIMessage_Parms
		{
			APawn* Target;
			FName Message;
			UObject* MessageSource;
			bool bSuccess;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSuccess_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventSendAIMessage_Parms*)Obj)->bSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageSource = { UE4CodeGen_Private::EPropertyClass::Object, "MessageSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, MessageSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Name, "Message", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MessageSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Message,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Target,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "CPP_Default_bSuccess", "true" },
				{ "DefaultToSelf", "MessageSource" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SendAIMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass()
	{
		struct AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<APawn>  PawnClass;
			UBehaviorTree* BehaviorTree;
			FVector Location;
			FRotator Rotation;
			bool bNoCollisionFail;
			APawn* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNoCollisionFail_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms*)Obj)->bNoCollisionFail = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoCollisionFail = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoCollisionFail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoCollisionFail_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "PawnClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoCollisionFail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorTree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "CPP_Default_bNoCollisionFail", "false" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "UnsafeDuringActorConstruction", "true" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SpawnAIFromClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation()
	{
		struct AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bUnlockMovement;
			bool UnlockAILogic;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_UnlockAILogic_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->UnlockAILogic = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlockAILogic = { UE4CodeGen_Private::EPropertyClass::Bool, "UnlockAILogic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UnlockAILogic_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUnlockMovement_SetBit = [](void* Obj){ ((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->bUnlockMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bUnlockMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUnlockMovement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UnlockAILogic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUnlockMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstance,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Animation" },
				{ "DefaultToSelf", "AnimInstance" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
				{ "ToolTip", "unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "UnlockAIResourcesWithAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022405, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister()
	{
		return UAIBlueprintHelperLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject, "CreateMoveToProxyObject" }, // 324803772
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController, "GetAIController" }, // 373333084
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard, "GetBlackboard" }, // 2444686016
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath, "GetCurrentPath" }, // 2411922041
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection, "IsValidAIDirection" }, // 1154578366
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation, "IsValidAILocation" }, // 3262224518
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation, "IsValidAIRotation" }, // 868388590
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation, "LockAIResourcesWithAnimation" }, // 1659449354
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage, "SendAIMessage" }, // 2933799087
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass, "SpawnAIFromClass" }, // 717994438
				{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation, "UnlockAIResourcesWithAnimation" }, // 33382651
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Blueprint/AIBlueprintHelperLibrary.h" },
				{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAIBlueprintHelperLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAIBlueprintHelperLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UAIBlueprintHelperLibrary, 2716138554);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary(Z_Construct_UClass_UAIBlueprintHelperLibrary, &UAIBlueprintHelperLibrary::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIBlueprintHelperLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBlueprintHelperLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
