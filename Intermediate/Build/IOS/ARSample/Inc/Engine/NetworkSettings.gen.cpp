// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/NetworkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNetworkSettings::StaticRegisterNativesUNetworkSettings()
	{
	}
	UClass* Z_Construct_UClass_UNetworkSettings_NoRegister()
	{
		return UNetworkSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UNetworkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Network" },
				{ "IncludePath", "Engine/NetworkSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
				{ "ToolTip", "Network settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepArrayMemory_MetaData[] = {
				{ "Category", "replication" },
				{ "ClampMax", "65535" },
				{ "ClampMin", "1" },
				{ "ConsoleVariable", "net.MaxRepArrayMemory" },
				{ "DisplayName", "Max Array Memory" },
				{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
				{ "ToolTip", "Maximum allowable size for replicated dynamic arrays (in bytes).  Must be between 1 and 65535." },
				{ "UIMax", "65535" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepArrayMemory = { UE4CodeGen_Private::EPropertyClass::Int, "MaxRepArrayMemory", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNetworkSettings, MaxRepArrayMemory), METADATA_PARAMS(NewProp_MaxRepArrayMemory_MetaData, ARRAY_COUNT(NewProp_MaxRepArrayMemory_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRepArraySize_MetaData[] = {
				{ "Category", "replication" },
				{ "ClampMax", "65535" },
				{ "ClampMin", "1" },
				{ "ConsoleVariable", "net.MaxRepArraySize" },
				{ "DisplayName", "Max Array Size" },
				{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
				{ "ToolTip", "Maximum allowable size for replicated dynamic arrays (in number of elements). Must be between 1 and 65535." },
				{ "UIMax", "65535" },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRepArraySize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxRepArraySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNetworkSettings, MaxRepArraySize), METADATA_PARAMS(NewProp_MaxRepArraySize_MetaData, ARRAY_COUNT(NewProp_MaxRepArraySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData[] = {
				{ "Category", "World" },
				{ "ConsoleVariable", "p.EnableMultiplayerWorldOriginRebasing" },
				{ "DisplayName", "Enable Multiplayer World Origin Rebasing" },
				{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
				{ "ToolTip", "If true, origin rebasing is enabled in multiplayer games, meaning that servers and clients can have different local world origins." },
			};
#endif
			auto NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit = [](void* Obj){ ((UNetworkSettings*)Obj)->bEnableMultiplayerWorldOriginRebasing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayerWorldOriginRebasing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMultiplayerWorldOriginRebasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNetworkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableMultiplayerWorldOriginRebasing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData, ARRAY_COUNT(NewProp_bEnableMultiplayerWorldOriginRebasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerifyPeer_MetaData[] = {
				{ "Category", "libcurl" },
				{ "ConsoleVariable", "n.VerifyPeer" },
				{ "DisplayName", "Verify Peer" },
				{ "ModuleRelativePath", "Classes/Engine/NetworkSettings.h" },
				{ "ToolTip", "If true, libcurl authenticates the peer's certificate. Disable to allow self-signed certificates." },
			};
#endif
			auto NewProp_bVerifyPeer_SetBit = [](void* Obj){ ((UNetworkSettings*)Obj)->bVerifyPeer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerifyPeer = { UE4CodeGen_Private::EPropertyClass::Bool, "bVerifyPeer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNetworkSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVerifyPeer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVerifyPeer_MetaData, ARRAY_COUNT(NewProp_bVerifyPeer_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRepArrayMemory,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRepArraySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableMultiplayerWorldOriginRebasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVerifyPeer,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNetworkSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNetworkSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworkSettings, 2492108429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkSettings(Z_Construct_UClass_UNetworkSettings, &UNetworkSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UNetworkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
