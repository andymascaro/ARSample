// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpGroupDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupDirector::StaticRegisterNativesUInterpGroupDirector()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister()
	{
		return UInterpGroupDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpGroupDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpGroup,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Matinee/InterpGroupDirector.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupDirector.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpGroupDirector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpGroupDirector::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UInterpGroupDirector, 3923752629);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupDirector(Z_Construct_UClass_UInterpGroupDirector, &UInterpGroupDirector::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
