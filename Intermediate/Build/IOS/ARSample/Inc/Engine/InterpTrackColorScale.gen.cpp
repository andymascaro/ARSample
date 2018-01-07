// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackColorScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackColorScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackColorScale::StaticRegisterNativesUInterpTrackColorScale()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister()
	{
		return UInterpTrackColorScale::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackColorScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Color Scale Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackColorScale.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackColorScale.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackColorScale>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackColorScale::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackColorScale, 1619736956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackColorScale(Z_Construct_UClass_UInterpTrackColorScale, &UInterpTrackColorScale::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackColorScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackColorScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
