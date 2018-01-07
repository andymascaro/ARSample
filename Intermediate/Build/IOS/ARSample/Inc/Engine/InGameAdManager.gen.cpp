// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InGameAdManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameAdManager() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate();
	ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
				{ "ToolTip", "Delegate called when user closes an ad (after clicking on banner). Base class already handles\npausing, so a delegate is only needed if you need extra handling.  If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnUserClosedAdvertisement__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
				{ "ToolTip", "Delegate called when user clicks on an banner ad. Base class already handles pausing,\nso a delegate is only needed if you need extra handling. If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnUserClickedBanner__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAdManagerDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdManagerDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("EAdManagerDelegate"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdManagerDelegate(EAdManagerDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("EAdManagerDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAdManagerDelegate_CRC() { return 1815157791U; }
	UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdManagerDelegate"), 0, Get_Z_Construct_UEnum_Engine_EAdManagerDelegate_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AMD_ClickedBanner", (int64)AMD_ClickedBanner },
				{ "AMD_UserClosedAd", (int64)AMD_UserClosedAd },
				{ "AMD_MAX", (int64)AMD_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAdManagerDelegate",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAdManagerDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInGameAdManager::StaticRegisterNativesUInGameAdManager()
	{
	}
	UClass* Z_Construct_UClass_UInGameAdManager_NoRegister()
	{
		return UInGameAdManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UInGameAdManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/InGameAdManager.h" },
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedAdDelegates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClosedAdDelegates = { UE4CodeGen_Private::EPropertyClass::Array, "ClosedAdDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UInGameAdManager, ClosedAdDelegates), METADATA_PARAMS(NewProp_ClosedAdDelegates_MetaData, ARRAY_COUNT(NewProp_ClosedAdDelegates_MetaData)) };
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ClosedAdDelegates_Inner = { UE4CodeGen_Private::EPropertyClass::Delegate, "ClosedAdDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedBannerDelegates_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClickedBannerDelegates = { UE4CodeGen_Private::EPropertyClass::Array, "ClickedBannerDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UInGameAdManager, ClickedBannerDelegates), METADATA_PARAMS(NewProp_ClickedBannerDelegates_MetaData, ARRAY_COUNT(NewProp_ClickedBannerDelegates_MetaData)) };
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ClickedBannerDelegates_Inner = { UE4CodeGen_Private::EPropertyClass::Delegate, "ClickedBannerDelegates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseWhileAdOpen_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
				{ "ToolTip", "If true, the game will pause when the user clicks on the ad, which could take over the screen" },
			};
#endif
			auto NewProp_bShouldPauseWhileAdOpen_SetBit = [](void* Obj){ ((UInGameAdManager*)Obj)->bShouldPauseWhileAdOpen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseWhileAdOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldPauseWhileAdOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInGameAdManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldPauseWhileAdOpen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldPauseWhileAdOpen_MetaData, ARRAY_COUNT(NewProp_bShouldPauseWhileAdOpen_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClosedAdDelegates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClosedAdDelegates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedBannerDelegates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedBannerDelegates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldPauseWhileAdOpen,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInGameAdManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInGameAdManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800088u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UInGameAdManager, 1935602251);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameAdManager(Z_Construct_UClass_UInGameAdManager, &UInGameAdManager::StaticClass, TEXT("/Script/Engine"), TEXT("UInGameAdManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameAdManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
