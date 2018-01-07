// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeDoppler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister()
	{
		return USoundNodeDoppler::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeDoppler()
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
				{ "DisplayName", "Doppler" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeDoppler.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
				{ "ToolTip", "Computes doppler pitch shift" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DopplerIntensity_MetaData[] = {
				{ "Category", "Doppler" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
				{ "ToolTip", "How much to scale the doppler shift (1.0 is normal)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DopplerIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "DopplerIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeDoppler, DopplerIntensity), METADATA_PARAMS(NewProp_DopplerIntensity_MetaData, ARRAY_COUNT(NewProp_DopplerIntensity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DopplerIntensity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeDoppler>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeDoppler::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(USoundNodeDoppler, 269281447);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDoppler(Z_Construct_UClass_USoundNodeDoppler, &USoundNodeDoppler::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDoppler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDoppler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
