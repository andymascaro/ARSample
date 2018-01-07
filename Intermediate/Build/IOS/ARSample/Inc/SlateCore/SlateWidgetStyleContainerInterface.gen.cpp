// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateWidgetStyleContainerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerInterface() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void USlateWidgetStyleContainerInterface::StaticRegisterNativesUSlateWidgetStyleContainerInterface()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister()
	{
		return USlateWidgetStyleContainerInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ISlateWidgetStyleContainerInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateWidgetStyleContainerInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(USlateWidgetStyleContainerInterface, 2654621773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleContainerInterface(Z_Construct_UClass_USlateWidgetStyleContainerInterface, &USlateWidgetStyleContainerInterface::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleContainerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
