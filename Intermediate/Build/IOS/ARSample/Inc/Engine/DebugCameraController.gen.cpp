// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/DebugCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_GetSelectedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ToggleDisplay();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
// End Cross Module References
	static FName NAME_ADebugCameraController_ReceiveOnActivate = FName(TEXT("ReceiveOnActivate"));
	void ADebugCameraController::ReceiveOnActivate(APlayerController* OriginalPC)
	{
		DebugCameraController_eventReceiveOnActivate_Parms Parms;
		Parms.OriginalPC=OriginalPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActivate),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnActorSelected = FName(TEXT("ReceiveOnActorSelected"));
	void ADebugCameraController::ReceiveOnActorSelected(AActor* NewSelectedActor, FVector const& SelectHitLocation, FVector const& SelectHitNormal, FHitResult const& Hit)
	{
		DebugCameraController_eventReceiveOnActorSelected_Parms Parms;
		Parms.NewSelectedActor=NewSelectedActor;
		Parms.SelectHitLocation=SelectHitLocation;
		Parms.SelectHitNormal=SelectHitNormal;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActorSelected),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnDeactivate = FName(TEXT("ReceiveOnDeactivate"));
	void ADebugCameraController::ReceiveOnDeactivate(APlayerController* RestoredPC)
	{
		DebugCameraController_eventReceiveOnDeactivate_Parms Parms;
		Parms.RestoredPC=RestoredPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnDeactivate),&Parms);
	}
	void ADebugCameraController::StaticRegisterNativesADebugCameraController()
	{
		UClass* Class = ADebugCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedActor", (Native)&ADebugCameraController::execGetSelectedActor },
			{ "SetPawnMovementSpeedScale", (Native)&ADebugCameraController::execSetPawnMovementSpeedScale },
			{ "ShowDebugSelectedInfo", (Native)&ADebugCameraController::execShowDebugSelectedInfo },
			{ "ToggleDisplay", (Native)&ADebugCameraController::execToggleDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_GetSelectedActor()
	{
		struct DebugCameraController_eventGetSelectedActor_Parms
		{
			AActor* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventGetSelectedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "GetSelectedActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(DebugCameraController_eventGetSelectedActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPC = { UE4CodeGen_Private::EPropertyClass::Object, "OriginalPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActivate_Parms, OriginalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnActivate" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Function called on activation of debug camera controller.\n@param OriginalPC The active player controller before this debug camera controller was possessed by the player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "ReceiveOnActivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(DebugCameraController_eventReceiveOnActivate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitNormal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectHitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SelectHitNormal_MetaData, ARRAY_COUNT(NewProp_SelectHitNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SelectHitLocation_MetaData, ARRAY_COUNT(NewProp_SelectHitLocation_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSelectedActor = { UE4CodeGen_Private::EPropertyClass::Object, "NewSelectedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, NewSelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectHitNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectHitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSelectedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug Camera" },
				{ "DisplayName", "OnActorSelected" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Called when an actor has been selected with the primary key (e.g. left mouse button).\n\nThe selection trace starts from the center of the debug camera's view.\n\n@param SelectHitLocation The exact world-space location where the selection trace hit the New Selected Actor.\n@param SelectHitNormal The world-space surface normal of the New Selected Actor at the hit location." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "ReceiveOnActorSelected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C80800, sizeof(DebugCameraController_eventReceiveOnActorSelected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestoredPC = { UE4CodeGen_Private::EPropertyClass::Object, "RestoredPC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventReceiveOnDeactivate_Parms, RestoredPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RestoredPC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "OnDeactivate" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Function called on deactivation of debug camera controller.\n@param RestoredPC The Player Controller that the player input is being returned to." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "ReceiveOnDeactivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(DebugCameraController_eventReceiveOnDeactivate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale()
	{
		struct DebugCameraController_eventSetPawnMovementSpeedScale_Parms
		{
			float NewSpeedScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeedScale = { UE4CodeGen_Private::EPropertyClass::Float, "NewSpeedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DebugCameraController_eventSetPawnMovementSpeedScale_Parms, NewSpeedScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSpeedScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Sets the pawn movement speed scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "SetPawnMovementSpeedScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DebugCameraController_eventSetPawnMovementSpeedScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "ShowDebugSelectedInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ADebugCameraController_ToggleDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Toggles the display of debug info and input commands for the Debug Camera." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, "ToggleDisplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADebugCameraController_NoRegister()
	{
		return ADebugCameraController::StaticClass();
	}
	UClass* Z_Construct_UClass_ADebugCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ADebugCameraController_GetSelectedActor, "GetSelectedActor" }, // 2663956932
				{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate, "ReceiveOnActivate" }, // 2645025692
				{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected, "ReceiveOnActorSelected" }, // 4190847259
				{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate, "ReceiveOnDeactivate" }, // 84019253
				{ &Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale, "SetPawnMovementSpeedScale" }, // 304925231
				{ &Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo, "ShowDebugSelectedInfo" }, // 779073679
				{ &Z_Construct_UFunction_ADebugCameraController_ToggleDisplay, "ToggleDisplay" }, // 1468686433
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Engine/DebugCameraController.h" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Camera controller that allows you to fly around a level mostly unrestricted by normal movement rules.\n\nTo turn it on, please press Alt+C or both (left and right) analogs on XBox pad,\nor use the \"ToggleDebugCamera\" console command. Check the debug camera bindings\nin DefaultPawn.cpp for the camera controls." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDecel_MetaData[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Initial deceleration of the spectator pawn when we start possession." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDecel = { UE4CodeGen_Private::EPropertyClass::Float, "InitialDecel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(ADebugCameraController, InitialDecel), METADATA_PARAMS(NewProp_InitialDecel_MetaData, ARRAY_COUNT(NewProp_InitialDecel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAccel_MetaData[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Initial acceleration of the spectator pawn when we start possession." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAccel = { UE4CodeGen_Private::EPropertyClass::Float, "InitialAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(ADebugCameraController, InitialAccel), METADATA_PARAMS(NewProp_InitialAccel_MetaData, ARRAY_COUNT(NewProp_InitialAccel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMaxSpeed_MetaData[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Initial max speed of the spectator pawn when we start possession." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InitialMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(ADebugCameraController, InitialMaxSpeed), METADATA_PARAMS(NewProp_InitialMaxSpeed_MetaData, ARRAY_COUNT(NewProp_InitialMaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[] = {
				{ "Category", "Debug Camera" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Allows control over the speed of the spectator pawn. This scales the speed based on the InitialMaxSpeed. Use Set Pawn Movement Speed Scale during runtime" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScale = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010015, 1, nullptr, STRUCT_OFFSET(ADebugCameraController, SpeedScale), METADATA_PARAMS(NewProp_SpeedScale_MetaData, ARRAY_COUNT(NewProp_SpeedScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum = { UE4CodeGen_Private::EPropertyClass::Object, "DrawFrustum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ADebugCameraController, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(NewProp_DrawFrustum_MetaData, ARRAY_COUNT(NewProp_DrawFrustum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrozenRendering_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			auto NewProp_bIsFrozenRendering_SetBit = [](void* Obj){ ((ADebugCameraController*)Obj)->bIsFrozenRendering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrozenRendering = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFrozenRendering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ADebugCameraController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsFrozenRendering_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsFrozenRendering_MetaData, ARRAY_COUNT(NewProp_bIsFrozenRendering_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSelectedInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
				{ "ToolTip", "Whether to show information about the selected actor on the debug camera HUD." },
			};
#endif
			auto NewProp_bShowSelectedInfo_SetBit = [](void* Obj){ ((ADebugCameraController*)Obj)->bShowSelectedInfo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSelectedInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowSelectedInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ADebugCameraController), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowSelectedInfo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowSelectedInfo_MetaData, ARRAY_COUNT(NewProp_bShowSelectedInfo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialDecel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialMaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawFrustum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsFrozenRendering,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowSelectedInfo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADebugCameraController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADebugCameraController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
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
	IMPLEMENT_CLASS(ADebugCameraController, 597277008);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugCameraController(Z_Construct_UClass_ADebugCameraController, &ADebugCameraController::StaticClass, TEXT("/Script/Engine"), TEXT("ADebugCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
