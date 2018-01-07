// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AimOffsetBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister()
	{
		return UAimOffsetBlendSpace::StaticClass();
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlendSpace,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Animation/AimOffsetBlendSpace.h" },
				{ "ModuleRelativePath", "Classes/Animation/AimOffsetBlendSpace.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAimOffsetBlendSpace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAimOffsetBlendSpace::StaticClass,
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
	IMPLEMENT_CLASS(UAimOffsetBlendSpace, 1915499374);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetBlendSpace(Z_Construct_UClass_UAimOffsetBlendSpace, &UAimOffsetBlendSpace::StaticClass, TEXT("/Script/Engine"), TEXT("UAimOffsetBlendSpace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
