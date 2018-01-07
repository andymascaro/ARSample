// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/VoiceChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVoiceChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVoiceChannel::StaticRegisterNativesUVoiceChannel()
	{
	}
	UClass* Z_Construct_UClass_UVoiceChannel_NoRegister()
	{
		return UVoiceChannel::StaticClass();
	}
	UClass* Z_Construct_UClass_UVoiceChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UChannel,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/VoiceChannel.h" },
				{ "ModuleRelativePath", "Classes/Engine/VoiceChannel.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVoiceChannel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVoiceChannel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UVoiceChannel, 2624241073);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoiceChannel(Z_Construct_UClass_UVoiceChannel, &UVoiceChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UVoiceChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoiceChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
