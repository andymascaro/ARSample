// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeParamCrossFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeParamCrossFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister()
	{
		return USoundNodeParamCrossFade::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeParamCrossFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundNodeDistanceCrossFade,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Crossfade by Param" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeParamCrossFade.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
				{ "ToolTip", "Crossfades between different sounds based on a parameter" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "CrossFade" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeParamCrossFade.h" },
				{ "ToolTip", "Parameter controlling cross fades." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeParamCrossFade, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeParamCrossFade>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeParamCrossFade::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeParamCrossFade, 3041121262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeParamCrossFade(Z_Construct_UClass_USoundNodeParamCrossFade, &USoundNodeParamCrossFade::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeParamCrossFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeParamCrossFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
