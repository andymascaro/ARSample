// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Haptics/HapticFeedbackEffect_SoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_SoundWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void UHapticFeedbackEffect_SoundWave::StaticRegisterNativesUHapticFeedbackEffect_SoundWave()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister()
	{
		return UHapticFeedbackEffect_SoundWave::StaticClass();
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Haptics/HapticFeedbackEffect_SoundWave.h" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[] = {
				{ "Category", "HapticFeedbackEffect_SoundWave" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave = { UE4CodeGen_Private::EPropertyClass::Object, "SoundWave", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_SoundWave, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(NewProp_SoundWave_MetaData, ARRAY_COUNT(NewProp_SoundWave_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundWave,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHapticFeedbackEffect_SoundWave>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHapticFeedbackEffect_SoundWave::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UHapticFeedbackEffect_SoundWave, 983995023);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_SoundWave(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave, &UHapticFeedbackEffect_SoundWave::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_SoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_SoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
