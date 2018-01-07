// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeMixer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeMixer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMixer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMixer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeMixer::StaticRegisterNativesUSoundNodeMixer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeMixer_NoRegister()
	{
		return USoundNodeMixer::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeMixer()
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
				{ "DisplayName", "Mixer" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeMixer.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeMixer.h" },
				{ "ToolTip", "Defines how concurrent sounds are mixed together" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[] = {
				{ "Category", "Mixer" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeMixer.h" },
				{ "ToolTip", "A volume for each input.  Automatically sized." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputVolume = { UE4CodeGen_Private::EPropertyClass::Array, "InputVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000049, 1, nullptr, STRUCT_OFFSET(USoundNodeMixer, InputVolume), METADATA_PARAMS(NewProp_InputVolume_MetaData, ARRAY_COUNT(NewProp_InputVolume_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "InputVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputVolume_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeMixer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeMixer::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeMixer, 889186638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeMixer(Z_Construct_UClass_USoundNodeMixer, &USoundNodeMixer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeMixer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeMixer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
