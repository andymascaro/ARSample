// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeRandom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeRandom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeRandom::StaticRegisterNativesUSoundNodeRandom()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister()
	{
		return USoundNodeRandom::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeRandom()
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
				{ "DisplayName", "Random" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeRandom.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "Selects sounds from a random set" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIEHiddenNodes_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "Editor only list of nodes hidden to duplicate behavior of PreselectAtLevelLoad" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PIEHiddenNodes = { UE4CodeGen_Private::EPropertyClass::Array, "PIEHiddenNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(USoundNodeRandom, PIEHiddenNodes), METADATA_PARAMS(NewProp_PIEHiddenNodes_MetaData, ARRAY_COUNT(NewProp_PIEHiddenNodes_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PIEHiddenNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PIEHiddenNodes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRandomUsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "Counter var so we don't have to count all of the used sounds each time we choose a sound *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRandomUsed = { UE4CodeGen_Private::EPropertyClass::Int, "NumRandomUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USoundNodeRandom, NumRandomUsed), METADATA_PARAMS(NewProp_NumRandomUsed_MetaData, ARRAY_COUNT(NewProp_NumRandomUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenUsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "Internal state of which sounds have been played.  This is only used at runtime\nto keep track of which sounds have been played" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HasBeenUsed = { UE4CodeGen_Private::EPropertyClass::Array, "HasBeenUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(USoundNodeRandom, HasBeenUsed), METADATA_PARAMS(NewProp_HasBeenUsed_MetaData, ARRAY_COUNT(NewProp_HasBeenUsed_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenUsed_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "HasBeenUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeWithoutReplacement_MetaData[] = {
				{ "Category", "Random" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "Determines whether or not this SoundNodeRandom should randomize with or without\nreplacement.\n\nWithoutReplacement means that only nodes left will be valid for\nselection.  So with that, you are guarenteed to have only one occurrence of the\nsound played until all of the other sounds in the set have all been played.\n\nWithReplacement means that a node will be chosen and then placed back into the set.\nSo one could play the same sound over and over if the probabilities don't go your way :-)" },
			};
#endif
			auto NewProp_bRandomizeWithoutReplacement_SetBit = [](void* Obj){ ((USoundNodeRandom*)Obj)->bRandomizeWithoutReplacement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeWithoutReplacement = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeWithoutReplacement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeRandom), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRandomizeWithoutReplacement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRandomizeWithoutReplacement_MetaData, ARRAY_COUNT(NewProp_bRandomizeWithoutReplacement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreselectAtLevelLoad_MetaData[] = {
				{ "Category", "Random" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
				{ "ToolTip", "If greater than 0, then upon each level load such a number of inputs will be randomly selected\nand the rest will be removed. This can be used to cut down the memory usage of large randomizing\ncues." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreselectAtLevelLoad = { UE4CodeGen_Private::EPropertyClass::Int, "PreselectAtLevelLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeRandom, PreselectAtLevelLoad), METADATA_PARAMS(NewProp_PreselectAtLevelLoad_MetaData, ARRAY_COUNT(NewProp_PreselectAtLevelLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[] = {
				{ "Category", "Random" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weights = { UE4CodeGen_Private::EPropertyClass::Array, "Weights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000041, 1, nullptr, STRUCT_OFFSET(USoundNodeRandom, Weights), METADATA_PARAMS(NewProp_Weights_MetaData, ARRAY_COUNT(NewProp_Weights_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Weights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PIEHiddenNodes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PIEHiddenNodes_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumRandomUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasBeenUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasBeenUsed_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRandomizeWithoutReplacement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreselectAtLevelLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Weights_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeRandom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeRandom::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeRandom, 3819427395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeRandom(Z_Construct_UClass_USoundNodeRandom, &USoundNodeRandom::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeRandom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeRandom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
