// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeWavePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWavePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void USoundNodeWavePlayer::StaticRegisterNativesUSoundNodeWavePlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister()
	{
		return USoundNodeWavePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeWavePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNodeAssetReferencer,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Wave Player" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeWavePlayer.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
				{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
				{ "Category", "WavePlayer" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
			};
#endif
			auto NewProp_bLooping_SetBit = [](void* Obj){ ((USoundNodeWavePlayer*)Obj)->bLooping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeWavePlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLooping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLooping_MetaData, ARRAY_COUNT(NewProp_bLooping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_SoundWave_MetaData, ARRAY_COUNT(NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveAssetPtr_MetaData[] = {
				{ "Category", "WavePlayer" },
				{ "DisplayName", "Sound Wave" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoundWaveAssetPtr = { UE4CodeGen_Private::EPropertyClass::SoftObject, "SoundWaveAssetPtr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWaveAssetPtr), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_SoundWaveAssetPtr_MetaData, ARRAY_COUNT(NewProp_SoundWaveAssetPtr_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLooping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWave,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWaveAssetPtr,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeWavePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeWavePlayer::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeWavePlayer, 3622699977);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeWavePlayer(Z_Construct_UClass_USoundNodeWavePlayer, &USoundNodeWavePlayer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeWavePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWavePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
