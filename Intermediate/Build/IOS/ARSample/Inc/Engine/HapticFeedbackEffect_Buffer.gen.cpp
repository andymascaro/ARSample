// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Haptics/HapticFeedbackEffect_Buffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Buffer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHapticFeedbackEffect_Buffer::StaticRegisterNativesUHapticFeedbackEffect_Buffer()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister()
	{
		return UHapticFeedbackEffect_Buffer::StaticClass();
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer()
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
				{ "IncludePath", "Haptics/HapticFeedbackEffect_Buffer.h" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
				{ "Category", "HapticFeedbackEffect_Buffer" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, SampleRate), METADATA_PARAMS(NewProp_SampleRate_MetaData, ARRAY_COUNT(NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitudes_MetaData[] = {
				{ "Category", "HapticFeedbackEffect_Buffer" },
				{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Amplitudes = { UE4CodeGen_Private::EPropertyClass::Array, "Amplitudes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, Amplitudes), METADATA_PARAMS(NewProp_Amplitudes_MetaData, ARRAY_COUNT(NewProp_Amplitudes_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Amplitudes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Amplitudes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amplitudes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amplitudes_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHapticFeedbackEffect_Buffer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHapticFeedbackEffect_Buffer::StaticClass,
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
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Buffer, 3255671311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Buffer(Z_Construct_UClass_UHapticFeedbackEffect_Buffer, &UHapticFeedbackEffect_Buffer::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Buffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Buffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
