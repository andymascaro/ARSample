// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackSlomo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackSlomo::StaticRegisterNativesUInterpTrackSlomo()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister()
	{
		return UInterpTrackSlomo::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackSlomo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Slomo Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackSlomo.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSlomo.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackSlomo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackSlomo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UInterpTrackSlomo, 3926486866);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackSlomo(Z_Construct_UClass_UInterpTrackSlomo, &UInterpTrackSlomo::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackSlomo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSlomo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
