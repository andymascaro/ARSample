// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MotionTrackedDeviceFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrackedDeviceFunctionLibrary() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault();
// End Cross Module References
	void UMotionTrackedDeviceFunctionLibrary::StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary()
	{
		UClass* Class = UMotionTrackedDeviceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableMotionTrackingForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingForComponent },
			{ "DisableMotionTrackingOfAllControllers", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfAllControllers },
			{ "DisableMotionTrackingOfControllersForPlayer", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfControllersForPlayer },
			{ "DisableMotionTrackingOfDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfDevice },
			{ "EnableMotionTrackingForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingForComponent },
			{ "EnableMotionTrackingOfDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfDevice },
			{ "GetMaximumMotionTrackedControllerCount", (Native)&UMotionTrackedDeviceFunctionLibrary::execGetMaximumMotionTrackedControllerCount },
			{ "GetMotionTrackingEnabledControllerCount", (Native)&UMotionTrackedDeviceFunctionLibrary::execGetMotionTrackingEnabledControllerCount },
			{ "IsMotionTrackedDeviceCountManagementNecessary", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackedDeviceCountManagementNecessary },
			{ "IsMotionTrackingEnabledForComponent", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForComponent },
			{ "IsMotionTrackingEnabledForDevice", (Native)&UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForDevice },
			{ "SetIsControllerMotionTrackingEnabledByDefault", (Native)&UMotionTrackedDeviceFunctionLibrary::execSetIsControllerMotionTrackingEnabledByDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MotionControllerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080082, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionControllerComponent_MetaData, ARRAY_COUNT(NewProp_MotionControllerComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionControllerComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Disable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "DisableMotionTrackingForComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingForComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Disable tracking for all controllers." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "DisableMotionTrackingOfAllControllers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms
		{
			int32 PlayerIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Disable tracking for all controllers associated with the specified player.\n\n@param PlayerIndex                                    (in) The index of the player." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "DisableMotionTrackingOfControllersForPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfControllersForPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Disable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "DisableMotionTrackingOfDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventDisableMotionTrackingOfDevice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms
		{
			UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MotionControllerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionControllerComponent_MetaData, ARRAY_COUNT(NewProp_MotionControllerComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionControllerComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Enable tracking of the specified controller, by player index and tracked device type.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "EnableMotionTrackingForComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingForComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Enable tracking of the specified controller, by player index and tracked device type.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The device type.\n\n@return (Boolean) true if the specified device is now set to be tracked.  This could fail due to tracking limits, or on invalid input." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "EnableMotionTrackingOfDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventEnableMotionTrackingOfDevice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Get the maximum number of controllers that can be tracked.\n\n@return (int) number of controllers that can be tracked, or -1 if there is no limit (IsMotionTrackedDeviceCountManagementNecessary() should return false)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "GetMaximumMotionTrackedControllerCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventGetMaximumMotionTrackedControllerCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Get the number of controllers for which tracking is enabled.\n\n@return (int) number of controllers tracked now, or -1 if this query is unsupported (IsMotionTrackedDeviceCountManagementNecessary() should return false)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "GetMotionTrackingEnabledControllerCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventGetMotionTrackingEnabledControllerCount_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Returns true if it is necessary for the game to manage how many motion tracked devices it is asking to be tracked simultaneously.\nOn some platforms this is unnecessary because all supported devices can be tracked simultaneously.\n\n@return (Boolean) true if the game might need to manage which motion tracked devices are actively tracked." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "IsMotionTrackedDeviceCountManagementNecessary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackedDeviceCountManagementNecessary_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms
		{
			const UMotionControllerComponent* MotionControllerComponent;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MotionControllerComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080082, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms, MotionControllerComponent), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionControllerComponent_MetaData, ARRAY_COUNT(NewProp_MotionControllerComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionControllerComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Returns true if tracking is enabled for the specified device.\n\n@param MotionControllerComponent              (in) The motion controller component who's associated device is targeted.\n\n@return (Boolean) true if the specified device is set to be tracked." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "IsMotionTrackingEnabledForComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms
		{
			int32 PlayerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Returns true if tracking is enabled for the specified device.\n\n@param PlayerIndex                                   (in) The index of the player.\n@param Hand                                                  (in) The tracked device type.\n\n@return (Boolean) true if the specified device is set to be tracked." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "IsMotionTrackingEnabledForDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventIsMotionTrackingEnabledForDevice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault()
	{
		struct MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms
		{
			bool Enable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Enable_SetBit = [](void* Obj){ ((MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms*)Obj)->Enable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable = { UE4CodeGen_Private::EPropertyClass::Bool, "Enable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Enable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|MotionTracking" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
				{ "ToolTip", "Set whether motion tracked controllers activate on creation by default, or do not and must be explicitly activated.\n\n@param Require                                        (in) True means controllers are enabled by default.  Enables beyond the controller count limit will fail." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, "SetIsControllerMotionTrackingEnabledByDefault", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MotionTrackedDeviceFunctionLibrary_eventSetIsControllerMotionTrackingEnabledByDefault_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister()
	{
		return UMotionTrackedDeviceFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent, "DisableMotionTrackingForComponent" }, // 995731948
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers, "DisableMotionTrackingOfAllControllers" }, // 1462960918
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer, "DisableMotionTrackingOfControllersForPlayer" }, // 3085373323
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice, "DisableMotionTrackingOfDevice" }, // 2270789012
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent, "EnableMotionTrackingForComponent" }, // 4226815897
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice, "EnableMotionTrackingOfDevice" }, // 1385654062
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount, "GetMaximumMotionTrackedControllerCount" }, // 3020721660
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount, "GetMotionTrackingEnabledControllerCount" }, // 2998385423
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary, "IsMotionTrackedDeviceCountManagementNecessary" }, // 1519863072
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent, "IsMotionTrackingEnabledForComponent" }, // 4141590127
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice, "IsMotionTrackingEnabledForDevice" }, // 2535341943
				{ &Z_Construct_UFunction_UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault, "SetIsControllerMotionTrackingEnabledByDefault" }, // 2418441754
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MotionTrackedDeviceFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/MotionTrackedDeviceFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMotionTrackedDeviceFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMotionTrackedDeviceFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UMotionTrackedDeviceFunctionLibrary, 2450563134);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionTrackedDeviceFunctionLibrary(Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary, &UMotionTrackedDeviceFunctionLibrary::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionTrackedDeviceFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrackedDeviceFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
