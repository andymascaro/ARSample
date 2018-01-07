// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/InputVectorAxisDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputVectorAxisDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInputVectorAxisDelegateBinding::StaticRegisterNativesUInputVectorAxisDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding_NoRegister()
	{
		return UInputVectorAxisDelegateBinding::StaticClass();
	}
	UClass* Z_Construct_UClass_UInputVectorAxisDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInputAxisKeyDelegateBinding,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/InputVectorAxisDelegateBinding.h" },
				{ "ModuleRelativePath", "Classes/Engine/InputVectorAxisDelegateBinding.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInputVectorAxisDelegateBinding>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInputVectorAxisDelegateBinding::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UInputVectorAxisDelegateBinding, 4082980919);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputVectorAxisDelegateBinding(Z_Construct_UClass_UInputVectorAxisDelegateBinding, &UInputVectorAxisDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputVectorAxisDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputVectorAxisDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
