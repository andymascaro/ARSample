// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AimOffsetBlendSpace1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace1D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAimOffsetBlendSpace1D::StaticRegisterNativesUAimOffsetBlendSpace1D()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D_NoRegister()
	{
		return UAimOffsetBlendSpace1D::StaticClass();
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace1D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlendSpace1D,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Animation/AimOffsetBlendSpace1D.h" },
				{ "ModuleRelativePath", "Classes/Animation/AimOffsetBlendSpace1D.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAimOffsetBlendSpace1D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAimOffsetBlendSpace1D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimOffsetBlendSpace1D, 3370824885);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetBlendSpace1D(Z_Construct_UClass_UAimOffsetBlendSpace1D, &UAimOffsetBlendSpace1D::StaticClass, TEXT("/Script/Engine"), TEXT("UAimOffsetBlendSpace1D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpace1D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
