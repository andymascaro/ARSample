// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/OnlineSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UOnlineSession::StaticRegisterNativesUOnlineSession()
	{
	}
	UClass* Z_Construct_UClass_UOnlineSession_NoRegister()
	{
		return UOnlineSession::StaticClass();
	}
	UClass* Z_Construct_UClass_UOnlineSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/OnlineSession.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/OnlineSession.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOnlineSession>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOnlineSession::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineSession, 2542709663);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineSession(Z_Construct_UClass_UOnlineSession, &UOnlineSession::StaticClass, TEXT("/Script/Engine"), TEXT("UOnlineSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
