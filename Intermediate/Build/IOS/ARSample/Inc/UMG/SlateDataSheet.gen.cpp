// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Slate/SlateDataSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateDataSheet() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USlateDataSheet_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateDataSheet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void USlateDataSheet::StaticRegisterNativesUSlateDataSheet()
	{
	}
	UClass* Z_Construct_UClass_USlateDataSheet_NoRegister()
	{
		return USlateDataSheet::StaticClass();
	}
	UClass* Z_Construct_UClass_USlateDataSheet()
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
				{ "IncludePath", "Slate/SlateDataSheet.h" },
				{ "ModuleRelativePath", "Public/Slate/SlateDataSheet.h" },
				{ "ToolTip", "A texture used for communicating data to the GPU.\nUsed in combination with SlateVectorArtData and SlateVectorArtInstanceData to\npass data to UI materials." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTexture_MetaData[] = {
				{ "ModuleRelativePath", "Public/Slate/SlateDataSheet.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTexture = { UE4CodeGen_Private::EPropertyClass::Object, "DataTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(USlateDataSheet, DataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_DataTexture_MetaData, ARRAY_COUNT(NewProp_DataTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataTexture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USlateDataSheet>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USlateDataSheet::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(USlateDataSheet, 632718936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateDataSheet(Z_Construct_UClass_USlateDataSheet, &USlateDataSheet::StaticClass, TEXT("/Script/UMG"), TEXT("USlateDataSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateDataSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
