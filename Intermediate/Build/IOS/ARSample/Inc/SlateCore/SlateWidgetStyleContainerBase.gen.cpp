// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Styling/SlateWidgetStyleContainerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerBase() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
// End Cross Module References
	void USlateWidgetStyleContainerBase::StaticRegisterNativesUSlateWidgetStyleContainerBase()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister()
	{
		return USlateWidgetStyleContainerBase::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Styling/SlateWidgetStyleContainerBase.h" },
				{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerBase.h" },
				{ "ToolTip", "Just a wrapper for the struct with real data in it." },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister, (int32)VTABLE_OFFSET(USlateWidgetStyleContainerBase, ISlateWidgetStyleContainerInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateWidgetStyleContainerBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateWidgetStyleContainerBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateWidgetStyleContainerBase, 1474458370);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleContainerBase(Z_Construct_UClass_USlateWidgetStyleContainerBase, &USlateWidgetStyleContainerBase::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleContainerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
