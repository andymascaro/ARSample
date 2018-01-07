// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
// End Cross Module References
	void UAnimCompress::StaticRegisterNativesUAnimCompress()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_NoRegister()
	{
		return UAnimCompress::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimCompress.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Max error for compression of curves using remove redundant keys" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError = { UE4CodeGen_Private::EPropertyClass::Float, "MaxCurveError", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress, MaxCurveError), METADATA_PARAMS(NewProp_MaxCurveError_MetaData, ARRAY_COUNT(NewProp_MaxCurveError_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCompressionFormat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Format for bitwise compression of scale data." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleCompressionFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "ScaleCompressionFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimCompress, ScaleCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(NewProp_ScaleCompressionFormat_MetaData, ARRAY_COUNT(NewProp_ScaleCompressionFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Format for bitwise compression of rotation data." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "RotationCompressionFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimCompress, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(NewProp_RotationCompressionFormat_MetaData, ARRAY_COUNT(NewProp_RotationCompressionFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Format for bitwise compression of translation data." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslationCompressionFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimCompress, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(NewProp_TranslationCompressionFormat_MetaData, ARRAY_COUNT(NewProp_TranslationCompressionFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsSkeleton_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Compression algorithms requiring a skeleton should set this value to true." },
			};
#endif
			auto NewProp_bNeedsSkeleton_SetBit = [](void* Obj){ ((UAnimCompress*)Obj)->bNeedsSkeleton = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsSkeleton = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedsSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAnimCompress), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNeedsSkeleton_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNeedsSkeleton_MetaData, ARRAY_COUNT(NewProp_bNeedsSkeleton_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "Compression" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
				{ "ToolTip", "Name of Compression Scheme used for this asset" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UAnimCompress, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCurveError,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleCompressionFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationCompressionFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslationCompressionFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNeedsSkeleton,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081081u,
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
	IMPLEMENT_CLASS(UAnimCompress, 1472064922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress(Z_Construct_UClass_UAnimCompress, &UAnimCompress::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
