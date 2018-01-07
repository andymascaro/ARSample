// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Kismet/BlueprintPlatformLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPlatformLibrary() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenOrientation();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EApplicationState();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms
		{
			TEnumAsByte<EScreenOrientation::Type> inScreenOrientation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_inScreenOrientation = { UE4CodeGen_Private::EPropertyClass::Byte, "inScreenOrientation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms, inScreenOrientation), Z_Construct_UEnum_Engine_EScreenOrientation, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inScreenOrientation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformScreenOrientationChangedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformScreenOrientationChangedDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms
		{
			FString inString;
			int32 inInt;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAppState = { UE4CodeGen_Private::EPropertyClass::Byte, "inAppState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_inInt = { UE4CodeGen_Private::EPropertyClass::Int, "inInt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inAppState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inInt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformReceivedLocalNotificationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformReceivedLocalNotificationDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms
		{
			FString inString;
			TEnumAsByte<EApplicationState::Type> inAppState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_inAppState = { UE4CodeGen_Private::EPropertyClass::Byte, "inAppState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inAppState), Z_Construct_UEnum_Engine_EApplicationState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inAppState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformReceivedRemoteNotificationDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms
		{
			FString inString;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString = { UE4CodeGen_Private::EPropertyClass::Str, "inString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms, inString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformFailedToRegisterForRemoteNotificationsDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms
		{
			int32 inInt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_inInt = { UE4CodeGen_Private::EPropertyClass::Int, "inInt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms, inInt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inInt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PlatformGameInstance_eventPlatformRegisteredForUserNotificationsDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature()
	{
		struct PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms
		{
			TArray<uint8> inArray;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inArray_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inArray = { UE4CodeGen_Private::EPropertyClass::Array, "inArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms, inArray), METADATA_PARAMS(NewProp_inArray_MetaData, ARRAY_COUNT(NewProp_inArray_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_inArray_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "inArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inArray_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00530000, sizeof(PlatformGameInstance_eventPlatformRegisteredForRemoteNotificationsDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformGameInstance, "PlatformDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EApplicationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EApplicationState, Z_Construct_UPackage__Script_Engine(), TEXT("EApplicationState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EApplicationState(EApplicationState_StaticEnum, TEXT("/Script/Engine"), TEXT("EApplicationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EApplicationState_CRC() { return 1775407196U; }
	UEnum* Z_Construct_UEnum_Engine_EApplicationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EApplicationState"), 0, Get_Z_Construct_UEnum_Engine_EApplicationState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EApplicationState::Unknown", (int64)EApplicationState::Unknown },
				{ "EApplicationState::Inactive", (int64)EApplicationState::Inactive },
				{ "EApplicationState::Background", (int64)EApplicationState::Background },
				{ "EApplicationState::Active", (int64)EApplicationState::Active },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.ToolTip", "The Application was active when receiving the notification" },
				{ "Background.ToolTip", "The Application was in the background when receiving the notification" },
				{ "BlueprintType", "true" },
				{ "Inactive.ToolTip", "The Application was inactive when receiving the notification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "application state when the game receives a notification" },
				{ "Unknown.ToolTip", "The Application was in an unknown state when receiving the notification" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EApplicationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EApplicationState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EScreenOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EScreenOrientation, Z_Construct_UPackage__Script_Engine(), TEXT("EScreenOrientation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScreenOrientation(EScreenOrientation_StaticEnum, TEXT("/Script/Engine"), TEXT("EScreenOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EScreenOrientation_CRC() { return 3647924260U; }
	UEnum* Z_Construct_UEnum_Engine_EScreenOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScreenOrientation"), 0, Get_Z_Construct_UEnum_Engine_EScreenOrientation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScreenOrientation::Unknown", (int64)EScreenOrientation::Unknown },
				{ "EScreenOrientation::Portrait", (int64)EScreenOrientation::Portrait },
				{ "EScreenOrientation::PortraitUpsideDown", (int64)EScreenOrientation::PortraitUpsideDown },
				{ "EScreenOrientation::LandscapeLeft", (int64)EScreenOrientation::LandscapeLeft },
				{ "EScreenOrientation::LandscapeRight", (int64)EScreenOrientation::LandscapeRight },
				{ "EScreenOrientation::FaceUp", (int64)EScreenOrientation::FaceUp },
				{ "EScreenOrientation::FaceDown", (int64)EScreenOrientation::FaceDown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FaceDown.ToolTip", "The orientation is as if place on a desk with the screen downward" },
				{ "FaceUp.ToolTip", "The orientation is as if place on a desk with the screen upward" },
				{ "LandscapeLeft.ToolTip", "The orientation is landscape with the home button at the right side" },
				{ "LandscapeRight.ToolTip", "The orientation is landscape with the home button at the left side" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "Portrait.ToolTip", "The orientation is portrait with the home button at the bottom" },
				{ "PortraitUpsideDown.ToolTip", "The orientation is portrait with the home button at the top" },
				{ "ToolTip", "The list of possible device/screen orientation for mobile devices" },
				{ "Unknown.ToolTip", "The orientation is not known" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EScreenOrientation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EScreenOrientation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPlatformGameInstance::StaticRegisterNativesUPlatformGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister()
	{
		return UPlatformGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlatformGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, "PlatformDelegate__DelegateSignature" }, // 2882741655
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, "PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature" }, // 2397146325
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, "PlatformReceivedLocalNotificationDelegate__DelegateSignature" }, // 2970739728
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, "PlatformReceivedRemoteNotificationDelegate__DelegateSignature" }, // 3723884943
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, "PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature" }, // 3069220398
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, "PlatformRegisteredForUserNotificationsDelegate__DelegateSignature" }, // 1718895019
				{ &Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, "PlatformScreenOrientationChangedDelegate__DelegateSignature" }, // 437078067
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Mobile" },
				{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "UObject based class for handling mobile events. Having this object as an option gives the app lifetime access to these global delegates. The component UApplicationLifecycleComponent is destroyed at level loads" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the application receives a screen orientation change notification" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedScreenOrientationChangedNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedScreenOrientationChangedNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformScreenOrientationChangedDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the application receives a local notification" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedLocalNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedLocalNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedLocalNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedLocalNotificationDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationReceivedLocalNotificationDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the application receives a remote notification" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedRemoteNotificationDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationReceivedRemoteNotificationDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationReceivedRemoteNotificationDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformReceivedRemoteNotificationDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationReceivedRemoteNotificationDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the application fails to register for remote notifications" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationFailedToRegisterForRemoteNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationFailedToRegisterForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the user grants permission to register for notifications" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForUserNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationRegisteredForUserNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForUserNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForUserNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationRegisteredForUserNotificationsDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "called when the user grants permission to register for remote notifications" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationRegisteredForRemoteNotificationsDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationRegisteredForRemoteNotificationsDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationRegisteredForRemoteNotificationsDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationRegisteredForRemoteNotificationsDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillTerminateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillTerminateDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillTerminateDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasEnteredForegroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillEnterBackgroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasReactivatedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationHasReactivatedDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationHasReactivatedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillDeactivateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformGameInstance, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UPlatformGameInstance_PlatformDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillDeactivateDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillDeactivateDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationReceivedScreenOrientationChangedNotificationDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationReceivedLocalNotificationDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationReceivedRemoteNotificationDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationFailedToRegisterForRemoteNotificationsDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationRegisteredForUserNotificationsDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationRegisteredForRemoteNotificationsDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillTerminateDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationHasEnteredForegroundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillEnterBackgroundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationHasReactivatedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillDeactivateDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlatformGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlatformGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
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
	IMPLEMENT_CLASS(UPlatformGameInstance, 558255481);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformGameInstance(Z_Construct_UClass_UPlatformGameInstance, &UPlatformGameInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformGameInstance);
	void UBlueprintPlatformLibrary::StaticRegisterNativesUBlueprintPlatformLibrary()
	{
		UClass* Class = UBlueprintPlatformLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelLocalNotification", (Native)&UBlueprintPlatformLibrary::execCancelLocalNotification },
			{ "ClearAllLocalNotifications", (Native)&UBlueprintPlatformLibrary::execClearAllLocalNotifications },
			{ "GetLaunchNotification", (Native)&UBlueprintPlatformLibrary::execGetLaunchNotification },
			{ "ScheduleLocalNotificationAtTime", (Native)&UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime },
			{ "ScheduleLocalNotificationBadgeAtTime", (Native)&UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime },
			{ "ScheduleLocalNotificationBadgeFromNow", (Native)&UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow },
			{ "ScheduleLocalNotificationFromNow", (Native)&UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification()
	{
		struct BlueprintPlatformLibrary_eventCancelLocalNotification_Parms
		{
			FString ActivationEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventCancelLocalNotification_Parms, ActivationEvent), METADATA_PARAMS(NewProp_ActivationEvent_MetaData, ARRAY_COUNT(NewProp_ActivationEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Cancel a local notification given the ActivationEvent\n@param ActivationEvent The string passed into the Schedule call for the notification to be cancelled" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "CancelLocalNotification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BlueprintPlatformLibrary_eventCancelLocalNotification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Clear all pending local notifications. Typically this will be done before scheduling new notifications when going into the background" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ClearAllLocalNotifications", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification()
	{
		struct BlueprintPlatformLibrary_eventGetLaunchNotification_Parms
		{
			bool NotificationLaunchedApp;
			FString ActivationEvent;
			int32 FireDate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireDate = { UE4CodeGen_Private::EPropertyClass::Int, "FireDate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, FireDate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms, ActivationEvent), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_NotificationLaunchedApp_SetBit = [](void* Obj){ ((BlueprintPlatformLibrary_eventGetLaunchNotification_Parms*)Obj)->NotificationLaunchedApp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NotificationLaunchedApp = { UE4CodeGen_Private::EPropertyClass::Bool, "NotificationLaunchedApp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NotificationLaunchedApp_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireDate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotificationLaunchedApp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Get the local notification that was used to launch the app\n@param NotificationLaunchedApp Return true if a notification was used to launch the app\n@param ActivationEvent Returns the name of the ActivationEvent if a notification was used to launch the app\n@param FireDate Returns the time the notification was activated" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "GetLaunchNotification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintPlatformLibrary_eventGetLaunchNotification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime()
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, ActivationEvent), METADATA_PARAMS(NewProp_ActivationEvent_MetaData, ARRAY_COUNT(NewProp_ActivationEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Text, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Action), METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Text, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Body), METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, Title), METADATA_PARAMS(NewProp_Title_MetaData, ARRAY_COUNT(NewProp_Title_MetaData)) };
			auto NewProp_LocalTime_SetBit = [](void* Obj){ ((BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms*)Obj)->LocalTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalTime = { UE4CodeGen_Private::EPropertyClass::Bool, "LocalTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LocalTime_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "FireDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_FireDateTime_MetaData, ARRAY_COUNT(NewProp_FireDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Title,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Schedule a local notification at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationAtTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationAtTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime()
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms
		{
			FDateTime FireDateTime;
			bool LocalTime;
			FString ActivationEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, ActivationEvent), METADATA_PARAMS(NewProp_ActivationEvent_MetaData, ARRAY_COUNT(NewProp_ActivationEvent_MetaData)) };
			auto NewProp_LocalTime_SetBit = [](void* Obj){ ((BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms*)Obj)->LocalTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalTime = { UE4CodeGen_Private::EPropertyClass::Bool, "LocalTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LocalTime_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDateTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "FireDateTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms, FireDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_FireDateTime_MetaData, ARRAY_COUNT(NewProp_FireDateTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireDateTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Schedule a local notification badge at a specific time, inLocalTime specifies the current local time or if UTC time should be used\n@param FireDateTime The time at which to fire the local notification\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationBadgeAtTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeAtTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow()
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms
		{
			int32 inSecondsFromNow;
			FString ActivationEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, ActivationEvent), METADATA_PARAMS(NewProp_ActivationEvent_MetaData, ARRAY_COUNT(NewProp_ActivationEvent_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow = { UE4CodeGen_Private::EPropertyClass::Int, "inSecondsFromNow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inSecondsFromNow,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Schedule a local notification badge to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationBadgeFromNow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationBadgeFromNow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow()
	{
		struct BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms
		{
			int32 inSecondsFromNow;
			FText Title;
			FText Body;
			FText Action;
			FString ActivationEvent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivationEvent = { UE4CodeGen_Private::EPropertyClass::Str, "ActivationEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, ActivationEvent), METADATA_PARAMS(NewProp_ActivationEvent_MetaData, ARRAY_COUNT(NewProp_ActivationEvent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Action = { UE4CodeGen_Private::EPropertyClass::Text, "Action", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Action), METADATA_PARAMS(NewProp_Action_MetaData, ARRAY_COUNT(NewProp_Action_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Text, "Body", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Body), METADATA_PARAMS(NewProp_Body_MetaData, ARRAY_COUNT(NewProp_Body_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, Title), METADATA_PARAMS(NewProp_Title_MetaData, ARRAY_COUNT(NewProp_Title_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSecondsFromNow = { UE4CodeGen_Private::EPropertyClass::Int, "inSecondsFromNow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms, inSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActivationEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Action,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Body,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Title,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_inSecondsFromNow,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Platform|LocalNotification" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
				{ "ToolTip", "Schedule a local notification to fire inSecondsFromNow from now\n@param inSecondsFromNow The seconds until the notification should fire\n@param LocalTime If true the provided time is in the local timezone, if false it is in UTC\n@param Title The title of the notification\n@param Body The more detailed description of the notification\n@param Action The text to be displayed on the slider controller\n@param ActivationEvent A string that is passed in the delegate callback when the app is brought into the foreground from the user activating the notification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformLibrary, "ScheduleLocalNotificationFromNow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintPlatformLibrary_eventScheduleLocalNotificationFromNow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister()
	{
		return UBlueprintPlatformLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlueprintPlatformLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_CancelLocalNotification, "CancelLocalNotification" }, // 1270798604
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ClearAllLocalNotifications, "ClearAllLocalNotifications" }, // 830224219
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_GetLaunchNotification, "GetLaunchNotification" }, // 647808547
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationAtTime, "ScheduleLocalNotificationAtTime" }, // 2406280874
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeAtTime, "ScheduleLocalNotificationBadgeAtTime" }, // 2926534924
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationBadgeFromNow, "ScheduleLocalNotificationBadgeFromNow" }, // 3585783652
				{ &Z_Construct_UFunction_UBlueprintPlatformLibrary_ScheduleLocalNotificationFromNow, "ScheduleLocalNotificationFromNow" }, // 1482527654
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Kismet/BlueprintPlatformLibrary.h" },
				{ "ModuleRelativePath", "Classes/Kismet/BlueprintPlatformLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlueprintPlatformLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlueprintPlatformLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UBlueprintPlatformLibrary, 527618066);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPlatformLibrary(Z_Construct_UClass_UBlueprintPlatformLibrary, &UBlueprintPlatformLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintPlatformLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPlatformLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
