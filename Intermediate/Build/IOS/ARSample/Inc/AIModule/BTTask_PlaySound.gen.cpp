// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlaySound() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UBTTask_PlaySound::StaticRegisterNativesUBTTask_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister()
	{
		return UBTTask_PlaySound::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_PlaySound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlaySound.h" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
				{ "ToolTip", "Play Sound task node.\nPlays the specified sound when executed." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[] = {
				{ "Category", "Node" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
				{ "ToolTip", "CUE to play" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay = { UE4CodeGen_Private::EPropertyClass::Object, "SoundToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_PlaySound, SoundToPlay), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(NewProp_SoundToPlay_MetaData, ARRAY_COUNT(NewProp_SoundToPlay_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundToPlay,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTask_PlaySound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTask_PlaySound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTTask_PlaySound, 2010322315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlaySound(Z_Construct_UClass_UBTTask_PlaySound, &UBTTask_PlaySound::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
