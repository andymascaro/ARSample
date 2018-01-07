// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SlateSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSettings() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_USlateSettings_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_USlateSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void USlateSettings::StaticRegisterNativesUSlateSettings()
	{
	}
	UClass* Z_Construct_UClass_USlateSettings_NoRegister()
	{
		return USlateSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Slate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Slate" },
				{ "IncludePath", "SlateSettings.h" },
				{ "ModuleRelativePath", "Public/SlateSettings.h" },
				{ "ToolTip", "Settings that control Slate functionality" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplicitCanvasChildZOrder_MetaData[] = {
				{ "Category", "ConstraintCanvas" },
				{ "ModuleRelativePath", "Public/SlateSettings.h" },
				{ "ToolTip", "Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order.\nRecommendation: Enable for mobile platforms." },
			};
#endif
			auto NewProp_bExplicitCanvasChildZOrder_SetBit = [](void* Obj){ ((USlateSettings*)Obj)->bExplicitCanvasChildZOrder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplicitCanvasChildZOrder = { UE4CodeGen_Private::EPropertyClass::Bool, "bExplicitCanvasChildZOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USlateSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bExplicitCanvasChildZOrder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bExplicitCanvasChildZOrder_MetaData, ARRAY_COUNT(NewProp_bExplicitCanvasChildZOrder_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bExplicitCanvasChildZOrder,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateSettings, 86175774);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateSettings(Z_Construct_UClass_USlateSettings, &USlateSettings::StaticClass, TEXT("/Script/Slate"), TEXT("USlateSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
