// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeWaveParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWaveParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeWaveParam::StaticRegisterNativesUSoundNodeWaveParam()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister()
	{
		return USoundNodeWaveParam::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeWaveParam()
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
				{ "DisplayName", "Wave Param" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeWaveParam.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
				{ "ToolTip", "Sound node that takes a runtime parameter for the wave to play" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveParameterName_MetaData[] = {
				{ "Category", "WaveParam" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
				{ "ToolTip", "The name of the wave parameter to use to look up the SoundWave we should play" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WaveParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "WaveParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeWaveParam, WaveParameterName), METADATA_PARAMS(NewProp_WaveParameterName_MetaData, ARRAY_COUNT(NewProp_WaveParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveParameterName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeWaveParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeWaveParam::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeWaveParam, 1284591365);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeWaveParam(Z_Construct_UClass_USoundNodeWaveParam, &USoundNodeWaveParam::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeWaveParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWaveParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
