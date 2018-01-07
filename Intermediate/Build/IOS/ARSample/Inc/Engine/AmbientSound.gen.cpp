// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/AmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientSound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AAmbientSound_AdjustVolume();
	ENGINE_API UFunction* Z_Construct_UFunction_AAmbientSound_FadeIn();
	ENGINE_API UFunction* Z_Construct_UFunction_AAmbientSound_FadeOut();
	ENGINE_API UFunction* Z_Construct_UFunction_AAmbientSound_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_AAmbientSound_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AAmbientSound::StaticRegisterNativesAAmbientSound()
	{
		UClass* Class = AAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", (Native)&AAmbientSound::execAdjustVolume },
			{ "FadeIn", (Native)&AAmbientSound::execFadeIn },
			{ "FadeOut", (Native)&AAmbientSound::execFadeOut },
			{ "Play", (Native)&AAmbientSound::execPlay },
			{ "Stop", (Native)&AAmbientSound::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAmbientSound_AdjustVolume()
	{
		struct AmbientSound_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration = { UE4CodeGen_Private::EPropertyClass::Float, "AdjustVolumeDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdjustVolumeDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, "AdjustVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AmbientSound_eventAdjustVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAmbientSound_FadeIn()
	{
		struct AmbientSound_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "FadeVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeInDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "CPP_Default_FadeVolumeLevel", "1.000000" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, "FadeIn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AmbientSound_eventFadeIn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAmbientSound_FadeOut()
	{
		struct AmbientSound_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel = { UE4CodeGen_Private::EPropertyClass::Float, "FadeVolumeLevel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeVolumeLevel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeOutDuration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, "FadeOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AmbientSound_eventFadeOut_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAmbientSound_Play()
	{
		struct AmbientSound_eventPlay_Parms
		{
			float StartTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AmbientSound_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "CPP_Default_StartTime", "0.000000" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AmbientSound_eventPlay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAmbientSound_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Audio" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAmbientSound_NoRegister()
	{
		return AAmbientSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAmbientSound_AdjustVolume, "AdjustVolume" }, // 163636317
				{ &Z_Construct_UFunction_AAmbientSound_FadeIn, "FadeIn" }, // 2373964252
				{ &Z_Construct_UFunction_AAmbientSound_FadeOut, "FadeOut" }, // 1954892057
				{ &Z_Construct_UFunction_AAmbientSound_Play, "Play" }, // 2008924773
				{ &Z_Construct_UFunction_AAmbientSound_Stop, "Stop" }, // 313264312
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "Audio" },
				{ "ClassGroupNames", "Sounds" },
				{ "HideCategories", "Collision Input Game" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Sound/AmbientSound.h" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
				{ "ToolTip", "A sound actor that can be placed in a level" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Sound" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Sound,Audio,Audio|Components|Audio" },
				{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
				{ "ToolTip", "Audio component that handles sound playing" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AAmbientSound, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_AudioComponent_MetaData, ARRAY_COUNT(NewProp_AudioComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AudioComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAmbientSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAmbientSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAmbientSound, 804858689);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmbientSound(Z_Construct_UClass_AAmbientSound, &AAmbientSound::StaticClass, TEXT("/Script/Engine"), TEXT("AAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
