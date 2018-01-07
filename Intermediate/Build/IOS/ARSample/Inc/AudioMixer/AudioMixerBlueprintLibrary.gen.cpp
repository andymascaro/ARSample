// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AudioMixerBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry();
// End Cross Module References
	void UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary()
	{
		UClass* Class = UAudioMixerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMasterSubmixEffect", (Native)&UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect },
			{ "AddSourceEffectToPresetChain", (Native)&UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain },
			{ "ClearMasterSubmixEffects", (Native)&UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects },
			{ "GetNumberOfEntriesInSourceEffectChain", (Native)&UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain },
			{ "RemoveMasterSubmixEffect", (Native)&UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect },
			{ "RemoveSourceEffectFromPresetChain", (Native)&UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain },
			{ "SetBypassSourceEffectChainEntry", (Native)&UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect()
	{
		struct AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset = { UE4CodeGen_Private::EPropertyClass::Object, "SubmixEffectPreset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmixEffectPreset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Adds a submix effect preset to the master submix." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "AddMasterSubmixEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain()
	{
		struct AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			FSourceEffectChainEntry Entry;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry = { UE4CodeGen_Private::EPropertyClass::Struct, "Entry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, Entry), Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain = { UE4CodeGen_Private::EPropertyClass::Object, "PresetChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Entry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresetChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Adds source effect entry to preset chain. Only effects the instance of the preset chain" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "AddSourceEffectToPresetChain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects()
	{
		struct AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms
		{
			const UObject* WorldContextObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Clears all master submix effects." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "ClearMasterSubmixEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain()
	{
		struct AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain = { UE4CodeGen_Private::EPropertyClass::Object, "PresetChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresetChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Returns the number of effect chain entries in the given source effect chain." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "GetNumberOfEntriesInSourceEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect()
	{
		struct AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset = { UE4CodeGen_Private::EPropertyClass::Object, "SubmixEffectPreset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmixEffectPreset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Removes a submix effect preset from the master submix." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "RemoveMasterSubmixEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain()
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EntryIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain = { UE4CodeGen_Private::EPropertyClass::Object, "PresetChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresetChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Adds source effect entry to preset chain. Only affects the instance of preset chain." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "RemoveSourceEffectFromPresetChain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry()
	{
		struct AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
			bool bBypassed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bBypassed_SetBit = [](void* Obj){ ((AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms*)Obj)->bBypassed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypassed = { UE4CodeGen_Private::EPropertyClass::Bool, "bBypassed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBypassed_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EntryIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain = { UE4CodeGen_Private::EPropertyClass::Object, "PresetChain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBypassed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EntryIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PresetChain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio|Effects" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "ToolTip", "Set whether or not to bypass the effect at the source effect chain index." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, "SetBypassSourceEffectChainEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect, "AddMasterSubmixEffect" }, // 93164193
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, "AddSourceEffectToPresetChain" }, // 757452815
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects, "ClearMasterSubmixEffects" }, // 3425045542
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, "GetNumberOfEntriesInSourceEffectChain" }, // 4215820523
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, "RemoveMasterSubmixEffect" }, // 3225056508
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, "RemoveSourceEffectFromPresetChain" }, // 3208497548
				{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, "SetBypassSourceEffectChainEntry" }, // 4210281695
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AudioMixerBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAudioMixerBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAudioMixerBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioMixerBlueprintLibrary, 1364735313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioMixerBlueprintLibrary(Z_Construct_UClass_UAudioMixerBlueprintLibrary, &UAudioMixerBlueprintLibrary::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UAudioMixerBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
