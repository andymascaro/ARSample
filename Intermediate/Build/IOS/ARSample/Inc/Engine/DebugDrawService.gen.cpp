// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Debug/DebugDrawService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDrawService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDebugDrawService::StaticRegisterNativesUDebugDrawService()
	{
	}
	UClass* Z_Construct_UClass_UDebugDrawService_NoRegister()
	{
		return UDebugDrawService::StaticClass();
	}
	UClass* Z_Construct_UClass_UDebugDrawService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Debug/DebugDrawService.h" },
				{ "ModuleRelativePath", "Classes/Debug/DebugDrawService.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDebugDrawService>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDebugDrawService::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugDrawService, 760446297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugDrawService(Z_Construct_UClass_UDebugDrawService, &UDebugDrawService::StaticClass, TEXT("/Script/Engine"), TEXT("UDebugDrawService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugDrawService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
