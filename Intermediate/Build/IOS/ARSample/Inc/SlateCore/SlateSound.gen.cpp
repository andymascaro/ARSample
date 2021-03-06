// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sound/SlateSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSound() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSlateSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateSound_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSound, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateSound"), sizeof(FSlateSound), Get_Z_Construct_UScriptStruct_FSlateSound_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateSound(FSlateSound::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateSound"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateSound
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateSound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateSound")),new UScriptStruct::TCppStructOps<FSlateSound>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateSound;
	UScriptStruct* Z_Construct_UScriptStruct_FSlateSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateSound_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateSound"), sizeof(FSlateSound), Get_Z_Construct_UScriptStruct_FSlateSound_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
				{ "ToolTip", "An intermediary to make UBaseSound available for Slate to play sounds" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSound>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[] = {
				{ "AllowedClasses", "SoundBase" },
				{ "Category", "Sound" },
				{ "DisplayName", "Sound" },
				{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
				{ "ToolTip", "Pointer to the USoundBase. Holding onto it as a UObject because USoundBase is not available in Slate core.\nEdited via FSlateSoundStructCustomization to ensure you can only set USoundBase assets on it." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceObject = { UE4CodeGen_Private::EPropertyClass::Object, "ResourceObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FSlateSound, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_ResourceObject_MetaData, ARRAY_COUNT(NewProp_ResourceObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResourceObject,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SlateSound",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FSlateSound),
				alignof(FSlateSound),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateSound_CRC() { return 3088990461U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
