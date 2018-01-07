// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ControlChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UControlChannel::StaticRegisterNativesUControlChannel()
	{
	}
	UClass* Z_Construct_UClass_UControlChannel_NoRegister()
	{
		return UControlChannel::StaticClass();
	}
	UClass* Z_Construct_UClass_UControlChannel()
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
				{ "IncludePath", "Engine/ControlChannel.h" },
				{ "ModuleRelativePath", "Classes/Engine/ControlChannel.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "A channel for exchanging connection control messages." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UControlChannel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UControlChannel::StaticClass,
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
	IMPLEMENT_CLASS(UControlChannel, 3195419940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlChannel(Z_Construct_UClass_UControlChannel, &UControlChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UControlChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
