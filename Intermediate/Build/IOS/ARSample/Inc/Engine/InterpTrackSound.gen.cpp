// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSound() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
// End Cross Module References
class UScriptStruct* FSoundTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("SoundTrackKey"), sizeof(FSoundTrackKey), Get_Z_Construct_UScriptStruct_FSoundTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundTrackKey(FSoundTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundTrackKey")),new UScriptStruct::TCppStructOps<FSoundTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundTrackKey"), sizeof(FSoundTrackKey), Get_Z_Construct_UScriptStruct_FSoundTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "Information for one sound in the track." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundTrackKey>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
				{ "Category", "SoundTrackKey" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound = { UE4CodeGen_Private::EPropertyClass::Object, "Sound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundTrackKey, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_Sound_MetaData, ARRAY_COUNT(NewProp_Sound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSoundTrackKey, Pitch), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSoundTrackKey, Volume), METADATA_PARAMS(NewProp_Volume_MetaData, ARRAY_COUNT(NewProp_Volume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSoundTrackKey, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundTrackKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundTrackKey),
				alignof(FSoundTrackKey),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_CRC() { return 3798391256U; }
	void UInterpTrackSound::StaticRegisterNativesUInterpTrackSound()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister()
	{
		return UInterpTrackSound::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Sound Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackSound.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[] = {
				{ "Category", "InterpTrackSound" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
			};
#endif
			auto NewProp_bAttach_SetBit = [](void* Obj){ ((UInterpTrackSound*)Obj)->bAttach = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttach = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttach", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttach_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttach_MetaData, ARRAY_COUNT(NewProp_bAttach_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsDialogue_MetaData[] = {
				{ "Category", "InterpTrackSound" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "If true and track is controlling a pawn, makes the pawn \"speak\" the given audio." },
			};
#endif
			auto NewProp_bTreatAsDialogue_SetBit = [](void* Obj){ ((UInterpTrackSound*)Obj)->bTreatAsDialogue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsDialogue = { UE4CodeGen_Private::EPropertyClass::Bool, "bTreatAsDialogue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTreatAsDialogue_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTreatAsDialogue_MetaData, ARRAY_COUNT(NewProp_bTreatAsDialogue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[] = {
				{ "Category", "InterpTrackSound" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "If true, don't show subtitles for sounds played by this track." },
			};
#endif
			auto NewProp_bSuppressSubtitles_SetBit = [](void* Obj){ ((UInterpTrackSound*)Obj)->bSuppressSubtitles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuppressSubtitles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundOnMatineeEnd_MetaData[] = {
				{ "Category", "InterpTrackSound" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "If true, sounds on this track will not be forced to finish when the matinee sequence finishes." },
			};
#endif
			auto NewProp_bContinueSoundOnMatineeEnd_SetBit = [](void* Obj){ ((UInterpTrackSound*)Obj)->bContinueSoundOnMatineeEnd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundOnMatineeEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bContinueSoundOnMatineeEnd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bContinueSoundOnMatineeEnd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bContinueSoundOnMatineeEnd_MetaData, ARRAY_COUNT(NewProp_bContinueSoundOnMatineeEnd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnReverse_MetaData[] = {
				{ "Category", "InterpTrackSound" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "if set, sound plays only when playing the matinee in reverse instead of when the matinee plays forward" },
			};
#endif
			auto NewProp_bPlayOnReverse_SetBit = [](void* Obj){ ((UInterpTrackSound*)Obj)->bPlayOnReverse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnReverse = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayOnReverse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackSound), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPlayOnReverse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPlayOnReverse_MetaData, ARRAY_COUNT(NewProp_bPlayOnReverse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
				{ "ToolTip", "Array of sounds to play at specific times." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sounds = { UE4CodeGen_Private::EPropertyClass::Array, "Sounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackSound, Sounds), METADATA_PARAMS(NewProp_Sounds_MetaData, ARRAY_COUNT(NewProp_Sounds_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sounds_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Sounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundTrackKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttach,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTreatAsDialogue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuppressSubtitles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bContinueSoundOnMatineeEnd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPlayOnReverse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sounds_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpTrackSound, 196587068);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackSound(Z_Construct_UClass_UInterpTrackSound, &UInterpTrackSound::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
