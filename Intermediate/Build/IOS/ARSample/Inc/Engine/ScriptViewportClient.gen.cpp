// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ScriptViewportClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UScriptViewportClient::StaticRegisterNativesUScriptViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister()
	{
		return UScriptViewportClient::StaticClass();
	}
	UClass* Z_Construct_UClass_UScriptViewportClient()
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
				{ "IncludePath", "Engine/ScriptViewportClient.h" },
				{ "ModuleRelativePath", "Classes/Engine/ScriptViewportClient.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UScriptViewportClient>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UScriptViewportClient::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(UScriptViewportClient, 2512882146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScriptViewportClient(Z_Construct_UClass_UScriptViewportClient, &UScriptViewportClient::StaticClass, TEXT("/Script/Engine"), TEXT("UScriptViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
