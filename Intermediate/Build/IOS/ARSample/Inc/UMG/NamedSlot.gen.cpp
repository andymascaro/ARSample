// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/NamedSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlot::StaticRegisterNativesUNamedSlot()
	{
	}
	UClass* Z_Construct_UClass_UNamedSlot_NoRegister()
	{
		return UNamedSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UNamedSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/NamedSlot.h" },
				{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
				{ "ToolTip", "Allows you to expose an external slot for your user widget.  When others reuse your user control,\nthey can put whatever they want in this named slot." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNamedSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNamedSlot::StaticClass,
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
	IMPLEMENT_CLASS(UNamedSlot, 730925399);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNamedSlot(Z_Construct_UClass_UNamedSlot, &UNamedSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UNamedSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
