// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/Visual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisual() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UVisual_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVisual();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UVisual::StaticRegisterNativesUVisual()
	{
	}
	UClass* Z_Construct_UClass_UVisual_NoRegister()
	{
		return UVisual::StaticClass();
	}
	UClass* Z_Construct_UClass_UVisual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/Visual.h" },
				{ "ModuleRelativePath", "Public/Components/Visual.h" },
				{ "ToolTip", "The base class for elements in UMG: slots and widgets." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVisual>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVisual::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00300080u,
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
	IMPLEMENT_CLASS(UVisual, 4237548410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisual(Z_Construct_UClass_UVisual, &UVisual::StaticClass, TEXT("/Script/UMG"), TEXT("UVisual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
