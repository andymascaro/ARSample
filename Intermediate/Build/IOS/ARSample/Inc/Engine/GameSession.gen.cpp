// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/GameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGameSession::StaticRegisterNativesAGameSession()
	{
	}
	UClass* Z_Construct_UClass_AGameSession_NoRegister()
	{
		return AGameSession::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameFramework/GameSession.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "Acts as a game-specific wrapper around the session interface. The game code makes calls to this when it needs to interact with the session interface.\nA game session exists only the server, while running an online game." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "SessionName local copy from PlayerState class.  should really be define in this class, but need to address replication issues" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName = { UE4CodeGen_Private::EPropertyClass::Name, "SessionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameSession, SessionName), METADATA_PARAMS(NewProp_SessionName_MetaData, ARRAY_COUNT(NewProp_SessionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "Is voice enabled always or via a push to talk keybinding" },
			};
#endif
			auto NewProp_bRequiresPushToTalk_SetBit = [](void* Obj){ ((AGameSession*)Obj)->bRequiresPushToTalk = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequiresPushToTalk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameSession), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRequiresPushToTalk_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRequiresPushToTalk_MetaData, ARRAY_COUNT(NewProp_bRequiresPushToTalk_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreensPerConnection_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "Maximum number of splitscreen players to allow from one connection" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSplitscreensPerConnection = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxSplitscreensPerConnection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxSplitscreensPerConnection), nullptr, METADATA_PARAMS(NewProp_MaxSplitscreensPerConnection_MetaData, ARRAY_COUNT(NewProp_MaxSplitscreensPerConnection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "Restrictions on the largest party that can join together" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPartySize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPartySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxPartySize), METADATA_PARAMS(NewProp_MaxPartySize_MetaData, ARRAY_COUNT(NewProp_MaxPartySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "Maximum number of players allowed by this server." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPlayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxPlayers), METADATA_PARAMS(NewProp_MaxPlayers_MetaData, ARRAY_COUNT(NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
				{ "ToolTip", "Maximum number of spectators allowed by this server." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectators = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSpectators", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxSpectators), METADATA_PARAMS(NewProp_MaxSpectators_MetaData, ARRAY_COUNT(NewProp_MaxSpectators_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SessionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRequiresPushToTalk,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSplitscreensPerConnection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPartySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPlayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpectators,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGameSession>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGameSession::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AGameSession, 379189084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameSession(Z_Construct_UClass_AGameSession, &AGameSession::StaticClass, TEXT("/Script/Engine"), TEXT("AGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
