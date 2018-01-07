// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/NativeWidgetHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeWidgetHost() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNativeWidgetHost::StaticRegisterNativesUNativeWidgetHost()
	{
	}
	UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister()
	{
		return UNativeWidgetHost::StaticClass();
	}
	UClass* Z_Construct_UClass_UNativeWidgetHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/NativeWidgetHost.h" },
				{ "ModuleRelativePath", "Public/Components/NativeWidgetHost.h" },
				{ "ToolTip", "A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\nbe used when all you need is to nest a native widget inside a UMG widget." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNativeWidgetHost>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNativeWidgetHost::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UNativeWidgetHost, 482346192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNativeWidgetHost(Z_Construct_UClass_UNativeWidgetHost, &UNativeWidgetHost::StaticClass, TEXT("/Script/UMG"), TEXT("UNativeWidgetHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeWidgetHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
