// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRNotificationsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRNotificationsComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRNotificationsComponent, "VRNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UVRNotificationsComponent::StaticRegisterNativesUVRNotificationsComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister()
	{
		return UVRNotificationsComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRNotificationsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, "VRNotificationsDelegate__DelegateSignature" }, // 1291318257
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "HeadMountedDisplay" },
				{ "IncludePath", "VRNotificationsComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRControllerRecenteredDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when the VR system recenters a controller." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_VRControllerRecenteredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "VRControllerRecenteredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, VRControllerRecenteredDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_VRControllerRecenteredDelegate_MetaData, ARRAY_COUNT(NewProp_VRControllerRecenteredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRemovedFromHeadDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when the HMD detects that it has been taken off by a player (disconnecting the hmd also causes it to register as taken off)." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDRemovedFromHeadDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDRemovedFromHeadDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDRemovedFromHeadDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDRemovedFromHeadDelegate_MetaData, ARRAY_COUNT(NewProp_HMDRemovedFromHeadDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDPutOnHeadDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when the HMD detects that it has been put on by a player." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDPutOnHeadDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDPutOnHeadDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDPutOnHeadDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDPutOnHeadDelegate_MetaData, ARRAY_COUNT(NewProp_HMDPutOnHeadDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDConnectCanceledDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when the user declines to connect the HMD when prompted to do so by a system dialog. (PS4 Only)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDConnectCanceledDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDConnectCanceledDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDConnectCanceledDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDConnectCanceledDelegate_MetaData, ARRAY_COUNT(NewProp_HMDConnectCanceledDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDReconnectedDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when connection to HMD is restored." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDReconnectedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDReconnectedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDReconnectedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDReconnectedDelegate_MetaData, ARRAY_COUNT(NewProp_HMDReconnectedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDLostDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when connection to HMD is lost." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDLostDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDLostDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDLostDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDLostDelegate_MetaData, ARRAY_COUNT(NewProp_HMDLostDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDRecenteredDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called when the application is asked for VR headset recenter." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDRecenteredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDRecenteredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDRecenteredDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDRecenteredDelegate_MetaData, ARRAY_COUNT(NewProp_HMDRecenteredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDTrackingInitializedDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called on Morpheus when the HMD is done initializing and therefore\nreprojection will start functioning.\nThe app can continue now. (PS4 Only)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDTrackingInitializedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDTrackingInitializedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDTrackingInitializedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDTrackingInitializedDelegate_MetaData, ARRAY_COUNT(NewProp_HMDTrackingInitializedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRNotificationsComponent.h" },
				{ "ToolTip", "This will be called on Morpheus if the HMD starts up and is not fully initialized (in NOT_STARTED or CALIBRATING states).\nThe HMD will stay in NOT_STARTED until it is successfully position tracked.  Until it exits NOT_STARTED orientation\nbased reprojection does not happen.  Therefore we do not update rotation at all to avoid user discomfort.\nInstructions to get the hmd tracked should be shown to the user.\nSony may fix this eventually. (PS4 Only)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRNotificationsComponent, HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate), Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData, ARRAY_COUNT(NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRControllerRecenteredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDRemovedFromHeadDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDPutOnHeadDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDConnectCanceledDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDReconnectedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDLostDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDRecenteredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDTrackingInitializedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRNotificationsComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRNotificationsComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
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
	IMPLEMENT_CLASS(UVRNotificationsComponent, 1780850733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRNotificationsComponent(Z_Construct_UClass_UVRNotificationsComponent, &UVRNotificationsComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UVRNotificationsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRNotificationsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
