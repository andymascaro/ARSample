// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlaySound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UAnimNotify_PlaySound::StaticRegisterNativesUAnimNotify_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister()
	{
		return UAnimNotify_PlaySound::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotify,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Play Sound" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "EditCondition", "bFollow" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ToolTip", "Socket or bone name to attach sound to" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, AttachName), METADATA_PARAMS(NewProp_AttachName_MetaData, ARRAY_COUNT(NewProp_AttachName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ToolTip", "If this sound should follow its owner" },
			};
#endif
			auto NewProp_bFollow_SetBit = [](void* Obj){ ((UAnimNotify_PlaySound*)Obj)->bFollow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimNotify_PlaySound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollow_MetaData, ARRAY_COUNT(NewProp_bFollow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ToolTip", "Pitch Multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, PitchMultiplier), METADATA_PARAMS(NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ToolTip", "Volume Multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, VolumeMultiplier), METADATA_PARAMS(NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "AnimNotify" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
				{ "ToolTip", "Sound to Play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify_PlaySound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify_PlaySound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00112080u,
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
	IMPLEMENT_CLASS(UAnimNotify_PlaySound, 3938073562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlaySound(Z_Construct_UClass_UAnimNotify_PlaySound, &UAnimNotify_PlaySound::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
