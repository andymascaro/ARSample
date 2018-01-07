// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_RemoveTrivialKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister()
	{
		return UAnimCompress_RemoveTrivialKeys::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompress,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/AnimCompress_RemoveTrivialKeys.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScaleDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxScaleDiff), METADATA_PARAMS(NewProp_MaxScaleDiff_MetaData, ARRAY_COUNT(NewProp_MaxScaleDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngleDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxAngleDiff), METADATA_PARAMS(NewProp_MaxAngleDiff_MetaData, ARRAY_COUNT(NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[] = {
				{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPosDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxPosDiff), METADATA_PARAMS(NewProp_MaxPosDiff_MetaData, ARRAY_COUNT(NewProp_MaxPosDiff_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScaleDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAngleDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxPosDiff,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_RemoveTrivialKeys>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_RemoveTrivialKeys::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UAnimCompress_RemoveTrivialKeys, 2521498191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveTrivialKeys(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys, &UAnimCompress_RemoveTrivialKeys::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveTrivialKeys"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveTrivialKeys);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
