// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/SafeZoneSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
// End Cross Module References
	void USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot()
	{
	}
	UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister()
	{
		return USafeZoneSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_USafeZoneSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/SafeZoneSlot.h" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USafeZoneSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Padding_MetaData, ARRAY_COUNT(NewProp_Padding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VAlign = { UE4CodeGen_Private::EPropertyClass::Byte, "VAlign", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USafeZoneSlot, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(NewProp_VAlign_MetaData, ARRAY_COUNT(NewProp_VAlign_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HAlign = { UE4CodeGen_Private::EPropertyClass::Byte, "HAlign", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USafeZoneSlot, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(NewProp_HAlign_MetaData, ARRAY_COUNT(NewProp_HAlign_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeAreaScale_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafeAreaScale = { UE4CodeGen_Private::EPropertyClass::Struct, "SafeAreaScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USafeZoneSlot, SafeAreaScale), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_SafeAreaScale_MetaData, ARRAY_COUNT(NewProp_SafeAreaScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTitleSafe_MetaData[] = {
				{ "Category", "SafeZone" },
				{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
			};
#endif
			auto NewProp_bIsTitleSafe_SetBit = [](void* Obj){ ((USafeZoneSlot*)Obj)->bIsTitleSafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTitleSafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTitleSafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USafeZoneSlot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTitleSafe_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTitleSafe_MetaData, ARRAY_COUNT(NewProp_bIsTitleSafe_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Padding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VAlign,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HAlign,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SafeAreaScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTitleSafe,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USafeZoneSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USafeZoneSlot::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A00080u,
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
	IMPLEMENT_CLASS(USafeZoneSlot, 3783542900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeZoneSlot(Z_Construct_UClass_USafeZoneSlot, &USafeZoneSlot::StaticClass, TEXT("/Script/UMG"), TEXT("USafeZoneSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
