// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerPitchInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerRollInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerYawInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddMovementInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ConsumeMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetBaseAimRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetController();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetControlRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetLastMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetMovementBaseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetNavAgentLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetPendingMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsLocallyControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsMoveInputIgnored();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsPlayerControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_K2_GetMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_LaunchPawn();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_OnRep_Controller();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_OnRep_PlayerState();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_PawnMakeNoise();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ReceivePossessed();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ReceiveUnpossessed();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_SpawnDefaultController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoPossessAI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	static FName NAME_APawn_ReceivePossessed = FName(TEXT("ReceivePossessed"));
	void APawn::ReceivePossessed(AController* NewController)
	{
		Pawn_eventReceivePossessed_Parms Parms;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceivePossessed),&Parms);
	}
	static FName NAME_APawn_ReceiveUnpossessed = FName(TEXT("ReceiveUnpossessed"));
	void APawn::ReceiveUnpossessed(AController* OldController)
	{
		Pawn_eventReceiveUnpossessed_Parms Parms;
		Parms.OldController=OldController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceiveUnpossessed),&Parms);
	}
	void APawn::StaticRegisterNativesAPawn()
	{
		UClass* Class = APawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerPitchInput", (Native)&APawn::execAddControllerPitchInput },
			{ "AddControllerRollInput", (Native)&APawn::execAddControllerRollInput },
			{ "AddControllerYawInput", (Native)&APawn::execAddControllerYawInput },
			{ "AddMovementInput", (Native)&APawn::execAddMovementInput },
			{ "ConsumeMovementInputVector", (Native)&APawn::execConsumeMovementInputVector },
			{ "DetachFromControllerPendingDestroy", (Native)&APawn::execDetachFromControllerPendingDestroy },
			{ "GetBaseAimRotation", (Native)&APawn::execGetBaseAimRotation },
			{ "GetController", (Native)&APawn::execGetController },
			{ "GetControlRotation", (Native)&APawn::execGetControlRotation },
			{ "GetLastMovementInputVector", (Native)&APawn::execGetLastMovementInputVector },
			{ "GetMovementBaseActor", (Native)&APawn::execGetMovementBaseActor },
			{ "GetMovementComponent", (Native)&APawn::execGetMovementComponent },
			{ "GetNavAgentLocation", (Native)&APawn::execGetNavAgentLocation },
			{ "GetPendingMovementInputVector", (Native)&APawn::execGetPendingMovementInputVector },
			{ "IsControlled", (Native)&APawn::execIsControlled },
			{ "IsLocallyControlled", (Native)&APawn::execIsLocallyControlled },
			{ "IsMoveInputIgnored", (Native)&APawn::execIsMoveInputIgnored },
			{ "IsPlayerControlled", (Native)&APawn::execIsPlayerControlled },
			{ "K2_GetMovementInputVector", (Native)&APawn::execK2_GetMovementInputVector },
			{ "LaunchPawn", (Native)&APawn::execLaunchPawn },
			{ "OnRep_Controller", (Native)&APawn::execOnRep_Controller },
			{ "OnRep_PlayerState", (Native)&APawn::execOnRep_PlayerState },
			{ "PawnMakeNoise", (Native)&APawn::execPawnMakeNoise },
			{ "SetCanAffectNavigationGeneration", (Native)&APawn::execSetCanAffectNavigationGeneration },
			{ "SpawnDefaultController", (Native)&APawn::execSpawnDefaultController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APawn_AddControllerPitchInput()
	{
		struct Pawn_eventAddControllerPitchInput_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerPitchInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "up down addpitch" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Add input (affecting Pitch) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputPitchScale value.\n@param Val Amount to add to Pitch. This value is multiplied by the PlayerController's InputPitchScale value.\n@see PlayerController::InputPitchScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerPitchInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerPitchInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_AddControllerRollInput()
	{
		struct Pawn_eventAddControllerRollInput_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerRollInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "addroll" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Add input (affecting Roll) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputRollScale value.\n@param Val Amount to add to Roll. This value is multiplied by the PlayerController's InputRollScale value.\n@see PlayerController::InputRollScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerRollInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerRollInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_AddControllerYawInput()
	{
		struct Pawn_eventAddControllerYawInput_Parms
		{
			float Val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerYawInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "left right turn addyaw" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Add input (affecting Yaw) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputYawScale value.\n@param Val Amount to add to Yaw. This value is multiplied by the PlayerController's InputYawScale value.\n@see PlayerController::InputYawScale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerYawInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerYawInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_AddMovementInput()
	{
		struct Pawn_eventAddMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForce_SetBit = [](void* Obj){ ((Pawn_eventAddMovementInput_Parms*)Obj)->bForce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce = { UE4CodeGen_Private::EPropertyClass::Bool, "bForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventAddMovementInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForce_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldDirection,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "CPP_Default_bForce", "false" },
				{ "CPP_Default_ScaleValue", "1.000000" },
				{ "Keywords", "AddInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddMovementInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Pawn_eventAddMovementInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_ConsumeMovementInputVector()
	{
		struct Pawn_eventConsumeMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventConsumeMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "ConsumeInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Returns the pending input vector and resets it to zero.\nThis should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\nCopies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n@return The pending input vector." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ConsumeMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Pawn_eventConsumeMovementInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "Keywords", "Delete" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Call this function to detach safely pawn from its controller, knowing that we will be destroyed soon." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "DetachFromControllerPendingDestroy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetBaseAimRotation()
	{
		struct Pawn_eventGetBaseAimRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetBaseAimRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Return the aim rotation for the Pawn.\nIf we have a controller, by default we aim at the player's 'eyes' direction\nthat is by default the Pawn rotation for AI, and camera (crosshair) rotation for human players." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetBaseAimRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Pawn_eventGetBaseAimRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetController()
	{
		struct Pawn_eventGetController_Parms
		{
			AController* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Returns controller for this actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Pawn_eventGetController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetControlRotation()
	{
		struct Pawn_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Get the rotation of the Controller, often the 'view' rotation of this Pawn." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetControlRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetLastMovementInputVector()
	{
		struct Pawn_eventGetLastMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetLastMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "GetMovementInput GetInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeMovementInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\nFor example an animation update would want to use this, since by default the order of updates in a frame is:\nPlayerController (device input) -> MovementComponent -> Pawn -> Mesh (animations)\n\n@return The last input vector in world space that was processed by ConsumeMovementInputVector().\n@see AddMovementInput(), GetPendingMovementInputVector(), ConsumeMovementInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetLastMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetLastMovementInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetMovementBaseActor()
	{
		struct Pawn_eventGetMovementBaseActor_Parms
		{
			const APawn* Pawn;
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_Pawn_MetaData, ARRAY_COUNT(NewProp_Pawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Gets the owning actor of the Movement Base Component on which the pawn is standing." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetMovementBaseActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(Pawn_eventGetMovementBaseActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetMovementComponent()
	{
		struct Pawn_eventGetMovementComponent_Parms
		{
			UPawnMovementComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "Tooltip", "Return our PawnMovementComponent, if we have one." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventGetMovementComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetNavAgentLocation()
	{
		struct Pawn_eventGetNavAgentLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetNavAgentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Basically retrieved pawn's location on navmesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetNavAgentLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Pawn_eventGetNavAgentLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_GetPendingMovementInputVector()
	{
		struct Pawn_eventGetPendingMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetPendingMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "Keywords", "GetMovementInput GetInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it,\nUsually only a PawnMovementComponent will want to read this value, or the Pawn itself if it is responsible for movement.\n\n@return The pending input vector in world space.\n@see AddMovementInput(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetPendingMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetPendingMovementInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_IsControlled()
	{
		struct Pawn_eventIsControlled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Pawn_eventIsControlled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsControlled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "See if this actor is currently being controlled" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Pawn_eventIsControlled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_IsLocallyControlled()
	{
		struct Pawn_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Pawn_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsLocallyControlled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "@return true if controlled by a local (not network) Controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsLocallyControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsLocallyControlled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_IsMoveInputIgnored()
	{
		struct Pawn_eventIsMoveInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Pawn_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsMoveInputIgnored_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Helper to see if move input is ignored. If our controller is a PlayerController, checks Controller->IsMoveInputIgnored()." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsMoveInputIgnored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsMoveInputIgnored_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_IsPlayerControlled()
	{
		struct Pawn_eventIsPlayerControlled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Pawn_eventIsPlayerControlled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsPlayerControlled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "@return true if controlled by a human player (possessed by a PlayerController)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsPlayerControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsPlayerControlled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_K2_GetMovementInputVector()
	{
		struct Pawn_eventK2_GetMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventK2_GetMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Input" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "GetMovementInputVector has been deprecated, use either GetPendingMovementInputVector or GetLastMovementInputVector" },
				{ "DisplayName", "GetMovementInputVector" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "(Deprecated) Return the input vector in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "K2_GetMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventK2_GetMovementInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_LaunchPawn()
	{
		struct Pawn_eventLaunchPawn_Parms
		{
			FVector LaunchVelocity;
			bool bXYOverride;
			bool bZOverride;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bZOverride_SetBit = [](void* Obj){ ((Pawn_eventLaunchPawn_Parms*)Obj)->bZOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bZOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventLaunchPawn_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bXYOverride_SetBit = [](void* Obj){ ((Pawn_eventLaunchPawn_Parms*)Obj)->bXYOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXYOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bXYOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventLaunchPawn_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bXYOverride_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventLaunchPawn_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bXYOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchVelocity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use Character.LaunchCharacter instead" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "LaunchPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Pawn_eventLaunchPawn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_OnRep_Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Called when Controller is replicated" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "OnRep_Controller", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_OnRep_PlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "PlayerState Replication Notification Callback" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "OnRep_PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_PawnMakeNoise()
	{
		struct Pawn_eventPawnMakeNoise_Parms
		{
			float Loudness;
			FVector NoiseLocation;
			bool bUseNoiseMakerLocation;
			AActor* NoiseMaker;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker = { UE4CodeGen_Private::EPropertyClass::Object, "NoiseMaker", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseNoiseMakerLocation_SetBit = [](void* Obj){ ((Pawn_eventPawnMakeNoise_Parms*)Obj)->bUseNoiseMakerLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNoiseMakerLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseNoiseMakerLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventPawnMakeNoise_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseNoiseMakerLocation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseMaker,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseNoiseMakerLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Loudness,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "CPP_Default_bUseNoiseMakerLocation", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Inform AIControllers that you've made a noise they might hear (they are sent a HearNoise message if they have bHearNoises==true)\nThe instigator of this sound is the pawn which is used to call MakeNoise.\n\n@param Loudness - is the relative loudness of this noise (range 0.0 to 1.0).  Directly affects the hearing range specified by the AI's HearingThreshold.\n@param NoiseLocation - Position of noise source.  If zero vector, use the actor's location.\n@param bUseNoiseMakerLocation - If true, use the location of the NoiseMaker rather than NoiseLocation.  If false, use NoiseLocation.\n@param NoiseMaker - Which actor is the source of the noise.  Not to be confused with the Noise Instigator, which is responsible for the noise (and is the pawn on which this function is called).  If not specified, the pawn instigating the noise will be used as the NoiseMaker" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "PawnMakeNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820405, sizeof(Pawn_eventPawnMakeNoise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_ReceivePossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController = { UE4CodeGen_Private::EPropertyClass::Object, "NewController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventReceivePossessed_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Possessed" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ReceivePossessed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Pawn_eventReceivePossessed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_ReceiveUnpossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldController = { UE4CodeGen_Private::EPropertyClass::Object, "OldController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventReceiveUnpossessed_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Unpossessed" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Event called when the Pawn is no longer possessed by a Controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ReceiveUnpossessed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Pawn_eventReceiveUnpossessed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration()
	{
		struct Pawn_eventSetCanAffectNavigationGeneration_Parms
		{
			bool bNewValue;
			bool bForceUpdate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForceUpdate_SetBit = [](void* Obj){ ((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bForceUpdate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceUpdate_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNewValue_SetBit = [](void* Obj){ ((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bNewValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bForceUpdate" },
				{ "Category", "AI|Navigation" },
				{ "CPP_Default_bForceUpdate", "false" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Use SetCanAffectNavigationGeneration to change this value at runtime.\n    Note that calling this function at runtime will result in any navigation change only if runtime navigation generation is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "SetCanAffectNavigationGeneration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APawn_SpawnDefaultController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Spawn default controller for this Pawn, and get possessed by it." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "SpawnDefaultController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APawn_NoRegister()
	{
		return APawn::StaticClass();
	}
	UClass* Z_Construct_UClass_APawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APawn_AddControllerPitchInput, "AddControllerPitchInput" }, // 1293304122
				{ &Z_Construct_UFunction_APawn_AddControllerRollInput, "AddControllerRollInput" }, // 2832805643
				{ &Z_Construct_UFunction_APawn_AddControllerYawInput, "AddControllerYawInput" }, // 1799384083
				{ &Z_Construct_UFunction_APawn_AddMovementInput, "AddMovementInput" }, // 2597450558
				{ &Z_Construct_UFunction_APawn_ConsumeMovementInputVector, "ConsumeMovementInputVector" }, // 443416301
				{ &Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy, "DetachFromControllerPendingDestroy" }, // 3362805073
				{ &Z_Construct_UFunction_APawn_GetBaseAimRotation, "GetBaseAimRotation" }, // 3388361820
				{ &Z_Construct_UFunction_APawn_GetController, "GetController" }, // 2525588184
				{ &Z_Construct_UFunction_APawn_GetControlRotation, "GetControlRotation" }, // 1038927722
				{ &Z_Construct_UFunction_APawn_GetLastMovementInputVector, "GetLastMovementInputVector" }, // 910196929
				{ &Z_Construct_UFunction_APawn_GetMovementBaseActor, "GetMovementBaseActor" }, // 1734914412
				{ &Z_Construct_UFunction_APawn_GetMovementComponent, "GetMovementComponent" }, // 1073349041
				{ &Z_Construct_UFunction_APawn_GetNavAgentLocation, "GetNavAgentLocation" }, // 2569276854
				{ &Z_Construct_UFunction_APawn_GetPendingMovementInputVector, "GetPendingMovementInputVector" }, // 1672614539
				{ &Z_Construct_UFunction_APawn_IsControlled, "IsControlled" }, // 3191667526
				{ &Z_Construct_UFunction_APawn_IsLocallyControlled, "IsLocallyControlled" }, // 3964373337
				{ &Z_Construct_UFunction_APawn_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 3221048385
				{ &Z_Construct_UFunction_APawn_IsPlayerControlled, "IsPlayerControlled" }, // 2133465958
				{ &Z_Construct_UFunction_APawn_K2_GetMovementInputVector, "K2_GetMovementInputVector" }, // 160381067
				{ &Z_Construct_UFunction_APawn_LaunchPawn, "LaunchPawn" }, // 277366332
				{ &Z_Construct_UFunction_APawn_OnRep_Controller, "OnRep_Controller" }, // 4148022443
				{ &Z_Construct_UFunction_APawn_OnRep_PlayerState, "OnRep_PlayerState" }, // 1222172593
				{ &Z_Construct_UFunction_APawn_PawnMakeNoise, "PawnMakeNoise" }, // 322530533
				{ &Z_Construct_UFunction_APawn_ReceivePossessed, "ReceivePossessed" }, // 2674950015
				{ &Z_Construct_UFunction_APawn_ReceiveUnpossessed, "ReceiveUnpossessed" }, // 1181820835
				{ &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration, "SetCanAffectNavigationGeneration" }, // 710593050
				{ &Z_Construct_UFunction_APawn_SpawnDefaultController, "SpawnDefaultController" }, // 1019514926
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "GameFramework/Pawn.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ShortTooltip", "A Pawn is an actor that can be 'possessed' and receive input from a controller." },
				{ "ToolTip", "Pawn is the base class of all actors that can be possessed by players or AI.\nThey are the physical representations of players and creatures in a level.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastControlInputVector_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "The last control input vector that was processed by ConsumeMovementInputVector().\n@see GetLastMovementInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastControlInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "LastControlInputVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APawn, LastControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LastControlInputVector_MetaData, ARRAY_COUNT(NewProp_LastControlInputVector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlInputVector_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Accumulated control input vector, stored in world space. This is the pending input, which is cleared (zeroed) once consumed.\n@see GetPendingMovementInputVector(), AddMovementInput()" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlInputVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APawn, ControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ControlInputVector_MetaData, ARRAY_COUNT(NewProp_ControlInputVector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Controller currently possessing this Actor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_Controller", STRUCT_OFFSET(APawn, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(NewProp_Controller_MetaData, ARRAY_COUNT(NewProp_Controller_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitBy_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Controller of the last Actor that caused us damage." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastHitBy = { UE4CodeGen_Private::EPropertyClass::Object, "LastHitBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(APawn, LastHitBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(NewProp_LastHitBy_MetaData, ARRAY_COUNT(NewProp_LastHitBy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteViewPitch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Replicated so we can see where remote clients are looking." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteViewPitch = { UE4CodeGen_Private::EPropertyClass::Byte, "RemoteViewPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(APawn, RemoteViewPitch), nullptr, METADATA_PARAMS(NewProp_RemoteViewPitch_MetaData, ARRAY_COUNT(NewProp_RemoteViewPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "If Pawn is possessed by a player, points to his playerstate.  Needed for network play as controllers are not replicated to clients." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_PlayerState", STRUCT_OFFSET(APawn, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_PlayerState_MetaData, ARRAY_COUNT(NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[] = {
				{ "Category", "Pawn" },
				{ "DisplayName", "AI Controller Class" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Default class to use when pawn is controlled by AI." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "AIControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APawn, AIControllerClass), Z_Construct_UClass_AController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AIControllerClass_MetaData, ARRAY_COUNT(NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPossessAI_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Determines when the Pawn creates and is possessed by an AI Controller (on level start, when spawned, etc).\nOnly possible if AIControllerClass is set, and ignored if AutoPossessPlayer is enabled.\n@see AutoPossessPlayer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoPossessAI = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoPossessAI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawn, AutoPossessAI), Z_Construct_UEnum_Engine_EAutoPossessAI, METADATA_PARAMS(NewProp_AutoPossessAI_MetaData, ARRAY_COUNT(NewProp_AutoPossessAI_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPossessAI_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPossessPlayer_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Determines which PlayerController, if any, should automatically possess the pawn when the level starts or when the pawn is spawned.\n@see AutoPossessAI" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPossessPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "AutoPossessPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawn, AutoPossessPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(NewProp_AutoPossessPlayer_MetaData, ARRAY_COUNT(NewProp_AutoPossessPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEyeHeight_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "Base eye height above collision center." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseEyeHeight = { UE4CodeGen_Private::EPropertyClass::Float, "BaseEyeHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APawn, BaseEyeHeight), METADATA_PARAMS(NewProp_BaseEyeHeight_MetaData, ARRAY_COUNT(NewProp_BaseEyeHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAffectNavigationGeneration_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "If set to false (default) given pawn instance will never affect navigation generation.\n    Setting it to true will result in using regular AActor's navigation relevancy\n    calculation to check if this pawn instance should affect navigation generation\n    Use SetCanAffectNavigationGeneration to change this value at runtime.\n    Note that modifying this value at runtime will result in any navigation change only if runtime navigation generation is enabled." },
			};
#endif
			auto NewProp_bCanAffectNavigationGeneration_SetBit = [](void* Obj){ ((APawn*)Obj)->bCanAffectNavigationGeneration = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAffectNavigationGeneration = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAffectNavigationGeneration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanAffectNavigationGeneration_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanAffectNavigationGeneration_MetaData, ARRAY_COUNT(NewProp_bCanAffectNavigationGeneration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationRoll_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController." },
			};
#endif
			auto NewProp_bUseControllerRotationRoll_SetBit = [](void* Obj){ ((APawn*)Obj)->bUseControllerRotationRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseControllerRotationRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseControllerRotationRoll_MetaData, ARRAY_COUNT(NewProp_bUseControllerRotationRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController." },
			};
#endif
			auto NewProp_bUseControllerRotationYaw_SetBit = [](void* Obj){ ((APawn*)Obj)->bUseControllerRotationYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseControllerRotationYaw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseControllerRotationYaw_MetaData, ARRAY_COUNT(NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationPitch_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
				{ "ToolTip", "If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController." },
			};
#endif
			auto NewProp_bUseControllerRotationPitch_SetBit = [](void* Obj){ ((APawn*)Obj)->bUseControllerRotationPitch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationPitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseControllerRotationPitch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseControllerRotationPitch_MetaData, ARRAY_COUNT(NewProp_bUseControllerRotationPitch_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastControlInputVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlInputVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Controller,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastHitBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemoteViewPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIControllerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoPossessAI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoPossessAI_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoPossessPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseEyeHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanAffectNavigationGeneration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseControllerRotationRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseControllerRotationYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseControllerRotationPitch,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(APawn, INavAgentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APawn, 699186913);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawn(Z_Construct_UClass_APawn, &APawn::StaticClass, TEXT("/Script/Engine"), TEXT("APawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
