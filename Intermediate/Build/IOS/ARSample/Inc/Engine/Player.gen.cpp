// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UPlayer::StaticRegisterNativesUPlayer()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_NoRegister()
	{
		return UPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/Player.h" },
				{ "ModuleRelativePath", "Classes/Engine/Player.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfiguredLanSpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Player.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfiguredLanSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "ConfiguredLanSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UPlayer, ConfiguredLanSpeed), METADATA_PARAMS(NewProp_ConfiguredLanSpeed_MetaData, ARRAY_COUNT(NewProp_ConfiguredLanSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfiguredInternetSpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Player.h" },
				{ "ToolTip", "@todo document" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfiguredInternetSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "ConfiguredInternetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(UPlayer, ConfiguredInternetSpeed), METADATA_PARAMS(NewProp_ConfiguredInternetSpeed_MetaData, ARRAY_COUNT(NewProp_ConfiguredInternetSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNetSpeed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Player.h" },
				{ "ToolTip", "the current speed of the connection" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNetSpeed = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentNetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPlayer, CurrentNetSpeed), METADATA_PARAMS(NewProp_CurrentNetSpeed_MetaData, ARRAY_COUNT(NewProp_CurrentNetSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Player.h" },
				{ "ToolTip", "The actor this player controls." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UPlayer, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_PlayerController_MetaData, ARRAY_COUNT(NewProp_PlayerController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfiguredLanSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfiguredInternetSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentNetSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0008008Cu,
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
	IMPLEMENT_CLASS(UPlayer, 4145198090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer(Z_Construct_UClass_UPlayer, &UPlayer::StaticClass, TEXT("/Script/Engine"), TEXT("UPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
