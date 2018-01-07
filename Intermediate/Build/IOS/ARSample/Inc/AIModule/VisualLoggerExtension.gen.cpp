// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VisualLoggerExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerExtension() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UVisualLoggerExtension_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UVisualLoggerExtension();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UVisualLoggerExtension::StaticRegisterNativesUVisualLoggerExtension()
	{
	}
	UClass* Z_Construct_UClass_UVisualLoggerExtension_NoRegister()
	{
		return UVisualLoggerExtension::StaticClass();
	}
	UClass* Z_Construct_UClass_UVisualLoggerExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VisualLoggerExtension.h" },
				{ "ModuleRelativePath", "Classes/VisualLoggerExtension.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVisualLoggerExtension>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVisualLoggerExtension::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
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
	IMPLEMENT_CLASS(UVisualLoggerExtension, 3385831252);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerExtension(Z_Construct_UClass_UVisualLoggerExtension, &UVisualLoggerExtension::StaticClass, TEXT("/Script/AIModule"), TEXT("UVisualLoggerExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerExtension);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
