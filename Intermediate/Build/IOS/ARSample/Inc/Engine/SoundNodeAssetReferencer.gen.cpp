// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundNodeAssetReferencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeAssetReferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeAssetReferencer::StaticRegisterNativesUSoundNodeAssetReferencer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister()
	{
		return USoundNodeAssetReferencer::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Sound/SoundNodeAssetReferencer.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundNodeAssetReferencer.h" },
				{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundNodeAssetReferencer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundNodeAssetReferencer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeAssetReferencer, 2514146467);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeAssetReferencer(Z_Construct_UClass_USoundNodeAssetReferencer, &USoundNodeAssetReferencer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeAssetReferencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeAssetReferencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
