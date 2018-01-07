// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeDialoguePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
// End Cross Module References
	void USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister()
	{
		return USoundNodeDialoguePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNode,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Dialogue Player" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeDialoguePlayer.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
				{ "ToolTip", "Sound node that contains a reference to the dialogue table to pull from and be played" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "DialoguePlayer" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
				{ "ToolTip", "Whether the dialogue line should be played looping" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((USoundNodeDialoguePlayer*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeDialoguePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveParameter_MetaData[] = {
				{ "Category", "DialoguePlayer" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueWaveParameter = { UE4CodeGen_Private::EPropertyClass::Struct, "DialogueWaveParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeDialoguePlayer, DialogueWaveParameter), Z_Construct_UScriptStruct_FDialogueWaveParameter, METADATA_PARAMS(NewProp_DialogueWaveParameter_MetaData, ARRAY_COUNT(NewProp_DialogueWaveParameter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueWaveParameter,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeDialoguePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeDialoguePlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(USoundNodeDialoguePlayer, 3522193391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDialoguePlayer(Z_Construct_UClass_USoundNodeDialoguePlayer, &USoundNodeDialoguePlayer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDialoguePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDialoguePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
