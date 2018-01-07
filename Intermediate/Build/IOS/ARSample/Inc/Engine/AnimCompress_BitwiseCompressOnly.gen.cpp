// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_BitwiseCompressOnly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_BitwiseCompressOnly::StaticRegisterNativesUAnimCompress_BitwiseCompressOnly()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister()
	{
		return UAnimCompress_BitwiseCompressOnly::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly()
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
				{ "IncludePath", "Animation/AnimCompress_BitwiseCompressOnly.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_BitwiseCompressOnly.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_BitwiseCompressOnly>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_BitwiseCompressOnly::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UAnimCompress_BitwiseCompressOnly, 2952233335);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_BitwiseCompressOnly(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly, &UAnimCompress_BitwiseCompressOnly::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_BitwiseCompressOnly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_BitwiseCompressOnly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
