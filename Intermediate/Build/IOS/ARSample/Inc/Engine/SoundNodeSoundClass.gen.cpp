// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeSoundClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSoundClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSoundClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeSoundClass_NoRegister()
	{
		return USoundNodeSoundClass::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeSoundClass()
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
				{ "DisplayName", "SoundClass" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Sound/SoundNodeSoundClass.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
				{ "ToolTip", "Remaps the SoundClass of SoundWaves underneath this" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassOverride_MetaData[] = {
				{ "Category", "SoundClass" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeSoundClass.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassOverride = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClassOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeSoundClass, SoundClassOverride), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClassOverride_MetaData, ARRAY_COUNT(NewProp_SoundClassOverride_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClassOverride,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeSoundClass>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeSoundClass::StaticClass,
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
	IMPLEMENT_CLASS(USoundNodeSoundClass, 4031873390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeSoundClass(Z_Construct_UClass_USoundNodeSoundClass, &USoundNodeSoundClass::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeSoundClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSoundClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
