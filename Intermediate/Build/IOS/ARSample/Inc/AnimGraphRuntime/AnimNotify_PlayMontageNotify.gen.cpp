// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayMontageNotify() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
// End Cross Module References
	void UAnimNotify_PlayMontageNotify::StaticRegisterNativesUAnimNotify_PlayMontageNotify()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister()
	{
		return UAnimNotify_PlayMontageNotify::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotify,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Montage Notify" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ToolTip", "UAnimNotify_PlayMontageNotify" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[] = {
				{ "Category", "Notify" },
				{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ToolTip", "Name of notify that is passed to the PlayMontage K2Node." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayMontageNotify, NotifyName), METADATA_PARAMS(NewProp_NotifyName_MetaData, ARRAY_COUNT(NewProp_NotifyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify_PlayMontageNotify>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify_PlayMontageNotify::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00093080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayMontageNotify, 3564686667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayMontageNotify(Z_Construct_UClass_UAnimNotify_PlayMontageNotify, &UAnimNotify_PlayMontageNotify::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimNotify_PlayMontageNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotify);
	void UAnimNotify_PlayMontageNotifyWindow::StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister()
	{
		return UAnimNotify_PlayMontageNotifyWindow::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Montage Notify Window" },
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ToolTip", "UAnimNotify_PlayMontageNotifyWindow" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[] = {
				{ "Category", "Notify" },
				{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
				{ "ToolTip", "Name of notify that is passed to ability." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName = { UE4CodeGen_Private::EPropertyClass::Name, "NotifyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UAnimNotify_PlayMontageNotifyWindow, NotifyName), METADATA_PARAMS(NewProp_NotifyName_MetaData, ARRAY_COUNT(NewProp_NotifyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NotifyName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimNotify_PlayMontageNotifyWindow>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimNotify_PlayMontageNotifyWindow::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00093080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayMontageNotifyWindow, 3179330894);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayMontageNotifyWindow(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow, &UAnimNotify_PlayMontageNotifyWindow::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimNotify_PlayMontageNotifyWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotifyWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
