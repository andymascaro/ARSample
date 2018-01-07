// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDelay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDelay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDelay();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDelay::StaticRegisterNativesUSoundNodeDelay()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDelay_NoRegister()
	{
		return USoundNodeDelay::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeDelay()
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
				{ "DisplayName", "Delay" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeDelay.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
				{ "ToolTip", "Defines a delay" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMax_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
				{ "ToolTip", "The upper bound of delay time in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayMax = { UE4CodeGen_Private::EPropertyClass::Float, "DelayMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeDelay, DelayMax), METADATA_PARAMS(NewProp_DelayMax_MetaData, ARRAY_COUNT(NewProp_DelayMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayMin_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeDelay.h" },
				{ "ToolTip", "The lower bound of delay time in seconds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayMin = { UE4CodeGen_Private::EPropertyClass::Float, "DelayMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeDelay, DelayMin), METADATA_PARAMS(NewProp_DelayMin_MetaData, ARRAY_COUNT(NewProp_DelayMin_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DelayMin,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeDelay>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeDelay::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeDelay, 946489273);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDelay(Z_Construct_UClass_USoundNodeDelay, &USoundNodeDelay::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDelay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDelay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
