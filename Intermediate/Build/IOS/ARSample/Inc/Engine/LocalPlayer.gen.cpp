// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LocalPlayer.h"
#include "Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
// End Cross Module References
	void ULocalPlayer::StaticRegisterNativesULocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_ULocalPlayer_NoRegister()
	{
		return ULocalPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ULocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlayer,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/LocalPlayer.h" },
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "Each player that is active on the current client has a LocalPlayer. It stays active across maps\nThere may be several spawned in the case of splitscreen/coop.\nThere may be 0 spawned on servers." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "The controller ID which this player accepts input from." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId = { UE4CodeGen_Private::EPropertyClass::Int, "ControllerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULocalPlayer, ControllerId), METADATA_PARAMS(NewProp_ControllerId_MetaData, ARRAY_COUNT(NewProp_ControllerId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSentSplitJoin_MetaData[] = {
				{ "Category", "LocalPlayer" },
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "set when we've sent a split join request" },
			};
#endif
			auto NewProp_bSentSplitJoin_SetBit = [](void* Obj){ ((ULocalPlayer*)Obj)->bSentSplitJoin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSentSplitJoin = { UE4CodeGen_Private::EPropertyClass::Bool, "bSentSplitJoin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000022001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULocalPlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSentSplitJoin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSentSplitJoin_MetaData, ARRAY_COUNT(NewProp_bSentSplitJoin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingLevelPlayerControllerClass_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PendingLevelPlayerControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "PendingLevelPlayerControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(ULocalPlayer, PendingLevelPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PendingLevelPlayerControllerClass_MetaData, ARRAY_COUNT(NewProp_PendingLevelPlayerControllerClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "How to constrain perspective viewport FOV" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint = { UE4CodeGen_Private::EPropertyClass::Byte, "AspectRatioAxisConstraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(ULocalPlayer, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(NewProp_AspectRatioAxisConstraint_MetaData, ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportClient_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
				{ "ToolTip", "The master viewport containing this player's view." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportClient = { UE4CodeGen_Private::EPropertyClass::Object, "ViewportClient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULocalPlayer, ViewportClient), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(NewProp_ViewportClient_MetaData, ARRAY_COUNT(NewProp_ViewportClient_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSentSplitJoin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingLevelPlayerControllerClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AspectRatioAxisConstraint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewportClient,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULocalPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULocalPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
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
	IMPLEMENT_CLASS(ULocalPlayer, 2323946512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalPlayer(Z_Construct_UClass_ULocalPlayer, &ULocalPlayer::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalPlayer"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
