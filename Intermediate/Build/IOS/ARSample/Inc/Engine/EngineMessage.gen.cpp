// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/EngineMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineMessage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineMessage::StaticRegisterNativesUEngineMessage()
	{
	}
	UClass* Z_Construct_UClass_UEngineMessage_NoRegister()
	{
		return UEngineMessage::StaticClass();
	}
	UClass* Z_Construct_UClass_UEngineMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ULocalMessage,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/EngineMessage.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSpecMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a new spectator enters the server (if spectator is unnamed)." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSpecMessage = { UE4CodeGen_Private::EPropertyClass::Str, "NewSpecMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, NewSpecMessage), METADATA_PARAMS(NewProp_NewSpecMessage_MetaData, ARRAY_COUNT(NewProp_NewSpecMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayerMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a new player enters the server (if player is unnamed)." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPlayerMessage = { UE4CodeGen_Private::EPropertyClass::Str, "NewPlayerMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, NewPlayerMessage), METADATA_PARAMS(NewProp_NewPlayerMessage_MetaData, ARRAY_COUNT(NewProp_NewPlayerMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecEnteredMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a new spectator enters the server (if spectator has a player name)." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecEnteredMessage = { UE4CodeGen_Private::EPropertyClass::Str, "SpecEnteredMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, SpecEnteredMessage), METADATA_PARAMS(NewProp_SpecEnteredMessage_MetaData, ARRAY_COUNT(NewProp_SpecEnteredMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalNameChange_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a player changes his name." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalNameChange = { UE4CodeGen_Private::EPropertyClass::Str, "GlobalNameChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, GlobalNameChange), METADATA_PARAMS(NewProp_GlobalNameChange_MetaData, ARRAY_COUNT(NewProp_GlobalNameChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a player leaves the game." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeftMessage = { UE4CodeGen_Private::EPropertyClass::Str, "LeftMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, LeftMessage), METADATA_PARAMS(NewProp_LeftMessage_MetaData, ARRAY_COUNT(NewProp_LeftMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteredMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when a new player enters the game." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnteredMessage = { UE4CodeGen_Private::EPropertyClass::Str, "EnteredMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, EnteredMessage), METADATA_PARAMS(NewProp_EnteredMessage_MetaData, ARRAY_COUNT(NewProp_EnteredMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxedOutMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message when player join attempt is refused because the server is at capacity." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaxedOutMessage = { UE4CodeGen_Private::EPropertyClass::Str, "MaxedOutMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, MaxedOutMessage), METADATA_PARAMS(NewProp_MaxedOutMessage_MetaData, ARRAY_COUNT(NewProp_MaxedOutMessage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedPlaceMessage_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
				{ "ToolTip", "Message displayed in message dialog when player pawn fails to spawn because no playerstart was available." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FailedPlaceMessage = { UE4CodeGen_Private::EPropertyClass::Str, "FailedPlaceMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, FailedPlaceMessage), METADATA_PARAMS(NewProp_FailedPlaceMessage_MetaData, ARRAY_COUNT(NewProp_FailedPlaceMessage_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSpecMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPlayerMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecEnteredMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalNameChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnteredMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxedOutMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailedPlaceMessage,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UEngineMessage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UEngineMessage::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080081u,
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
	IMPLEMENT_CLASS(UEngineMessage, 2275631473);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineMessage(Z_Construct_UClass_UEngineMessage, &UEngineMessage::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
