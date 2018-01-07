// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HeadMountedDisplayFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayFunctionLibrary() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale();
// End Cross Module References
	void UHeadMountedDisplayFunctionLibrary::StaticRegisterNativesUHeadMountedDisplayFunctionLibrary()
	{
		UClass* Class = UHeadMountedDisplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableHMD", (Native)&UHeadMountedDisplayFunctionLibrary::execEnableHMD },
			{ "EnableLowPersistenceMode", (Native)&UHeadMountedDisplayFunctionLibrary::execEnableLowPersistenceMode },
			{ "GetHMDDeviceName", (Native)&UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName },
			{ "GetHMDWornState", (Native)&UHeadMountedDisplayFunctionLibrary::execGetHMDWornState },
			{ "GetNumOfTrackingSensors", (Native)&UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors },
			{ "GetOrientationAndPosition", (Native)&UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition },
			{ "GetPositionalTrackingCameraParameters", (Native)&UHeadMountedDisplayFunctionLibrary::execGetPositionalTrackingCameraParameters },
			{ "GetScreenPercentage", (Native)&UHeadMountedDisplayFunctionLibrary::execGetScreenPercentage },
			{ "GetTrackingOrigin", (Native)&UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin },
			{ "GetTrackingSensorParameters", (Native)&UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters },
			{ "GetVRFocusState", (Native)&UHeadMountedDisplayFunctionLibrary::execGetVRFocusState },
			{ "GetWorldToMetersScale", (Native)&UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale },
			{ "HasValidTrackingPosition", (Native)&UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition },
			{ "IsHeadMountedDisplayConnected", (Native)&UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected },
			{ "IsHeadMountedDisplayEnabled", (Native)&UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled },
			{ "IsInLowPersistenceMode", (Native)&UHeadMountedDisplayFunctionLibrary::execIsInLowPersistenceMode },
			{ "IsSpectatorScreenModeControllable", (Native)&UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable },
			{ "ResetOrientationAndPosition", (Native)&UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition },
			{ "SetClippingPlanes", (Native)&UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes },
			{ "SetSpectatorScreenMode", (Native)&UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode },
			{ "SetSpectatorScreenModeTexturePlusEyeLayout", (Native)&UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout },
			{ "SetSpectatorScreenTexture", (Native)&UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture },
			{ "SetTrackingOrigin", (Native)&UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin },
			{ "SetWorldToMetersScale", (Native)&UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD()
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms
		{
			bool bEnable;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Switches to/from using HMD and stereo rendering.\n\n@param bEnable                       (in) 'true' to enable HMD / stereo; 'false' otherwise\n@return (Boolean)            True, if the request was successful." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "EnableHMD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode()
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms
		{
			bool bEnable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bEnable_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms*)Obj)->bEnable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnable,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Switches between low and full persistence modes.\n\n@param bEnable                       (in) 'true' to enable low persistence mode; 'false' otherwise" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "EnableLowPersistenceMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns the name of the device, so scripts can modify their behaviour appropriately\n\n@return      FName specific to the currently active HMD device type.  \"None\" implies no device, \"Unknown\" implies a device with no description." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetHMDDeviceName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms
		{
			TEnumAsByte<EHMDWornState::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns the worn state of the device.\n\n@return       Unknown, Worn, NotWorn.  If the platform does not detect this it will always return Unknown." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetHMDWornState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "If the HMD has multiple positional tracking sensors, return a total number of them currently connected." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetNumOfTrackingSensors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DevicePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "DevicePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeviceRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "DeviceRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DevicePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceRotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetOrientationAndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms
		{
			FVector CameraOrigin;
			FRotator CameraRotation;
			float HFOV;
			float VFOV;
			float CameraDistance;
			float NearPlane;
			float FarPlane;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarPlane = { UE4CodeGen_Private::EPropertyClass::Float, "FarPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearPlane = { UE4CodeGen_Private::EPropertyClass::Float, "NearPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraDistance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VFOV = { UE4CodeGen_Private::EPropertyClass::Float, "VFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, VFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HFOV = { UE4CodeGen_Private::EPropertyClass::Float, "HFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, HFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FarPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NearPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraOrigin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "Use new GetTrackingSensorParameters / GetNumOfTrackingSensors" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param HFOV                          (out) Field-of-view, horizontal, in degrees, of the valid tracking zone of the sensor\n@param VFOV                          (out) Field-of-view, vertical, in degrees, of the valid tracking zone of the sensor\n@param CameraDistance        (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetPositionalTrackingCameraParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns screen percentage to be used in VR mode.\n\n@return (float)      The screen percentage to be used in VR mode." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetScreenPercentage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetScreenPercentage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns current tracking origin type (eye level or floor level)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetTrackingOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms
		{
			FVector Origin;
			FRotator Rotation;
			float LeftFOV;
			float RightFOV;
			float TopFOV;
			float BottomFOV;
			float Distance;
			float NearPlane;
			float FarPlane;
			bool IsActive;
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsActive_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms*)Obj)->IsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsActive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarPlane = { UE4CodeGen_Private::EPropertyClass::Float, "FarPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearPlane = { UE4CodeGen_Private::EPropertyClass::Float, "NearPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomFOV = { UE4CodeGen_Private::EPropertyClass::Float, "BottomFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, BottomFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopFOV = { UE4CodeGen_Private::EPropertyClass::Float, "TopFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, TopFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightFOV = { UE4CodeGen_Private::EPropertyClass::Float, "RightFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, RightFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftFOV = { UE4CodeGen_Private::EPropertyClass::Float, "LeftFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, LeftFOV), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FarPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NearPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BottomFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "LeftFOV,RightFOV,TopFOV,BottomFOV,Distance,NearPlane,FarPlane" },
				{ "Category", "Input|HeadMountedDisplay" },
				{ "CPP_Default_Index", "0" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Index                         (in) Index of the tracking sensor to query\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param LeftFOV                       (out) Field-of-view, left from center, in degrees, of the valid tracking zone of the sensor\n@param RightFOV                      (out) Field-of-view, right from center, in degrees, of the valid tracking zone of the sensor\n@param TopFOV                        (out) Field-of-view, top from center, in degrees, of the valid tracking zone of the sensor\n@param BottomFOV                     (out) Field-of-view, bottom from center, in degrees, of the valid tracking zone of the sensor\n@param Distance                      (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space\n@param IsActive                      (out) True, if the query for the specified sensor succeeded." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetTrackingSensorParameters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms
		{
			bool bUseFocus;
			bool bHasFocus;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bHasFocus_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bHasFocus = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasFocus_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseFocus_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bUseFocus = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFocus_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasFocus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFocus,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "DisplayName", "Get VR Focus State" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns current state of VR focus.\n\n@param bUseFocus             (out) if set to true, then this App does use VR focus.\n@param bHasFocus             (out) if set to true, then this App currently has VR focus." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetVRFocusState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale()
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContext,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns the World to Meters scale, which corresponds to the scale of the world as perceived by the player\n\n@return       How many Unreal units correspond to one meter in the real world" },
				{ "WorldContext", "WorldContext" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "GetWorldToMetersScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition()
	{
		struct HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "If the HMD supports positional tracking, whether or not we are currently being tracked" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "HasValidTrackingPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected()
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns whether or not the HMD hardware is connected and ready to use.  It may or may not actually be in use.\n\n@return (Boolean)  status whether the HMD hardware is connected and ready to use.  It may or may not actually be in use." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "IsHeadMountedDisplayConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled()
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns whether or not we are currently using the head mounted display.\n\n@return (Boolean)  status of HMD" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "IsHeadMountedDisplayEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode()
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Returns true, if HMD is in low persistence mode. 'false' otherwise." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "IsInLowPersistenceMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable()
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Return true if spectator screen mode control is available." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "IsSpectatorScreenModeControllable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition()
	{
		struct HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms
		{
			float Yaw;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Byte, "Options", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Yaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Options,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Yaw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "CPP_Default_Options", "OrientationAndPosition" },
				{ "CPP_Default_Yaw", "0.000000" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Resets orientation by setting roll and pitch to 0, assuming that current yaw is forward direction and assuming\ncurrent position as a 'zero-point' (for positional tracking).\n\n@param Yaw                           (in) the desired yaw to be set after orientation reset.\n@param Options                       (in) specifies either position, orientation or both should be reset." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "ResetOrientationAndPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms
		{
			float Near;
			float Far;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Far = { UE4CodeGen_Private::EPropertyClass::Float, "Far", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Far), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Near = { UE4CodeGen_Private::EPropertyClass::Float, "Near", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Near), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Far,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Near,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Sets near and far clipping planes (NCP and FCP) for stereo rendering. Similar to 'stereo ncp= fcp' console command, but NCP and FCP set by this\ncall won't be saved in .ini file.\n\n@param Near                          (in) Near clipping plane, in centimeters\n@param Far                           (in) Far clipping plane, in centimeters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetClippingPlanes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms
		{
			ESpectatorScreenMode Mode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode = { UE4CodeGen_Private::EPropertyClass::Enum, "Mode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms, Mode), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Sets the social screen mode.\n@param Mode                           (in) The social screen Mode." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetSpectatorScreenMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms
		{
			FVector2D EyeRectMin;
			FVector2D EyeRectMax;
			FVector2D TextureRectMin;
			FVector2D TextureRectMax;
			bool bDrawEyeFirst;
			bool bClearBlack;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bClearBlack_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bClearBlack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearBlack = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearBlack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClearBlack_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bDrawEyeFirst_SetBit = [](void* Obj){ ((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bDrawEyeFirst = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawEyeFirst = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawEyeFirst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawEyeFirst_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureRectMax = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureRectMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureRectMin = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureRectMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeRectMax = { UE4CodeGen_Private::EPropertyClass::Struct, "EyeRectMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeRectMin = { UE4CodeGen_Private::EPropertyClass::Struct, "EyeRectMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClearBlack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawEyeFirst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRectMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureRectMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EyeRectMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EyeRectMin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
				{ "CPP_Default_bClearBlack", "false" },
				{ "CPP_Default_bDrawEyeFirst", "true" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Setup the layout for ESpectatorScreenMode::TexturePlusEye.\n@param        EyeRectMin: min of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        EyeRectMax: max of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        TextureRectMin: min of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        TextureRectMax: max of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        bDrawEyeFirst: if true the eye is drawn before the texture, if false the reverse.\n@param        bClearBlack: if true the render target will be drawn black before either rect is drawn." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetSpectatorScreenModeTexturePlusEyeLayout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms
		{
			UTexture* InTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture = { UE4CodeGen_Private::EPropertyClass::Object, "InTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Change the texture displayed on the social screen\n@param        InTexture: new Texture2D" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetSpectatorScreenTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> Origin;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Byte, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms, Origin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Sets current tracking origin type (eye level or floor level)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetTrackingOrigin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale()
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float NewScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScale = { UE4CodeGen_Private::EPropertyClass::Float, "NewScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContext", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContext,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input|HeadMountedDisplay" },
				{ "CPP_Default_NewScale", "100.000000" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
				{ "ToolTip", "Sets the World to Meters scale, which changes the scale of the world as perceived by the player\n\n@param NewScale       Specifies how many Unreal units correspond to one meter in the real world" },
				{ "WorldContext", "WorldContext" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, "SetWorldToMetersScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister()
	{
		return UHeadMountedDisplayFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD, "EnableHMD" }, // 808238528
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode, "EnableLowPersistenceMode" }, // 2534001896
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName, "GetHMDDeviceName" }, // 4070812813
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState, "GetHMDWornState" }, // 3985671782
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors, "GetNumOfTrackingSensors" }, // 2149304664
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition, "GetOrientationAndPosition" }, // 203101913
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters, "GetPositionalTrackingCameraParameters" }, // 2192689568
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetScreenPercentage, "GetScreenPercentage" }, // 3126540250
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin, "GetTrackingOrigin" }, // 2315896317
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters, "GetTrackingSensorParameters" }, // 3201966039
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState, "GetVRFocusState" }, // 1226338104
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale, "GetWorldToMetersScale" }, // 3646874779
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition, "HasValidTrackingPosition" }, // 2662453098
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected, "IsHeadMountedDisplayConnected" }, // 2743581921
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled, "IsHeadMountedDisplayEnabled" }, // 3005479503
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode, "IsInLowPersistenceMode" }, // 2292329838
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable, "IsSpectatorScreenModeControllable" }, // 2267446678
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition, "ResetOrientationAndPosition" }, // 1502910470
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes, "SetClippingPlanes" }, // 32096862
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode, "SetSpectatorScreenMode" }, // 1887053953
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout, "SetSpectatorScreenModeTexturePlusEyeLayout" }, // 2891498667
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture, "SetSpectatorScreenTexture" }, // 977015914
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin, "SetTrackingOrigin" }, // 1999024779
				{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale, "SetWorldToMetersScale" }, // 1279586809
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HeadMountedDisplayFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHeadMountedDisplayFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHeadMountedDisplayFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UHeadMountedDisplayFunctionLibrary, 3748822512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeadMountedDisplayFunctionLibrary(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, &UHeadMountedDisplayFunctionLibrary::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UHeadMountedDisplayFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadMountedDisplayFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
