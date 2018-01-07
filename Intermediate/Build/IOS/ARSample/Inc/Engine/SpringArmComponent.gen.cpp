// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/SpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringArmComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USpringArmComponent_GetTargetRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USpringArmComponent::StaticRegisterNativesUSpringArmComponent()
	{
		UClass* Class = USpringArmComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetRotation", (Native)&USpringArmComponent::execGetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USpringArmComponent_GetTargetRotation()
	{
		struct SpringArmComponent_eventGetTargetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpringArmComponent_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SpringArm" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Get the target rotation we inherit, used as the base target for the boom rotation.\nThis is derived from attachment to our parent and considering the UsePawnControlRotation and absolute rotation flags." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, "GetTargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(SpringArmComponent_eventGetTargetRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpringArmComponent_NoRegister()
	{
		return USpringArmComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USpringArmComponent_GetTargetRotation, "GetTargetRotation" }, // 2982713799
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Camera" },
				{ "HideCategories", "Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "GameFramework/SpringArmComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "This component tries to maintain its children at a fixed distance from the parent,\nbut will retract the children if there is a collision, and spring back when there is no collision.\n\nExample: Use as a 'camera boom' to keep the follow camera for a player from colliding into the world." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxDistance_MetaData[] = {
				{ "Category", "Lag" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bEnableCameraLag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraLagMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxDistance), METADATA_PARAMS(NewProp_CameraLagMaxDistance_MetaData, ARRAY_COUNT(NewProp_CameraLagMaxDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxTimeStep_MetaData[] = {
				{ "Category", "Lag" },
				{ "ClampMax", "0.5" },
				{ "ClampMin", "0.005" },
				{ "editcondition", "bUseCameraLagSubstepping" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Max time step used when sub-stepping camera lag." },
				{ "UIMax", "0.5" },
				{ "UIMin", "0.005" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxTimeStep = { UE4CodeGen_Private::EPropertyClass::Float, "CameraLagMaxTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxTimeStep), METADATA_PARAMS(NewProp_CameraLagMaxTimeStep_MetaData, ARRAY_COUNT(NewProp_CameraLagMaxTimeStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSpeed_MetaData[] = {
				{ "Category", "Lag" },
				{ "ClampMax", "1000.0" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bEnableCameraRotationLag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
				{ "UIMax", "1000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraRotationLagSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CameraRotationLagSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, CameraRotationLagSpeed), METADATA_PARAMS(NewProp_CameraRotationLagSpeed_MetaData, ARRAY_COUNT(NewProp_CameraRotationLagSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
				{ "Category", "Lag" },
				{ "ClampMax", "1000.0" },
				{ "ClampMin", "0.0" },
				{ "editcondition", "bEnableCameraLag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
				{ "UIMax", "1000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CameraLagSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, CameraLagSpeed), METADATA_PARAMS(NewProp_CameraLagSpeed_MetaData, ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLagMarkers_MetaData[] = {
				{ "Category", "Lag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\nA line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance)." },
			};
#endif
			auto NewProp_bDrawDebugLagMarkers_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bDrawDebugLagMarkers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLagMarkers = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDebugLagMarkers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawDebugLagMarkers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawDebugLagMarkers_MetaData, ARRAY_COUNT(NewProp_bDrawDebugLagMarkers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCameraLagSubstepping_MetaData[] = {
				{ "Category", "Lag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If bUseCameraLagSubstepping is true, sub-step camera damping so that it handles fluctuating frame rates well (though this comes at a cost).\n@see CameraLagMaxTimeStep" },
			};
#endif
			auto NewProp_bUseCameraLagSubstepping_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bUseCameraLagSubstepping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCameraLagSubstepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCameraLagSubstepping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseCameraLagSubstepping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseCameraLagSubstepping_MetaData, ARRAY_COUNT(NewProp_bUseCameraLagSubstepping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraRotationLag_MetaData[] = {
				{ "Category", "Lag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If true, camera lags behind target rotation to smooth its movement.\n@see CameraRotationLagSpeed" },
			};
#endif
			auto NewProp_bEnableCameraRotationLag_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bEnableCameraRotationLag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraRotationLag = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCameraRotationLag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCameraRotationLag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCameraRotationLag_MetaData, ARRAY_COUNT(NewProp_bEnableCameraRotationLag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[] = {
				{ "Category", "Lag" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If true, camera lags behind target position to smooth its movement.\n@see CameraLagSpeed" },
			};
#endif
			auto NewProp_bEnableCameraLag_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bEnableCameraLag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCameraLag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCameraLag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCameraLag_MetaData, ARRAY_COUNT(NewProp_bEnableCameraLag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Should we inherit roll from parent component. Does nothing if using Absolute Rotation." },
			};
#endif
			auto NewProp_bInheritRoll_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bInheritRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritRoll_MetaData, ARRAY_COUNT(NewProp_bInheritRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Should we inherit yaw from parent component. Does nothing if using Absolute Rotation." },
			};
#endif
			auto NewProp_bInheritYaw_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bInheritYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritYaw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritYaw_MetaData, ARRAY_COUNT(NewProp_bInheritYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Should we inherit pitch from parent component. Does nothing if using Absolute Rotation." },
			};
#endif
			auto NewProp_bInheritPitch_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bInheritPitch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritPitch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritPitch_MetaData, ARRAY_COUNT(NewProp_bInheritPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
				{ "Category", "CameraSettings" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\nWhen disabled, the component will revert to using the stored RelativeRotation of the component.\nNote that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\nand just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\nif you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\n@see GetTargetRotation(), APawn::GetViewRotation()" },
			};
#endif
			auto NewProp_bUsePawnControlRotation_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bUsePawnControlRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePawnControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePawnControlRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePawnControlRotation_MetaData, ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[] = {
				{ "Category", "CameraCollision" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level." },
			};
#endif
			auto NewProp_bDoCollisionTest_SetBit = [](void* Obj){ ((USpringArmComponent*)Obj)->bDoCollisionTest = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoCollisionTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USpringArmComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoCollisionTest_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoCollisionTest_MetaData, ARRAY_COUNT(NewProp_bDoCollisionTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeChannel_MetaData[] = {
				{ "Category", "CameraCollision" },
				{ "editcondition", "bDoCollisionTest" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Collision channel of the query probe (defaults to ECC_Camera)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProbeChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "ProbeChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_ProbeChannel_MetaData, ARRAY_COUNT(NewProp_ProbeChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeSize_MetaData[] = {
				{ "Category", "CameraCollision" },
				{ "editcondition", "bDoCollisionTest" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "How big should the query probe sphere be (in unreal units)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeSize = { UE4CodeGen_Private::EPropertyClass::Float, "ProbeSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, ProbeSize), METADATA_PARAMS(NewProp_ProbeSize_MetaData, ARRAY_COUNT(NewProp_ProbeSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space offset." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TargetOffset_MetaData, ARRAY_COUNT(NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "SocketOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SocketOffset_MetaData, ARRAY_COUNT(NewProp_SocketOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
				{ "ToolTip", "Natural length of the spring arm when there are no collisions" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength = { UE4CodeGen_Private::EPropertyClass::Float, "TargetArmLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USpringArmComponent, TargetArmLength), METADATA_PARAMS(NewProp_TargetArmLength_MetaData, ARRAY_COUNT(NewProp_TargetArmLength_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraLagMaxDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraLagMaxTimeStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraRotationLagSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraLagSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawDebugLagMarkers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseCameraLagSubstepping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCameraRotationLag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCameraLag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePawnControlRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoCollisionTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProbeChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProbeSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetArmLength,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpringArmComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpringArmComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(USpringArmComponent, 2791561530);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpringArmComponent(Z_Construct_UClass_USpringArmComponent, &USpringArmComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
