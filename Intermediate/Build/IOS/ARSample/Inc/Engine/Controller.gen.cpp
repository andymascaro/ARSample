// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeController() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_CastToPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ClientSetLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ClientSetRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_GetControlRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_GetDesiredRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_GetViewTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_IsLocalController();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_IsLocalPlayerController();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_IsLookInputIgnored();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_IsMoveInputIgnored();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_IsPlayerController();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_K2_GetPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_LineOfSightTo();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_OnRep_Pawn();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_OnRep_PlayerState();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_Possess();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ResetIgnoreInputFlags();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ResetIgnoreLookInput();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_ResetIgnoreMoveInput();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_SetControlRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_SetIgnoreLookInput();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_SetIgnoreMoveInput();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_SetInitialLocationAndRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_StopMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_AController_UnPossess();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature()
	{
		struct _Script_Engine_eventInstigatedAnyDamageSignature_Parms
		{
			float Damage;
			const UDamageType* DamageType;
			AActor* DamagedActor;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventInstigatedAnyDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "InstigatedAnyDamageSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130004, sizeof(_Script_Engine_eventInstigatedAnyDamageSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AController_ClientSetLocation = FName(TEXT("ClientSetLocation"));
	void AController::ClientSetLocation(FVector NewLocation, FRotator NewRotation)
	{
		Controller_eventClientSetLocation_Parms Parms;
		Parms.NewLocation=NewLocation;
		Parms.NewRotation=NewRotation;
		ProcessEvent(FindFunctionChecked(NAME_AController_ClientSetLocation),&Parms);
	}
	static FName NAME_AController_ClientSetRotation = FName(TEXT("ClientSetRotation"));
	void AController::ClientSetRotation(FRotator NewRotation, bool bResetCamera)
	{
		Controller_eventClientSetRotation_Parms Parms;
		Parms.NewRotation=NewRotation;
		Parms.bResetCamera=bResetCamera ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AController_ClientSetRotation),&Parms);
	}
	static FName NAME_AController_ReceiveInstigatedAnyDamage = FName(TEXT("ReceiveInstigatedAnyDamage"));
	void AController::ReceiveInstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser)
	{
		Controller_eventReceiveInstigatedAnyDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageType=DamageType;
		Parms.DamagedActor=DamagedActor;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AController_ReceiveInstigatedAnyDamage),&Parms);
	}
	void AController::StaticRegisterNativesAController()
	{
		UClass* Class = AController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToPlayerController", (Native)&AController::execCastToPlayerController },
			{ "ClientSetLocation", (Native)&AController::execClientSetLocation },
			{ "ClientSetRotation", (Native)&AController::execClientSetRotation },
			{ "GetControlRotation", (Native)&AController::execGetControlRotation },
			{ "GetDesiredRotation", (Native)&AController::execGetDesiredRotation },
			{ "GetViewTarget", (Native)&AController::execGetViewTarget },
			{ "IsLocalController", (Native)&AController::execIsLocalController },
			{ "IsLocalPlayerController", (Native)&AController::execIsLocalPlayerController },
			{ "IsLookInputIgnored", (Native)&AController::execIsLookInputIgnored },
			{ "IsMoveInputIgnored", (Native)&AController::execIsMoveInputIgnored },
			{ "IsPlayerController", (Native)&AController::execIsPlayerController },
			{ "K2_GetPawn", (Native)&AController::execK2_GetPawn },
			{ "LineOfSightTo", (Native)&AController::execLineOfSightTo },
			{ "OnRep_Pawn", (Native)&AController::execOnRep_Pawn },
			{ "OnRep_PlayerState", (Native)&AController::execOnRep_PlayerState },
			{ "Possess", (Native)&AController::execPossess },
			{ "ResetIgnoreInputFlags", (Native)&AController::execResetIgnoreInputFlags },
			{ "ResetIgnoreLookInput", (Native)&AController::execResetIgnoreLookInput },
			{ "ResetIgnoreMoveInput", (Native)&AController::execResetIgnoreMoveInput },
			{ "SetControlRotation", (Native)&AController::execSetControlRotation },
			{ "SetIgnoreLookInput", (Native)&AController::execSetIgnoreLookInput },
			{ "SetIgnoreMoveInput", (Native)&AController::execSetIgnoreMoveInput },
			{ "SetInitialLocationAndRotation", (Native)&AController::execSetInitialLocationAndRotation },
			{ "StopMovement", (Native)&AController::execStopMovement },
			{ "UnPossess", (Native)&AController::execUnPossess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AController_CastToPlayerController()
	{
		struct Controller_eventCastToPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Controller_eventCastToPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use standard Cast To node instead." },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "CastToPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Controller_eventCastToPlayerController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ClientSetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventClientSetLocation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventClientSetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Replicated function to set the pawn location and rotation, allowing server to force (ex. teleports)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ClientSetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820CC0, sizeof(Controller_eventClientSetLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ClientSetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bResetCamera_SetBit = [](void* Obj){ ((Controller_eventClientSetRotation_Parms*)Obj)->bResetCamera = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetCamera = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventClientSetRotation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bResetCamera_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventClientSetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bResetCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Replicated function to set the pawn rotation, allowing the server to force." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ClientSetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820CC0, sizeof(Controller_eventClientSetRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_GetControlRotation()
	{
		struct Controller_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Controller_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Get the control rotation. This is the full aim rotation, which may be different than a camera orientation (for example in a third person view),\nand may differ from the rotation of the controlled Pawn (which may choose not to visually pitch or roll, for example)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "GetControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Controller_eventGetControlRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_GetDesiredRotation()
	{
		struct Controller_eventGetDesiredRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Controller_eventGetDesiredRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Get the desired pawn target rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "GetDesiredRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Controller_eventGetDesiredRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_GetViewTarget()
	{
		struct Controller_eventGetViewTarget_Parms
		{
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Controller_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Get the actor the controller is looking at" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "GetViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Controller_eventGetViewTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_IsLocalController()
	{
		struct Controller_eventIsLocalController_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventIsLocalController_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventIsLocalController_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Returns whether this Controller is a local controller." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "IsLocalController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Controller_eventIsLocalController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_IsLocalPlayerController()
	{
		struct Controller_eventIsLocalPlayerController_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventIsLocalPlayerController_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventIsLocalPlayerController_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Returns whether this Controller is a locally controlled PlayerController." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "IsLocalPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Controller_eventIsLocalPlayerController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_IsLookInputIgnored()
	{
		struct Controller_eventIsLookInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventIsLookInputIgnored_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventIsLookInputIgnored_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Returns true if look input is ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "IsLookInputIgnored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Controller_eventIsLookInputIgnored_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_IsMoveInputIgnored()
	{
		struct Controller_eventIsMoveInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventIsMoveInputIgnored_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Returns true if movement input is ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "IsMoveInputIgnored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Controller_eventIsMoveInputIgnored_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_IsPlayerController()
	{
		struct Controller_eventIsPlayerController_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventIsPlayerController_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventIsPlayerController_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Returns whether this Controller is a PlayerController." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "IsPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Controller_eventIsPlayerController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_K2_GetPawn()
	{
		struct Controller_eventK2_GetPawn_Parms
		{
			APawn* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Controller_eventK2_GetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "DisplayName", "Get Controlled Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Return the Pawn that is currently 'controlled' by this PlayerController" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "K2_GetPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Controller_eventK2_GetPawn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_LineOfSightTo()
	{
		struct Controller_eventLineOfSightTo_Parms
		{
			const AActor* Other;
			FVector ViewPoint;
			bool bAlternateChecks;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((Controller_eventLineOfSightTo_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventLineOfSightTo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bAlternateChecks_SetBit = [](void* Obj){ ((Controller_eventLineOfSightTo_Parms*)Obj)->bAlternateChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlternateChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlternateChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventLineOfSightTo_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlternateChecks_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventLineOfSightTo_Parms, ViewPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Controller_eventLineOfSightTo_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Other_MetaData, ARRAY_COUNT(NewProp_Other_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlternateChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Other,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Controller" },
				{ "CPP_Default_bAlternateChecks", "false" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Checks line to center and top of other actor\n@param Other is the actor whose visibility is being checked.\n@param ViewPoint is eye position visibility is being checked from.  If vect(0,0,0) passed in, uses current viewtarget's eye position.\n@param bAlternateChecks used only in AIController implementation\n@return true if controller's pawn can see Other actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "LineOfSightTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Controller_eventLineOfSightTo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_OnRep_Pawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "OnRep_Pawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_OnRep_PlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "OnRep_PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_Possess()
	{
		struct Controller_eventPossess_Parms
		{
			APawn* InPawn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn = { UE4CodeGen_Private::EPropertyClass::Object, "InPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventPossess_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "Keywords", "set controller" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Handles attaching this controller to the specified pawn.\nOnly runs on the network authority (where HasAuthority() returns true).\n@param InPawn The Pawn to be possessed.\n@see HasAuthority()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "Possess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(Controller_eventPossess_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Controller_eventReceiveInstigatedAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagedActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Event when this controller instigates ANY damage" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ReceiveInstigatedAnyDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080804, sizeof(Controller_eventReceiveInstigatedAnyDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreInputFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Reset move and look input ignore flags." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ResetIgnoreInputFlags", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreLookInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "Keywords", "ClearIgnoreLookInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Stops ignoring look input by resetting the ignore look input state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ResetIgnoreLookInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_ResetIgnoreMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "Keywords", "ClearIgnoreMoveInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Stops ignoring move input by resetting the ignore move input state." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "ResetIgnoreMoveInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_SetControlRotation()
	{
		struct Controller_eventSetControlRotation_Parms
		{
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Controller_eventSetControlRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_NewRotation_MetaData, ARRAY_COUNT(NewProp_NewRotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "Tooltip", "Set the control rotation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "SetControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(Controller_eventSetControlRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_SetIgnoreLookInput()
	{
		struct Controller_eventSetIgnoreLookInput_Parms
		{
			bool bNewLookInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewLookInput_SetBit = [](void* Obj){ ((Controller_eventSetIgnoreLookInput_Parms*)Obj)->bNewLookInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLookInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLookInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventSetIgnoreLookInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewLookInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewLookInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Locks or unlocks look input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreLookInput.\n@param bNewLookInput  If true, look input is ignored. If false, input is not ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "SetIgnoreLookInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Controller_eventSetIgnoreLookInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_SetIgnoreMoveInput()
	{
		struct Controller_eventSetIgnoreMoveInput_Parms
		{
			bool bNewMoveInput;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewMoveInput_SetBit = [](void* Obj){ ((Controller_eventSetIgnoreMoveInput_Parms*)Obj)->bNewMoveInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewMoveInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewMoveInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Controller_eventSetIgnoreMoveInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewMoveInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewMoveInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Locks or unlocks movement input, consecutive calls stack up and require the same amount of calls to undo, or can all be undone using ResetIgnoreMoveInput.\n@param bNewMoveInput  If true, move input is ignored. If false, input is not ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "SetIgnoreMoveInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Controller_eventSetIgnoreMoveInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_SetInitialLocationAndRotation()
	{
		struct Controller_eventSetInitialLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Controller_eventSetInitialLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_NewRotation_MetaData, ARRAY_COUNT(NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Controller_eventSetInitialLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NewLocation_MetaData, ARRAY_COUNT(NewProp_NewLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Set the initial location and rotation of the controller, as well as the control rotation. Typically used when the controller is first created." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "SetInitialLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(Controller_eventSetInitialLocationAndRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_StopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Aborts the move the controller is currently performing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "StopMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AController_UnPossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "Keywords", "set controller" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Called to unpossess our pawn for any reason that is not the pawn being destroyed (destruction handled by PawnDestroyed())." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AController, "UnPossess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AController_NoRegister()
	{
		return AController::StaticClass();
	}
	UClass* Z_Construct_UClass_AController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AController_CastToPlayerController, "CastToPlayerController" }, // 4049797017
				{ &Z_Construct_UFunction_AController_ClientSetLocation, "ClientSetLocation" }, // 626451584
				{ &Z_Construct_UFunction_AController_ClientSetRotation, "ClientSetRotation" }, // 1707701822
				{ &Z_Construct_UFunction_AController_GetControlRotation, "GetControlRotation" }, // 461689199
				{ &Z_Construct_UFunction_AController_GetDesiredRotation, "GetDesiredRotation" }, // 4129902074
				{ &Z_Construct_UFunction_AController_GetViewTarget, "GetViewTarget" }, // 2408624410
				{ &Z_Construct_UFunction_AController_IsLocalController, "IsLocalController" }, // 1528096385
				{ &Z_Construct_UFunction_AController_IsLocalPlayerController, "IsLocalPlayerController" }, // 4011634079
				{ &Z_Construct_UFunction_AController_IsLookInputIgnored, "IsLookInputIgnored" }, // 1125999909
				{ &Z_Construct_UFunction_AController_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 2263611375
				{ &Z_Construct_UFunction_AController_IsPlayerController, "IsPlayerController" }, // 3301820111
				{ &Z_Construct_UFunction_AController_K2_GetPawn, "K2_GetPawn" }, // 421995512
				{ &Z_Construct_UFunction_AController_LineOfSightTo, "LineOfSightTo" }, // 757703660
				{ &Z_Construct_UFunction_AController_OnRep_Pawn, "OnRep_Pawn" }, // 3979665429
				{ &Z_Construct_UFunction_AController_OnRep_PlayerState, "OnRep_PlayerState" }, // 1460040406
				{ &Z_Construct_UFunction_AController_Possess, "Possess" }, // 4055804898
				{ &Z_Construct_UFunction_AController_ReceiveInstigatedAnyDamage, "ReceiveInstigatedAnyDamage" }, // 3739111800
				{ &Z_Construct_UFunction_AController_ResetIgnoreInputFlags, "ResetIgnoreInputFlags" }, // 20211328
				{ &Z_Construct_UFunction_AController_ResetIgnoreLookInput, "ResetIgnoreLookInput" }, // 4157557763
				{ &Z_Construct_UFunction_AController_ResetIgnoreMoveInput, "ResetIgnoreMoveInput" }, // 3417844542
				{ &Z_Construct_UFunction_AController_SetControlRotation, "SetControlRotation" }, // 3570861561
				{ &Z_Construct_UFunction_AController_SetIgnoreLookInput, "SetIgnoreLookInput" }, // 343838944
				{ &Z_Construct_UFunction_AController_SetIgnoreMoveInput, "SetIgnoreMoveInput" }, // 2357530697
				{ &Z_Construct_UFunction_AController_SetInitialLocationAndRotation, "SetInitialLocationAndRotation" }, // 1693856657
				{ &Z_Construct_UFunction_AController_StopMovement, "StopMovement" }, // 1640742832
				{ &Z_Construct_UFunction_AController_UnPossess, "UnPossess" }, // 3537500942
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/Controller.h" },
				{ "IsBlueprintBase", "false" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Controllers are non-physical actors that can possess a Pawn to control\nits actions.  PlayerControllers are used by human players to control pawns, while\nAIControllers implement the artificial intelligence for the pawns they control.\nControllers take control of a pawn using their Possess() method, and relinquish\ncontrol of the pawn by calling UnPossess().\n\nControllers receive notifications for many of the events occurring for the Pawn they\nare controlling.  This gives the controller the opportunity to implement the behavior\nin response to this event, intercepting the event and superseding the Pawn's default\nbehavior.\n\nControlRotation (accessed via GetControlRotation()), determines the viewing/aiming\ndirection of the controlled Pawn and is affected by input such as from a mouse or gamepad.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstigatedAnyDamage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Called when the controller has instigated damage in any way" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstigatedAnyDamage = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInstigatedAnyDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000010080000, 1, nullptr, STRUCT_OFFSET(AController, OnInstigatedAnyDamage), Z_Construct_UDelegateFunction_Engine_InstigatedAnyDamageSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnInstigatedAnyDamage_MetaData, ARRAY_COUNT(NewProp_OnInstigatedAnyDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "CONTROLLER STATE PROPERTIES" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AController, StateName), METADATA_PARAMS(NewProp_StateName_MetaData, ARRAY_COUNT(NewProp_StateName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerController_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Whether this controller is a PlayerController." },
			};
#endif
			auto NewProp_bIsPlayerController_SetBit = [](void* Obj){ ((AController*)Obj)->bIsPlayerController = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerController = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPlayerController_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPlayerController_MetaData, ARRAY_COUNT(NewProp_bIsPlayerController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToPawn_MetaData[] = {
				{ "Category", "Controller|Transform" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "If true, the controller location will match the possessed Pawn's location. If false, it will not be updated. Rotation will match ControlRotation in either case.\nSince a Controller's location is normally inaccessible, this is intended mainly for purposes of being able to attach\nan Actor that follows the possessed Pawn location, but that still has the full aim rotation (since a Pawn might\nupdate only some components of the rotation)." },
			};
#endif
			auto NewProp_bAttachToPawn_SetBit = [](void* Obj){ ((AController*)Obj)->bAttachToPawn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToPawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttachToPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200c0000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttachToPawn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttachToPawn_MetaData, ARRAY_COUNT(NewProp_bAttachToPawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "The control rotation of the Controller. See GetControlRotation." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AController, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_ControlRotation_MetaData, ARRAY_COUNT(NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Component to give controllers a transform and enable attachment if desired." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TransformComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AController, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_TransformComponent_MetaData, ARRAY_COUNT(NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
				{ "Category", "Controller" },
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "PlayerState containing replicated information about the player using this controller (only exists for players, not NPCs)." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000034, 1, "OnRep_PlayerState", STRUCT_OFFSET(AController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(NewProp_PlayerState_MetaData, ARRAY_COUNT(NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Character currently being controlled by this controller.  Value is same as Pawn if the controlled pawn is a character, otherwise NULL" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AController, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(NewProp_Character_MetaData, ARRAY_COUNT(NewProp_Character_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/Controller.h" },
				{ "ToolTip", "Pawn currently being controlled by this controller.  Use Pawn.Possess() to take control of a pawn" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000100000020, 1, "OnRep_Pawn", STRUCT_OFFSET(AController, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_Pawn_MetaData, ARRAY_COUNT(NewProp_Pawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnInstigatedAnyDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPlayerController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttachToPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Character,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pawn,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AController, INavAgentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900281u,
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
	IMPLEMENT_CLASS(AController, 1741486859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AController(Z_Construct_UClass_AController, &AController::StaticClass, TEXT("/Script/Engine"), TEXT("AController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
