// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimCompress_LeastDestructive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister()
	{
		return UAnimCompress_LeastDestructive::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive()
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
				{ "IncludePath", "Animation/AnimCompress_LeastDestructive.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimCompress_LeastDestructive.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimCompress_LeastDestructive>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimCompress_LeastDestructive::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00001080u,
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
	IMPLEMENT_CLASS(UAnimCompress_LeastDestructive, 2028828740);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_LeastDestructive(Z_Construct_UClass_UAnimCompress_LeastDestructive, &UAnimCompress_LeastDestructive::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_LeastDestructive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_LeastDestructive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
