// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/DialogueSoundWaveProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSoundWaveProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDialogueSoundWaveProxy::StaticRegisterNativesUDialogueSoundWaveProxy()
	{
	}
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister()
	{
		return UDialogueSoundWaveProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USoundBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Sound/DialogueSoundWaveProxy.h" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueSoundWaveProxy.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDialogueSoundWaveProxy>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDialogueSoundWaveProxy::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(UDialogueSoundWaveProxy, 3911138160);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueSoundWaveProxy(Z_Construct_UClass_UDialogueSoundWaveProxy, &UDialogueSoundWaveProxy::StaticClass, TEXT("/Script/Engine"), TEXT("UDialogueSoundWaveProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSoundWaveProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
